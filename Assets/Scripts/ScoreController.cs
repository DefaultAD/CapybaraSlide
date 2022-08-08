// DecompilerFi decompiler from Assembly-CSharp.dll class: ScoreController
using HyperCasual.PsdkSupport;
using SlipperySlides.Logging;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TabTale;
using Tabtale.GameEvents;
using UnityEngine;

public class ScoreController : ControllerBehaviour<ScoreController>
{
	public readonly int FirstPlaceMultiplier = 5;

	public readonly int SecondPlaceMultiplier = 3;

	public readonly int ThirdPlaceMultiplier = 2;

	[Header("References")]
	[SerializeField]
	private RaceProgressView raceProgressView;

	[SerializeField]
	private PlayerPositionView playerPositionView;

	[SerializeField]
	private RaceView raceView;

	[SerializeField]
	private StartView startView;

	[Header("Settings")]
	[SerializeField]
	private List<Point> pointsSetup = new List<Point>();

	[SerializeField]
	private List<Trophy> trophiesSetup = new List<Trophy>();

	[Header("Data")]
	[SerializeField]
	private SessionState sessionState;

	[SerializeField]
	private GameEventArg levelCompleted;

	[SerializeField]
	private GameEventArg levelFailed;

	private Dictionary<PointType, Point> pointsDictionary = new Dictionary<PointType, Point>();

	private Dictionary<TrophyType, Trophy> trophiesDictionary = new Dictionary<TrophyType, Trophy>();

	private bool isRacePointsEnabled;

	private int previousTotalTrackLevel;

	private float pointsMultiplier = 1f;

	private static int lostRaceAmount;

	private static int currentRaceAmount;

	private AdState _ad_state;

	private readonly int totalTrackLevelMax = 100;

	private readonly int difficultyLevelIncreaseRate = 3;

	private readonly int trackUnlockPositionLimit = 1;

	private readonly float scoreGameStateDelay = 0.9f;

	private readonly int ironTubePromotionLostRaceAmount = 3;

	private readonly bool isIronTubePromotionEnabled;

	public int TotalTrackLevel
	{
		get;
		private set;
	} = 1;


	public int TotalRaceAmount
	{
		get;
		private set;
	}

	public int TotalDifficultyLevel
	{
		get;
		private set;
	} = 1;


	public int TotalPoints
	{
		get;
		private set;
	}

	public int TotalTrophies
	{
		get;
		private set;
	}

	public int CurrentRacePosition
	{
		get;
		private set;
	}

	public int CurrentRacePoints
	{
		get;
		private set;
	}

	public int CurrentRaceTrophies
	{
		get;
		private set;
	}

	public int NonMultipliedRacePoints
	{
		get;
		private set;
	}

	public int CurrentRaceAmount => currentRaceAmount;

	public bool IsRaceOver
	{
		get;
		private set;
	}

	public bool IsTotalTrackLevelMax => previousTotalTrackLevel >= totalTrackLevelMax;

	public bool JustUnlockedDailySkin
	{
		get;
		private set;
	}

	public bool CanShowIronTubePromotion => isIronTubePromotionEnabled && lostRaceAmount >= ironTubePromotionLostRaceAmount && SaveController.GetAdsEnabled();

	private void Start()
	{
        pointsDictionary = pointsSetup.ToDictionary((Point x) => x.PointType, (Point y) => y);
		trophiesDictionary = trophiesSetup.ToDictionary((Trophy x) => x.TrophyType, (Trophy y) => y);
		TotalTrackLevel = Mathf.Clamp(SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel, 1, totalTrackLevelMax);
		TotalRaceAmount = Mathf.Max(SingletonBehaviour<GameController>.Instance.SaveSettings.TotalRaceAmount, 0);
		TotalDifficultyLevel = Mathf.CeilToInt((float)TotalTrackLevel / (float)difficultyLevelIncreaseRate);
		TotalTrophies = SaveController.GetTrophyCount();
		TotalPoints = SaveController.GetPointCount();
		previousTotalTrackLevel = TotalTrackLevel;
		UnityEngine.Debug.Log("ScoreController: TotalDifficultyLevel: " + TotalDifficultyLevel + " / TotalTrackLevel: " + TotalTrackLevel + " / TotalRaceAmount: " + TotalRaceAmount);
	}

	public override void Initialize()
	{
		Disable();
		CurrentRacePosition = ControllerBehaviour<OpponentController>.Instance.OpponentAmount + 1;
		CurrentRacePoints = 0;
		CurrentRaceTrophies = 0;
		NonMultipliedRacePoints = 0;
		IsRaceOver = false;
		raceProgressView.Enable();
	}

	public override void Enable()
	{
		isRacePointsEnabled = true;
		ShowRacePosition(isVisible: true);
		SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.RaceStart);
		if (!SingletonBehaviour<GameController>.Instance.GameSettings.ShowRaceUI)
		{
			raceProgressView.Disable();
			ControllerBehaviour<TutorialController>.Instance.Disable();
		}
	}

	public override void Disable()
	{
		isRacePointsEnabled = false;
		ShowRacePosition(isVisible: false);
	}

	public void SetPointsMultiplier(float multiplier)
	{
		pointsMultiplier = Mathf.Max(multiplier, 1f);
	}

	public void SetRaceOver()
	{
		if (ControllerBehaviour<PlayerController>.Instance.IsFinishLineReached())
		{
			CurrentRacePosition = ControllerBehaviour<CharacterController>.Instance.GetPlayerRacePosition();
			if (CurrentRacePosition <= trackUnlockPositionLimit)
			{
				levelCompleted.Raise(TotalTrackLevel);
				sessionState.isReload = false;
				SingletonBehaviour<GameController>.Instance.playerWonRace = true;
				IncreaseTotalTrackLevel();
			}
			else
			{
				levelFailed.Raise(TotalTrackLevel);
				sessionState.isReload = true;
			}
			IncreaseTotalRaceAmount();
			switch (CurrentRacePosition)
			{
			case 1:
				AddRaceTrophies(TrophyType.FirstPlace);
				TryIncrementProgress(TrophyType.SecondPlace);
				TryIncrementProgress(TrophyType.ThirdPlace);
				break;
			case 2:
				AddRaceTrophies(TrophyType.SecondPlace);
				TryIncrementProgress(TrophyType.ThirdPlace);
				break;
			case 3:
				AddRaceTrophies(TrophyType.ThirdPlace);
				break;
			}
		}
		if (CurrentRacePosition > 3)
		{
			lostRaceAmount++;
			if (ControllerBehaviour<OpponentController>.Instance.IsFtueActive || ControllerBehaviour<OpponentController>.Instance.WasFtueActiveLastRace)
			{
				lostRaceAmount = ironTubePromotionLostRaceAmount;
			}
		}
		else
		{
			lostRaceAmount = 0;
			if (ControllerBehaviour<OpponentController>.Instance.IsFtueActive || ControllerBehaviour<OpponentController>.Instance.WasFtueActiveLastRace)
			{
				lostRaceAmount = ironTubePromotionLostRaceAmount - 1;
			}
		}
		SetRacePointsMultiplier(CurrentRacePosition);
		bool flag = true;
		TaskController instance = ControllerBehaviour<TaskController>.Instance;
		Task[] tasks = instance.Tasks;
		foreach (Task task in tasks)
		{
			if (!task.Completed && task.TryComplete())
			{
				DDNADailyTaskEvent(task);
				task.JustCompleted = true;
				CurrentRaceTrophies += task.TrophyCount;
				UnityEngine.Debug.LogFormat("Task \"{0}\" completed for {1} trophies!", task.Description, "unknown amount of");
			}
			if (!task.Completed)
			{
				flag = false;
			}
		}
		if (flag && !SaveController.IsDailySkinUsed())
		{
			ControllerBehaviour<CharacterController>.Instance.UnlockDailySkin();
			JustUnlockedDailySkin = true;
		}
		TotalTrophies = SaveController.AddTrophies(CurrentRaceTrophies);
		IsRaceOver = true;
		DDNAEarnTrophies("dailyTasksCompleted");
		SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.RaceFinish);
		StartCoroutine(SetScoreGameState());
	}

	private void DDNADailyTaskEvent(Task task)
	{
		TaskController instance = ControllerBehaviour<TaskController>.Instance;
		int num = instance.Tasks.Length;
		Task[] tasks = instance.Tasks;
		foreach (Task task2 in tasks)
		{
			if (task2.Completed)
			{
				num--;
			}
		}
		string description = task.Description;
		description = description.Replace(' ', '_');
		SendDeltaEvent.DailyTask(description, task.Difficulty.ToString(), num == 0);
	}

	private void DDNAEarnPoints(string itemSpent, int totalRacePoints)
	{
		string text = "points";
		int num = (TotalPoints > 0) ? (TotalPoints - totalRacePoints) : 0;
		SendDeltaEvent.GameTransaction(itemSpent, 0, text, totalRacePoints, text, TotalPoints, string.Empty);
	}

	private void DDNAEarnTrophies(string itemSpent)
	{
		if (CurrentRaceTrophies > 0)
		{
			string text = "trophies";
			int precoinAmount = TotalTrophies - CurrentRaceTrophies;
			SendDeltaEvent.GameTransaction(itemSpent, 0, text, CurrentRaceTrophies, text, precoinAmount, string.Empty);
		}
	}

	private IEnumerator SetScoreGameState()
	{
		yield return new WaitForSeconds((!SingletonBehaviour<GameController>.Instance.GameSettings.ShowRaceUI) ? (scoreGameStateDelay * 4f) : scoreGameStateDelay);
		SingletonBehaviour<GameController>.Instance.SetGameState(GameState.Score);
	}

	private void IncreaseTotalTrackLevel()
	{
		if (TotalTrackLevel < totalTrackLevelMax)
		{
			previousTotalTrackLevel = TotalTrackLevel;
			TotalTrackLevel++;
			TotalDifficultyLevel = Mathf.CeilToInt((float)TotalTrackLevel / (float)difficultyLevelIncreaseRate);
			SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel = TotalTrackLevel;
		}
	}

	private void IncreaseTotalRaceAmount()
	{
		currentRaceAmount++;
		TotalRaceAmount++;
		SingletonBehaviour<GameController>.Instance.SaveSettings.TotalRaceAmount = TotalRaceAmount;
	}

	public void AddRacePoints(PointType pointType)
	{
		if (pointsDictionary.ContainsKey(pointType))
		{
			if (isRacePointsEnabled)
			{
				int num = Mathf.RoundToInt((float)pointsDictionary[pointType].PointAmount * pointsMultiplier);
				CurrentRacePoints += num;
				playerPositionView.ShowEearnedPoints(num);
				SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Score);
			}
		}
		else
		{
			UnityEngine.Debug.LogError("ScoreController: PointType not defined!");
		}
	}

	public void AddRaceTrophies(TrophyType trophyType)
	{
		if (trophiesDictionary.ContainsKey(trophyType))
		{
			if (isRacePointsEnabled)
			{
				int trophyAmount = trophiesDictionary[trophyType].TrophyAmount;
				ControllerBehaviour<TaskController>.Instance.TryIncrementTaskProgress(trophyType, trophyAmount);
			}
		}
		else
		{
			UnityEngine.Debug.LogError("ScoreController: TrophyType not defined!");
		}
	}

	private void TryIncrementProgress(TrophyType trophyType)
	{
		int trophyAmount = trophiesDictionary[trophyType].TrophyAmount;
		ControllerBehaviour<TaskController>.Instance.TryIncrementTaskProgress(trophyType, trophyAmount);
	}

	public void RemoveTotalPoints(int points)
	{
		if (!isRacePointsEnabled)
		{
			TotalPoints = SaveController.SubtractPoints(points);
			startView.ForceUpdateView();
		}
	}

	public void RemoveTotalTrophies(int trophies)
	{
		if (!isRacePointsEnabled)
		{
			TotalTrophies = SaveController.SubtractTrophies(trophies);
		}
	}

	public bool IsEnoughTotalPoints(int comparePoints)
	{
		return TotalPoints >= comparePoints;
	}

	public bool IsEnoughTotalTrophies(int compareTrophies)
	{
		return TotalTrophies >= compareTrophies;
	}

	public void CollectRacePoints(CollectType collectType)
	{
		int racePoints = GetRacePoints(collectType);
		switch (collectType)
		{
		case CollectType.Double:
			DDNAEarnPoints("play&rv_doubled", racePoints);
			break;
		case CollectType.Collect:
			DDNAEarnPoints("play", racePoints);
			break;
		}
		AddTotalPoints(racePoints);
	}

	public int GetRacePoints(CollectType collectType)
	{
		int num = 1;
		if (collectType != 0 && collectType == CollectType.Double)
		{
			num = 2;
		}
		return CurrentRacePoints * num;
	}

	private void AddTotalPoints(int points)
	{
		if (!isRacePointsEnabled)
		{
			TotalPoints = SaveController.AddPoints(points);
		}
	}

	private void AddTotalTrophies(int trophies)
	{
		if (!isRacePointsEnabled)
		{
			TotalTrophies += trophies;
		}
	}

	private void SetRacePointsMultiplier(int playerRacePosition)
	{
		isRacePointsEnabled = false;
		NonMultipliedRacePoints = CurrentRacePoints;
		CurrentRacePoints = Mathf.RoundToInt((float)CurrentRacePoints * (float)GetMultiplierForPosition(playerRacePosition));
		ControllerBehaviour<TaskController>.Instance.TryIncrementTaskProgress(TrophyType.PointAmount, CurrentRacePoints);
	}

	public int GetMultiplierForPosition(int racePosition)
	{
		int result = 1;
		switch (racePosition)
		{
		case 1:
			result = FirstPlaceMultiplier;
			break;
		case 2:
			result = SecondPlaceMultiplier;
			break;
		case 3:
			result = ThirdPlaceMultiplier;
			break;
		}
		return result;
	}

	public void ShowRacePosition(bool isVisible)
	{
		raceProgressView.ShowRacePosition(isVisible);
	}

	public void ReportScore(int score)
	{

		UnityEngine.Debug.Log("New Score reported : " + score.ToString());
	}

	public void DidShowIronTubePromotion()
	{
		lostRaceAmount = 0;
	}

	public void ZeroCurrentRaceAmount()
	{
		currentRaceAmount = 0;
	}
}
