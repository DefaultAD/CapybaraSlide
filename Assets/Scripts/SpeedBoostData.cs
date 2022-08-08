// DecompilerFi decompiler from Assembly-CSharp.dll class: SpeedBoostData
using UnityEngine;

public struct SpeedBoostData
{
	public readonly float boostAmount;

	public readonly float time;

	private readonly float duration;

	private readonly AnimationCurve curve;

	public SpeedBoostData(float boostAmount, AnimationCurve curve, float time, float duration = 1f)
	{
		this.boostAmount = boostAmount * SingletonBehaviour<GameController>.Instance.GameSettings.SpeedBoosterMultiplier / 5f + 1f;
		this.curve = curve;
		this.duration = duration;
		this.time = time;
	}

	public SpeedBoostData Tick(float deltaTime)
	{
		float num = time + deltaTime / (duration * SingletonBehaviour<GameController>.Instance.GameSettings.SpeedBoosterDuration);
		float num2 = curve.Evaluate(num);
		return new SpeedBoostData(num2, curve, num, duration);
	}
}
