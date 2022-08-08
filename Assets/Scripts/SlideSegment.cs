// DecompilerFi decompiler from Assembly-CSharp.dll class: SlideSegment
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class SlideSegment : MonoBehaviour
{
	private readonly Vector2 CenterUV = new Vector2(0.438143f, 0.5043594f);

	[SerializeField]
	[HideInInspector]
	protected PathNode[] nodes;

	[SerializeField]
	[HideInInspector]
	private Vector3 endPosition;

	[SerializeField]
	[HideInInspector]
	private Quaternion endRotation;

	[SerializeField]
	private int endIndexOffset = 15;

	[SerializeField]
	private int startIndexOffset = 32;

	[SerializeField]
	[HideInInspector]
	private int segmentIndex = -1;

	private readonly int pathStartIndex = 33;

	private readonly int pathOffset = 47;

	public PathNode[] Nodes => nodes;

	public int SegmentIndex
	{
		get
		{
			return segmentIndex;
		}
		set
		{
			segmentIndex = value;
		}
	}

	private void OnDrawGizmos()
	{
	}

	private void OnValidate()
	{
		if (nodes == null || nodes.Length == 0)
		{
			SetNodes();
		}
	}

	public float GetLength()
	{
		return base.transform.TransformDirection(GetStartPosition() - GetEndPosition()).magnitude;
	}

	public Vector3 GetStartPosition()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformPoint(sharedMesh.vertices[startIndexOffset]);
		}
		return base.transform.TransformPoint(Vector3.zero);
	}

	public Vector3 GetEndPosition()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformPoint(sharedMesh.vertices[sharedMesh.vertices.Length - endIndexOffset]);
		}
		return base.transform.TransformPoint(Vector3.zero);
	}

	public Vector3 GetFirstNodePosition()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformPoint(nodes[0].Position);
		}
		return base.transform.TransformPoint(Vector3.zero);
	}

	public Vector3 GetLastNodePosition()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformPoint(nodes[nodes.Length - 1].Position);
		}
		return base.transform.TransformPoint(Vector3.zero);
	}

	public Vector3 GetEndLookDirection()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformPoint(sharedMesh.vertices[sharedMesh.vertices.Length - endIndexOffset]) - base.transform.TransformPoint(nodes[nodes.Length - 1].Position);
		}
		return Vector3.zero;
	}

	public Vector3 GetEndLookDirectionReflected()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			Vector3 endLookDirection = GetEndLookDirection();
			if (nodes.Length < 2)
			{
				return endLookDirection;
			}
			Vector3 vector = base.transform.TransformPoint(sharedMesh.vertices[sharedMesh.vertices.Length - endIndexOffset]) - base.transform.TransformPoint(nodes[nodes.Length - 2].Position);
			Vector3 inDirection = -vector;
			Vector3 normal = endLookDirection;
			Vector3 a = ReflectDirection(inDirection, normal);
			return a - (a - vector);
		}
		return Vector3.zero;
	}

	public static Vector3 ReflectDirection(Vector3 inDirection, Vector3 normal)
	{
		inDirection.Normalize();
		normal.Normalize();
		return (2f * (Vector3.Dot(inDirection, normal) * normal) - inDirection).normalized * -1f;
	}

	public Vector3 GetStartLookDirection()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformDirection(nodes[0].Position) - base.transform.TransformDirection(sharedMesh.vertices[startIndexOffset]);
		}
		return Vector3.zero;
	}

	public Vector3 GetStartUp()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			return base.transform.TransformDirection(sharedMesh.normals[startIndexOffset]);
		}
		return Vector3.up;
	}

	public Vector3 GetEndUp()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if ((bool)component && nodes != null && nodes.Length > 0)
		{
			Mesh sharedMesh = component.sharedMesh;
			Vector3 vector = base.transform.TransformDirection(nodes[nodes.Length - 1].Normal);
			if (nodes.Length < 2)
			{
				return vector;
			}
			Vector3 vector2 = -Vector3.Reflect(base.transform.TransformDirection(nodes[nodes.Length - 2].Normal), -vector);
			return vector2 + (vector - vector2) / 2f;
		}
		return Vector3.up;
	}

	public void OffsetNodes(int offset)
	{
		offset = Mathf.Clamp(offset, 0, nodes.Length);
		List<PathNode> list = new List<PathNode>(nodes);
		list.RemoveRange(0, offset);
		nodes = list.ToArray();
	}

	public void SetNodes()
	{
		MeshFilter component = GetComponent<MeshFilter>();
		if (!component)
		{
			return;
		}
		List<PathNode> list = new List<PathNode>();
		for (int i = 0; i < component.sharedMesh.uv.Length; i++)
		{
			float x = component.sharedMesh.uv[i].x;
			Vector2 centerUV = CenterUV;
			if (!Mathf.Approximately(x, centerUV.x))
			{
				continue;
			}
			float y = component.sharedMesh.uv[i].y;
			Vector2 centerUV2 = CenterUV;
			if (Mathf.Approximately(y, centerUV2.y))
			{
				Vector3 position = component.sharedMesh.vertices[i];
				if (!list.Any((PathNode node) => node.Position == position))
				{
					Vector3 normal = component.sharedMesh.normals[i];
					list.Add(new PathNode(position, normal));
				}
			}
		}
		nodes = list.ToArray();
	}

	public void AddNodes(PathNode[] nextNodes)
	{
		List<PathNode> list = new List<PathNode>(nodes);
		list.AddRange(nextNodes);
		nodes = list.ToArray();
	}

	public virtual PathNode[] GetWorldSpaceNodes()
	{
		if (nodes != null)
		{
			PathNode[] array = new PathNode[nodes.Length];
			for (int i = 0; i < array.Length; i++)
			{
				Vector3 position = base.transform.TransformPoint(nodes[i].Position);
				Vector3 normal = base.transform.TransformDirection(nodes[i].Normal);
				array[i] = new PathNode(position, normal);
			}
			return array;
		}
		return null;
	}

	public void SetMaterial(Material material)
	{
		MeshRenderer component = GetComponent<MeshRenderer>();
		if ((bool)component)
		{
			component.material = material;
		}
	}

	public Transform CreatePivot()
	{
		GameObject gameObject = new GameObject(base.gameObject.name + "Pivot");
		gameObject.transform.position = GetStartPosition();
		gameObject.transform.rotation = Quaternion.LookRotation(GetStartLookDirection(), GetStartUp());
		base.transform.SetParent(gameObject.transform);
		return gameObject.transform;
	}
}
