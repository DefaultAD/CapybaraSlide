// DecompilerFi decompiler from Assembly-CSharp.dll class: Opponent
using System.Collections;
using UnityEngine;

public class Opponent : MonoBehaviour
{
	[Header("Settings")]
	[SerializeField]
	private float speedTransition = 1f;

	[SerializeField]
	private float horizontalTransition = 1f;

	[SerializeField]
	private float defaultMovementSwitchMin = 0.5f;

	[SerializeField]
	private float defaultMovementSwitchMax = 1.5f;

	[SerializeField]
	private float positionCheckDelay = 1.5f;

	[Header("References")]
	[SerializeField]
	private Movement movement;

	[SerializeField]
	private Collision collision;

	[SerializeField]
	private GameObject crownGameObject;

	private readonly float speedElasticityRate = 0.05f;

	private float speedMin;

	private float speedMax;

	private int trackElementReactionRange;

	private float rusherCatchSpeedMax;

	private float defensiveCatchSpeedMax;

	private float disruptorCatchSpeedMax;

	private float currentSpeed;

	private float targetSpeed;

	private float currentHorizontal;

	private float targetHorizontal;

	private float lastHorizontal;

	private float movementSwitch;

	private Coroutine movementCoroutine;

	private Coroutine positionCheckCoroutine;

	private OpponentPositionView opponentPositionView;

	private bool isOpponentTypeVisible;

	public Movement Movement => movement;

	public Collision Collision => collision;

	public bool IsActive
	{
		get;
		private set;
	}

	public OpponentType OpponentType
	{
		get;
		private set;
	}

	public string Name
	{
		get;
		private set;
	}

	public void Initialize(OpponentType opponentType)
	{
		OpponentType = opponentType;
		isOpponentTypeVisible = SingletonBehaviour<GameController>.Instance.GameSettings.IsOpponentTypeVisible;
		opponentPositionView = GetComponentInChildren<OpponentPositionView>();
		if (opponentPositionView != null)
		{
			if (isOpponentTypeVisible)
			{
				opponentPositionView.SetOpponentType(opponentType.ToString());
			}
			Name = NickNameGenerator.GetRandomNickName();
			opponentPositionView.SetOpponentNickName(Name);
		}
		speedMin = ControllerBehaviour<OpponentController>.Instance.OpponentSpeedMin;
		speedMax = ControllerBehaviour<OpponentController>.Instance.OpponentSpeedMax;
		trackElementReactionRange = ControllerBehaviour<OpponentController>.Instance.TrackElementReactionRange;
		rusherCatchSpeedMax = ControllerBehaviour<OpponentController>.Instance.RusherCatchSpeedMax;
		defensiveCatchSpeedMax = ControllerBehaviour<OpponentController>.Instance.DefensiveCatchSpeedMax;
		disruptorCatchSpeedMax = ControllerBehaviour<OpponentController>.Instance.DisruptorCatchSpeedMax;
	}

	public void Enable()
	{
		IsActive = true;
		movement.enabled = true;
		currentSpeed = 0f;
		targetSpeed = 0f;
		currentHorizontal = 0f;
		targetHorizontal = 0f;
		movementSwitch = defaultMovementSwitchMax;
		if (movementCoroutine != null)
		{
			StopCoroutine(movementCoroutine);
		}
		if (positionCheckCoroutine != null)
		{
			StopCoroutine(positionCheckCoroutine);
		}
		movementCoroutine = StartCoroutine(RandomizeMovement());
		positionCheckCoroutine = StartCoroutine(CheckPosition());
	}

	public void Disable()
	{
		IsActive = false;
		movement.enabled = false;
		currentSpeed = 0f;
		targetSpeed = 0f;
		currentHorizontal = 0f;
		targetHorizontal = 0f;
		movementSwitch = defaultMovementSwitchMax;
		if (movementCoroutine != null)
		{
			StopCoroutine(movementCoroutine);
		}
		if (positionCheckCoroutine != null)
		{
			StopCoroutine(positionCheckCoroutine);
		}
	}

	private void Update()
	{
		if (IsActive)
		{
			currentSpeed = Mathf.Lerp(currentSpeed, targetSpeed, Time.deltaTime * speedTransition);
			ControllerBehaviour<PhysicsController>.Instance.SetPhysicsCharacterSpeed(movement, currentSpeed);
			currentHorizontal = Mathf.Lerp(currentHorizontal, targetHorizontal, Time.deltaTime * horizontalTransition);
			ControllerBehaviour<PhysicsController>.Instance.MovePhysicsCharacterHorizontally(movement, (currentHorizontal - lastHorizontal) * 50f);
			lastHorizontal = currentHorizontal;
		}
	}

	private IEnumerator RandomizeMovement()
	{
		while (IsActive)
		{
			yield return new WaitForSeconds(movementSwitch);
			int playerNodeIndex = ControllerBehaviour<PlayerController>.Instance.Movement.CurrentNodeIndex;
			int opponentNodeIndex = movement.CurrentNodeIndex;
			float playerHorizontal = ControllerBehaviour<PlayerController>.Instance.Movement.Horizontal;
			bool isPlayerAhead = playerNodeIndex > opponentNodeIndex;
			if (OpponentType == OpponentType.Rusher)
			{
				int num = 10;
				float min = speedMin;
				float num2 = speedMax;
				bool flag = playerNodeIndex + num > opponentNodeIndex;
				if (SingletonBehaviour<TrackController>.Instance.Track.IsSpeedBoosterInRange(opponentNodeIndex, trackElementReactionRange))
				{
					targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestSpeedBoosterHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
				}
				else if (SingletonBehaviour<TrackController>.Instance.Track.IsWaterRampInRange(opponentNodeIndex, trackElementReactionRange))
				{
					targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestWaterRampHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
				}
				else
				{
					targetHorizontal = UnityEngine.Random.Range(-1f, 1f);
				}
				movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin, defaultMovementSwitchMax);
				if (isPlayerAhead)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min, num2 + rusherCatchSpeedMax);
				}
				else if (flag)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min, num2);
				}
				else
				{
					targetSpeed = Mathf.Clamp(targetSpeed - speedElasticityRate, min, num2);
				}
			}
			else if (OpponentType == OpponentType.Defensive)
			{
				int num3 = 3;
				float min2 = speedMin;
				float num4 = speedMax;
				bool flag2 = playerNodeIndex + num3 > opponentNodeIndex;
				if (isPlayerAhead)
				{
					if (SingletonBehaviour<TrackController>.Instance.Track.IsSpeedBoosterInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestSpeedBoosterHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else if (SingletonBehaviour<TrackController>.Instance.Track.IsWaterRampInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestWaterRampHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else
					{
						targetHorizontal = Mathf.Clamp(0f - playerHorizontal, -1f, 1f);
					}
				}
				else if (SingletonBehaviour<TrackController>.Instance.Track.IsSpeedBoosterInRange(opponentNodeIndex, trackElementReactionRange))
				{
					targetHorizontal = 0f - SingletonBehaviour<TrackController>.Instance.Track.GetClosestSpeedBoosterHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
				}
				else if (SingletonBehaviour<TrackController>.Instance.Track.IsWaterRampInRange(opponentNodeIndex, trackElementReactionRange))
				{
					targetHorizontal = 0f - SingletonBehaviour<TrackController>.Instance.Track.GetClosestWaterRampHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
				}
				else
				{
					targetHorizontal = Mathf.Clamp(playerHorizontal, -1f, 1f);
				}
				if (isPlayerAhead)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min2, num4 + defensiveCatchSpeedMax);
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin / 2f, defaultMovementSwitchMax / 3f);
				}
				else if (flag2)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min2, num4);
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin, defaultMovementSwitchMax);
				}
				else
				{
					targetSpeed = Mathf.Clamp(targetSpeed - speedElasticityRate, min2, num4);
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin / 2f, defaultMovementSwitchMax / 3f);
				}
			}
			else
			{
				if (OpponentType != OpponentType.Disruptor)
				{
					continue;
				}
				int num5 = 0;
				float min3 = speedMin;
				float num6 = speedMax;
				bool flag3 = playerNodeIndex + num5 > opponentNodeIndex;
				if (playerNodeIndex + 3 >= opponentNodeIndex && playerNodeIndex - 12 <= opponentNodeIndex)
				{
					targetHorizontal = Mathf.Clamp(playerHorizontal, -1f, 1f);
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin / 2f, defaultMovementSwitchMax / 3f);
				}
				else if (isPlayerAhead)
				{
					if (SingletonBehaviour<TrackController>.Instance.Track.IsSpeedBoosterInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestSpeedBoosterHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else if (SingletonBehaviour<TrackController>.Instance.Track.IsWaterRampInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = SingletonBehaviour<TrackController>.Instance.Track.GetClosestWaterRampHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else
					{
						targetHorizontal = Mathf.Clamp(0f - playerHorizontal, -1f, 1f);
					}
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin, defaultMovementSwitchMax);
				}
				else
				{
					if (SingletonBehaviour<TrackController>.Instance.Track.IsSpeedBoosterInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = 0f - SingletonBehaviour<TrackController>.Instance.Track.GetClosestSpeedBoosterHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else if (SingletonBehaviour<TrackController>.Instance.Track.IsWaterRampInRange(opponentNodeIndex, trackElementReactionRange))
					{
						targetHorizontal = 0f - SingletonBehaviour<TrackController>.Instance.Track.GetClosestWaterRampHorizontalPosition(opponentNodeIndex, trackElementReactionRange);
					}
					else
					{
						targetHorizontal = Mathf.Clamp(0f - playerHorizontal, -1f, 1f);
					}
					movementSwitch = UnityEngine.Random.Range(defaultMovementSwitchMin, defaultMovementSwitchMax);
				}
				if (isPlayerAhead)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min3, num6 + disruptorCatchSpeedMax);
				}
				else if (flag3)
				{
					targetSpeed = Mathf.Clamp(targetSpeed + speedElasticityRate, min3, num6);
				}
				else
				{
					targetSpeed = Mathf.Clamp(targetSpeed - speedElasticityRate, min3, num6);
				}
			}
		}
	}

	private IEnumerator CheckPosition()
	{
		while (IsActive && !movement.IsFinishLineReached)
		{
			if (crownGameObject != null)
			{
				int opponentRacePosition = ControllerBehaviour<CharacterController>.Instance.GetOpponentRacePosition(movement);
				if (opponentRacePosition == 1 != crownGameObject.activeInHierarchy)
				{
					crownGameObject.SetActive(opponentRacePosition == 1);
				}
			}
			yield return new WaitForSeconds(positionCheckDelay);
		}
	}
}
