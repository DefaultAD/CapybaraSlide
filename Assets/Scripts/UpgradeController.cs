// DecompilerFi decompiler from Assembly-CSharp.dll class: UpgradeController
using HyperCasual.PsdkSupport;
using SlipperySlides.Logging;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UpgradeController : ControllerBehaviour<UpgradeController>
{
	[Header("References")]
	[SerializeField]
	private List<UpgradeView> upgradeViews = new List<UpgradeView>();

	public bool DidUpgradeBeforeRace;

	private int speedUpgradeLevel = 1;

	private int boostUpgradeLevel = 1;

	private int pointsUpgradeLevel = 1;

	private int basePrice = 3000;

	private bool canPurchaseUpgradeWithAd;

	private bool didPurchaseUpgradeWithAd;

	private readonly float upgradePriceRate = 0.02f;

	private readonly float speedUpgradeIncreaseRate = 0.01f;

	private readonly float boostUpgradeIncreaseRate = 0.02f;

	private readonly float pointsUpgradeIncreaseRate = 0.05f;

	private readonly int maxUpgradeLevel = 100;

	private readonly int showUpgradeReminderRequirement = 1;

	private static int showUpgradeReminderCounter;

    [Header("WaitForAds Settings")]
    private float timebtwads;
    private float starttimebtwads=20f;
    public Text WaitTimeCounter;
    public GameObject waitForAds;
    public bool DidPlayerSkipUpgrade
    
	{
		get;
		private set;
	} = true;

  void OnEnable()
    {
       
    }
	private void Start()
	{
        timebtwads = 0;
        basePrice = SingletonBehaviour<GameController>.Instance.GameSettings.UpgradeBasePrice;
		canPurchaseUpgradeWithAd = MathUtility.IsOdd(ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount);
		didPurchaseUpgradeWithAd = false;
		InitializeUpgrades();
		InitializeUpgradeViews();
		UpdateAllUpgradeViews(isInitial: true);
	}

	private void InitializeUpgrades()
	{
		speedUpgradeLevel = SaveController.GetUpgradeLevel(0);
		boostUpgradeLevel = SaveController.GetUpgradeLevel(1);
		pointsUpgradeLevel = SaveController.GetUpgradeLevel(2);
	}


    void Update()
    {
        if(timebtwads>0)
        {
            timebtwads -= Time.deltaTime;
            WaitTimeCounter.text = timebtwads.ToString("0")+" seconds";
        }
    }
	private void InitializeUpgradeViews()
	{
		int num = 0;
		int upgradePrice = GetUpgradePrice(num);
		for (int i = 0; i < upgradeViews.Count; i++)
		{
			upgradeViews[i].InitializeView(i);
			if (GetUpgradePrice(i) < upgradePrice)
			{
				num = i;
				upgradePrice = GetUpgradePrice(i);
			}
		}
		if (CanPurchaseUpgrade(num) )
		{
			if (!ControllerBehaviour<TutorialController>.Instance.WillShowUpgradeTutorial && showUpgradeReminderCounter >= showUpgradeReminderRequirement && ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount > 1)
			{
				upgradeViews[num].ShowUpgradeReminder(toggle: true);
				SaveController.SetTutorialToolTipShown(1);
				showUpgradeReminderCounter = 0;
			}
			else
			{
				showUpgradeReminderCounter++;
				SaveController.SetTutorialToolTipShown(0);
			}
		}
		else
		{
			DidPlayerSkipUpgrade = false;
			SaveController.SetTutorialToolTipShown(0);
		}
	}

	public void InitializeUpgradeValues()
	{
		ControllerBehaviour<PhysicsController>.Instance.SetPlayerSpeed(GetUpgradeValue(0));
		ControllerBehaviour<PhysicsController>.Instance.SetPlayerBoost(GetUpgradeValue(1));
		ControllerBehaviour<ScoreController>.Instance.SetPointsMultiplier(GetUpgradeValue(2));
	}

	private void UpdateAllUpgradeViews(bool isInitial = false)
	{
		for (int i = 0; i < upgradeViews.Count; i++)
		{
			upgradeViews[i].ForceUpdateView();
			if (!isInitial)
			{
				upgradeViews[i].ShowUpgradeReminder(toggle: false);
			}
		}
	}

	public void ForceUpdateAllUpgradeViews()
	{
		for (int i = 0; i < upgradeViews.Count; i++)
		{
			upgradeViews[i].ForceUpdateView();
		}
	}

	public void ShowUpgradeViews(bool toggle, bool forceResetView = false)
	{
		foreach (UpgradeView upgradeView in upgradeViews)
		{
			if (toggle)
			{
				upgradeView.Enable();
			}
			else
			{
				upgradeView.Disable();
			}
			if (forceResetView)
			{
				upgradeView.ForceUpdateView();
			}
		}
	}

	public bool CanPurchaseUpgrade(int upgradeIndex)
	{
		bool flag = false;
		int upgradeLevel = GetUpgradeLevel(upgradeIndex);
		if (upgradeLevel >= maxUpgradeLevel)
		{
			flag = true;
		}
		return !flag && ControllerBehaviour<ScoreController>.Instance.IsEnoughTotalPoints(GetUpgradePrice(upgradeIndex));
	}

	public bool PurchaseUpgrade(int upgradeIndex)
	{
		bool flag = CanPurchaseUpgrade(upgradeIndex);
		if (flag)
		{
			int upgradePrice = GetUpgradePrice(upgradeIndex);
			int upgradeLevel = GetUpgradeLevel(upgradeIndex);
			int upgradeLevel2 = upgradeLevel + 1;
			DDNAGameTransactionSpent("points", upgradePrice, upgradeViews[upgradeIndex].name);
			SetUpgradeLevel(upgradeIndex, upgradeLevel2);
			ControllerBehaviour<ScoreController>.Instance.RemoveTotalPoints(upgradePrice);
			SaveController.SetUpgradeLevel(upgradeIndex, upgradeLevel2);
			UpdateAllUpgradeViews();
			showUpgradeReminderCounter = 0;
			DidUpgradeBeforeRace = true;
			DidPlayerSkipUpgrade = false;
		}
		//else
		//{
		//	UnityEngine.Debug.Log("UpgradeController: Cannot purchase upgrade!");
  //          PurchaseUpgradeWithAd( upgradeIndex);

  //      }
		return flag;
	}

	private void DDNAGameTransactionSpent(string itemSpent, int amountSpent, string itemAcquire)
	{
		int totalPoints = ControllerBehaviour<ScoreController>.Instance.TotalPoints;
		SendDeltaEvent.GameTransaction(itemSpent, amountSpent, itemAcquire, 1, "upgrade", totalPoints, "incremenetalUpgrade");
	}

	public int GetUpgradeLevel(int upgradeIndex)
	{
		int result = 1;
		switch (upgradeIndex)
		{
		case 0:
			result = speedUpgradeLevel;
			break;
		case 1:
			result = boostUpgradeLevel;
			break;
		case 2:
			result = pointsUpgradeLevel;
			break;
		}
		return result;
	}

	public void SetUpgradeLevel(int upgradeIndex, int upgradeLevel)
	{
		switch (upgradeIndex)
		{
		case 0:
			speedUpgradeLevel = upgradeLevel;
			break;
		case 1:
			boostUpgradeLevel = upgradeLevel;
			break;
		case 2:
			pointsUpgradeLevel = upgradeLevel;
			break;
		}
	}

	public float GetUpgradeValue(int upgradeIndex)
	{
		float result = 1f;
		switch (upgradeIndex)
		{
		case 0:
			result = 1f + (float)(GetUpgradeLevel(0) - 1) * speedUpgradeIncreaseRate;
			break;
		case 1:
			result = 1f + (float)(GetUpgradeLevel(1) - 1) * boostUpgradeIncreaseRate;
			break;
		case 2:
			result = 1f + (float)(GetUpgradeLevel(2) - 1) * pointsUpgradeIncreaseRate;
			break;
		}
		return result;
	}

	public int GetUpgradePrice(int upgradeIndex)
	{
		int upgradeLevel = GetUpgradeLevel(upgradeIndex);
		float f = Mathf.Pow(basePrice, 1f + (float)(upgradeLevel - 1) * upgradePriceRate);
		return MathUtility.ToNearest(Mathf.RoundToInt(f));
	}

    //upgrade by watching ads
  
 //   public bool PurchaseUpgradeWithAd(int upgradeIndex)
	//{

 //       Debug.Log("upgrade with ads");

 //       bool flag = true;

 //       if (flag  && timebtwads<=0  && Advertisements.Instance.IsRewardVideoAvailable())
	//	{
			
 //           if( upgradeIndex==0)
 //           {
 //               Advertisements.Instance.ShowRewardedVideo(CompleteMethodSpeed);
 //           }else if(upgradeIndex==1)
 //           {
 //               Advertisements.Instance.ShowRewardedVideo(CompleteMethodBoos);

 //           }
 //           else if (upgradeIndex==2)
 //           {
 //               Advertisements.Instance.ShowRewardedVideo(CompleteMethodPoints);

 //           }
 //       }
	//	else
	//	{
	//		UnityEngine.Debug.Log("No Ads: Cannot purchase upgrade with ad!");
 //           waitForAds.SetActive(true);
	//	}
	//	return flag;
	//}



    // upgrade Speed By Ads
    private void CompleteMethodSpeed(bool completed, string advertiser)
    {
       
           
            if (completed == true)
            {
                //give the reward
                didPurchaseUpgradeWithAd = true;
                int upgradeLevel = GetUpgradeLevel(0);
                int upgradeLevel2 = upgradeLevel + 1;
                Debug.Log("showads");
                SetUpgradeLevel(0, upgradeLevel2);
                SaveController.SetUpgradeLevel(0, upgradeLevel2);
                UpdateAllUpgradeViews();
                showUpgradeReminderCounter = 0;
                DidUpgradeBeforeRace = true;
                DidPlayerSkipUpgrade = false;
                timebtwads = starttimebtwads;
            }
            else
            {
                //no reward
            }
        
    }
    // upgrade Boos By Ads
    private void CompleteMethodBoos(bool completed, string advertiser)
    {
        
            Debug.Log("Closed rewarded from: " + advertiser + " -> Completed " + completed);
            //GleyMobileAds.ScreenWriter.Write("Closed rewarded from: " + advertiser + " -> Completed " + completed);
            if (completed == true)
            {
                //give the reward
                didPurchaseUpgradeWithAd = true;
                int upgradeLevel = GetUpgradeLevel(1);
                int upgradeLevel2 = upgradeLevel + 1;
                Debug.Log("showads");
                SetUpgradeLevel(1, upgradeLevel2);
                SaveController.SetUpgradeLevel(1, upgradeLevel2);
                UpdateAllUpgradeViews();
                showUpgradeReminderCounter = 0;
                DidUpgradeBeforeRace = true;
                DidPlayerSkipUpgrade = false;
                timebtwads = starttimebtwads;
            }
            else
            {
                //no reward
            }
        
    }
    // upgrade Points By Ads
    private void CompleteMethodPoints(bool completed, string advertiser)
    {
       
            Debug.Log("Closed rewarded from: " + advertiser + " -> Completed " + completed);
            //GleyMobileAds.ScreenWriter.Write("Closed rewarded from: " + advertiser + " -> Completed " + completed);
            if (completed == true)
            {
                //give the reward
                didPurchaseUpgradeWithAd = true;
                int upgradeLevel = GetUpgradeLevel(2);
                int upgradeLevel2 = upgradeLevel + 1;
                Debug.Log("showads");
                SetUpgradeLevel(2, upgradeLevel2);
                SaveController.SetUpgradeLevel(3, upgradeLevel2);
                UpdateAllUpgradeViews();
                showUpgradeReminderCounter = 0;
                DidUpgradeBeforeRace = true;
                DidPlayerSkipUpgrade = false;
                timebtwads = starttimebtwads;
            }
            else
            {
                //no reward
            }
        
    }

    public override void Initialize()
	{
		throw new NotImplementedException();
	}

	public override void Enable()
	{
		throw new NotImplementedException();
	}

	public override void Disable()
	{
		throw new NotImplementedException();
	}
}
