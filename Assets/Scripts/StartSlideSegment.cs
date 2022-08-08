// DecompilerFi decompiler from Assembly-CSharp.dll class: StartSlideSegment
using System.Collections.Generic;
using UnityEngine;

public class StartSlideSegment : SlideSegment
{
	[SerializeField]
	private NodePointHelper nodeHelper;

	public Vector3 GetOffset()
	{
		if (nodes == null)
		{
			SetNodes();
		}
		PathNode[] worldSpaceNodes = GetWorldSpaceNodes();
		return worldSpaceNodes[worldSpaceNodes.Length - 1].Position;
	}

	public override PathNode[] GetWorldSpaceNodes()
	{
		SetNodes();
		if (nodes != null)
		{
			List<PathNode> list = new List<PathNode>();
			for (int i = 0; i < nodes.Length; i++)
			{
				Vector3 position = base.transform.TransformPoint(nodes[i].Position);
				Vector3 normal = base.transform.TransformDirection(nodes[i].Normal);
				list.Add(new PathNode(position, normal));
			}
			for (int j = 0; j < nodeHelper.Nodes.Length; j++)
			{
				Vector3 position2 = nodeHelper.Nodes[j].position;
				Vector3 up = nodeHelper.Nodes[j].up;
				list.Add(new PathNode(position2, up));
			}
			return list.ToArray();
		}
		return null;
	}
}
