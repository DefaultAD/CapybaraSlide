// DecompilerFi decompiler from Assembly-CSharp.dll class: DebugAction
using HyperCasual.PsdkSupport;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class DebugAction : MonoBehaviour
{
	private Button button;

	private void Awake()
	{
		button = GetComponent<Button>();
	}

	public void ResetGameSettings()
	{
		SingletonBehaviour<GameController>.Instance.ResetDefaultGameSettings();
	}

	public void ReloadScene()
	{
		SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel = Mathf.Max(SingletonBehaviour<GameController>.Instance.GameSettings.TrackLevel, 1);
		if (SaveController.GetAdsEnabled() != SingletonBehaviour<GameController>.Instance.GameSettings.AdsEnabled)
		{
			if (SingletonBehaviour<GameController>.Instance.GameSettings.AdsEnabled)
			{
				SaveController.EnableAds();

				UnityEngine.Debug.Log("DebugAction: Enabled ads!");
			}
			else
			{

				SaveController.DisableAds();
				UnityEngine.Debug.Log("DebugAction: Disabled ads!");
			}
		}
		SceneManager.LoadScene(GameController.MainSceneIndexOffset, LoadSceneMode.Single);
	}

	public void ResetGameSettingsAndReload()
	{
		ResetGameSettings();
		ReloadScene();
	}

	public void SwitchTrackAndReload()
	{
		int trackLevel = SingletonBehaviour<GameController>.Instance.GameSettings.TrackLevel + 1;
		SingletonBehaviour<GameController>.Instance.GameSettings.TrackLevel = trackLevel;
		ReloadScene();
	}

	public void DebugAddPoints(int points = 10000)
	{
		SaveController.AddPoints(points);
	}

	public void DebugAddTrophies()
	{
		SaveController.AddTrophies(100);
	}
}
