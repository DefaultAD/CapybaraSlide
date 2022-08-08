// DecompilerFi decompiler from Assembly-CSharp.dll class: NodePointHelper
using UnityEngine;

public class NodePointHelper : MonoBehaviour
{
	[SerializeField]
	private Transform[] nodes;

	public Transform[] Nodes => nodes;

	private void OnDrawGizmos()
	{
		if (nodes == null)
		{
			return;
		}
		for (int i = 0; i < nodes.Length; i++)
		{
			Vector3 position = nodes[i].position;
			Vector3 up = nodes[i].up;
			Gizmos.DrawLine(position, position + up);
			if (i < nodes.Length - 1)
			{
				Vector3 position2 = nodes[i + 1].position;
				Vector3 up2 = nodes[i + 1].up;
				Gizmos.DrawLine(position + up, position2 + up2);
			}
		}
	}
}
