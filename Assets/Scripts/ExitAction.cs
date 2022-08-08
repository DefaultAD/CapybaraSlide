// DecompilerFi decompiler from Assembly-CSharp.dll class: ExitAction
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class ExitAction : MonoBehaviour
{
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

	public void ExitGame()
	{
		Application.Quit();
	}
}
