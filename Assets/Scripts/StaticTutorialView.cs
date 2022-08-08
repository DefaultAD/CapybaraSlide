// DecompilerFi decompiler from Assembly-CSharp.dll class: StaticTutorialView
using UnityEngine;

public class StaticTutorialView : ViewBehaviour
{
	private void OnEnable()
	{
		UpdateView();
	}

	private void OnDisable()
	{
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start && UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			HideView();
		}
	}

	public void HideView()
	{
		ControllerBehaviour<ViewController>.Instance.HidePopupView();
	}

	protected override void UpdateView()
	{
	}
}
