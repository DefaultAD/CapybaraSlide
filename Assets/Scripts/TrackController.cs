// DecompilerFi decompiler from Assembly-CSharp.dll class: TrackController
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TrackController : SingletonBehaviour<TrackController>
{
	[Header("References")]
	[SerializeField]
	private List<Object> trackScenes = new List<Object>();

	[SerializeField]
	[HideInInspector]
	private List<int> trackSceneIndexes = new List<int>();

	[Header("Settings")]
	[SerializeField]
	private List<TrackDifficulty> trackDifficultyOffsets = new List<TrackDifficulty>();

	[SerializeField]
	private List<bool> trackEntrancePosition = new List<bool>();

	private AsyncOperation loadTrackAsync;

	private static bool isInitialized;

	public int TrackEntranceAttachIndex => (CurrentTrackIndex != 1 && CurrentTrackIndex != 3) ? 45 : 55;

	public Track Track
	{
		get;
		private set;
	}

	public int CurrentTrackIndex
	{
		get;
		private set;
	}

	public int TotalTrackAmount => trackSceneIndexes.Count;

	protected override void Awake()
	{
		base.Awake();
		if (!isInitialized)
		{
			isInitialized = true;
		}
	}

	public override void Initialize()
	{
		int trackBuildIndex = CurrentTrackIndex = GetTrackIndexFromTrackLevel(SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel);
		LoadTrackScene(trackBuildIndex);
	}

	private int GetTrackIndexFromTrackLevel(int totalTrackLevel)
	{
		int num = 1;
		num = (totalTrackLevel - 1) % TotalTrackAmount + 1;
		UnityEngine.Debug.Log("TrackController: Track build index: " + num + " / Total track level: " + totalTrackLevel);
		return num;
	}

	private void LoadTrackScene(int trackBuildIndex)
	{
		StartCoroutine(LoadTrackSceneAsync(trackBuildIndex));
	}

	private IEnumerator LoadTrackSceneAsync(int trackBuildIndex)
	{
		trackBuildIndex = Mathf.Clamp(trackBuildIndex, 1, trackSceneIndexes.Count);
		loadTrackAsync = SceneManager.LoadSceneAsync(trackBuildIndex + GameController.MainSceneIndexOffset, LoadSceneMode.Additive);
		while (!loadTrackAsync.isDone)
		{
			yield return null;
		}
		GameObject[] rootGameObjects = SceneManager.GetSceneByBuildIndex(trackBuildIndex + GameController.MainSceneIndexOffset).GetRootGameObjects();
		for (int i = 0; i < rootGameObjects.Length; i++)
		{
			Track component = rootGameObjects[i].transform.GetComponent<Track>();
			if (component != null)
			{
				Track = component;
				CurrentTrackIndex = trackBuildIndex;
				component.Initialize();
				yield break;
			}
		}
		UnityEngine.Debug.LogError("TrackController: Track script not attached to Track in scene!");
	}

	public void InitializeTrack()
	{
		if (!(Track != null))
		{
			return;
		}
		Track.Initialize();
		if (ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel > TotalTrackAmount)
		{
			bool flag = true;
			Track.Slide.RandomizeWaterRampAndSpeedBoosterPositions(flag);
			if (flag)
			{
				UnityEngine.Debug.Log("TrackController: Randomized Water Ramp and Speed Booster horizontal positions only.");
			}
			else
			{
				UnityEngine.Debug.Log("TrackController: Randomized Water Ramp and Speed Booster positions.");
			}
		}
	}

	public int GetTrackDifficultyOffset(int trackBuildIndex)
	{
		int result = 0;
		int num = trackBuildIndex - 1;
		if (num < trackDifficultyOffsets.Count)
		{
			result = trackDifficultyOffsets[num].Difficulty;
		}
		return result;
	}
}
