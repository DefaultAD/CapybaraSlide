// DecompilerFi decompiler from Assembly-CSharp.dll class: PathNode
using System;
using UnityEngine;

[Serializable]
public struct PathNode
{
	[SerializeField]
	private Vector3 position;

	[SerializeField]
	private Vector3 normal;

	public Vector3 Position => position;

	public Vector3 Normal => normal;

	public PathNode(Vector3 position, Vector3 normal)
	{
		this.position = position;
		this.normal = normal;
	}
}
