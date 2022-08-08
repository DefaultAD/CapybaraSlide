// DecompilerFi decompiler from Assembly-CSharp.dll class: Ramp
using UnityEngine;

[RequireComponent(typeof(BoxCollider))]
public class Ramp : MonoBehaviour
{
	[SerializeField]
	private int pathIndex;

	[SerializeField]
	private Vector3 normal;

	[SerializeField]
	[Range(-1f, 1f)]
	private float horizontalPosition;

	private BoxCollider boxCollider;

	private readonly float horizontalPositionMin = -0.9f;

	private readonly float horizontalPositionMax = 0.9f;

	private readonly int pathIndexVariation = 10;

	private int originalPathIndex;

	private bool isOriginalPathIndexStored;

	public int ClosestNodeIndex => pathIndex;

	public float HorizontalPosition => horizontalPosition;

	public float Distance
	{
		get;
		private set;
	}

	public float Height
	{
		get;
		private set;
	}

	public float Angle
	{
		get;
		private set;
	}

	public Matrix4x4 WorldToLocalMatrix
	{
		get;
		private set;
	}

	public Bounds Bounds
	{
		get;
		private set;
	}

	private void Awake()
	{
		boxCollider = GetComponent<BoxCollider>();
		Vector3 size = boxCollider.bounds.size;
		Distance = size.x;
		Vector3 size2 = boxCollider.bounds.size;
		Height = size2.z;
		Angle = Mathf.Atan2(Height, Distance) * 57.29578f;
		WorldToLocalMatrix = base.transform.worldToLocalMatrix;
		Bounds = boxCollider.bounds;
		if (!isOriginalPathIndexStored)
		{
			originalPathIndex = pathIndex;
			isOriginalPathIndexStored = true;
		}
	}

	private void ValidatePositionAndRotation()
	{
		Track track = UnityEngine.Object.FindObjectOfType<Track>();
		if ((bool)track && (bool)track.Slide)
		{
			PathNode[] nodes = track.Slide.Nodes;
			if (nodes != null || nodes.Length >= 2)
			{
				Quaternion rhs = Quaternion.Euler(270f, 270f, 180f);
				pathIndex = Mathf.Clamp(pathIndex, 0, nodes.Length - 2);
				int num = pathIndex;
				Vector3 vector = track.Slide.transform.TransformPoint(nodes[num].Position);
				Vector3 a = track.Slide.transform.TransformPoint(nodes[num + 1].Position);
				Vector3 normalized = (a - vector).normalized;
				Vector3 vector2 = track.Slide.transform.TransformDirection(nodes[num].Normal);
				Vector2 vector3 = Movement.FindEllipseSegmentIntersections(horizontalPosition);
				float angle = 90f + Mathf.Atan2(vector3.y, vector3.x) * 57.29578f;
				Vector3 a2 = Quaternion.AngleAxis(angle, normalized) * -vector2 * vector3.magnitude;
				Vector3 position = vector + vector2 * Movement.SlideHeight + a2 * Movement.SlideHeight * 2f + vector2 * 2.3f;
				Vector3 upwards = Quaternion.AngleAxis(angle, normalized) * vector2;
				Quaternion quaternion = Quaternion.LookRotation(normalized, upwards) * rhs;
				Quaternion rotation = quaternion;
				base.transform.position = position;
				base.transform.rotation = rotation;
				normal = Quaternion.Euler(0f, 0f, 25f * (0f - Mathf.Sign(horizontalPosition))) * base.transform.forward;
			}
		}
	}

	private void OnDrawGizmos()
	{
		Gizmos.DrawLine(base.transform.position, base.transform.position + normal);
	}

	public Bounds GetRampBounds()
	{
		return boxCollider.bounds;
	}

	public int GetRampIndex()
	{
		return pathIndex;
	}

	public float GetRampHorizontal()
	{
		return horizontalPosition;
	}

	public Vector3 GetRampNormal()
	{
		return normal;
	}

	public Quaternion GetRampRotation()
	{
		return Quaternion.Euler(0f, 0f, Mathf.Lerp(-90f, 90f, Mathf.InverseLerp(-1f, 1f, horizontalPosition)));
	}

	public void SetRandomRampPositionAndHorizontal(bool overrideHorizontalOnly = false)
	{
		float num = horizontalPosition = UnityEngine.Random.Range(horizontalPositionMin, horizontalPositionMax);
		if (!overrideHorizontalOnly)
		{
			pathIndex = Mathf.Max(originalPathIndex + UnityEngine.Random.Range(-pathIndexVariation, pathIndexVariation), 0);
		}
		ValidatePositionAndRotation();
	}
}
