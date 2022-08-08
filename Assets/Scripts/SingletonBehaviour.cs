// DecompilerFi decompiler from Assembly-CSharp.dll class: SingletonBehaviour
using System;
using UnityEngine;

public abstract class SingletonBehaviour<T> : MonoBehaviour where T : Component
{
	private static T instance;

	public static T Instance
	{
		get
		{
			if ((UnityEngine.Object)instance == (UnityEngine.Object)null)
			{
				instance = UnityEngine.Object.FindObjectOfType<T>();
				UnityEngine.Object.DontDestroyOnLoad(instance.gameObject);
			}
			return instance;
		}
	}

	protected virtual void Awake()
	{
		if ((UnityEngine.Object)instance == (UnityEngine.Object)null)
		{
			instance = (this as T);
			UnityEngine.Object.DontDestroyOnLoad(base.gameObject);
		}
		else if (instance != this)
		{
			UnityEngine.Object.Destroy(base.gameObject);
		}
	}

	public virtual void Initialize()
	{
		throw new NotImplementedException();
	}

	public virtual void Enable()
	{
		throw new NotImplementedException();
	}

	public virtual void Disable()
	{
		throw new NotImplementedException();
	}
}
