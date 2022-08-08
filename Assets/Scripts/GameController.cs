// DecompilerFi decompiler from Assembly-CSharp.dll class: GameController
using HyperCasual.PsdkSupport;
using HyperCasual.RateUs;
using System;
using System.Collections;
using TabTale;
using Tabtale.GameEvents;
using UnityEngine;
using UnityEngine.SceneManagement;
//using GoogleMobileAds.Api;

public class GameController : SingletonBehaviour<GameController>
{
    // rate us count down

   

    [HideInInspector]
    public float timeToShowRate;
    [HideInInspector]
    public bool rateBool = false;

    [Header("RateUs Settings")]
    public float startTimeToShowRate = 120;
    public GameObject Rateus;
    //
   
    public static readonly int MainSceneIndexOffset = 1;
	public const string IRON_TUBE_DASHBOARD_KEY = "irontube";

	private bool didLoad;
    [Header("Game States")]
    public GameState GameState;

	public GameRaceState gameRaceState = GameRaceState.Start;

	[Header("Settings")]
	[SerializeField]
	private int targetFrameRate = 60;

	[SerializeField]
	private GameSettings gameSettings = new GameSettings();

	[SerializeField]
	private GameEventArg levelStarted;

	[SerializeField]
	private SessionState sessionState;

	private GameSettings defaultGameSettings = new GameSettings();

	private static bool isInitialized;

	public bool playerWonRace;

	public GameSettings GameSettings => gameSettings;

	public SaveSettings SaveSettings
	{
		get;
		private set;
	}

	public int playerBumpedByOpponents
	{
		get;
		private set;
	}

	public int opponentsBumpedByPlayer
	{
		get;
		private set;
	}

	public event Action<GameState, GameState> GameStateChangedEvent = delegate
	{
	};

	protected override void Awake()
	{        
		Time.timeScale = 0f;
		//initialisation rating 
		//Advertisements.Instance.ShowBanner(BannerPosition.BOTTOM, BannerType.SmartBanner);
        if (!PlayerPrefs.HasKey("ALreadyrate"))
        {
            PlayerPrefs.SetInt("ALreadyrate", 0);
        }
        timeToShowRate = startTimeToShowRate;

        base.Awake();
		if (!isInitialized)
		{
			Application.targetFrameRate = targetFrameRate;
			defaultGameSettings = new GameSettings(gameSettings);
			SaveSettings = SaveController.Load();
			GameSettings.TrackLevel = SaveSettings.TotalTrackLevel;
			gameSettings.AdsEnabled = SaveController.GetAdsEnabled();
			SceneManager.sceneLoaded += OnSceneLoaded;

			sessionState.isReload = false;
			sessionState.isRevive = false;
			isInitialized = true;
		}
	}

	private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
	{
		if (scene.buildIndex == MainSceneIndexOffset && mode != LoadSceneMode.Additive)
		{
			UnityEngine.Debug.Log("GameController: Loaded Main scene.");
			SetGameState(GameState.Loading);
			SetGameRaceState(GameRaceState.Start);
		}
		else if (scene.buildIndex > MainSceneIndexOffset && mode == LoadSceneMode.Additive)
		{
			UnityEngine.Debug.Log("GameController: Loaded Track scene: " + scene.name);
			StartCoroutine(LateInitialize());
		}
		else
		{
			UnityEngine.Debug.Log("GameController: Loaded Pre-Main scene: " + scene.name);
		}
	}


    private void Update()
    {
        //if (timeToShowRate > 0 )
        //{
        //    timeToShowRate -= Time.unscaledDeltaTime;

        //}else if (timeToShowRate <= 0 && rateBool == false  )
        //    {
        //    ShowRateUs();

        //}
      
    }
    //caroutine for rate us
    //private void ShowRateUs()
    //{
    //    if (PlayerPrefs.GetInt("ALreadyrate")==0)
    //    {
    //        rateBool = true;

    //        Rateus.SetActive(true);
    //        Debug.Log("show rate us");
    //    }

     
    //}

    
    private IEnumerator LateInitialize()
	{
		yield return null;
		SetGameState(GameState.Start);
		SetGameRaceState(GameRaceState.Start);
	}

	internal void SetGameState(GameState gameState)
	{
		if (IsGamePaused())
		{
			UnpauseGame();
		}
		if (gameState != 0)
		{
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
		}
		switch (gameState)
		{
		case GameState.Loading:
			ControllerBehaviour<ViewController>.Instance.SwitchView(ViewState.Loading);
			SingletonBehaviour<TrackController>.Instance.Initialize();
			break;
		case GameState.Start:
			ControllerBehaviour<UIParticleController>.Instance.Initialize();
			ControllerBehaviour<PhysicsController>.Instance.Initialize();
			ControllerBehaviour<DebugController>.Instance.Initialize();
			SingletonBehaviour<AudioController>.Instance.Initialize();
			ControllerBehaviour<ViewController>.Instance.SwitchView(ViewState.Start);
			ControllerBehaviour<ScoreController>.Instance.Initialize();
			ControllerBehaviour<PlayerController>.Instance.Initialize();
			ControllerBehaviour<OpponentController>.Instance.Initialize();
			ControllerBehaviour<CameraController>.Instance.Initialize();
			SingletonBehaviour<TrackController>.Instance.InitializeTrack();
			ControllerBehaviour<PhysicsController>.Instance.InitializeRamps();
			ControllerBehaviour<TaskController>.Instance.Initialize();
			ControllerBehaviour<TutorialController>.Instance.EnableUpgradeTutorial();
			if (SaveController.GetAdsEnabled())
			{
                    Debug.Log("show ads");

                }

                break;
		case GameState.Race:
			ResetBumpCounters();
			playerWonRace = false;
			ControllerBehaviour<TaskController>.Instance.Initialize();
			ControllerBehaviour<ViewController>.Instance.SwitchView(ViewState.Race);
			ControllerBehaviour<ScoreController>.Instance.Enable();
			ControllerBehaviour<UpgradeController>.Instance.InitializeUpgradeValues();
			ControllerBehaviour<PlayerController>.Instance.Enable();
			ControllerBehaviour<OpponentController>.Instance.Enable();
			ControllerBehaviour<CameraController>.Instance.Enable();
			ControllerBehaviour<PhysicsController>.Instance.Enable();
			ControllerBehaviour<TaskController>.Instance.Enable();
			ControllerBehaviour<TutorialController>.Instance.EnableMovementTutorial();
			levelStarted.Raise(ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel);
			if (SaveController.GetAdsEnabled())
			{
                    Debug.Log("show ads");
                }
                else
			{
                    Debug.Log("show ads");
                }
                break;
		case GameState.Score:
			ControllerBehaviour<ViewController>.Instance.SwitchView(ViewState.Score);
			ControllerBehaviour<ScoreController>.Instance.Disable();
			ControllerBehaviour<PlayerController>.Instance.Disable();
			ControllerBehaviour<CameraController>.Instance.Disable();
			ControllerBehaviour<PhysicsController>.Instance.Disable();
			ControllerBehaviour<TaskController>.Instance.Disable();
			SaveCurrentSettings();
			if (SaveController.GetAdsEnabled())
			{
                    //Advertisements.Instance.ShowInterstitial();
                }
                else
			{
                    Debug.Log("show ads");
                }
                break;
		}
		this.GameStateChangedEvent(GameState, gameState);
		GameState = gameState;
		UnityEngine.Debug.Log("Set game state: " + gameState);
	}

	public void SetGameRaceState(GameRaceState _gameRaceState)
	{
		gameRaceState = _gameRaceState;
	}

	internal bool IsGamePaused()
	{
		return Time.timeScale <= Mathf.Epsilon;
	}

	internal void PauseGame()
	{
		SetGameRaceState(GameRaceState.Pause);
		Time.timeScale = 0f;
	}	
	internal void UnpauseGame()
	{
		SetGameRaceState(GameRaceState.Race);
		Time.timeScale = 1f;
	}

	internal void SaveCurrentSettings()
	{
		SaveController.Save(SaveSettings);
		GameSettings.TrackLevel = SaveSettings.TotalTrackLevel;
	}

	internal void ResetDefaultGameSettings()
	{
		gameSettings = new GameSettings(defaultGameSettings);
		SaveSettings = SaveController.ResetSave();
	}

	private void ResetBumpCounters()
	{
		playerBumpedByOpponents = 0;
		opponentsBumpedByPlayer = 0;
	}

	public void UpdatePlayerBumped()
	{
		playerBumpedByOpponents++;
	}

	public void UpdateOpponentBumped()
	{
		opponentsBumpedByPlayer++;
	}



	private void OnApplicationFocus(bool focus)
	{
		if (GameState == GameState.Race && !focus)
		{
			PauseGame();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Pause);
		}
	}

	private void OnApplicationPause(bool pause)
	{
		if (GameState == GameState.Race && pause)
		{
			PauseGame();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Pause);
		}
	}

	public void OnPsdkPause()
	{
		if (GameState == GameState.Race && gameRaceState == GameRaceState.Race && !ControllerBehaviour<ViewController>.Instance.IsPopupViewActive(PopupViewState.Pause))
		{
			PauseGame();
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Pause);
		}
	}
}
