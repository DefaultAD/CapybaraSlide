// DecompilerFi decompiler from Assembly-CSharp.dll class: ControllerBehaviour
using UnityEngine;

public abstract class ControllerBehaviour<T> : MonoBehaviour where T : Component
{
	private static T instance;

	public static T Instance
	{
		get
		{
			if ((Object)instance == (Object)null)
			{
				instance = UnityEngine.Object.FindObjectOfType<T>();
			}
			return instance;
		}
	}

	protected virtual void Awake()
	{
		if ((Object)instance == (Object)null)
		{
			instance = (this as T);
		}
	}

	public abstract void Initialize();

	public abstract void Enable();

	public abstract void Disable();
}
