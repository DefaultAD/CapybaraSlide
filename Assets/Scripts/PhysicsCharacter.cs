// DecompilerFi decompiler from Assembly-CSharp.dll class: PhysicsCharacter
using MoreMountains.NiceVibrations;
using ObjectPool;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D), typeof(Collider2D))]
public class PhysicsCharacter : MonoBehaviour, IPoolable
{
	private struct SpeedBoostData
	{
		public readonly float time;

		public readonly float magnitude;

		public readonly AnimationCurve curve;

		public SpeedBoostData(float time, float magnitude, AnimationCurve curve)
		{
			this.time = time;
			this.magnitude = magnitude;
			this.curve = curve;
		}
	}

	[Header("Multipliers and constants")]
	[Tooltip("Max character speed. Final speed can be higher or lower depending on speed multiplier.")]
	[SerializeField]
	private float maxSpeed = 60f;

	[Tooltip("Physics mass for iron tube characters. This is also a multiplier in collision handling.")]
	[SerializeField]
	private float ironTubeMass = 10f;

	[Tooltip("Time it takes for character speed to recover from being hit by iron tube.")]
	[SerializeField]
	private float ironTubeSpeedResetTime = 10f;

	[Tooltip("How fast character moves towards center if it is over edge")]
	[SerializeField]
	private float overEdgeResetSpeed = 5f;

	[Header("Animation curves")]
	[SerializeField]
	private AnimationCurve rampJumoCurve;

	[SerializeField]
	private AnimationCurve rampSpeedBoostCurve;

	[SerializeField]
	private AnimationCurve speedBoostCurve;

	[SerializeField]
	private AnimationCurve ironTubeHitCurve;

	private float speedMultiplier = 1f;

	private float upgradeSpeedMultiplier = 1f;

	private float boostMultiplier = 1f;

	private float accelerationMultiplier = 1f;

	private float bumpInputDisableTime = 5f;

	private float currentBumpInputDisableTime = 5f;

	private float currentEdgeInputDisableTime;

	private float currentIronTubeHitTime = 10f;

	private float horizontalBlend = 0.5f;

	private float verticalBlend = 0.5f;

	private float currentRampJumpTime;

	private bool isOverEdge;

	private bool isRampJumping;

	private bool isIronTube;

	private bool isPlayerFinished;

	private int previousRacePosition;

	private float ironTubeSpeedMultiplier;

	private Rigidbody2D characterRigidBody2D;

	private Transform cachedTransform;

	private Vector2 oldVelocity;

	private BoxCollider2D currentRampCollider;

	private List<SpeedBoostData> speedBoosts = new List<SpeedBoostData>();

	private readonly int normalLayer = 11;

	private readonly int jumpLayer = 12;

	private readonly int ironTubeSpeedIncreaseLevel = 25;

	private readonly float ironTubeSpeedIncreaseAmount = 0.02f;

	public Movement CharacterMovement
	{
		get;
		private set;
	}

	public int playerBumpedByOpponentsAmount
	{
		get;
		private set;
	}

	public int opponentsBumpedByPlayerAmount
	{
		get;
		private set;
	}

	private void OnEnable()
	{
		characterRigidBody2D.isKinematic = false;
		CharacterMovement.enabled = true;
		previousRacePosition = ControllerBehaviour<CharacterController>.Instance.GetPlayerRacePosition();
	}

	private void Update()
	{
		if (!CharacterMovement.CompareTag("Player"))
		{
			return;
		}
		int playerRacePosition = ControllerBehaviour<CharacterController>.Instance.GetPlayerRacePosition();
		if (playerRacePosition < previousRacePosition)
		{
			if (isRampJumping)
			{
				RaisePointEvent(PointType.JumpOverOpponent);
				RaiseTaskEvent(TrophyType.JumpOverOpponent);
			}
			else
			{
				RaisePointEvent(PointType.PassOpponent);
				RaiseTaskEvent(TrophyType.PassOpponent);
			}
		}
		previousRacePosition = playerRacePosition;
	}

	private void FixedUpdate()
	{
		currentBumpInputDisableTime += Time.fixedDeltaTime;
		currentIronTubeHitTime += Time.fixedDeltaTime;
		Vector2 velocity = characterRigidBody2D.velocity;
		velocity.x = Mathf.Lerp(velocity.x, 0f, Time.fixedDeltaTime / SingletonBehaviour<GameController>.Instance.GameSettings.InputSlideAmount);
		float num = maxSpeed * speedMultiplier * upgradeSpeedMultiplier;
		num *= ((!isIronTube) ? ironTubeHitCurve.Evaluate(currentIronTubeHitTime / ironTubeSpeedResetTime) : ironTubeSpeedMultiplier);
		Vector3 position = CharacterMovement.CurrentTransformedNode.Position;
		Vector3 position2 = CharacterMovement.NextTransformedNode.Position;
		float num2 = Vector3.Dot(CharacterMovement.StartRight, position2) - Vector3.Dot(CharacterMovement.StartRight, position);
		if (!isOverEdge && position2 != Vector3.zero)
		{
			velocity.x -= num2 * SingletonBehaviour<GameController>.Instance.GameSettings.CentrifugalForceHorizontal;
			float num3 = num2 * num2 * SingletonBehaviour<GameController>.Instance.GameSettings.CentrifugalForceVertical * 1000f;
			num = ((!(num - num3 > 50f)) ? 50f : (num - num3));
		}
		float slideCircumference = PhysicsController.SlideCircumference;
		Vector2 position3 = characterRigidBody2D.position;
		float num4 = 1f - Mathf.InverseLerp(0f - slideCircumference, slideCircumference, position3.x) * 2f;
		float num5 = Mathf.Abs(position3.x) - slideCircumference;
		if (num5 > 0f)
		{
			num4 = ((!(position3.x < 0f)) ? (num4 - num5) : (num4 + num5));
		}
		float num6 = 0f;
		if (num > 0f)
		{
			num6 = ((!(0f - velocity.y < num)) ? Mathf.Lerp(0f, 0f - SingletonBehaviour<GameController>.Instance.GameSettings.AccelerationMultiplier, Mathf.InverseLerp(0f - num, 2f * (0f - num), velocity.y)) : Mathf.Lerp(SingletonBehaviour<GameController>.Instance.GameSettings.AccelerationMultiplier * accelerationMultiplier, 0f, (0f - velocity.y) / num));
			characterRigidBody2D.gravityScale = num6;
		}
		if (Mathf.Abs(position3.x) > slideCircumference)
		{
			if (isRampJumping)
			{
				Rigidbody2D rigidbody2D = characterRigidBody2D;
				Vector2 velocity2 = characterRigidBody2D.velocity;
				rigidbody2D.velocity = new Vector2(0f, velocity2.y);
			}
			else
			{
				float num7 = Mathf.Abs(position3.x) - slideCircumference;
				velocity.x += num7 * (0f - Mathf.Sign(position3.x)) * overEdgeResetSpeed;
				if (!isOverEdge)
				{
					currentEdgeInputDisableTime = 0f;
				}
				else
				{
					currentEdgeInputDisableTime += Time.deltaTime;
				}
				isOverEdge = true;
			}
		}
		else
		{
			isOverEdge = false;
		}
		characterRigidBody2D.velocity = velocity;
		float totalSpeedBoost = 1f;
		speedBoosts = speedBoosts.Select(delegate(SpeedBoostData speedBoost)
		{
			float num14 = speedBoost.curve.Evaluate(speedBoost.time) * speedBoost.magnitude;
			float time = speedBoost.time + Time.fixedDeltaTime / SingletonBehaviour<GameController>.Instance.GameSettings.SpeedBoosterDuration;
			totalSpeedBoost += num14;
			characterRigidBody2D.AddForce(Vector2.down * num14 * characterRigidBody2D.mass, ForceMode2D.Impulse);
			return new SpeedBoostData(time, speedBoost.magnitude, speedBoost.curve);
		}).ToList();
		speedBoosts = (from speedBoost in speedBoosts
			where speedBoost.time < 1f
			select speedBoost).ToList();
		float num8 = 0f;
		float num9 = 0f;
		bool onRamp = false;
		if ((bool)currentRampCollider)
		{
			Vector3 center = currentRampCollider.bounds.center;
			float y = center.y;
			Vector3 extents = currentRampCollider.bounds.extents;
			float num10 = y + extents.y;
			float num11 = num10;
			Vector3 size = currentRampCollider.bounds.size;
			float num12 = num11 - size.y;
			float a = num10;
			float b = num12;
			Vector3 position4 = cachedTransform.position;
			float t = Mathf.InverseLerp(a, b, position4.y);
			num8 = Mathf.Lerp(-0.2f, 2.6f, t);
			num9 = 40f;
			onRamp = true;
		}
		else if (isRampJumping)
		{
			currentRampJumpTime += Time.fixedDeltaTime / SingletonBehaviour<GameController>.Instance.GameSettings.WaterRampJumpLength;
			num8 = rampJumoCurve.Evaluate(currentRampJumpTime) * 2.6f * SingletonBehaviour<GameController>.Instance.GameSettings.WaterRampJumpHeight;
			num9 = num8 * 7f;
			if (currentRampJumpTime >= 1f)
			{
				base.gameObject.layer = normalLayer;
				isRampJumping = false;
				if (CharacterMovement.CompareTag("Player"))
				{
					SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Landing);
				}
			}
		}
		float angularVelocity = characterRigidBody2D.angularVelocity;
		Rigidbody2D rigidbody2D2 = characterRigidBody2D;
		Quaternion rotation = cachedTransform.rotation;
		rigidbody2D2.AddTorque((0f - rotation.z) * SingletonBehaviour<GameController>.Instance.GameSettings.RotationNormalizationMultiplier);
		float num13 = Mathf.InverseLerp(20f, maxSpeed * speedMultiplier, num);
		float b2 = Mathf.InverseLerp(-50f, 50f, velocity.x + num2 * 500f * num13);
		horizontalBlend = Mathf.Lerp(horizontalBlend, b2, Time.fixedDeltaTime * 10f);
		float y2 = oldVelocity.y;
		Vector2 velocity3 = characterRigidBody2D.velocity;
		float b3 = Mathf.Clamp(y2 - velocity3.y, -1f, 1f) + 0.5f;
		verticalBlend = Mathf.Lerp(verticalBlend, b3, Time.fixedDeltaTime * 5f);
		Vector3 position5 = cachedTransform.position;
		float distanceCovered = 0f - position5.y;
		float rawHorizontal = num4;
		Vector2 nextFaceDirection = cachedTransform.up;
		float jumpYOffset = num8;
		float offsetRotation = num9;
		Vector2 velocity4 = characterRigidBody2D.velocity;
		MovementData movementData = new MovementData(distanceCovered, rawHorizontal, nextFaceDirection, jumpYOffset, offsetRotation, 0f - velocity4.x, onRamp, horizontalBlend, totalSpeedBoost, verticalBlend);
		CharacterMovement.Move(movementData);
		oldVelocity = velocity;
	}

	private void OnCollisionEnter2D(Collision2D collision)
	{
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		float mass = collision.rigidbody.mass;
		Vector2 relativeVelocity = collision.relativeVelocity;
		Vector3 vector = relativeVelocity.normalized;
		float magnitude = relativeVelocity.magnitude;
		if (!isIronTube)
		{
			float num = Mathf.Abs(vector.y);
			float num2 = (!(mass > 1f)) ? Mathf.Abs(vector.x) : (mass * gameSettings.IronTubeBumpMultiplier);
			relativeVelocity.y = num * Mathf.Sign(relativeVelocity.y) * Mathf.Clamp(Mathf.Abs(relativeVelocity.y), gameSettings.MinBumbMagnitude * 10f, float.PositiveInfinity) * gameSettings.BumpSpeedMultiplier * 10f;
			relativeVelocity.x = num2 * Mathf.Sign(relativeVelocity.x) * Mathf.Clamp(Mathf.Abs(relativeVelocity.x), gameSettings.MinHorizontalBumbMagnitude * 10f, gameSettings.MaxHorizontalBumbMagnitude * 10f) * gameSettings.HorizontalBumbMultiplier;
			bumpInputDisableTime = 2f * Mathf.Clamp(Mathf.Abs(vector.x), Mathf.Epsilon, float.PositiveInfinity) * mass;
			if (mass > 1f)
			{
				bumpInputDisableTime = Mathf.Clamp(bumpInputDisableTime, 10f, float.PositiveInfinity);
				relativeVelocity.x = Mathf.Clamp(Mathf.Abs(relativeVelocity.x), 1000f * gameSettings.IronTubeMinBumbAmount, float.PositiveInfinity) * Mathf.Sign(relativeVelocity.x);
			}
			characterRigidBody2D.AddTorque(vector.x * gameSettings.BumbTorqueMultiplier * mass);
			characterRigidBody2D.AddForce(relativeVelocity);
			currentBumpInputDisableTime = 0f;
			if (mass > 1f)
			{
				currentIronTubeHitTime = 0f;
			}
		}
		if (!isPlayerFinished)
		{
			Movement characterMovement = ControllerBehaviour<PhysicsController>.Instance.GetPhysicsCharacter(collision.gameObject).CharacterMovement;
			Vector3 position = CharacterMovement.WorldPosition - (characterMovement.WorldPosition - CharacterMovement.WorldPosition) + CharacterMovement.Up * 1.6f;
			Quaternion rotation = CharacterMovement.Tube.rotation;
			ControllerBehaviour<EffectController>.Instance.InstantiateHitParticles(position, rotation);
		}
		bool flag = false;
		if (!isPlayerFinished && CharacterMovement.CompareTag("Player"))
		{
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Collision);
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Grunt);
			flag = true;
		}
		if (vector.y < 0.2f)
		{
			RaisePointEvent(PointType.BackBump);
			RaiseTaskEvent(TrophyType.BackBump);
			if (CharacterMovement.CompareTag("Opponent"))
			{
				Movement characterMovement2 = ControllerBehaviour<PhysicsController>.Instance.GetPhysicsCharacter(collision.gameObject).CharacterMovement;
				if (characterMovement2.CompareTag("Player"))
				{
					CharacterMovement.ShowBackBumpEffect();
					SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.MediumImpact);
					opponentsBumpedByPlayerAmount++;
					SingletonBehaviour<GameController>.Instance.UpdateOpponentBumped();
				}
			}
			else if (CharacterMovement.CompareTag("Player"))
			{
				Movement characterMovement3 = ControllerBehaviour<PhysicsController>.Instance.GetPhysicsCharacter(collision.gameObject).CharacterMovement;
				if (characterMovement3.CompareTag("Opponent"))
				{
					SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.MediumImpact);
					playerBumpedByOpponentsAmount++;
					SingletonBehaviour<GameController>.Instance.UpdatePlayerBumped();
				}
			}
		}
		else if (flag)
		{
			SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.LightImpact);
		}
	}

	private void OnTriggerEnter2D(Collider2D triggerCollider)
	{
		if (triggerCollider.CompareTag("WaterRamp"))
		{
			currentRampCollider = (triggerCollider as BoxCollider2D);
			isRampJumping = false;
			speedBoosts.Add(new SpeedBoostData(0f, SingletonBehaviour<GameController>.Instance.GameSettings.WaterRampSpeedBoost, rampSpeedBoostCurve));
			Rigidbody2D rigidbody2D = characterRigidBody2D;
			Vector2 velocity = characterRigidBody2D.velocity;
			rigidbody2D.velocity = new Vector2(0f, velocity.y);
			if (CharacterMovement.CompareTag("Player"))
			{
				ControllerBehaviour<CameraController>.Instance.ActivateSpeedBoosterEffect(0.9f);
				SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.WaterRamp);
				SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.HeavyImpact);
			}
		}		
	}

    private void OnTriggerEnter(Collider other)
    {
		if (other.CompareTag("Orange"))
		{
			Destroy(other.gameObject);

			RaisePointEvent(PointType.Orange);
		}
	}

    private void OnTriggerExit2D(Collider2D triggerCollider)
	{        
		if (triggerCollider == currentRampCollider)
		{
			base.gameObject.layer = jumpLayer;
			currentRampCollider = null;
			currentRampJumpTime = 0f;
			isRampJumping = true;
			RaisePointEvent(PointType.WaterRamp);
			RaiseTaskEvent(TrophyType.WaterRamp);
		}
	}

	public void RaisePointEvent(PointType pointType)
	{
		if (CharacterMovement.CompareTag("Player"))
		{
			ScoreController instance = ControllerBehaviour<ScoreController>.Instance;
			if ((bool)instance)
			{
				instance.AddRacePoints(pointType);
			}
			else
			{
				UnityEngine.Debug.LogError("No ScoreController.Instance found when adding points from PhysicsCharacter");
			}
		}
	}

	private void RaiseTaskEvent(TrophyType trophyType)
	{
		if (CharacterMovement.CompareTag("Player"))
		{
			ScoreController instance = ControllerBehaviour<ScoreController>.Instance;
			if ((bool)instance)
			{
				instance.AddRaceTrophies(trophyType);
			}
			else
			{
				UnityEngine.Debug.LogError("No ScoreController.Instance found when adding points from PhysicsCharacter");
			}
		}
	}

	public void Initialize(Movement characterMovement, bool isIronTube, int trackOffset)
	{
		CharacterMovement = characterMovement;
		float num = SingletonBehaviour<TrackController>.Instance.Track.Slide.NodeDistances[trackOffset];
		cachedTransform.position = new Vector3(0f, 0f - num, 0f);
		characterMovement.Initialize(trackOffset);
		speedBoosts.Clear();
		CharacterMovement.enabled = false;
		characterRigidBody2D.mass = ((!isIronTube) ? 1f : ironTubeMass);
		this.isIronTube = isIronTube;
		isPlayerFinished = false;
		currentIronTubeHitTime = ironTubeSpeedResetTime;
		if (isIronTube)
		{
			if (ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel >= ironTubeSpeedIncreaseLevel)
			{
				ironTubeSpeedMultiplier = SingletonBehaviour<GameController>.Instance.GameSettings.IronTubeSpeedMultiplier + ironTubeSpeedIncreaseAmount;
			}
			else
			{
				ironTubeSpeedMultiplier = SingletonBehaviour<GameController>.Instance.GameSettings.IronTubeSpeedMultiplier;
			}
		}
	}

	public void Move(float delta)
	{
		if (!CharacterMovement.enabled || isRampJumping || Mathf.Abs(delta) < 0.01f)
		{
			return;
		}
		float num = Mathf.Abs(SingletonBehaviour<GameController>.Instance.GameSettings.MaxInputDelta);
		float num2 = Mathf.Clamp(delta, 0f - num, num);
		Vector2 vector = characterRigidBody2D.velocity;
		float num3 = Mathf.Lerp(0f, vector.x = (0f - num2) * 20f, currentBumpInputDisableTime / bumpInputDisableTime);
		if (currentBumpInputDisableTime < bumpInputDisableTime)
		{
			if (CharacterMovement.CompareTag("Player"))
			{
				Vector2 velocity = characterRigidBody2D.velocity;
				vector.x = Mathf.Lerp(velocity.x, vector.x, currentBumpInputDisableTime / bumpInputDisableTime);
			}
			else
			{
				Vector2 velocity2 = characterRigidBody2D.velocity;
				vector.x = velocity2.x;
			}
		}
		if (isOverEdge)
		{
			vector = Vector3.Lerp(vector, characterRigidBody2D.velocity, currentEdgeInputDisableTime);
		}
		characterRigidBody2D.velocity = vector;
		characterRigidBody2D.AddTorque(delta * SingletonBehaviour<GameController>.Instance.GameSettings.InputRotationMultiplier * characterRigidBody2D.mass / 2f);
	}

	public void SetSpeed(float speed)
	{
		speedMultiplier = speed;
	}

	public void SetAcceleration(float acceleration)
	{
		accelerationMultiplier = acceleration;
	}

	public void SetBoost(float boost)
	{
		boostMultiplier = boost;
	}

	public void SetUpgradeSpeed(float multiplier)
	{
		upgradeSpeedMultiplier = multiplier;
	}

	public void SetSpeedBoost()
	{
		SpeedBoostData item = new SpeedBoostData(0f, SingletonBehaviour<GameController>.Instance.GameSettings.SpeedBoosterMultiplier * boostMultiplier, speedBoostCurve);
		speedBoosts.Add(item);
		RaisePointEvent(PointType.SpeedBooster);
		RaiseTaskEvent(TrophyType.SpeedBooster);
	}

	public void SetPlayerFinished()
	{
		isPlayerFinished = true;
	}

	public void OnInstantiated()
	{
		base.gameObject.SetActive(value: true);
		cachedTransform.rotation = Quaternion.identity;
		characterRigidBody2D.isKinematic = true;
		characterRigidBody2D.velocity = Vector2.zero;
		characterRigidBody2D.angularVelocity = 0f;
	}

	public void OnDestroyed()
	{
		base.gameObject.SetActive(value: false);
		base.enabled = false;
	}

	public void OnPopulated()
	{
		base.gameObject.SetActive(value: false);
		characterRigidBody2D = GetComponent<Rigidbody2D>();
		characterRigidBody2D.isKinematic = true;
		characterRigidBody2D.drag = 0f;
		cachedTransform = base.transform;
	}
}
