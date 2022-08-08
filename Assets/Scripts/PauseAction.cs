// DecompilerFi decompiler from Assembly-CSharp.dll class: PauseAction
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class PauseAction : MonoBehaviour
{
	private readonly bool isBackButtonPauseEnabled = true;

	private readonly bool isEditorPauseEnabled = true;

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Race && ((isEditorPauseEnabled && Application.isEditor) || isBackButtonPauseEnabled) && UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			TogglePause();
		}
	}

	public void TogglePause()
	{
		if (SingletonBehaviour<GameController>.Instance.IsGamePaused())
		{
			SingletonBehaviour<GameController>.Instance.UnpauseGame();
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
		}
		else
		{
			SingletonBehaviour<GameController>.Instance.PauseGame();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Pause);
		}
	}
}
