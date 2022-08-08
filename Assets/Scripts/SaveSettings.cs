// DecompilerFi decompiler from Assembly-CSharp.dll class: SaveSettings
using System;

[Serializable]
public class SaveSettings
{
	public int TotalTrackLevel;

	public int TotalRaceAmount;

	public bool IsTutorialPassed;

	public bool IsMusicEnabled;

	public bool IsSoundEnabled;

	public bool IsVibrationEnabled;

	public SaveSettings()
	{
	}

	public SaveSettings(int totalTrackLevel, int totalRaceAmount, bool isTutorialPassed, bool isMusicEnabled, bool isSoundEnabled, bool isVibrationEnabled)
	{
		TotalTrackLevel = totalTrackLevel;
		TotalRaceAmount = totalRaceAmount;
		IsTutorialPassed = isTutorialPassed;
		IsMusicEnabled = isMusicEnabled;
		IsSoundEnabled = isSoundEnabled;
		IsVibrationEnabled = isVibrationEnabled;
	}
}
