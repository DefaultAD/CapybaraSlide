// DecompilerFi decompiler from Assembly-CSharp.dll class: CameraController
using System.Collections;
using UnityEngine;

public class CameraController : ControllerBehaviour<CameraController>
{
	[Header("Settings")]
	[SerializeField]
	private float playerHorizontalPositionSway = 1f;

	[SerializeField]
	private float playerHorizontalRotationSway = 1f;

	[SerializeField]
	private float playerHorizontalSmoothing = 10f;

	[SerializeField]
	private float playerElevationPositionMultiplier = 0.2f;

	[SerializeField]
	private float playerElevationRotationMultiplier = 1f;

	[SerializeField]
	private bool isCameraPredictionEnabled = true;

	[Header("References")]
	[SerializeField]
	private Camera mainCamera;

	[SerializeField]
	private Movement playerMovement;

	private Slide currentSlide;

	private int cameraPredictionNodeOffset;

	private Vector3 offsetPosition;

	private Vector3 offsetRotation;

	private float positionEasing;

	private float rotationEasing;

	private Vector3 up;

	private Vector3 forward;

	private Vector3 velocity;

	private bool isCameraEnabled;

	private Coroutine speedBoosterCoroutine;

	private Vector3 playerPositionOffset;

	private Vector3 playerRotationOffset;

	private float forwardMultiplier;

	private float rightMultiplier;

	private float distanceMultiplier;

	private float sideOffsetRotation;

	private float sideDistance;

	private float additionalRotation;

	private readonly float baseSmoothSpeed = 0.5f;

	private readonly float speedBoosterFovMultiplier = 1.4f;

	private readonly float speedBoosterTransitionIn = 2f;

	private readonly float speedBoosterTransitionOut = 1f;

	private readonly float speedBoosterFovMax = 135f;

	public Camera Camera => mainCamera;

	public override void Initialize()
	{
		Disable();
		currentSlide = SingletonBehaviour<TrackController>.Instance.Track.Slide;
		if (SingletonBehaviour<GameController>.Instance.GameSettings.CinematicMode == 0)
		{
			forwardMultiplier = 1f;
			rightMultiplier = 1f;
			distanceMultiplier = 1f;
			sideOffsetRotation = 0f;
			sideDistance = 0f;
			additionalRotation = 0f;
		}
		else if (SingletonBehaviour<GameController>.Instance.GameSettings.CinematicMode == 1)
		{
			forwardMultiplier = -1f;
			rightMultiplier = -1f;
			distanceMultiplier = 22f;
			sideOffsetRotation = 0f;
			sideDistance = 0f;
			additionalRotation = 20f;
		}
		else if (SingletonBehaviour<GameController>.Instance.GameSettings.CinematicMode == 2)
		{
			forwardMultiplier = 1f;
			rightMultiplier = -1f;
			distanceMultiplier = -1f;
			sideOffsetRotation = 90f;
			sideDistance = 12f;
			additionalRotation = 35f;
		}
		else if (SingletonBehaviour<GameController>.Instance.GameSettings.CinematicMode == 3)
		{
			forwardMultiplier = 1f;
			rightMultiplier = 1f;
			distanceMultiplier = -1f;
			sideOffsetRotation = -90f;
			sideDistance = 12f;
			additionalRotation = 35f;
		}
		mainCamera.fieldOfView = SingletonBehaviour<GameController>.Instance.GameSettings.CameraZoom;
		cameraPredictionNodeOffset = SingletonBehaviour<GameController>.Instance.GameSettings.CameraPrediction;
		offsetPosition = new Vector3(sideDistance, SingletonBehaviour<GameController>.Instance.GameSettings.CameraElevation + additionalRotation / 3f, SingletonBehaviour<GameController>.Instance.GameSettings.CameraDistance * distanceMultiplier);
		offsetRotation = new Vector3(SingletonBehaviour<GameController>.Instance.GameSettings.CameraRotation + additionalRotation, sideOffsetRotation, 0f);
		positionEasing = baseSmoothSpeed * SingletonBehaviour<GameController>.Instance.GameSettings.CameraPositionEasing;
		rotationEasing = SingletonBehaviour<GameController>.Instance.GameSettings.CameraRotationEasing;
		int playerInitialNodeIndex = ControllerBehaviour<PlayerController>.Instance.PlayerInitialNodeIndex;
		Vector3 b = currentSlide.transform.TransformPoint(currentSlide.Nodes[playerInitialNodeIndex].Position);
		Vector3 a = currentSlide.transform.TransformPoint(currentSlide.Nodes[playerInitialNodeIndex + 1].Position);
		up = currentSlide.transform.TransformDirection(currentSlide.Nodes[playerInitialNodeIndex].Normal);
		forward = forwardMultiplier * (a - b).normalized;
		Vector3 a2 = rightMultiplier * Vector3.Cross(up, forward).normalized;
		playerPositionOffset = Vector3.zero;
		playerRotationOffset = Vector3.zero;
		Vector3 b2 = up * (offsetPosition.y + playerPositionOffset.y) - forward * (offsetPosition.z + playerPositionOffset.z) + a2 * (offsetPosition.x + playerPositionOffset.x);
		Vector3 position = currentSlide.transform.TransformPoint(currentSlide.Nodes[playerInitialNodeIndex].Position) + b2;
		Quaternion rotation = Quaternion.LookRotation(forward, up) * Quaternion.Euler(offsetRotation + playerRotationOffset);
		base.transform.position = position;
		base.transform.rotation = rotation;
		velocity = Vector3.zero;
	}

	public override void Enable()
	{
		isCameraEnabled = true;
	}

	public override void Disable()
	{
		isCameraEnabled = false;
	}

	private void FixedUpdate()
	{
		if (isCameraEnabled)
		{
			int b = currentSlide.Nodes.Length - 1;
			int num = Mathf.Min(playerMovement.CurrentNodeIndex + cameraPredictionNodeOffset, b);
			Vector3 b2 = currentSlide.transform.TransformPoint(currentSlide.Nodes[num].Position);
			Vector3 a = currentSlide.transform.TransformPoint(currentSlide.Nodes[Mathf.Min(num + 1, b)].Position);
			Vector3 a2 = currentSlide.transform.TransformDirection(currentSlide.Nodes[num].Normal);
			Vector3 normalized = (a - b2).normalized;
			Vector3 b3 = (!isCameraPredictionEnabled) ? playerMovement.Up : ((a2 + playerMovement.Up) / 2f);
			Vector3 b4 = (!isCameraPredictionEnabled) ? playerMovement.Forward : ((normalized + playerMovement.Forward) / 2f);
			up = Vector3.Lerp(up, b3, Time.fixedDeltaTime * rotationEasing);
			forward = forwardMultiplier * Vector3.Lerp(forward, b4, Time.fixedDeltaTime * rotationEasing);
			Vector3 a3 = rightMultiplier * Vector3.Cross(up, forward).normalized;
			Vector3 vector = currentSlide.transform.TransformPoint(currentSlide.Nodes[playerMovement.CurrentNodeIndex].Position);
			Vector3 a4 = (!(Vector3.Distance(playerMovement.PositionOnPath, Vector3.zero) <= Mathf.Epsilon)) ? playerMovement.PositionOnPath : vector;
			float num2 = Mathf.Clamp(playerMovement.CurrentElevation, 0f, 10f);
			playerPositionOffset = Vector3.Lerp(playerPositionOffset, new Vector3(playerMovement.Horizontal * playerHorizontalPositionSway, num2 * playerElevationPositionMultiplier, 0f), playerHorizontalSmoothing * Time.fixedDeltaTime);
			playerRotationOffset = Vector3.Lerp(playerRotationOffset, new Vector3((0f - num2) * playerElevationRotationMultiplier, playerMovement.Horizontal * (0f - playerHorizontalRotationSway)), playerHorizontalSmoothing * Time.fixedDeltaTime);
			Vector3 b5 = up * (offsetPosition.y + playerPositionOffset.y) - forward * (offsetPosition.z + playerPositionOffset.z) + a3 * (offsetPosition.x + playerPositionOffset.x);
			Vector3 target = a4 + b5;
			Quaternion b6 = Quaternion.LookRotation(forward, up) * Quaternion.Euler(offsetRotation + playerRotationOffset);
			base.transform.position = Vector3.SmoothDamp(base.transform.position, target, ref velocity, positionEasing);
			base.transform.rotation = Quaternion.Slerp(base.transform.rotation, b6, Time.fixedDeltaTime * rotationEasing);
		}
	}

	public void ActivateSpeedBoosterEffect(float speedBoosterMultiplier = 1f)
	{
		if (speedBoosterCoroutine != null)
		{
			StopCoroutine(speedBoosterCoroutine);
		}
		if (isCameraEnabled)
		{
			speedBoosterCoroutine = StartCoroutine(SpeedBoosterEffectCoroutine(speedBoosterMultiplier));
		}
	}

	private IEnumerator SpeedBoosterEffectCoroutine(float speedBoosterMultiplier)
	{
		float defaultFov = SingletonBehaviour<GameController>.Instance.GameSettings.CameraZoom;
		float targetFov = Mathf.Min(defaultFov * Mathf.Max(speedBoosterFovMultiplier * speedBoosterMultiplier, 1f), speedBoosterFovMax);
		float currentFov = Camera.fieldOfView;
		float transitionMin = 0f;
		float transitionMax = 1f;
		float transition3 = 0f;
		float speedIn = speedBoosterTransitionIn;
		float speedOut = speedBoosterTransitionOut;
		while (transition3 < transitionMax - 0.01f)
		{
			transition3 += Time.deltaTime * speedIn;
			transition3 = Mathf.Min(transition3, transitionMax);
			currentFov = Mathf.Lerp(currentFov, targetFov, transition3);
			Camera.fieldOfView = Mathf.Min(currentFov, targetFov);
			yield return null;
		}
		while (transition3 > transitionMin + 0.01f)
		{
			transition3 -= Time.deltaTime * speedOut;
			transition3 = Mathf.Max(transition3, transitionMin);
			currentFov = Mathf.Lerp(defaultFov, currentFov, transition3);
			Camera.fieldOfView = Mathf.Max(currentFov, defaultFov);
			yield return null;
		}
	}
}
