// DecompilerFi decompiler from Assembly-CSharp.dll class: RaceProgressView
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class RaceProgressView : ViewBehaviour
{
	[SerializeField]
	private Image progressFill;

	[SerializeField]
	private Text trackNumber;

	[SerializeField]
	private Text positionText;

	[SerializeField]
	private Animator positionAnimator;

	private int lastRacePosition;

	private bool isInitialized;

	private Coroutine updateViewCoroutine;

	private readonly string increaseAnimatorTrigger = "Increase";

	private readonly string decreaseAnimatorTrigger = "Decrease";

	private readonly float updateViewDelay = 0.3f;

	private void OnEnable()
	{
		if (!isInitialized)
		{
			lastRacePosition = ControllerBehaviour<ScoreController>.Instance.CurrentRacePosition;
			trackNumber.text = ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel.ToString();
			UpdateView();
			isInitialized = true;
		}
		if (updateViewCoroutine != null)
		{
			StopCoroutine(updateViewCoroutine);
		}
		updateViewCoroutine = StartCoroutine(UpdateViewCoroutine());
	}

	private void OnDisable()
	{
		isInitialized = false;
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
		if (SingletonBehaviour<GameController>.Instance.GameState != GameState.Score)
		{
			int num = (!ControllerBehaviour<ScoreController>.Instance.IsRaceOver) ? ControllerBehaviour<CharacterController>.Instance.GetPlayerRacePosition() : ControllerBehaviour<ScoreController>.Instance.CurrentRacePosition;
			positionText.text = FormatUtility.Ordinal(num);
			if (num < lastRacePosition)
			{
				lastRacePosition = num;
				positionAnimator.ResetTrigger(decreaseAnimatorTrigger);
				positionAnimator.ResetTrigger(increaseAnimatorTrigger);
				positionAnimator.SetTrigger(increaseAnimatorTrigger);
			}
			else if (num > lastRacePosition)
			{
				lastRacePosition = num;
				positionAnimator.ResetTrigger(increaseAnimatorTrigger);
				positionAnimator.ResetTrigger(decreaseAnimatorTrigger);
				positionAnimator.SetTrigger(decreaseAnimatorTrigger);
			}
		}
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState != 0 && SingletonBehaviour<GameController>.Instance.GameState != GameState.Start && SingletonBehaviour<GameController>.Instance.GameState != GameState.Score)
		{
			progressFill.fillAmount = (float)ControllerBehaviour<PlayerController>.Instance.Movement.CurrentNodeIndex / (float)SingletonBehaviour<TrackController>.Instance.Track.Slide.Nodes.Length;
		}
	}

	public void ShowRacePosition(bool isVisible)
	{
		positionText.enabled = isVisible;
	}
}
