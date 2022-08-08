// DecompilerFi decompiler from Assembly-CSharp.dll class: TutorialController
using SlipperySlides.Logging;
using System;
using UnityEngine;

public class TutorialController : ControllerBehaviour<TutorialController>
{
	[Header("Settings")]
	[SerializeField]
	private int movementTutorialFinishNodeIndex = 55;

	[SerializeField]
	private int tipTutorialFinishNodeIndex = 110;

	[SerializeField]
	private int tipTutorialRaceAmount = 3;

	[SerializeField]
	private int upgradeTutorialRaceRequirement = 1;

	[SerializeField]
	private int upgradeTutorialUpgradeIndex = 1;

	[Header("References")]
	[SerializeField]
	private TutorialView movementTutorialView;

	[SerializeField]
	private TipTutorialView tipTutorialView;

	[SerializeField]
	private UpgradeTutorialView upgradeTutorialView;

	[Header("Tip Texts")]
	[SerializeField]
	private string ftueTipText;

	[SerializeField]
	private string upgradeTipText;

	public bool IsMovementTutorialPassed
	{
		get;
		private set;
	}

	public bool IsTipTutorialPassed
	{
		get;
		private set;
	}

	public bool IsUpgradeTutorialPassed
	{
		get;
		private set;
	}

	public bool WillShowUpgradeTutorial
	{
		get;
		private set;
	}

	public int MovementTutorialFinishNodeIndex => (!SingletonBehaviour<TrackController>.Instance) ? movementTutorialFinishNodeIndex : SingletonBehaviour<TrackController>.Instance.TrackEntranceAttachIndex;

	public int TipTutorialFinishNodeIndex => tipTutorialFinishNodeIndex;

	public int UpgradeTutorialUpgradeIndex => upgradeTutorialUpgradeIndex;

	private void Start()
	{
		IsUpgradeTutorialPassed = SingletonBehaviour<GameController>.Instance.SaveSettings.IsTutorialPassed;
		WillShowUpgradeTutorial = CanShowUpgradeTutorial();
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
		if (movementTutorialView.IsActive)
		{
			movementTutorialView.Disable();
		}
		if (upgradeTutorialView.IsActive)
		{
			upgradeTutorialView.Disable();
		}
	}

	public void EnableMovementTutorial()
	{
		movementTutorialView.Enable();
	}

	public void MissionCompletedTutorialScheme()
	{
		if (upgradeTutorialRaceRequirement > ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount)
		{
			SendDeltaEvent.TutorialScheme("0", 0, "madeOneRun", 1);
		}
	}

	public void MissionStartedTutorialScheme()
	{
		if (upgradeTutorialRaceRequirement == ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount)
		{
			SendDeltaEvent.TutorialScheme("1", 1, "startedSecondRun", 4);
		}
	}

	public void EnableTipTutorial()
	{
		bool didPlayerSkipUpgrade = ControllerBehaviour<UpgradeController>.Instance.DidPlayerSkipUpgrade;
		SaveController.SetTutorialTextShown(0);
		if (!IsTipTutorialPassed && ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount < tipTutorialRaceAmount)
		{
			tipTutorialView.Enable(ftueTipText);
		}
		else if (didPlayerSkipUpgrade && ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount >= tipTutorialRaceAmount)
		{
			tipTutorialView.Enable(upgradeTipText);
			SaveController.SetTutorialTextShown(1);
		}
	}

	public void EnableUpgradeTutorial()
	{
		if (CanShowUpgradeTutorial())
		{
			WillShowUpgradeTutorial = true;
			upgradeTutorialView.Enable();
			SendDeltaEvent.TutorialScheme("1", 0, "watchedToturial", 2);
		}
		else
		{
			WillShowUpgradeTutorial = false;
		}
	}

	public bool CanShowUpgradeTutorial()
	{
		return !IsUpgradeTutorialPassed && upgradeTutorialRaceRequirement <= ControllerBehaviour<ScoreController>.Instance.TotalRaceAmount && ControllerBehaviour<UpgradeController>.Instance.GetUpgradePrice(upgradeTutorialUpgradeIndex) <= ControllerBehaviour<ScoreController>.Instance.TotalPoints;
	}

	public void SetMovementTutorialPassed()
	{
		if (movementTutorialView.IsActive)
		{
			movementTutorialView.Disable();
		}
		IsMovementTutorialPassed = true;
	}

	public void SetTipTutorialPassed()
	{
		if (tipTutorialView.IsActive)
		{
			tipTutorialView.Disable();
		}
		IsTipTutorialPassed = true;
	}

	public void SetUpgradeTutorialPassed()
	{
		if (upgradeTutorialView.IsActive)
		{
			upgradeTutorialView.Disable();
		}
		WillShowUpgradeTutorial = false;
		IsUpgradeTutorialPassed = true;
		SingletonBehaviour<GameController>.Instance.SaveSettings.IsTutorialPassed = IsUpgradeTutorialPassed;
		ControllerBehaviour<UpgradeController>.Instance.ForceUpdateAllUpgradeViews();
		SingletonBehaviour<GameController>.Instance.SaveCurrentSettings();
	}
}
