// DecompilerFi decompiler from Assembly-CSharp.dll class: RaceView
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class RaceView : ViewBehaviour
{
	[SerializeField]
	private Text pointsText;

	[SerializeField]
	private Text earnedPointsText;

	[SerializeField]
	private Animator earnedPointsAnimator;

	private readonly string earnedPointsPrefix = "+";

	private readonly float updateViewDelay = 0.3f;

	private Coroutine updateViewCoroutine;

	private void OnEnable()
	{
		if (updateViewCoroutine != null)
		{
			StopCoroutine(updateViewCoroutine);
		}
		updateViewCoroutine = StartCoroutine(UpdateViewCoroutine());
	}

	private void OnDisable()
	{
		if (updateViewCoroutine != null)
		{
			StopCoroutine(updateViewCoroutine);
		}
	}

	private IEnumerator UpdateViewCoroutine()
	{
		while (true)
		{
			yield return new WaitForSeconds(updateViewDelay);
			UpdateView();
		}
	}

	protected override void UpdateView()
	{
		pointsText.text = ControllerBehaviour<ScoreController>.Instance.CurrentRacePoints.ToString();
	}

	public void ShowEearnedPoints(int points)
	{
		earnedPointsText.text = points.ToString() + earnedPointsPrefix;
		earnedPointsAnimator.SetTrigger("Show");
	}
}
