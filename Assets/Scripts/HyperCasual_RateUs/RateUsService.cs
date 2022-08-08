// DecompilerFi decompiler from Assembly-CSharp.dll class: HyperCasual.RateUs.RateUsService
using HyperCasual.PsdkSupport;
using UnityEngine;

namespace HyperCasual.RateUs
{
	public class RateUsService : MonoBehaviour
	{
		public static RateUsService Instance;

		public static bool ShouldShowRateusPopup;

		public GameObject rateUs;

		public RateUsData rateUsData;

		private void Awake()
		{
			if (Instance == null)
			{
				Instance = this;
			}
		}

		public bool ReachedSatisfactionPoint(int level)
		{
			return rateUsData.IsSatisfactionPoint(level);
		}

		public bool WillShowRateUsPopup()
		{
			int totalTrackLevel = ControllerBehaviour<ScoreController>.Instance.TotalTrackLevel;
			int currentRaceAmount = ControllerBehaviour<ScoreController>.Instance.CurrentRaceAmount;
			if (totalTrackLevel > 1 && currentRaceAmount >= 5 && SingletonBehaviour<GameController>.Instance.playerWonRace)
			{
				ControllerBehaviour<ScoreController>.Instance.ZeroCurrentRaceAmount();
				if (Application.platform == RuntimePlatform.IPhonePlayer)
				{
					return true;
				}
				return true;
			}
			return false;
		}

		public void RequestRateUs()
		{
			if (ShouldShowRateusPopup)
			{
				if (Application.platform == RuntimePlatform.IPhonePlayer)
				{

				}
				else if (!SaveController.IsNeverShowRateUs())
				{
					ShowRateUsPopUp();
				}
			}
		}

		public void RateUsClicked()
		{
			ForceRateUs();
		}

		public void ForceRateUs()
		{
			
		}

		public void ShowRateUsPopUp()
		{
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.RateUs);
		}
	}
}
