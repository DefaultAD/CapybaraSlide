// DecompilerFi decompiler from Assembly-CSharp.dll class: Movement
using System;
using System.Collections;
using UnityEngine;

public class Movement : MonoBehaviour
{
	[Header("References")]
	[SerializeField]
	private Transform tube;

	[SerializeField]
	private ParticleSystem backBumpParticleSystem;

	[SerializeField]
	private ParticleSystem[] trailParticleSystems;

	[Header("Settings")]
	[SerializeField]
	private float rotationSpeedMultiplier = 15f;

	[SerializeField]
	private float yOffset;

	private readonly Quaternion tubeRotationOffset = Quaternion.Euler(-90f, 0f, 0f);

	private Transform slideTransform;

	private Transform cachedTransform;

	private PathNode[] nodes;

	private float[] nodeDistances;

	private float initialDistanceCovered;

	private float rotation;

	private Vector3 startNodePosition;

	private Vector3 targetNodePosition;

	private Vector3 startForward;

	private Vector3 targetForward;

	private Vector3 startUp;

	private Vector3 targetUp;

	private Vector2 faceDirection;

	private Vector3 endAreaPosition;

	private bool isJumping;

	private float rotationOffset;

	private float finishReachedTime;

	private float torque;

	private float verticalBlend;

	private Animator animator;

	private TrailRenderer[] trailRenderers;

	private Character character;

	private bool isBackBumpGlowEffect;

	private bool isBackBumpParticleEffect;

	private Coroutine backBumpColorEffect;

	private readonly float backBumpEffectSpeed = 2.5f;

	private readonly float backBumpEffectAlphaMax = 1f;

	public Vector3 Forward
	{
		get;
		private set;
	}

	public Vector3 Up
	{
		get;
		private set;
	}

	public Vector3 Right
	{
		get;
		private set;
	}

	public Vector3 StartRight
	{
		get;
		private set;
	}

	public Vector3 RotatedUp
	{
		get;
		private set;
	}

	public Vector3 PositionOnPath
	{
		get;
		private set;
	}

	public Vector3 WorldPosition
	{
		get;
		private set;
	}

	public int CurrentNodeIndex
	{
		get;
		private set;
	}

	public float DistanceCovered
	{
		get;
		private set;
	}

	public float Horizontal
	{
		get;
		private set;
	}

	public float RawHorizontal
	{
		get;
		private set;
	}

	public bool IsFinishTransitionDone
	{
		get;
		private set;
	}

	public bool IsFinishLineReached
	{
		get;
		private set;
	}

	public bool IsNearFinishLine
	{
		get;
		private set;
	}

	public Transform Tube => tube;

	public Transform CachedTransform
	{
		get
		{
			if (cachedTransform == null)
			{
				return base.transform;
			}
			return cachedTransform;
		}
	}

	public float CurrentElevation
	{
		get;
		private set;
	}

	public PathNode CurrentTransformedNode
	{
		get
		{
			if (nodes != null && CurrentNodeIndex < nodes.Length - 1 && slideTransform != null)
			{
				Vector3 position = slideTransform.TransformPoint(nodes[CurrentNodeIndex].Position);
				Vector3 normal = slideTransform.TransformDirection(nodes[CurrentNodeIndex].Normal);
				return new PathNode(position, normal);
			}
			return new PathNode(Vector2.zero, Vector2.zero);
		}
	}

	public PathNode NextTransformedNode
	{
		get
		{
			if (nodes != null && CurrentNodeIndex < nodes.Length - 2 && slideTransform != null)
			{
				Vector3 position = slideTransform.TransformPoint(nodes[CurrentNodeIndex + 1].Position);
				Vector3 normal = slideTransform.TransformDirection(nodes[CurrentNodeIndex + 1].Normal);
				return new PathNode(position, normal);
			}
			return new PathNode(Vector2.zero, Vector2.zero);
		}
	}

	public static float SlideHeight
	{
		get;
	} = 2.15f;


	public static float SlideWidght
	{
		get;
	} = 2.78f;


	private void Awake()
	{
		animator = GetComponent<Animator>();
		trailRenderers = GetComponentsInChildren<TrailRenderer>();
		character = GetComponent<Character>();
	}

	private void Start()
	{
		isBackBumpGlowEffect = SingletonBehaviour<GameController>.Instance.GameSettings.IsBackBumpGlow;
	}

	private void Update()
	{

        RotatedUp = Quaternion.AngleAxis(rotation, Forward) * Up;
		Vector3 a = Quaternion.AngleAxis(rotation, Forward) * Right;
		if (Forward.sqrMagnitude > 0f && !IsFinishLineReached)
		{
			float angle = Mathf.Atan2(faceDirection.y, faceDirection.x) * 57.29578f;
			Quaternion quaternion = Quaternion.AngleAxis(angle, RotatedUp);
			Quaternion rhs = Quaternion.AngleAxis(0f - rotationOffset, Right) * quaternion;
			Quaternion b = Quaternion.LookRotation(quaternion * rhs * Forward, rhs * RotatedUp) * tubeRotationOffset;
			tube.rotation = Quaternion.Slerp(tube.rotation, b, Time.deltaTime * rotationSpeedMultiplier);
		}
		if (IsFinishLineReached)
		{
			float num = (cachedTransform.position - endAreaPosition).sqrMagnitude / 10f;
			base.transform.position = Vector3.MoveTowards(base.transform.position, endAreaPosition, Time.deltaTime * num);
			IsFinishTransitionDone |= ((tube.position - endAreaPosition).sqrMagnitude < 30f);
			float y = Mathf.Exp(0f - finishReachedTime) * Mathf.Cos((float)Math.PI * 2f * finishReachedTime) * 200f;
			Quaternion b2 = Quaternion.Euler(0f, y, 0f) * tubeRotationOffset;
			tube.rotation = Quaternion.Slerp(tube.rotation, b2, Time.deltaTime * 5f);
			finishReachedTime += Time.deltaTime / 3f;
			
		}
		int num2 = 1;
		TrailRenderer[] array = trailRenderers;
		foreach (TrailRenderer trailRenderer in array)
		{
			trailRenderer.transform.position = cachedTransform.position + a * 1f * num2 + RotatedUp * 0.8f + -Forward * 1f;
			num2 = -num2;
		}
	}

	private void MoveToNextNode()
	{
		CurrentNodeIndex++;
		if (CurrentNodeIndex < nodes.Length - 1)
		{
			startUp = slideTransform.TransformDirection(nodes[CurrentNodeIndex].Normal);
			targetUp = slideTransform.TransformDirection(nodes[CurrentNodeIndex + 1].Normal);
			startNodePosition = slideTransform.TransformPoint(nodes[CurrentNodeIndex].Position) + startUp * SlideHeight;
			targetNodePosition = slideTransform.TransformPoint(nodes[CurrentNodeIndex + 1].Position) + targetUp * SlideHeight;
			startForward = Forward;
			targetForward = (targetNodePosition - startNodePosition).normalized;
			StartRight = Vector3.Cross(targetUp, targetForward);
		}
	}

	private void MoveToPreviousNode()
	{
		CurrentNodeIndex--;
		startUp = slideTransform.TransformDirection(nodes[CurrentNodeIndex].Normal);
		targetUp = slideTransform.TransformDirection(nodes[CurrentNodeIndex + 1].Normal);
		startNodePosition = slideTransform.TransformPoint(nodes[CurrentNodeIndex].Position) + startUp * SlideHeight;
		targetNodePosition = slideTransform.TransformPoint(nodes[CurrentNodeIndex + 1].Position) + targetUp * SlideHeight;
		startForward = Forward;
		targetForward = (targetNodePosition - startNodePosition).normalized;
	}

	public void Initialize(int trackOffset = 0)
	{
		nodes = SingletonBehaviour<TrackController>.Instance.Track.Slide.Nodes;
		nodeDistances = SingletonBehaviour<TrackController>.Instance.Track.Slide.NodeDistances;
		slideTransform = SingletonBehaviour<TrackController>.Instance.Track.Slide.transform;
		CurrentNodeIndex = trackOffset;
		cachedTransform = base.transform;
		CurrentNodeIndex = trackOffset;
		DistanceCovered = nodeDistances[CurrentNodeIndex];
		initialDistanceCovered = DistanceCovered;
		Vector3 vector = slideTransform.TransformPoint(nodes[CurrentNodeIndex].Position);
		Vector3 forward = slideTransform.TransformPoint(nodes[CurrentNodeIndex + 1].Position) - vector;
		Vector3 vector2 = slideTransform.TransformDirection(nodes[CurrentNodeIndex].Normal);
		PositionOnPath = vector + vector2 * SlideHeight;
		cachedTransform.position = vector;
		tube.rotation = Quaternion.LookRotation(forward, vector2) * tubeRotationOffset;
		IsFinishTransitionDone = false;
		IsFinishLineReached = false;
		IsNearFinishLine = false;
		faceDirection = Vector2.right;
		Forward = forward;
		Right = Vector3.zero;
		Up = vector2;
		RotatedUp = Up;
	
		MoveToNextNode();
	}

	public void Move(MovementData movementData)
	{
		if (IsFinishLineReached)
		{
			return;
		}
		DistanceCovered = movementData.distanceCovered;
		while (CurrentNodeIndex < nodes.Length - 1 && DistanceCovered > nodeDistances[CurrentNodeIndex + 1])
		{
			MoveToNextNode();
		}
		while (CurrentNodeIndex - 1 > 0 && DistanceCovered < nodeDistances[CurrentNodeIndex])
		{
			MoveToPreviousNode();
		}
		if (CurrentNodeIndex >= nodes.Length - 2)
		{
			IsNearFinishLine = true;
		}
		if (DistanceCovered < nodeDistances[nodes.Length - 1])
		{
			RawHorizontal = movementData.rawHorizontal;
			float num2 = Horizontal = Mathf.Clamp(RawHorizontal, -0.95f, 0.95f);
			float t = Mathf.InverseLerp(nodeDistances[CurrentNodeIndex], nodeDistances[CurrentNodeIndex + 1], DistanceCovered);
			Forward = Vector3.Lerp(startForward, targetForward, t).normalized;
			Up = Vector3.Lerp(startUp, targetUp, t).normalized;
			Right = Vector3.Cross(Up, Forward);
			PositionOnPath = Vector3.Lerp(startNodePosition, targetNodePosition, t);
			Vector2 vector = FindEllipseSegmentIntersections(Horizontal);
			float num3 = yOffset;
			if (Mathf.Abs(RawHorizontal) > 1f)
			{
				num3 += Mathf.Abs(RawHorizontal) - 1f;
			}
			rotation = 90f + Mathf.Atan2(vector.y, vector.x) * 57.29578f;
			Vector3 a = Quaternion.AngleAxis(rotation, Forward) * -Up * vector.magnitude;
			CurrentElevation = movementData.jumpYOffset;
			Vector3 vector3 = WorldPosition = PositionOnPath + a * SlideHeight * 2f + Up * num3 + Up * CurrentElevation;
			cachedTransform.position = WorldPosition;
		}
		else
		{
			if (movementData.horizontalDelta > 0.1f)
			{
				endAreaPosition = SingletonBehaviour<TrackController>.Instance.Track.GetEndAreaNode(EndAreaLocation.Right);
			}
			else if (movementData.horizontalDelta < -0.1f)
			{
				endAreaPosition = SingletonBehaviour<TrackController>.Instance.Track.GetEndAreaNode(EndAreaLocation.Left);
			}
			else
			{
				endAreaPosition = SingletonBehaviour<TrackController>.Instance.Track.GetEndAreaNode(EndAreaLocation.Center);
			}
			IsFinishLineReached = true;
			finishReachedTime = 0f;
			ControllerBehaviour<EffectController>.Instance.InstantiateSplashParticles(base.transform.position, base.transform.rotation, base.transform);
			ControllerBehaviour<EffectController>.Instance.InstantiateRippleParticles(base.transform.position, base.transform.rotation, base.transform);
		}
		Vector2 nextFaceDirection = movementData.nextFaceDirection;
		float y = nextFaceDirection.y;
		Vector2 nextFaceDirection2 = movementData.nextFaceDirection;
		faceDirection = new Vector2(y, nextFaceDirection2.x);
		rotationOffset = movementData.offsetRotation;
		bool flag = !Mathf.Approximately(movementData.jumpYOffset, 0f);
		if (flag && !isJumping)
		{
			SetParticleSystemsActive(trailParticleSystems, active: false);
		}
		else if (!flag && isJumping)
		{
			SetParticleSystemsActive(trailParticleSystems, active: true);
		}
		isJumping = flag;
		torque = movementData.torque;
		verticalBlend = movementData.verticalBlend;
	}

	public static Vector2 FindEllipseSegmentIntersections(float horizontal)
	{
		float num = SlideWidght / 2f;
		float num2 = SlideHeight / 2f;
		Vector2 vector = new Vector2(num * horizontal, num2);
		Vector2 vector2 = new Vector2(num * horizontal, 0f - num2);
		float num3 = (vector2.x - vector.x) * (vector2.x - vector.x) / num / num + (vector2.y - vector.y) * (vector2.y - vector.y) / num2 / num2;
		float num4 = 2f * vector.x * (vector2.x - vector.x) / num / num + 2f * vector.y * (vector2.y - vector.y) / num2 / num2;
		float num5 = vector.x * vector.x / num / num + vector.y * vector.y / num2 / num2 - 1f;
		float num6 = num4 * num4 - 4f * num3 * num5;
		float num7 = (!Mathf.Approximately(num6, 0f)) ? ((0f - num4 + Mathf.Sqrt(num6)) / 2f / num3) : ((0f - num4) / 2f / num3);
		float x = vector.x + (vector2.x - vector.x) * num7;
		float y = vector.y + (vector2.y - vector.y) * num7;
		return new Vector2(x, y);
	}

	private static void SetParticleSystemsActive(ParticleSystem[] particleSystems, bool active)
	{
		foreach (ParticleSystem particleSystem in particleSystems)
		{
			if (active)
			{
				particleSystem.Play(withChildren: true);
			}
			else
			{
				particleSystem.Stop(withChildren: true, ParticleSystemStopBehavior.StopEmitting);
			}
		}
	}

	public void ShowBackBumpEffect()
	{
		if (!(backBumpParticleSystem != null))
		{
			return;
		}
		if (isBackBumpParticleEffect)
		{
			backBumpParticleSystem.Play();
		}
		if (isBackBumpGlowEffect)
		{
			if (backBumpColorEffect != null)
			{
				StopCoroutine(backBumpColorEffect);
			}
			backBumpColorEffect = StartCoroutine(BackBumpColorEffect(backBumpEffectSpeed, 0f, backBumpEffectAlphaMax));
		}
	}

	private IEnumerator BackBumpColorEffect(float speed = 1f, float alphaMin = 0f, float alphaMax = 1f)
	{
		float alpha4;
		for (alpha4 = alphaMin; alpha4 < alphaMax; alpha4 = Mathf.Min(alpha4, alphaMax))
		{
			yield return null;
			character.SetOverlayMaterialColor(alpha4);
			alpha4 += Time.deltaTime * speed;
		}
		for (alpha4 = alphaMax; alpha4 > alphaMin; alpha4 = Mathf.Max(alpha4, alphaMin))
		{
			yield return null;
			character.SetOverlayMaterialColor(alpha4);
			alpha4 -= Time.deltaTime * speed;
		}
		character.SetOverlayMaterialColor(alphaMin);
		yield return null;
	}
}
