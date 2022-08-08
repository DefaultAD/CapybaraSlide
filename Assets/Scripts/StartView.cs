// DecompilerFi decompiler from Assembly-CSharp.dll class: StartView
using UnityEngine;
using UnityEngine.UI;

public class StartView : ViewBehaviour
{
	[SerializeField]
	private Text totalPointsText;

	private void OnEnable()
	{
		UpdateView();
	}

	protected override void UpdateView()
	{
		totalPointsText.text = ControllerBehaviour<ScoreController>.Instance.TotalPoints.ToString();
	}

	public void ForceUpdateView()
	{
		UpdateView();
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start && ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.None &&  UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Exit);
		}
	}
}
