// DecompilerFi decompiler from Assembly-CSharp.dll class: SkinUnlockView
using MoreMountains.NiceVibrations;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SkinUnlockView : ViewBehaviour
{


	[SerializeField]
	private Button equipButton;

	[SerializeField]
	private Button closeButton;

	[SerializeField]
	private ViewBehaviour[] disabledViews;

	private void OnEnable()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score)
		{
			ViewBehaviour[] array = disabledViews;
			foreach (ViewBehaviour viewBehaviour in array)
			{
				if ((bool)viewBehaviour)
				{
					viewBehaviour.Disable();
				}
			}
		}
		UpdateView();
	}

	private void Update()
	{
		if (ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState != PopupViewState.SkinUnlock)
		{
			return;
		}
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start)
		{
			if (UnityEngine.Input.GetKeyDown(KeyCode.Escape))
			{
				ControllerBehaviour<ViewController>.Instance.HidePopupView(PopupViewState.SkinUnlock, PopupViewState.Skins);
			}
		}
		else if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score && UnityEngine.Input.GetKeyDown(KeyCode.Escape))
		{
			CloseButtonPressed();
		}
	}

	protected override void UpdateView()
	{

	}

	public void CloseButtonPressed()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score)
		{
			closeButton.GetComponent<GameStateAction>().SwitchGameState();
		}
		else
		{
			Disable();
		}
	}

	public void EquipButtonPressed()
	{
       //if( Advertisements.Instance.IsInterstitialAvailable())
       //     {
       //     Advertisements.Instance.ShowInterstitial();
       // }

        SaveController.AddPoints(1000);
        int scene = SceneManager.GetActiveScene().buildIndex;
        SceneManager.LoadScene(scene, LoadSceneMode.Single);
        Time.timeScale = 1;
    }
    public void EquipButtonPressedx5()
    {
        //if (Advertisements.Instance.IsRewardVideoAvailable())
        //{
        //    Advertisements.Instance.ShowRewardedVideo(CompleteMethodx5);
        //}else
        {
            SaveController.AddPoints(1000);

            int scene = SceneManager.GetActiveScene().buildIndex;
            SceneManager.LoadScene(scene, LoadSceneMode.Single);
            Time.timeScale = 1;
        }

    }

    private void CompleteMethodx5(bool completed, string advertiser)
    {


        if (completed == true)
        {
            //give the reward
            SaveController.AddPoints(5000);
            int scene = SceneManager.GetActiveScene().buildIndex;
            SceneManager.LoadScene(scene, LoadSceneMode.Single);
            Time.timeScale = 1;

        }
        else
        {
            //no reward
        }

    }
}
