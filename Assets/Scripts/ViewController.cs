// DecompilerFi decompiler from Assembly-CSharp.dll class: ViewController
using HyperCasual.PsdkSupport;
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ViewController : ControllerBehaviour<ViewController>
{
	[Header("References")]
	[SerializeField]
	private List<ViewReference> viewReferences = new List<ViewReference>();

	[SerializeField]
	private List<PopupViewReference> popupViewReferences = new List<PopupViewReference>();

	private Dictionary<ViewState, ViewBehaviour> views = new Dictionary<ViewState, ViewBehaviour>();

	private Dictionary<PopupViewState, ViewBehaviour> popupViews = new Dictionary<PopupViewState, ViewBehaviour>();

	public ViewState CurrentViewState
	{
		get;
		private set;
	}

	public PopupViewState CurrentPopupViewState
	{
		get;
		private set;
	} = PopupViewState.None;


	protected override void Awake()
	{
		base.Awake();
		views = viewReferences.ToDictionary((ViewReference x) => x.ViewState, (ViewReference y) => y.View);
		popupViews = popupViewReferences.ToDictionary((PopupViewReference x) => x.ViewState, (PopupViewReference y) => y.View);
		HideViews();
	}

	public override void Initialize()
	{
		throw new NotImplementedException();
	}

	public override void Enable()
	{
		throw new NotImplementedException();
	}

	public override void Disable()
	{
		throw new NotImplementedException();
	}

	public void SwitchView(ViewState viewState)
	{
		views[CurrentViewState].Disable();
		views[viewState].Enable();
		CurrentViewState = viewState;
		if (viewState == ViewState.Start)
		{
			ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: true);
		}
		else
		{
			ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: false);
		}
	}

	public void ShowPopupView(PopupViewState viewState)
	{
		popupViews[viewState].Enable();
		CurrentPopupViewState = viewState;
		if (SingletonBehaviour<GameController>.Instance.GameState != 0 && CurrentPopupViewState != PopupViewState.None)
		{
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UIClick);
		}
	}

	public void HideViews()
	{
		foreach (ViewBehaviour value in views.Values)
		{
			if (value.IsActive)
			{
				value.Disable(isInstant: true);
			}
		}
	}

	public void HidePopupView()
	{

		
			foreach (ViewBehaviour value in popupViews.Values)
			{
				value.Disable();
			}
			if (CurrentPopupViewState != PopupViewState.None && CurrentPopupViewState != PopupViewState.Pause && CurrentPopupViewState != PopupViewState.Debug)
			{
				SingletonBehaviour<GameController>.Instance.SaveCurrentSettings();
			}
			if (SingletonBehaviour<GameController>.Instance.GameState != 0 && CurrentPopupViewState != PopupViewState.None)
			{
				SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UICancel);
			}
			CurrentPopupViewState = PopupViewState.None;
		
	}

	public void HidePopupView(PopupViewState hidePopupView, PopupViewState switchPopupState)
	{
		
			if (popupViews.ContainsKey(hidePopupView) && popupViews[hidePopupView].IsActive)
			{
				popupViews[hidePopupView].Disable();
			}
			if (CurrentPopupViewState != PopupViewState.None && CurrentPopupViewState != PopupViewState.Pause && CurrentPopupViewState != PopupViewState.Debug)
			{
				SingletonBehaviour<GameController>.Instance.SaveCurrentSettings();
			}
			if (SingletonBehaviour<GameController>.Instance.GameState != 0 && CurrentPopupViewState != PopupViewState.None)
			{
				SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UICancel);
			}
			CurrentPopupViewState = switchPopupState;
		
	}

	public bool IsPopupViewActive(PopupViewState popupViewState)
	{
		bool result = false;
		if (popupViews.ContainsKey(popupViewState) && popupViews[popupViewState].IsActive && !popupViews[popupViewState].IsFadingOut)
		{
			result = true;
		}
		return result;
	}

	
}
