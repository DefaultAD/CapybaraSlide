// DecompilerFi decompiler from Assembly-CSharp.dll class: CopyTransformValues
using UnityEngine;

public class CopyTransformValues : MonoBehaviour
{
	[SerializeField]
	private Transform copyTransform;

	private void OnEnable()
	{
		SetCopyTransformValues();
	}

	private void SetCopyTransformValues()
	{
		Canvas canvas = ((object)copyTransform != null) ? copyTransform.GetComponentInParent<Canvas>() : null;
		Canvas canvas2 = base.transform?.GetComponentInParent<Canvas>();
		if ((bool)canvas && (bool)canvas2)
		{
			float scaleFactor = canvas.scaleFactor;
			float scaleFactor2 = canvas2.scaleFactor;
			float num = scaleFactor / scaleFactor2;
			PulsingButtonAnimator component = GetComponent<PulsingButtonAnimator>();
			if ((bool)component)
			{
				component.SetOverrideSize(num);
			}
			else
			{
				base.transform.localScale = new Vector3(num, num, num);
			}
			base.transform.position = copyTransform.position;
		}
	}
}
