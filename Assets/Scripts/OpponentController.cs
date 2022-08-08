// DecompilerFi decompiler from Assembly-CSharp.dll class: OpponentController
using System.Collections.Generic;
using UnityEngine;

public class OpponentController : ControllerBehaviour<OpponentController>
{
	[Header("Settings")]
	[SerializeField]
	private int initialOpponentNodeOffset = 15;

	[Header("FTUE Settings")]
	[SerializeField]
	private int ftueRaceAmountLimit = 2;

	[SerializeField]
	private int ftueTotalDifficultyLevel = 3;

	[SerializeField]
	private int ftueTotalDifficultyLevelDecrease = 1;

	[Header("Difficulty Override Settings")]
	[SerializeField]
	private bool isOverrideDifficultyLevelsEnabled;

	[SerializeField]
	private List<int> overrideDifficultyLevels = new List<int>();

	[Header("References")]
	[SerializeField]
	private Opponent[] opponentPrefab;
    
    [SerializeField]
	private PhysicsCharacter physicsCharacter;

    public int TotalOppnent = 11;

    private readonly int opponentSpreadDifficultyIncrease = 2;

	private readonly int opponentSpreadDifficultyIncreaseLimit = 20;

	private readonly float opponentSpeedMinDifficultyIncrease = 0.02f;

	private readonly float opponentSpeedMinDifficultyLimit = 0.2f;

	private readonly float opponentSpeedMaxDifficultyIncrease = 0.005f;

	private readonly float opponentSpeedMaxDifficultyLimit = 0.05f;

	private readonly int trackElementReactionRangeDifficultyIncrease = 2;

	private readonly int trackElementReactionRangeDifficultyLimit = 20;

	private readonly int trackElementReactionRangeBase = 20;

	private readonly float opponentCatchSpeedIncrease = 0.005f;

	private readonly float rusherCatchSpeedLimit = 0.04f;

	private readonly float defensiveCatchSpeedLimit = 0.02f;

	private readonly float disruptorCatchSpeedLimit = 0.01f;

	private readonly int difficultyLevelMax = 10;

	private List<Opponent> opponents = new List<Opponent>();

	private int opponentNodeOffset;

	public bool IsFtueActive
	{
		get;
		private set;
	}

	public bool WasFtueActiveLastRace
	{
		get;
		private set;
	}

	public int OpponentAmount
	{
		get;
		private set;
	}

	public float OpponentSpeedMin
	{
		get;
		private set;
	}

	public float OpponentSpeedMax
	{
		get;
		private set;
	}

	public int TrackElementReactionRange
	{
		get;
		private set;
	}

	public float RusherCatchSpeedMax
	{
		get;
		private set;
	}

	public float DefensiveCatchSpeedMax
	{
		get;
		private set;
	}

	public float DisruptorCatchSpeedMax
	{
		get;
		private set;
	}

	private void Start()
	{
		int num = Mathf.Min(ControllerBehaviour<ScoreController>.Instance.TotalDifficultyLevel, difficultyLevelMax);
		int num2 = (!MathUtility.IsOdd(ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel)) ? num : Mathf.Max(num - 1, 1);
		int trackDifficultyOffset = SingletonBehaviour<TrackController>.Instance.GetTrackDifficultyOffset(SingletonBehaviour<TrackController>.Instance.CurrentTrackIndex);
		if (isOverrideDifficultyLevelsEnabled && ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel <= overrideDifficultyLevels.Count)
		{
			num2 = Mathf.Max(overrideDifficultyLevels[ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel - 1], 1);
			UnityEngine.Debug.Log("OpponentController: OpponentDifficultyLevel (Difficulty Override): " + num2);
		}
		if (trackDifficultyOffset != 0)
		{
			num2 = Mathf.Max(num2 + trackDifficultyOffset, 1);
			UnityEngine.Debug.Log("OpponentController: OpponentDifficultyLevel (Track Override): " + num2);
		}
		if (SingletonBehaviour<GameController>.Instance.GameSettings.IsFTUE && ftueRaceAmountLimit >= ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount)
		{
			IsFtueActive = true;
			WasFtueActiveLastRace = true;
			num2 = Mathf.Max(ftueTotalDifficultyLevel - ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount * ftueTotalDifficultyLevelDecrease, 1);
			UnityEngine.Debug.Log("OpponentController: OpponentDifficultyLevel (FTUE Override): " + num2);
		}
		else
		{
			IsFtueActive = false;
			WasFtueActiveLastRace = (SingletonBehaviour<GameController>.Instance.GameSettings.IsFTUE && ftueRaceAmountLimit >= ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount - 1);
			UnityEngine.Debug.Log("OpponentController: OpponentDifficultyLevel: " + num2);
		}
		OpponentAmount = SingletonBehaviour<GameController>.Instance.GameSettings.OpponentTypeRusherAmount + SingletonBehaviour<GameController>.Instance.GameSettings.OpponentTypeDefensiveAmount + SingletonBehaviour<GameController>.Instance.GameSettings.OpponentTypeDisruptorAmount;
		OpponentSpeedMin = SingletonBehaviour<GameController>.Instance.GameSettings.OpponentSpeedMin + Mathf.Min((float)(num2 - 1) * opponentSpeedMinDifficultyIncrease, opponentSpeedMinDifficultyLimit);
		OpponentSpeedMax = SingletonBehaviour<GameController>.Instance.GameSettings.OpponentSpeedMax + Mathf.Min((float)(num2 - 1) * opponentSpeedMaxDifficultyIncrease, opponentSpeedMaxDifficultyLimit);
		TrackElementReactionRange = trackElementReactionRangeBase + Mathf.Min((num2 - 1) * trackElementReactionRangeDifficultyIncrease, trackElementReactionRangeDifficultyLimit);
		RusherCatchSpeedMax = Mathf.Min((float)num2 * opponentCatchSpeedIncrease, rusherCatchSpeedLimit);
		DefensiveCatchSpeedMax = Mathf.Min((float)num2 * opponentCatchSpeedIncrease, defensiveCatchSpeedLimit);
		DisruptorCatchSpeedMax = Mathf.Min((float)num2 * opponentCatchSpeedIncrease, disruptorCatchSpeedLimit);
		opponentNodeOffset = SingletonBehaviour<GameController>.Instance.GameSettings.InitialOpponentSpread + Mathf.Min((num2 - 1) * opponentSpreadDifficultyIncrease, opponentSpreadDifficultyIncreaseLimit);
		SpawnOpponents();
	}

	public override void Initialize()
	{
		Disable();
		int num = initialOpponentNodeOffset;
		foreach (Opponent opponent in opponents)
		{
			ControllerBehaviour<PhysicsController>.Instance.AddPhysicsCharacter(opponent.Movement, isIronTube: false, SingletonBehaviour<TrackController>.Instance.TrackEntranceAttachIndex + num);
			num += opponentNodeOffset;
		}
	}

	public override void Enable()
	{
		foreach (Opponent opponent in opponents)
		{
			opponent.Enable();
		}
	}

	public override void Disable()
	{
		foreach (Opponent opponent in opponents)
		{
			opponent.Disable();
		}
	}

	private void SpawnOpponents()
	{
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		int num = 3;
		for (int i = 0; i < num; i++)
		{
			int num2 = 0;
			OpponentType opponentType = (OpponentType)i;
			switch (opponentType)
			{
			case OpponentType.Rusher:
				num2 = (gameSettings.IsOpponentTypeRusher ? gameSettings.OpponentTypeRusherAmount : 0);
				break;
			case OpponentType.Defensive:
				num2 = (gameSettings.IsOpponentTypeDefensive ? gameSettings.OpponentTypeDefensiveAmount : 0);
				break;
			case OpponentType.Disruptor:
				num2 = (gameSettings.IsOpponentTypeDisruptor ? gameSettings.OpponentTypeDisruptorAmount : 0);
				break;

			}
			num2 = (gameSettings.EnableOpponents ? num2 : 0);
			for (int j = 0; j < TotalOppnent; j++)
			{
				Opponent opponent = Object.Instantiate(opponentPrefab[j]);
				opponent.Initialize(opponentType);
				opponents.Add(opponent);
				ControllerBehaviour<CharacterController>.Instance.AddCharacter(opponent.Movement.gameObject, opponent.Movement);
			}
		}
	}
}
