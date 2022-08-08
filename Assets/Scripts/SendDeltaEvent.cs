// DecompilerFi decompiler from Assembly-CSharp.dll class: SlipperySlides.Logging.SendDeltaEvent
using HyperCasual.PsdkSupport;
using System.Collections.Generic;

namespace SlipperySlides.Logging
{
	public static class SendDeltaEvent
	{
		private static class EventNames
		{
			public const string missionFailed = "missionFailed";

			public const string missionCompleted = "missionCompleted";

			public const string missionStarted = "missionStarted";

			public const string dailyTask = "dailyTasks";

			public const string popUp = "popUp";

			public const string gameTransaction = "gameTransaction";

			public const string visitShop = "visitShop";

			public const string tutorialScheme = "tutorialScheme";
		}

		private static class EventParams
		{
			public const string isTutorial = "isTutorial";

			public const string missionID = "missionID";

			public const string missionName = "missionName";

			public const string missionStartedType = "missionStartedType";

			public const string userXP = "userXP";

			public const string popupLocation = "popUpLocation";

			public const string popupResult = "popupResult";

			public const string popupName = "popUpName";

			public const string initiateType = "initiateType";

			public const string skinName = "skinName";

			public const string itemSpent = "itemSpent";

			public const string amountSpent = "amountSpent";

			public const string itemAcquire = "itemAcquire";

			public const string amountAcquire = "amountAcquire";

			public const string itemAcquireType = "itemAcquireType";

			public const string visitResult = "visitResult";

			public const string paymentType = "paymentType";

			public const string precoinAmount = "precoinAmount";

			public const string itemAcquired = "itemAcquired";

			public const string buttonSource = "buttonSource";

			public const string locationSource = "locationSource";

			public const string currencyName = "currencyName";

			public const string upgradeBeforeIND = "upgradeBeforeIND";

			public const string userScore = "userScore";

			public const string userLevel = "userLevel";

			public const string totalBumpedByOthers = "totalBumpedByOthers";

			public const string totalBumpedOthers = "totalBumpedOthers";

			public const string taskName = "taskName";

			public const string taskType = "taskType";

			public const string lastTaskOfTheDay = "lastTaskOfTheDay";

			public const string acquiringType = "acquiringType";

			public const string tubeName = "tubeName";

			public const string wasShown_IND = "wasShown_IND";

			public const string stepName = "stepName";

			public const string stepNumber = "stepNumber";

			public const string toolTipShown_IND = "toolTipShown_IND";

			public const string textUpgradeShown_IND = "textUpgradeShown_IND";
		}

		private static string obstacleName = string.Empty;

		private static string segmentName = string.Empty;

		private static string lastSegmentName = string.Empty;

		private static int segmentNumber;

		private static string shopVisitResult = "nothing";

		private static string paymentType = "softCurrency";

		private static string popUpLocation = string.Empty;

		private static string popupResult = string.Empty;

		private static string popUpName = string.Empty;

		private static string initiateType = string.Empty;

		private static string wasShown_IND = string.Empty;

		private static int upgradeBeforeIND;

		private static string stepName = string.Empty;

		private static int stepNumber;

		private static List<Dictionary<string, object>> visitShopEvents = new List<Dictionary<string, object>>();

		public static void MissionStarted(Dictionary<string, object> missionData)
		{
			Dictionary<string, object> event_data = missionData.AddSkinInfo().AddToolTipShown().AddIncrementalInfo();

		}

		public static void MissionFailed(Dictionary<string, object> missionData)
		{
			Dictionary<string, object> event_data = missionData.AddSkinInfo().AddUserScore().AddUserLevel()
				.AddToolTipShown()
				.AddIncrementalInfo()
				.AddBumpedInfo();
		}

		public static void MissionCompleted(Dictionary<string, object> missionData)
		{
			Dictionary<string, object> event_data = missionData.AddSkinInfo().AddUserScore().AddToolTipShown()
				.AddIncrementalInfo()
				.AddBumpedInfo();
		}

		public static void DailyTask(string taskName, string taskType, bool lastTaskOfTheDay)
		{
			Dictionary<string, object> event_data = new Dictionary<string, object>().AddMissionId().AddTaskInfo(taskName, taskType, lastTaskOfTheDay);
		}

		public static void PopUp(string _popUpLocation, string _popupResult, string _popUpName, string _initiateType)
		{
			popUpLocation = _popUpLocation;
			popupResult = _popupResult;
			popUpName = _popUpName;
			initiateType = _initiateType;
			Dictionary<string, object> event_data = new Dictionary<string, object>().AddMissionId().AddPopupLocation().AddPopupResult()
				.AddPopUpName()
				.AddInitiateType();
		}

		public static void LogVisitShop(string visitResult, string paymentType, int precoinAmount, int amountSpent, string itemAcquired, string buttonSource, string locationSource, string currencyName)
		{
			Dictionary<string, object> dictionary = new Dictionary<string, object>();
			dictionary["missionID"] = SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel.ToString();
			dictionary["visitResult"] = visitResult;
			dictionary["paymentType"] = paymentType;
			dictionary["precoinAmount"] = precoinAmount;
			dictionary["amountSpent"] = amountSpent;
			dictionary["itemAcquired"] = itemAcquired;
			dictionary["buttonSource"] = buttonSource;
			dictionary["locationSource"] = locationSource;
			dictionary["currencyName"] = currencyName;
			visitShopEvents.Add(dictionary);
		}

		public static void SendVisitShopEvents()
		{
			for (int i = 0; i < visitShopEvents.Count; i++)
			{
			}
			visitShopEvents.Clear();
		}

		public static void TutorialScheme(string _wasShown_IND, int _upgradeBeforeIND, string _stepName, int _stepNumber)
		{
			wasShown_IND = _wasShown_IND;
			upgradeBeforeIND = _upgradeBeforeIND;
			stepName = _stepName;
			stepNumber = _stepNumber;
			Dictionary<string, object> event_data = new Dictionary<string, object>().AddTutorialParams();
		}

		public static void GameTransaction(string itemSpent, int amountSpent, string itemAcquire, int amountAcquire, string itemAcquireType, int precoinAmount, string acquiringType = "")
		{
			Dictionary<string, object> event_data = new Dictionary<string, object>().AddMissionId().AddSpent(itemSpent, amountSpent).AddAcquired(itemAcquire, amountAcquire, itemAcquireType, acquiringType)
				.AddPrecoinAmount(precoinAmount);
		}

		private static Dictionary<string, object> AddSpent(this Dictionary<string, object> data, string itemSpent, int amountSpent)
		{
			data["itemSpent"] = itemSpent;
			data["amountSpent"] = amountSpent;
			return data;
		}

		private static Dictionary<string, object> AddTutorialParams(this Dictionary<string, object> data)
		{
			data["wasShown_IND"] = wasShown_IND;
			data["upgradeBeforeIND"] = upgradeBeforeIND;
			data["stepName"] = stepName;
			data["stepNumber"] = stepNumber;
			return data;
		}

		private static Dictionary<string, object> AddAcquired(this Dictionary<string, object> data, string itemAcquire, int amountAcquire, string itemAcquireType, string acquiringType)
		{
			string text2 = (string)(data["itemAcquire"] = itemAcquire.Replace("View", string.Empty));
			data["amountAcquire"] = amountAcquire;
			data["itemAcquireType"] = itemAcquireType;
			data["acquiringType"] = acquiringType;
			return data;
		}

		private static Dictionary<string, object> AddPrecoinAmount(this Dictionary<string, object> data, int precoinAmount)
		{
			data["precoinAmount"] = ((precoinAmount >= 0) ? precoinAmount : 0);
			return data;
		}

		private static Dictionary<string, object> AddTaskInfo(this Dictionary<string, object> data, string taskName, string taskType, bool lastTaskOfTheDay)
		{
			data["taskName"] = taskName;
			data["taskType"] = taskType;
			data["lastTaskOfTheDay"] = (lastTaskOfTheDay ? 1 : 0);
			return data;
		}

		private static Dictionary<string, object> AddSkinInfo(this Dictionary<string, object> data)
		{
			string value = CharacterController.skinNames[SaveController.GetDefaultSkinIndex()];
			string value2 = (SaveController.GetDefaultSkinTubeIndex() + 1).ToString();
			data["skinName"] = value;
			data["tubeName"] = value2;
			return data;
		}

		private static Dictionary<string, object> AddToolTipShown(this Dictionary<string, object> data)
		{
			int num = SaveController.IsTutorialToolTipShown();
			int num2 = SaveController.IsTutorialTextShown();
			data["toolTipShown_IND"] = num;
			data["textUpgradeShown_IND"] = num2;
			return data;
		}

		private static Dictionary<string, object> AddIncrementalInfo(this Dictionary<string, object> data)
		{
			data["upgradeBeforeIND"] = (ControllerBehaviour<UpgradeController>.Instance.DidUpgradeBeforeRace ? 1 : 0);
			return data;
		}

		private static Dictionary<string, object> AddUserScore(this Dictionary<string, object> data)
		{
			data["userScore"] = ControllerBehaviour<ScoreController>.Instance.CurrentRacePoints;
			return data;
		}

		private static Dictionary<string, object> AddUserLevel(this Dictionary<string, object> data)
		{
			data["userLevel"] = ControllerBehaviour<ScoreController>.Instance.CurrentRacePosition;
			return data;
		}

		private static Dictionary<string, object> AddBumpedInfo(this Dictionary<string, object> data)
		{
			data["totalBumpedByOthers"] = SingletonBehaviour<GameController>.Instance.playerBumpedByOpponents;
			data["totalBumpedOthers"] = SingletonBehaviour<GameController>.Instance.opponentsBumpedByPlayer;
			return data;
		}

		private static Dictionary<string, object> AddPopupLocation(this Dictionary<string, object> data)
		{
			data["popUpLocation"] = popUpLocation;
			return data;
		}

		private static Dictionary<string, object> AddPopupResult(this Dictionary<string, object> data)
		{
			data["popupResult"] = popupResult;
			return data;
		}

		private static Dictionary<string, object> AddPopUpName(this Dictionary<string, object> data)
		{
			data["popUpName"] = popUpName;
			return data;
		}

		private static Dictionary<string, object> AddInitiateType(this Dictionary<string, object> data)
		{
			data["initiateType"] = initiateType;
			return data;
		}

		public static Dictionary<string, object> AddMissionId(this Dictionary<string, object> data)
		{
			data["missionID"] = SingletonBehaviour<GameController>.Instance.SaveSettings.TotalTrackLevel.ToString();
			return data;
		}

		public static bool HasVisitShopEventsPending()
		{
			return visitShopEvents.Count != 0;
		}
	}
}
