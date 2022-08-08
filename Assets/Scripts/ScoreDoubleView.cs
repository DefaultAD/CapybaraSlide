// DecompilerFi decompiler from Assembly-CSharp.dll class: ScoreDoubleView
using MoreMountains.NiceVibrations;
using SlipperySlides.Logging;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class ScoreDoubleView : ViewBehaviour
{
	[SerializeField]
	private Text pointsText;

	[SerializeField]
	private Text totalPointsText;

	[SerializeField]
	private Button collectButton;

	[SerializeField]
	private Button doubleButton;

	[SerializeField]
	private UIParticleSystem pointsParticles;

	[SerializeField]
	private CollectPointsAction collectAction;

	private readonly float scoreDoubleDelay = 0.3f;

	private readonly float scoreDoubleSpeed = 0.9f;

	private readonly float collectPointsDelay = 2f;

	private int normalCollectAmount;

	private int doubleCollectAmount;

	private int initialTotalPoints;

	private bool isDoublePointsInitialized;

	public bool IsAnyCollectButtonPressed
	{
		get;
		private set;
	}

	public bool IsBackButtonPressed
	{
		get;
		private set;
	}

	private void OnEnable()
	{
		normalCollectAmount = ControllerBehaviour<ScoreController>.Instance.GetRacePoints(CollectType.Collect);
		doubleCollectAmount = ControllerBehaviour<ScoreController>.Instance.GetRacePoints(CollectType.Double);
		UpdateView();
		IsBackButtonPressed = false;
	}

	private void Update()
	{
		if (ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.DoublePoints && !ControllerBehaviour<ViewController>.Instance.IsPopupViewActive(PopupViewState.RateUs) && SingletonBehaviour<GameController>.Instance.GameState == GameState.Score && UnityEngine.Input.GetKeyDown(KeyCode.Escape) && !IsAnyCollectButtonPressed && !IsBackButtonPressed)
		{
			IsBackButtonPressed = true;
			SendDeltaEvent.PopUp("postLevel", "back button", "erned points popup", "initiated");
			collectAction.Collect();
		}
	}

	protected override void UpdateView()
	{
		initialTotalPoints = ControllerBehaviour<ScoreController>.Instance.TotalPoints;
		totalPointsText.text = initialTotalPoints.ToString();
		pointsText.text = normalCollectAmount.ToString();
	}

	private void DisableDoubleButton()
	{
		doubleButton.interactable = false;
		PulsingButtonAnimator component = doubleButton.GetComponent<PulsingButtonAnimator>();
		if (component != null)
		{
			component.StopPulsing();
		}
	}

	private IEnumerator DoublePointsCoroutine()
	{
		DisableDoubleButton();
		yield return new WaitForSeconds(scoreDoubleDelay);
		float transition = 0f;
		while (transition < 1f - Mathf.Epsilon)
		{
			transition = Mathf.Clamp(transition + Time.deltaTime * scoreDoubleSpeed, 0f, 1f);
			int newScoreAmount = Mathf.RoundToInt(Mathf.Lerp(normalCollectAmount, doubleCollectAmount, transition));
			pointsText.text = newScoreAmount.ToString();
			yield return null;
		}
		yield return null;
		CollectPoints(CollectType.Double);
	}

	public void OnDoublePoints()
	{
		if (!isDoublePointsInitialized)
		{
			StartCoroutine(DoublePointsCoroutine());
			isDoublePointsInitialized = true;
		}
	}

	internal void CollectPoints(CollectType collectType)
	{
		ControllerBehaviour<ScoreController>.Instance.CollectRacePoints(collectType);
		SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.Selection);
		StartCoroutine(CollectPointsWithDelay(collectType));
	}

	private IEnumerator CollectPointsWithDelay(CollectType collectType)
	{
		pointsParticles.Emit();
		StartCoroutine(IncreaseTotalPointsCoroutine(collectType));
		yield return new WaitForSeconds(collectPointsDelay);
		if (ControllerBehaviour<ScoreController>.Instance.CanShowIronTubePromotion && !ControllerBehaviour<ScoreController>.Instance.JustUnlockedDailySkin && !ControllerBehaviour<PlayerController>.Instance.IsIronTube() && !ControllerBehaviour<OpponentController>.Instance.IsFtueActive)
		{
			ControllerBehaviour<ViewController>.Instance.HideViews();
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.IronTube);
		}
		else if (!ControllerBehaviour<TaskController>.Instance.AllTasksPreviouslyCompleted())
		{
			ControllerBehaviour<ViewController>.Instance.HideViews();
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Tasks);
		}
		else
		{
			base.transform.GetComponentInChildren<GameStateAction>().SwitchGameState();
		}
	}

	private IEnumerator IncreaseTotalPointsCoroutine(CollectType collectType)
	{
		yield return new WaitForSeconds(scoreDoubleDelay);
		int addedPoints = (collectType != 0) ? doubleCollectAmount : normalCollectAmount;
		float transition = 0f;
		while (transition < 1f - Mathf.Epsilon)
		{
			transition = Mathf.Clamp(transition + Time.deltaTime * scoreDoubleSpeed, 0f, 1f);
			int newScoreAmount = Mathf.RoundToInt(Mathf.Lerp(initialTotalPoints, initialTotalPoints + addedPoints, transition));
			totalPointsText.text = newScoreAmount.ToString();
			yield return null;
		}
	}

	internal void SetCollectButtonPressed()
	{
		IsAnyCollectButtonPressed = true;
	}
}
