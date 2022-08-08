// DecompilerFi decompiler from Assembly-CSharp.dll class: FinishLineParticles
using UnityEngine;

public class FinishLineParticles : MonoBehaviour
{
	[SerializeField]
	private Vector3 offset;

	private void OnValidate()
	{
		if (base.gameObject.activeInHierarchy)
		{
			Slide slide = UnityEngine.Object.FindObjectOfType<Slide>();
			if ((bool)slide && slide.Nodes != null && slide.Nodes.Length > 1)
			{
				Vector3 vector = slide.transform.TransformPoint(slide.Nodes[slide.Nodes.Length - 1].Position);
				Vector3 forward = slide.transform.TransformPoint(slide.Nodes[slide.Nodes.Length - 2].Position) - vector;
				Vector3 upwards = slide.transform.TransformDirection(slide.Nodes[slide.Nodes.Length - 1].Normal);
				Quaternion rotation = Quaternion.LookRotation(forward, upwards);
				base.transform.position = vector + rotation * offset;
				base.transform.rotation = Quaternion.LookRotation(forward, upwards);
			}
		}
	}

	public void Validate()
	{
		OnValidate();
	}
}
