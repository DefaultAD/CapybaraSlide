// DecompilerFi decompiler from Assembly-CSharp.dll class: SoundSetup
using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class SoundSetup
{
	public SoundType Type;

	public List<AudioClip> Clips = new List<AudioClip>();

	[Range(0f, 1f)]
	public float Volume = 1f;

	public AudioClip Clip => Clips[UnityEngine.Random.Range(0, Clips.Count)];
}
