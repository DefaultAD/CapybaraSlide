// DecompilerFi decompiler from Assembly-CSharp.dll class: RippleParticleEffect
using UnityEngine;

public class RippleParticleEffect : ParticleEffect
{
	private Transform characterTransform;

	private void LateUpdate()
	{
		base.transform.position = characterTransform.position + characterTransform.up * 0.6f;
	}

	public void SetCharacterTransform(Transform character)
	{
		characterTransform = character;
	}
}
