// DecompilerFi decompiler from Assembly-CSharp.dll class: IphoneXSupport
using System.Collections.Generic;
using UnityEngine;

public class IphoneXSupport : MonoBehaviour
{
	public Camera cam;

	public bool autoRun = true;

	public bool debugForceApply;

	public bool debugPreventApply;

	public List<RectTransform> hudParents = new List<RectTransform>();

	public List<SqueezeForIphoneX> squeezeItems = new List<SqueezeForIphoneX>();

	private Vector2 defaultMin = new Vector2(0f, 0f);

	private Vector2 defaultMax = new Vector2(1f, 1f);

	public static bool IsTablet(Camera cam)
	{
		return cam.aspect >= 0.75f;
	}

	public static bool IsPhoneX(Camera cam = null)
	{
		return false;
	}

	private void OnEnable()
	{
		if (autoRun)
		{
			ApplySafeArea();
		}
	}

	public void ApplySafeArea()
	{
		if (debugPreventApply && debugForceApply)
		{
		}
	}
}
