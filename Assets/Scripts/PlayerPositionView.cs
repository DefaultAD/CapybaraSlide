// DecompilerFi decompiler from Assembly-CSharp.dll class: PlayerPositionView
using UnityEngine;
using UnityEngine.UI;

public class PlayerPositionView : ViewBehaviour
{
	[SerializeField]
	private Transform canvasTransform;

	[SerializeField]
	private Text earnedPointsText;

	[SerializeField]
	private Animator earnedPointsAnimator;

	private readonly string earnedPointsPrefix = "+";

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	protected override void UpdateView()
	{
	}

	private void Update()
	{
		canvasTransform.LookAt(ControllerBehaviour<CameraController>.Instance.Camera.transform.position, ControllerBehaviour<CameraController>.Instance.Camera.transform.up);
	}

	public void ShowEearnedPoints(int points)
	{
		earnedPointsText.text = earnedPointsPrefix + points.ToString();
		earnedPointsAnimator.SetTrigger("Show");
	}
}
