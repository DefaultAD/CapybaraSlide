// DecompilerFi decompiler from Assembly-CSharp.dll class: MovementData
using UnityEngine;

public struct MovementData
{
	public readonly float distanceCovered;

	public readonly float rawHorizontal;

	public readonly Vector2 nextFaceDirection;

	public readonly float jumpYOffset;

	public readonly float offsetRotation;

	public readonly float horizontalDelta;

	public readonly bool onRamp;

	public readonly float torque;

	public readonly float totalSpeedBoost;

	public readonly float verticalBlend;

	public MovementData(float distanceCovered, float rawHorizontal, Vector2 nextFaceDirection, float jumpYOffset, float offsetRotation, float horizontalDelta, bool onRamp, float torque, float totalSpeedBoost, float verticalBlend)
	{
		this.distanceCovered = distanceCovered;
		this.rawHorizontal = rawHorizontal;
		this.nextFaceDirection = nextFaceDirection;
		this.jumpYOffset = jumpYOffset;
		this.offsetRotation = offsetRotation;
		this.horizontalDelta = horizontalDelta;
		this.onRamp = onRamp;
		this.torque = torque;
		this.totalSpeedBoost = totalSpeedBoost;
		this.verticalBlend = verticalBlend;
	}
}
