// DecompilerFi decompiler from Assembly-CSharp.dll class: PhysicsController
using ObjectPool;
using System.Collections.Generic;
using UnityEngine;

public class PhysicsController : ControllerBehaviour<PhysicsController>
{
	public static readonly float SlideCircumference = 5.734426f;

	[SerializeField]
	private PhysicsCharacter PhysicsCharacter;

	[SerializeField]
	private RampPhysicsCollider rampPhysicsCollider;

	[SerializeField]
	private EdgeCollider2D leftEdgeCollider2D;

	[SerializeField]
	private EdgeCollider2D rightEdgeCollider2D;

	private Dictionary<Movement, PhysicsCharacter> movementMap = new Dictionary<Movement, PhysicsCharacter>();

	private Dictionary<GameObject, PhysicsCharacter> gameObjectMap = new Dictionary<GameObject, PhysicsCharacter>();

	private Dictionary<Collider2D, RampPhysicsCollider> rampMap = new Dictionary<Collider2D, RampPhysicsCollider>();

	private Pool physicsPool;

	protected override void Awake()
	{
		base.Awake();
		physicsPool = new Pool();
		physicsPool.PopulatePool(PhysicsCharacter, 0, shouldCheckCallbacks: false);
		physicsPool.PopulatePool(rampPhysicsCollider, 0);
	}

	public PhysicsCharacter AddPhysicsCharacter(Movement movement, bool isIronTube, int trackOffset = 0)
	{
		if (movementMap.ContainsKey(movement))
		{
			return movementMap[movement];
		}
		PhysicsCharacter physicsCharacter = physicsPool.Instantiate<PhysicsCharacter>(PhysicsCharacter, base.transform);
		movementMap[movement] = physicsCharacter;
		gameObjectMap[physicsCharacter.gameObject] = physicsCharacter;
		physicsCharacter.Initialize(movement, isIronTube, trackOffset);
		return physicsCharacter;
	}

	public bool PhysicsCharacterExists(Movement movement)
	{
		return movementMap.ContainsKey(movement);
	}

	public bool PhysicsCharacterExists(GameObject go)
	{
		return gameObjectMap.ContainsKey(go);
	}

	public void SetPlayerSpeed(float multiplier)
	{
		float num = 0.9f;
		float acceleration = Mathf.Max(multiplier * num, 1f);
		GetPhysicsCharacter(ControllerBehaviour<PlayerController>.Instance.Movement).SetUpgradeSpeed(multiplier);
		GetPhysicsCharacter(ControllerBehaviour<PlayerController>.Instance.Movement).SetAcceleration(acceleration);
		float num2 = Mathf.Max(multiplier * SingletonBehaviour<GameController>.Instance.GameSettings.OpponentUpgradeMultiplier, 1f);
		float acceleration2 = Mathf.Max(num2 * num, 1f);
		foreach (Movement key in movementMap.Keys)
		{
			if (key.GetInstanceID() != ControllerBehaviour<PlayerController>.Instance.Movement.GetInstanceID())
			{
				GetPhysicsCharacter(key).SetUpgradeSpeed(num2);
				GetPhysicsCharacter(key).SetAcceleration(acceleration2);
			}
		}
	}

	public void SetPlayerBoost(float multiplier)
	{
		GetPhysicsCharacter(ControllerBehaviour<PlayerController>.Instance.Movement).SetBoost(multiplier);
		float boost = Mathf.Max(multiplier * SingletonBehaviour<GameController>.Instance.GameSettings.OpponentUpgradeMultiplier, 1f);
		foreach (Movement key in movementMap.Keys)
		{
			if (key.GetInstanceID() != ControllerBehaviour<PlayerController>.Instance.Movement.GetInstanceID())
			{
				GetPhysicsCharacter(key).SetBoost(boost);
			}
		}
	}

	public PhysicsCharacter GetPhysicsCharacter(Movement movement)
	{
		if (PhysicsCharacterExists(movement))
		{
			return movementMap[movement];
		}
		UnityEngine.Debug.LogError("Tried to get PhysicsCharacter with " + movement + " that does not exist!");
		return null;
	}

	public PhysicsCharacter GetPhysicsCharacter(GameObject go)
	{
		if (PhysicsCharacterExists(go))
		{
			return gameObjectMap[go];
		}
		UnityEngine.Debug.LogError("Tried to get PhysicsCharacter with " + go + " that does not exist!");
		return null;
	}

	public RampPhysicsCollider GetPhysicsRamp(Collider2D rampCollider)
	{
		return rampMap[rampCollider];
	}

	public override void Initialize()
	{
		foreach (PhysicsCharacter value in movementMap.Values)
		{
			physicsPool.Destroy(value);
		}
		movementMap.Clear();
		gameObjectMap.Clear();
	}

	public void InitializeRamps()
	{
		foreach (RampPhysicsCollider value in rampMap.Values)
		{
			physicsPool.Destroy(value);
		}
		rampMap.Clear();
		float[] nodeDistances = SingletonBehaviour<TrackController>.Instance.Track.Slide.NodeDistances;
		Ramp[] ramps = SingletonBehaviour<TrackController>.Instance.Track.Slide.Ramps;
		foreach (Ramp ramp in ramps)
		{
			float y = 0f - nodeDistances[ramp.GetRampIndex() + 1];
			float x = (0f - ramp.GetRampHorizontal()) * SlideCircumference;
			RampPhysicsCollider rampPhysicsCollider = physicsPool.Instantiate<RampPhysicsCollider>(this.rampPhysicsCollider, base.transform);
			rampPhysicsCollider.transform.position = new Vector3(x, y, 0f);
			rampPhysicsCollider.Initialize(ramp.GetRampRotation());
			rampMap[rampPhysicsCollider.GetComponent<Collider2D>()] = rampPhysicsCollider;
		}
	}

	public override void Enable()
	{
		foreach (PhysicsCharacter value in movementMap.Values)
		{
			value.enabled = true;
		}
	}

	public override void Disable()
	{
		foreach (PhysicsCharacter value in movementMap.Values)
		{
			value.SetPlayerFinished();
		}
	}

	public void MovePhysicsCharacterHorizontally(Movement movement, float delta)
	{
		if (movementMap.ContainsKey(movement))
		{
			movementMap[movement].Move(delta);
		}
		else
		{
			UnityEngine.Debug.LogError("Tried to call Move() on PhysicsCharacter that was not added to collection");
		}
	}

	public void SetPhysicsCharacterSpeed(Movement movement, float speed)
	{
		if (movementMap.ContainsKey(movement))
		{
			movementMap[movement].SetSpeed(speed);
		}
		else
		{
			UnityEngine.Debug.LogError("Tried to call SetPhysicsCharacterSpeed() on PhysicsCharacter that was not added to collection");
		}
	}

	public void AddSpeedBoostToCharacter(Movement movement)
	{
		if (movementMap.ContainsKey(movement))
		{
			movementMap[movement].SetSpeedBoost();
		}
		else
		{
			UnityEngine.Debug.LogError("Tried to call AddSpeedBoostToCharacter() on PhysicsCharacter that was not added to collection");
		}
	}
}
