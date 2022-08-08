// DecompilerFi decompiler from Assembly-CSharp.dll class: SaveController
using System;
using UnityEngine;

public static class SaveController
{
	private static readonly string totalTrackLevelKey = "TotalTrackLevel";

	private static readonly string totalRaceAmountKey = "TotalRaceAmount";

	private static readonly string isTutorialPassedKey = "IsTutorialPassed";

	private static readonly string isMusicEnabledKey = "IsMusicEnabled";

	private static readonly string isSoundEnabledKey = "IsSoundEnabled";

	private static readonly string isVibrationEnabledKey = "IsVibrationEnabled";

	private static readonly string pointCountKey = "PointCount";

	private static readonly string trophyCountKey = "TrophyCount";

	private static readonly string upgradeSpeedLevelKey = "UpgradeSpeedLevel";

	private static readonly string upgradeBoostLevelKey = "UpgradeBoostLevel";

	private static readonly string upgradePointsLevelKey = "UpgradePointsLevel";

	private static readonly string defaultSkinIndexKey = "DefaultSkinIndex";

	private static readonly string defaultSkinTubeIndexKey = "DefaultSkinTubeIndex";

	private static readonly string dailySkinUsedKey = "DailySkinUsed";

	private static readonly string lastIronTubeUseTimeKey = "LastIronTubeUseTime";

	private static readonly string adsDisabledKey = "adsDisabledKey";

	private static readonly string neverShowRateUsKey = "NeverShowRateUs";

	private static readonly string isUpgradeToolTipShownKey = "UpgradeToolTipShown";

	private static readonly string isUpgradeTextShownKey = "UpgradeTextShown";

	private static readonly bool isHardSaveReset = true;

	private static string GetSkinUnlockedKey(int skinIndex)
	{
		return $"SkinUnlocked[{skinIndex}]";
	}

	private static string GetSkinTubeUnlockedKey(int skinIndex, int tubeIndex)
	{
		return $"SkinTubeUnlocked[{skinIndex}][{tubeIndex}]";
	}

	public static SaveSettings Load()
	{
		int @int = PlayerPrefs.GetInt(totalTrackLevelKey, 1);
		int int2 = PlayerPrefs.GetInt(totalRaceAmountKey, 0);
		bool isTutorialPassed = PlayerPrefs.GetInt(isTutorialPassedKey, 0) == 1;
		bool isMusicEnabled = PlayerPrefs.GetInt(isMusicEnabledKey, 1) == 1;
		bool isSoundEnabled = PlayerPrefs.GetInt(isSoundEnabledKey, 1) == 1;
		bool isVibrationEnabled = PlayerPrefs.GetInt(isVibrationEnabledKey, 1) == 1;
		return new SaveSettings(@int, int2, isTutorialPassed, isMusicEnabled, isSoundEnabled, isVibrationEnabled);
	}

	public static void Save(SaveSettings saveSettings)
	{
		int totalTrackLevel = saveSettings.TotalTrackLevel;
		int totalRaceAmount = saveSettings.TotalRaceAmount;
		int value = saveSettings.IsTutorialPassed ? 1 : 0;
		int value2 = saveSettings.IsMusicEnabled ? 1 : 0;
		int value3 = saveSettings.IsSoundEnabled ? 1 : 0;
		int value4 = saveSettings.IsVibrationEnabled ? 1 : 0;
		PlayerPrefs.SetInt(totalTrackLevelKey, totalTrackLevel);
		PlayerPrefs.SetInt(totalRaceAmountKey, totalRaceAmount);
		PlayerPrefs.SetInt(isTutorialPassedKey, value);
		PlayerPrefs.SetInt(isMusicEnabledKey, value2);
		PlayerPrefs.SetInt(isSoundEnabledKey, value3);
		PlayerPrefs.SetInt(isVibrationEnabledKey, value4);
		PlayerPrefs.Save();
	}

	public static void SaveUnlockedSkin(int skinIndex, int tubeIndex)
	{
		PlayerPrefs.SetInt(GetSkinUnlockedKey(skinIndex), 1);
		PlayerPrefs.SetInt(GetSkinTubeUnlockedKey(skinIndex, tubeIndex), 1);
	}

	public static bool IsSkinUnlocked(int skinIndex)
	{
		return PlayerPrefs.GetInt(GetSkinUnlockedKey(skinIndex), 0) == 1;
	}

	public static bool IsSkinTubeUnlocked(int skinIndex, int tubeIndex)
	{
		return PlayerPrefs.GetInt(GetSkinTubeUnlockedKey(skinIndex, tubeIndex), 0) == 1;
	}

	public static void SaveDefaultSkin(int skinIndex, int tubeIndex)
	{
		PlayerPrefs.SetInt(defaultSkinIndexKey, skinIndex);
		PlayerPrefs.SetInt(defaultSkinTubeIndexKey, tubeIndex);
	}

	public static bool IsDailySkinUsed()
	{
		return PlayerPrefs.GetInt(dailySkinUsedKey, 0) == 1;
	}

	public static void SetDailySkinUsed()
	{
		PlayerPrefs.SetInt(dailySkinUsedKey, 1);
	}

	public static int GetDefaultSkinIndex()
	{
		return PlayerPrefs.GetInt(defaultSkinIndexKey, 0);
	}

	public static int GetDefaultSkinTubeIndex()
	{
		return PlayerPrefs.GetInt(defaultSkinTubeIndexKey, 0);
	}

	public static void SetIronTubeAsUsed()
	{
		PlayerPrefs.SetString(lastIronTubeUseTimeKey, DateTime.Now.Ticks.ToString());
	}

	public static DateTime GetLastIronTubeUseTime()
	{
		if (long.TryParse(PlayerPrefs.GetString(lastIronTubeUseTimeKey), out long result))
		{
			return new DateTime(result);
		}
		return new DateTime(0L);
	}

	public static int GetUpgradeLevel(int upgradeIndex)
	{
		int result = 1;
		switch (upgradeIndex)
		{
		case 0:
			result = PlayerPrefs.GetInt(upgradeSpeedLevelKey, 1);
			break;
		case 1:
			result = PlayerPrefs.GetInt(upgradeBoostLevelKey, 1);
			break;
		case 2:
			result = PlayerPrefs.GetInt(upgradePointsLevelKey, 1);
			break;
		}
		return result;
	}

	public static void SetUpgradeLevel(int upgradeIndex, int upgradeLevel)
	{
		switch (upgradeIndex)
		{
		case 0:
			PlayerPrefs.SetInt(upgradeSpeedLevelKey, upgradeLevel);
			break;
		case 1:
			PlayerPrefs.SetInt(upgradeBoostLevelKey, upgradeLevel);
			break;
		case 2:
			PlayerPrefs.SetInt(upgradePointsLevelKey, upgradeLevel);
			break;
		}
	}

	public static int GetPointCount()
	{
		return PlayerPrefs.GetInt(pointCountKey, 0);
	}

	public static int AddPoints(int count)
	{
		int num = PlayerPrefs.GetInt(pointCountKey, 0) + count;
		PlayerPrefs.SetInt(pointCountKey, num);
		return num;
	}

	public static int SubtractPoints(int count)
	{
		int num = (int)Mathf.Clamp(PlayerPrefs.GetInt(pointCountKey, 0) - count, 0f, float.PositiveInfinity);
		PlayerPrefs.SetInt(pointCountKey, num);
		return num;
	}

	public static int GetTrophyCount()
	{
		return PlayerPrefs.GetInt(trophyCountKey, 0);
	}

	public static int AddTrophies(int count)
	{
		int num = PlayerPrefs.GetInt(trophyCountKey, 0) + count;
		PlayerPrefs.SetInt(trophyCountKey, num);
		return num;
	}

	public static int SubtractTrophies(int count)
	{
		int num = (int)Mathf.Clamp(PlayerPrefs.GetInt(trophyCountKey, 0) - count, 0f, float.PositiveInfinity);
		PlayerPrefs.SetInt(trophyCountKey, num);
		return num;
	}

	public static void EnableAds()
	{
		PlayerPrefs.SetInt(adsDisabledKey, 0);
	}

	public static void DisableAds()
	{
		PlayerPrefs.SetInt(adsDisabledKey, 1);
	}

	public static bool GetAdsEnabled()
	{
		return PlayerPrefs.GetInt(adsDisabledKey, 0) == 0;
	}

	public static bool IsNeverShowRateUs()
	{
		return PlayerPrefs.GetInt(neverShowRateUsKey, 0) == 1;
	}

	public static void SetNeverShowRateUs()
	{
		PlayerPrefs.SetInt(neverShowRateUsKey, 1);
	}

	public static int IsTutorialToolTipShown()
	{
		return PlayerPrefs.GetInt(isUpgradeToolTipShownKey, 0);
	}

	public static void SetTutorialToolTipShown(int value)
	{
		PlayerPrefs.SetInt(isUpgradeToolTipShownKey, value);
	}

	public static int IsTutorialTextShown()
	{
		return PlayerPrefs.GetInt(isUpgradeTextShownKey, 0);
	}

	public static void SetTutorialTextShown(int value)
	{
		PlayerPrefs.SetInt(isUpgradeTextShownKey, value);
	}

	public static SaveSettings ResetSave()
	{
		int totalTrackLevel = 1;
		int totalRaceAmount = 0;
		bool isTutorialPassed = false;
		bool isMusicEnabled = true;
		bool isSoundEnabled = true;
		bool isVibrationEnabled = true;
		if (isHardSaveReset)
		{
			PlayerPrefs.DeleteAll();
		}
		SaveSettings saveSettings = new SaveSettings(totalTrackLevel, totalRaceAmount, isTutorialPassed, isMusicEnabled, isSoundEnabled, isVibrationEnabled);
		Save(saveSettings);
		return saveSettings;
	}
}
