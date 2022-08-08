// DecompilerFi decompiler from Assembly-CSharp.dll class: SettingsView
using UnityEngine;

public class SettingsView : ViewBehaviour
{
	private void OnEnable()
	{
		UpdateView();
	}

	protected override void UpdateView()
	{
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start && ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.Settings && UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
		}
	}
}
