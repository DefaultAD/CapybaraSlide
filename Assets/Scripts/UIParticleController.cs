// DecompilerFi decompiler from Assembly-CSharp.dll class: UIParticleController
using System;
using System.Collections.Generic;
using UnityEngine;

public class UIParticleController : ControllerBehaviour<UIParticleController>
{
	[SerializeField]
	private List<UIParticleSystem> uiParticleSystems = new List<UIParticleSystem>();

	public override void Initialize()
	{
		for (int i = 0; i < uiParticleSystems.Count; i++)
		{
			uiParticleSystems[i].InitializePool();
		}
	}

	public override void Enable()
	{
		throw new NotImplementedException();
	}

	public override void Disable()
	{
		throw new NotImplementedException();
	}
}
