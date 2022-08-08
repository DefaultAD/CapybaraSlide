// DecompilerFi decompiler from Assembly-CSharp.dll class: RateUsView
using SlipperySlides.Logging;
using UnityEngine;

public class RateUsView : ViewBehaviour
{
	private void OnEnable()
	{
		UpdateView();
	}

	private void Update()
	{
		if ((ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.RateUs || ControllerBehaviour<ViewController>.Instance.IsPopupViewActive(PopupViewState.RateUs)) && (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start || SingletonBehaviour<GameController>.Instance.GameState == GameState.Score) && UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			BackButtonClicked();
		}
	}

	protected override void UpdateView()
	{
	}

	public void BackButtonClicked()
	{
		ControllerBehaviour<ViewController>.Instance.HidePopupView(PopupViewState.RateUs, PopupViewState.DoublePoints);
		SendDeltaEvent.PopUp("rateUs", "back button", "rate us", "initiated");
	}

	public void ShowRateUsLater()
	{
		ControllerBehaviour<ViewController>.Instance.HidePopupView(PopupViewState.RateUs, PopupViewState.DoublePoints);
		SendDeltaEvent.PopUp("rateUs", "later", "rate us", "initiated");
	}

	public void NeverShowRateUs()
	{
		SaveController.SetNeverShowRateUs();
		ControllerBehaviour<ViewController>.Instance.HidePopupView(PopupViewState.RateUs, PopupViewState.DoublePoints);
		SendDeltaEvent.PopUp("rateUs", "never", "rate us", "initiated");
	}
}
