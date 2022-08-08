// DecompilerFi decompiler from Assembly-CSharp.dll class: EffectController
using ObjectPool;
using System;
using System.Collections.Generic;
using UnityEngine;

public class EffectController : ControllerBehaviour<EffectController>
{
	[SerializeField]
	private ParticleEffect hitParticleEffect;

	[SerializeField]
	private ParticleEffect splashParticleEffect;

	[SerializeField]
	private RippleParticleEffect rippleParticleEffect;

	private Pool pool;

	private Dictionary<uint, ParticleEffect> instantiatedParticleEffects = new Dictionary<uint, ParticleEffect>();

	private List<UnityEngine.Object> removableObjects = new List<UnityEngine.Object>();

	protected override void Awake()
	{
		base.Awake();
		pool = new Pool();
		pool.PopulatePool(hitParticleEffect, 10, base.transform);
		pool.PopulatePool(splashParticleEffect, 10, base.transform);
		pool.PopulatePool(rippleParticleEffect, 10, base.transform);
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

	private void Update()
	{
		removableObjects.Clear();
		foreach (ParticleEffect value in instantiatedParticleEffects.Values)
		{
			bool flag = true;
			ParticleSystem[] particleSystems = value.ParticleSystems;
			foreach (ParticleSystem particleSystem in particleSystems)
			{
				if (particleSystem.isPlaying)
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				removableObjects.Add(value);
			}
		}
		foreach (UnityEngine.Object removableObject in removableObjects)
		{
			if (removableObject is ParticleEffect)
			{
				ParticleEffect particleEffect = removableObject as ParticleEffect;
				instantiatedParticleEffects.Remove(particleEffect.Key);
			}
			pool.Destroy(removableObject);
		}
	}

	public void InstantiateHitParticles(Vector3 position, Quaternion rotation)
	{
		ParticleEffect particleEffect = pool.Instantiate<ParticleEffect>(hitParticleEffect, position, rotation, base.transform);
		instantiatedParticleEffects[particleEffect.Key] = particleEffect;
	}

	public void InstantiateSplashParticles(Vector3 position, Quaternion rotation, Transform parent)
	{
		ParticleEffect particleEffect = pool.Instantiate<ParticleEffect>(splashParticleEffect, position, splashParticleEffect.transform.rotation * rotation, parent);
		instantiatedParticleEffects[particleEffect.Key] = particleEffect;
	}

	public void InstantiateRippleParticles(Vector3 position, Quaternion rotation, Transform parent)
	{
		RippleParticleEffect rippleParticleEffect = pool.Instantiate<RippleParticleEffect>(this.rippleParticleEffect, position, this.rippleParticleEffect.transform.rotation * rotation, parent);
		rippleParticleEffect.SetCharacterTransform(parent);
		instantiatedParticleEffects[rippleParticleEffect.Key] = rippleParticleEffect;
	}
}
