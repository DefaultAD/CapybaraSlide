// DecompilerFi decompiler from Assembly-CSharp.dll class: ScoreView
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class ScoreView : ViewBehaviour
{
	[Header("References")]
	[SerializeField]
	private Text resultText;

	[SerializeField]
	private Text tipText;

	[SerializeField]
	private List<UIParticleSystem> uiParticleSystems = new List<UIParticleSystem>();

	[SerializeField]
	private Image[] positionImages;

	[SerializeField]
	private ViewBehaviour raceProgressView;

	[SerializeField]
	private LeaderBoardElement[] leaderBoardElements;

	[Header("Placement sprites")]
	[SerializeField]
	private Sprite FirstPlaceGoldenBackgroundSprite;

	[SerializeField]
	private Sprite FirstPlaceGoldenPlacementSprite;

	[SerializeField]
	private Sprite SecondPlaceGoldenBackgroundSprite;

	[SerializeField]
	private Sprite SecondPlaceGoldenPlacementSprite;

	[SerializeField]
	private Sprite ThirdPlaceGoldenBackgroundSprite;

	[SerializeField]
	private Sprite ThirdPlaceGoldenPlacementSprite;

	[SerializeField]
	private Sprite GoldenBackgroundSprite;

	[SerializeField]
	private Sprite GoldenPlacementSprite;

	[Header("Settings")]
	[SerializeField]
	private Sprite goldPodiumSprite;

	[SerializeField]
	private Sprite silverPodiumSprite;

	[SerializeField]
	private Sprite bronzePodiumSprite;

	private readonly float scoreEffectDelay = 0.5f;

	private readonly float doublePopupDelay = 2.1f;

	private readonly float leaderboardMultiplyDelay = 0.4f;

	private readonly float leaderboardMultiplySpeed = 0.75f;

	private readonly string[] tips = new string[3]
	{
		"Reach 1st place to unlock a new level",
		"Avoid bumping into players",
		"Use speed boosters to get advantage"
	};

	private readonly string finishedText = "Finished";

	private readonly string newLevelUnlockedText = "New level unlocked!";

	private readonly string newLevelsComingText = "Expect more levels soon!";

	private readonly int defaultFontSize = 96;

	private readonly int smallFontSize = 80;

	private string[] characterNamesInOrder;

	private Coroutine doublePopupCoroutine;

	private bool isMultiplyNumbersStarted;

	private void OnEnable()
	{
		CharacterController instance = ControllerBehaviour<CharacterController>.Instance;
		characterNamesInOrder = (from x in instance.MovementsInSavedOrder
			select x.GetComponent<Opponent>() into x
			select (!(x == null)) ? x.Name : "You").ToArray();
		raceProgressView.Disable();
		doublePopupCoroutine = StartCoroutine(ShowDoublePopupDelayed());
		UpdateView();
		if (!isMultiplyNumbersStarted)
		{
			StartCoroutine(MultiplyNumbersWithDelay());
			isMultiplyNumbersStarted = true;
		}
	}

	private void Update()
	{
		if (Input.GetMouseButtonDown(0) && ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState != PopupViewState.DoublePoints)
		{
			StopCoroutine(doublePopupCoroutine);
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.DoublePoints);
		}
	}

	protected override void UpdateView()
	{
		int num = ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount % tips.Length;
		if (num >= tips.Length)
		{
			num = 0;
		}
		tipText.text = $"TIP:\n{tips[num]}";
		bool flag = ControllerBehaviour<ScoreController>.Instance.CurrentRacePosition == 1;
		int currentRacePosition = ControllerBehaviour<ScoreController>.Instance.CurrentRacePosition;
		if (flag)
		{
			if (ControllerBehaviour<ScoreController>.Instance.IsTotalTrackLevelMax)
			{
				resultText.text = newLevelsComingText;
				resultText.fontSize = smallFontSize;
			}
			else
			{
				resultText.text = newLevelUnlockedText;
				resultText.fontSize = defaultFontSize;
			}
			StartCoroutine(PlayEffectDelayed(SoundType.RaceVictory, isVictory: true));
		}
		else
		{
			resultText.text = finishedText;
			resultText.fontSize = defaultFontSize;
			StartCoroutine(PlayEffectDelayed(SoundType.RaceOver, isVictory: false));
		}
		int num2 = Array.IndexOf(ControllerBehaviour<CharacterController>.Instance.MovementsInSavedOrder, ControllerBehaviour<PlayerController>.Instance.Movement);
		int nonMultipliedRacePoints = ControllerBehaviour<ScoreController>.Instance.NonMultipliedRacePoints;
		for (int i = 0; i < leaderBoardElements.Length; i++)
		{
			string text = characterNamesInOrder[i];
			float num3 = 0.05f * (float)Mathf.Abs(i - num2);
			num3 = 1f - Mathf.Sign(i - num2) * num3;
			if (i == num2)
			{
				switch (i)
				{
				case 0:
					leaderBoardElements[i].BackgroundImages[0].sprite = FirstPlaceGoldenPlacementSprite;
					leaderBoardElements[i].BackgroundImages[1].sprite = FirstPlaceGoldenBackgroundSprite;
					break;
				case 1:
					leaderBoardElements[i].BackgroundImages[0].sprite = SecondPlaceGoldenPlacementSprite;
					leaderBoardElements[i].BackgroundImages[1].sprite = SecondPlaceGoldenBackgroundSprite;
					break;
				case 2:
					leaderBoardElements[i].BackgroundImages[0].sprite = ThirdPlaceGoldenPlacementSprite;
					leaderBoardElements[i].BackgroundImages[1].sprite = ThirdPlaceGoldenBackgroundSprite;
					break;
				default:
					leaderBoardElements[i].BackgroundImages[0].sprite = GoldenPlacementSprite;
					leaderBoardElements[i].BackgroundImages[1].sprite = GoldenBackgroundSprite;
					break;
				}
				leaderBoardElements[i].NameText.color = Color.black;
				leaderBoardElements[i].ScoreText.color = Color.black;
				leaderBoardElements[i].PositionText.color = Color.black;
				leaderBoardElements[i].ScoreText.text = nonMultipliedRacePoints.ToString();
				leaderBoardElements[i].ScoreAmount = nonMultipliedRacePoints;
				leaderBoardElements[i].MultipliedScoreAmount = nonMultipliedRacePoints * ControllerBehaviour<ScoreController>.Instance.GetMultiplierForPosition(i + 1);
			}
			else
			{
				leaderBoardElements[i].ScoreText.text = ((int)((float)nonMultipliedRacePoints * num3)).ToString();
				leaderBoardElements[i].ScoreAmount = (int)((float)nonMultipliedRacePoints * num3);
				leaderBoardElements[i].MultipliedScoreAmount = (int)((float)nonMultipliedRacePoints * num3) * ControllerBehaviour<ScoreController>.Instance.GetMultiplierForPosition(i + 1);
			}
			leaderBoardElements[i].NameText.text = text;
		}
	}

	private IEnumerator MultiplyNumbersWithDelay()
	{
		yield return new WaitForSeconds(leaderboardMultiplyDelay);
		float transition = 0f;
		while (transition < 1f - Mathf.Epsilon)
		{
			transition = Mathf.Clamp(transition + Time.deltaTime * leaderboardMultiplySpeed, 0f, 1f);
			for (int i = 0; i < 3; i++)
			{
				int num = Mathf.RoundToInt(Mathf.Lerp(leaderBoardElements[i].ScoreAmount, leaderBoardElements[i].MultipliedScoreAmount, transition));
				leaderBoardElements[i].ScoreText.text = num.ToString();
			}
			yield return null;
		}
	}

	private IEnumerator PlayEffectDelayed(SoundType soundType, bool isVictory)
	{
		yield return new WaitForSeconds(scoreEffectDelay);
		if (isVictory)
		{
			foreach (UIParticleSystem uiParticleSystem in uiParticleSystems)
			{
				uiParticleSystem.EmitContinuous();
			}
		}
		SingletonBehaviour<AudioController>.Instance.PlaySound(soundType);
	}

	private IEnumerator ShowDoublePopupDelayed()
	{
		yield return new WaitForSeconds(doublePopupDelay);
		ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.DoublePoints);
	}
}
