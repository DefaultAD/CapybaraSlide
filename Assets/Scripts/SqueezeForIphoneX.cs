// DecompilerFi decompiler from Assembly-CSharp.dll class: SqueezeForIphoneX
using UnityEngine;

public class SqueezeForIphoneX : MonoBehaviour
{
	public Vector2 scaleValue = Vector2.one;

	public void Squeeze()
	{
		Vector3 localScale = base.transform.localScale;
		localScale.x *= scaleValue.x;
		localScale.y *= scaleValue.y;
		base.transform.localScale = localScale;
	}
}
