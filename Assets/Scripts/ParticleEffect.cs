// DecompilerFi decompiler from Assembly-CSharp.dll class: ParticleEffect
using ObjectPool;
using UnityEngine;

public class ParticleEffect : MonoBehaviour, IPoolable
{
	private static uint nextKey;

	public ParticleSystem[] ParticleSystems
	{
		get;
		private set;
	}

	public bool Active
	{
		get;
		private set;
	}

	public uint Key
	{
		get;
		private set;
	}

	public void OnDestroyed()
	{
		base.gameObject.SetActive(value: false);
		Active = false;
	}

	public void OnInstantiated()
	{
		base.gameObject.SetActive(value: true);
		ParticleSystem[] particleSystems = ParticleSystems;
		foreach (ParticleSystem particleSystem in particleSystems)
		{
			particleSystem.Play();
		}
		Active = true;
		Key = nextKey;
		if (nextKey == uint.MaxValue)
		{
			nextKey = 0u;
		}
		else
		{
			nextKey++;
		}
	}

	public void OnPopulated()
	{
		base.gameObject.SetActive(value: false);
		ParticleSystems = GetComponentsInChildren<ParticleSystem>();
	}
}
