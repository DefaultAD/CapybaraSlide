// DecompilerFi decompiler from Assembly-CSharp.dll class: PlayerController
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : ControllerBehaviour<PlayerController>
{
	[Header("Settings")]
	[SerializeField]
	private Vector3 startPositionOffset;

	[SerializeField]
	private int playerInitialNodeIndex;

	[SerializeField]
	private int defaultPlayerSkinIndex;

	[SerializeField]
	private bool isRandomPlayerSkin;

	[SerializeField]
	private float positionCheckDelay = 1.5f;

	[Header("References")]
	[SerializeField]
	private Movement playerMovement;

	[SerializeField]
	private Character playerCharacter;

	[SerializeField]
	private PhysicsCharacter physicsCharacter;

	[SerializeField]
	private PlayerPositionView playerPositionView;

	[SerializeField]
	private Material ironTubeMaterial;

	[SerializeField]
	private GameObject crownGameObject;

	[SerializeField]
	private GameObject markerGameObject;

	[Header("Particle System References")]
	[SerializeField]
	private ParticleSystem normalTrailParticles;

	[SerializeField]
	private ParticleSystem sparkAndSmokeTrailParticles;

	private bool isPlayerOnTrack;

	private bool isFinishLineReached;

	private float startX;

	private TrailRenderer[] trailRenderers;

	private float audioTime;

	private int lastInputTouchId;

	private readonly float audioDeltaMultiplier = 0.3f;

	private readonly float audioDeltaTolerance = 0.2f;

	private readonly float audioDelay = 0.5f;

	private Coroutine positionCheckCoroutine;

	private static bool isIronTube;

	public Movement Movement => playerMovement;

	public Character PlayerCharacter => playerCharacter;

	public int PlayerSkinIndex
	{
		get;
		private set;
	}

	public int PlayerInitialNodeIndex => playerInitialNodeIndex;

	protected override void Awake()
	{
		base.Awake();
		ControllerBehaviour<CharacterController>.Instance.AddCharacter(playerMovement.gameObject, playerMovement, isRandomPlayerSkin, defaultPlayerSkinIndex);
		PlayerSkinIndex = SaveController.GetDefaultSkinIndex();
	}

	private void Start()
	{
		if (playerMovement != null)
		{
			trailRenderers = playerMovement.GetComponentsInChildren<TrailRenderer>();
		}
	}

	public override void Initialize()
	{
		Disable();
		Vector3 a = SingletonBehaviour<TrackController>.Instance.Track.Slide.transform.TransformPoint(SingletonBehaviour<TrackController>.Instance.Track.Slide.Nodes[0].Position);
		playerMovement.transform.position = a + startPositionOffset;
		isPlayerOnTrack = false;
		isFinishLineReached = false;
		playerPositionView.Disable(isInstant: true);
		isIronTube = (isIronTube || SingletonBehaviour<GameController>.Instance.GameSettings.IsPlayerIronTube);
		Character character = ControllerBehaviour<CharacterController>.Instance.GetCharacter(playerMovement.gameObject);
		if (isIronTube)
		{
			character.SetCharacterSkin(PlayerSkinIndex, ironTubeMaterial);
		}
		else
		{
			PlayerSkin playerSkin = ControllerBehaviour<CharacterController>.Instance.PlayerSkins[SaveController.GetDefaultSkinIndex()].Initialize(SaveController.GetDefaultSkinTubeIndex());
			ControllerBehaviour<CharacterController>.Instance.ChangeCharacterSkin(character, playerSkin);
		}
		ControllerBehaviour<PhysicsController>.Instance.AddPhysicsCharacter(Movement, isIronTube, playerInitialNodeIndex);
		ControllerBehaviour<PhysicsController>.Instance.SetPhysicsCharacterSpeed(playerMovement, SingletonBehaviour<GameController>.Instance.GameSettings.PlayerSpeedMultiplier);
	}

	public override void Enable()
	{
		SetTrailRendererActive(active: true);
		playerMovement.enabled = true;
		isIronTube = false;
		SingletonBehaviour<GameController>.Instance.GameSettings.IsPlayerIronTube = false;
		if (positionCheckCoroutine != null)
		{
			StopCoroutine(positionCheckCoroutine);
		}
		positionCheckCoroutine = StartCoroutine(CheckPosition());
	}

	public override void Disable()
	{
		SetTrailRendererActive(active: false);
		playerMovement.enabled = false;
	}

	public void RestartGameWithIronTubeActive(bool active, bool reloadScene = false)
	{
		isIronTube = active;
		if (reloadScene)
		{
			SceneManager.LoadScene(GameController.MainSceneIndexOffset, LoadSceneMode.Single);
		}
		else
		{
			SingletonBehaviour<GameController>.Instance.SetGameState(GameState.Start);
		}
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState != GameState.Race)
		{
			return;
		}
		if (audioTime > 0f)
		{
			audioTime -= Time.deltaTime;
		}
		if (!isPlayerOnTrack && Movement.CurrentNodeIndex >= SingletonBehaviour<TrackController>.Instance.TrackEntranceAttachIndex)
		{
			isPlayerOnTrack = true;
			playerPositionView.Enable();
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Landing);
		}
		if (!ControllerBehaviour<TutorialController>.Instance.IsMovementTutorialPassed && Movement.CurrentNodeIndex >= ControllerBehaviour<TutorialController>.Instance.MovementTutorialFinishNodeIndex)
		{
			ControllerBehaviour<TutorialController>.Instance.SetMovementTutorialPassed();
			ControllerBehaviour<TutorialController>.Instance.EnableTipTutorial();
		}
		if (!ControllerBehaviour<TutorialController>.Instance.IsTipTutorialPassed && Movement.CurrentNodeIndex >= ControllerBehaviour<TutorialController>.Instance.TipTutorialFinishNodeIndex)
		{
			ControllerBehaviour<TutorialController>.Instance.SetTipTutorialPassed();
		}
		if (isFinishLineReached)
		{
			return;
		}
		Camera camera = ControllerBehaviour<CameraController>.Instance.Camera;
		Transform transform = camera.transform;
		Plane plane = new Plane(-transform.forward, transform.position + transform.forward);
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		if (Input.GetMouseButton(0))
		{
			int num = Mathf.Max(Screen.height, 640);
			float num2 = (float)num * 0.05f;
			Vector3 mousePosition = UnityEngine.Input.mousePosition;
			float y = mousePosition.y;
			if (y < num2 || y > (float)num - num2)
			{
				return;
			}
			Ray ray = camera.ScreenPointToRay(UnityEngine.Input.GetTouch(0).position);
			Vector3 vector = Vector3.zero;
			if (plane.Raycast(ray, out float enter))
			{
				vector = ray.GetPoint(enter);
			}
			if (vector != Vector3.zero)
			{
				Vector3 vector2 = transform.InverseTransformPoint(vector);
				if (UnityEngine.Input.GetTouch(0).fingerId != lastInputTouchId)
				{
					startX = vector2.x;
				}
				float num3 = vector2.x - startX;
				startX = Mathf.Lerp(startX, vector2.x, Time.deltaTime * gameSettings.InputResponsiveness);
				float num4 = num3 * gameSettings.InputSensitivity;
				ControllerBehaviour<PhysicsController>.Instance.MovePhysicsCharacterHorizontally(playerMovement, num4);
				if (audioTime <= 0f)
				{
					float num5 = num4 * audioDeltaMultiplier;
					if (num5 > audioDeltaTolerance || num5 < 0f - audioDeltaTolerance)
					{
						float volumeScale = Mathf.Clamp(num5, -1f, 1f);
						SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.Move, volumeScale);
						audioTime = audioDelay;
					}
				}
			}
			lastInputTouchId = UnityEngine.Input.GetTouch(0).fingerId;
		}
		else
		{
			lastInputTouchId = -1;
		}
		if (!IsFinishLineReached())
		{
			return;
		}
		isFinishLineReached = true;
		ControllerBehaviour<ScoreController>.Instance.SetRaceOver();
		ControllerBehaviour<CharacterController>.Instance.SaveCharacterOrder();
		SetTrailRendererActive(active: false);
		if (positionCheckCoroutine != null)
		{
			StopCoroutine(positionCheckCoroutine);
			if (ControllerBehaviour<CharacterController>.Instance.MovementsInSavedOrder[0] != playerMovement)
			{
				crownGameObject.SetActive(value: false);
			}
		}
	}

	public bool IsFinishLineReached()
	{
		return playerMovement.IsNearFinishLine;
	}

	public bool IsFinishTransitionDone()
	{
		return playerMovement.IsFinishTransitionDone;
	}

	public bool IsIronTube()
	{
		return isIronTube;
	}

	private void SetTrailRendererActive(bool active)
	{
		TrailRenderer[] array = trailRenderers;
		foreach (TrailRenderer trailRenderer in array)
		{
			trailRenderer.gameObject.SetActive(active);
		}
		sparkAndSmokeTrailParticles.gameObject.SetActive(active && isIronTube);
		normalTrailParticles.gameObject.SetActive(active && !isIronTube);
	}

	public int GetBumpedByOthers()
	{
		return physicsCharacter.playerBumpedByOpponentsAmount;
	}

	public int GetBumpedInOthers()
	{
		return physicsCharacter.opponentsBumpedByPlayerAmount;
	}

	private IEnumerator CheckPosition()
	{
		while (!playerMovement.IsFinishLineReached)
		{
			if (crownGameObject != null)
			{
				int playerRacePosition = ControllerBehaviour<CharacterController>.Instance.GetPlayerRacePosition();
				if (playerRacePosition == 1 != crownGameObject.activeInHierarchy)
				{
					crownGameObject.SetActive(playerRacePosition == 1);
					markerGameObject.SetActive(playerRacePosition != 1);
				}
			}
			yield return new WaitForSeconds(positionCheckDelay);
		}
	}
}
