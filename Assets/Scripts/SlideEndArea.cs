// DecompilerFi decompiler from Assembly-CSharp.dll class: SlideEndArea
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class SlideEndArea : MonoBehaviour
{
	[SerializeField]
	private Vector3 positionOffset;

	[SerializeField]
	private Transform[] centerNodeTransforms = new Transform[0];

	[SerializeField]
	private Transform[] leftNodeTransforms = new Transform[0];

	[SerializeField]
	private Transform[] rightNodeTransforms = new Transform[0];

	private Stack<Vector3> centerNodeStack;

	private Stack<Vector3> leftNodeStack;

	private Stack<Vector3> rightNodeStack;

	public void Reset(Vector3 position)
	{
		centerNodeStack = new Stack<Vector3>(from nodeTransform in centerNodeTransforms
			select nodeTransform.position);
		rightNodeStack = new Stack<Vector3>(from nodeTransform in rightNodeTransforms
			select nodeTransform.position);
		leftNodeStack = new Stack<Vector3>(from nodeTransform in leftNodeTransforms
			select nodeTransform.position);
	}

	public Vector3 GetNextFreePosition(EndAreaLocation location)
	{
		if (centerNodeStack.Count == 0 && leftNodeStack.Count == 0 && rightNodeStack.Count == 0)
		{
			return Vector3.zero;
		}
		if (location == EndAreaLocation.Right && rightNodeStack.Count == 0)
		{
			if (centerNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Center);
			}
			if (leftNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Left);
			}
		}
		if (location == EndAreaLocation.Left && leftNodeStack.Count == 0)
		{
			if (centerNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Center);
			}
			if (rightNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Right);
			}
		}
		if (location == EndAreaLocation.Center && centerNodeStack.Count == 0)
		{
			if (rightNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Right);
			}
			if (leftNodeStack.Count > 0)
			{
				return GetNextFreePosition(EndAreaLocation.Left);
			}
		}
		Vector3 result = Vector3.zero;
		switch (location)
		{
		case EndAreaLocation.Left:
			result = leftNodeStack.Pop();
			break;
		case EndAreaLocation.Center:
			result = centerNodeStack.Pop();
			break;
		case EndAreaLocation.Right:
			result = rightNodeStack.Pop();
			break;
		}
		return result;
	}
}
