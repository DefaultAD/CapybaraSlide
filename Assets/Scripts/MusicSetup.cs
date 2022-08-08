// DecompilerFi decompiler from Assembly-CSharp.dll class: MusicSetup
using System;
using UnityEngine;

[Serializable]
public class MusicSetup
{
	public MusicType Type;

	public AudioClip Clip;

	[Range(0f, 1f)]
	public float Volume = 1f;
}
