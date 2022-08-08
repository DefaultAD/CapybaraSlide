// DecompilerFi decompiler from Assembly-CSharp.dll class: GameSettings
using System;

[Serializable]
public class GameSettings
{
	public bool AdsEnabled;

	public int CinematicMode;

	public bool ShowRaceUI;

	public bool EnableOpponents;

	public int TrackLevel;

	public float CharacterScale;

	public float PlayerSpeedMultiplier;

	public float AccelerationMultiplier;

	public float RotationNormalizationMultiplier;

	public float BumpSpeedMultiplier;

	public float HorizontalBumbMultiplier;

	public float MinBumbMagnitude;

	public float MinHorizontalBumbMagnitude;

	public float MaxHorizontalBumbMagnitude;

	public float BumbTorqueMultiplier;

	public float SpeedBoosterMultiplier;

	public float SpeedBoosterDuration;

	public float WaterRampJumpLength;

	public float WaterRampJumpHeight;

	public float WaterRampSpeedBoost;

	public bool IsWaterRampsEnabled;

	public float CentrifugalForceHorizontal;

	public float CentrifugalForceVertical;

	public float IronTubeSpeedMultiplier;

	public float IronTubeBumpMultiplier;

	public float IronTubeMinBumbAmount;

	public bool IsPlayerIronTube;

	public bool AllSkinsUnlocked;

	public int UpgradeBasePrice;

	public int InitialOpponentSpread;

	public float OpponentSpeedMin;

	public float OpponentSpeedMax;

	public float OpponentUpgradeMultiplier;

	public bool IsOpponentTypeRusher;

	public int OpponentTypeRusherAmount;

	public bool IsOpponentTypeDefensive;

	public int OpponentTypeDefensiveAmount;

	public bool IsOpponentTypeDisruptor;

	public int OpponentTypeDisruptorAmount;

	public bool IsOpponentTypeVisible;

	public bool IsBackBumpGlow;

	public float InputResponsiveness;

	public float InputSensitivity;

	public float MaxInputDelta;

	public float InputSlideAmount;

	public float InputRotationMultiplier;

	public float CameraZoom;

	public float CameraDistance;

	public float CameraElevation;

	public float CameraRotation;

	public int CameraPrediction;

	public float CameraPositionEasing;

	public float CameraRotationEasing;

	public bool IsFTUE;

	public bool ShowFPS;

	public GameSettings()
	{
	}

	public GameSettings(GameSettings gameSettings)
	{
		AdsEnabled = gameSettings.AdsEnabled;
		CinematicMode = gameSettings.CinematicMode;
		ShowRaceUI = gameSettings.ShowRaceUI;
		EnableOpponents = gameSettings.EnableOpponents;
		TrackLevel = gameSettings.TrackLevel;
		CharacterScale = gameSettings.CharacterScale;
		PlayerSpeedMultiplier = gameSettings.PlayerSpeedMultiplier;
		AccelerationMultiplier = gameSettings.AccelerationMultiplier;
		RotationNormalizationMultiplier = gameSettings.RotationNormalizationMultiplier;
		BumpSpeedMultiplier = gameSettings.BumpSpeedMultiplier;
		MinBumbMagnitude = gameSettings.MinBumbMagnitude;
		MaxHorizontalBumbMagnitude = gameSettings.MaxHorizontalBumbMagnitude;
		HorizontalBumbMultiplier = gameSettings.HorizontalBumbMultiplier;
		MinHorizontalBumbMagnitude = gameSettings.MinHorizontalBumbMagnitude;
		BumbTorqueMultiplier = gameSettings.BumbTorqueMultiplier;
		SpeedBoosterMultiplier = gameSettings.SpeedBoosterMultiplier;
		SpeedBoosterDuration = gameSettings.SpeedBoosterDuration;
		WaterRampJumpLength = gameSettings.WaterRampJumpLength;
		WaterRampJumpHeight = gameSettings.WaterRampJumpHeight;
		WaterRampSpeedBoost = gameSettings.WaterRampSpeedBoost;
		IsWaterRampsEnabled = gameSettings.IsWaterRampsEnabled;
		CentrifugalForceHorizontal = gameSettings.CentrifugalForceHorizontal;
		CentrifugalForceVertical = gameSettings.CentrifugalForceVertical;
		IronTubeSpeedMultiplier = gameSettings.IronTubeSpeedMultiplier;
		IronTubeBumpMultiplier = gameSettings.IronTubeBumpMultiplier;
		IronTubeMinBumbAmount = gameSettings.IronTubeMinBumbAmount;
		IsPlayerIronTube = gameSettings.IsPlayerIronTube;
		AllSkinsUnlocked = gameSettings.AllSkinsUnlocked;
		UpgradeBasePrice = gameSettings.UpgradeBasePrice;
		OpponentUpgradeMultiplier = gameSettings.OpponentUpgradeMultiplier;
		InitialOpponentSpread = gameSettings.InitialOpponentSpread;
		OpponentSpeedMin = gameSettings.OpponentSpeedMin;
		OpponentSpeedMax = gameSettings.OpponentSpeedMax;
		IsOpponentTypeRusher = gameSettings.IsOpponentTypeRusher;
		OpponentTypeRusherAmount = gameSettings.OpponentTypeRusherAmount;
		IsOpponentTypeDefensive = gameSettings.IsOpponentTypeDefensive;
		OpponentTypeDefensiveAmount = gameSettings.OpponentTypeDefensiveAmount;
		IsOpponentTypeDisruptor = gameSettings.IsOpponentTypeDisruptor;
		OpponentTypeDisruptorAmount = gameSettings.OpponentTypeDisruptorAmount;
		IsOpponentTypeVisible = gameSettings.IsOpponentTypeVisible;
		IsBackBumpGlow = gameSettings.IsBackBumpGlow;
		InputResponsiveness = gameSettings.InputResponsiveness;
		InputSensitivity = gameSettings.InputSensitivity;
		MaxInputDelta = gameSettings.MaxInputDelta;
		InputSlideAmount = gameSettings.InputSlideAmount;
		InputRotationMultiplier = gameSettings.InputRotationMultiplier;
		CameraZoom = gameSettings.CameraZoom;
		CameraDistance = gameSettings.CameraDistance;
		CameraElevation = gameSettings.CameraElevation;
		CameraRotation = gameSettings.CameraRotation;
		CameraPrediction = gameSettings.CameraPrediction;
		CameraPositionEasing = gameSettings.CameraPositionEasing;
		CameraRotationEasing = gameSettings.CameraRotationEasing;
		IsFTUE = gameSettings.IsFTUE;
		ShowFPS = gameSettings.ShowFPS;
	}
}
