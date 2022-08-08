// DecompilerFi decompiler from Assembly-CSharp.dll class: RampPhysicsCollider
using ObjectPool;
using UnityEngine;

[RequireComponent(typeof(BoxCollider2D))]
public class RampPhysicsCollider : MonoBehaviour, IPoolable
{
	public Quaternion Rotation
	{
		get;
		private set;
	}

	public void Initialize(Quaternion rotation)
	{
		Rotation = rotation;
	}

	public void OnDestroyed()
	{
		base.gameObject.SetActive(value: false);
	}

	public void OnInstantiated()
	{
		base.gameObject.SetActive(value: true);
	}

	public void OnPopulated()
	{
	}
}
