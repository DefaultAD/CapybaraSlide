// DecompilerFi decompiler from Assembly-CSharp.dll class: SpeedBooster
using MoreMountains.NiceVibrations;
using UnityEngine;

public class SpeedBooster : MonoBehaviour
{
	[Header("References")]
	[SerializeField]
	private Transform particlesLeft;

	[SerializeField]
	private Transform particlesRight;

	[Header("Placement")]
	[SerializeField]
	private int pathIndex;

	[SerializeField]
	[Range(-1f, 1f)]
	private float horizontalPosition;

	[SerializeField]
	[Range(-90f, 90f)]
	private float zRotationMultiplier = 1f;

	[SerializeField]
	private AnimationCurve rotationOffsetCurve;

	private readonly float horizontalPositionMin = -0.7f;

	private readonly float horizontalPositionMax = 0.7f;

	private readonly int pathIndexVariation = 10;

	private int originalPathIndex;

	private bool isOriginalPathIndexStored;

	public int ClosestNodeIndex => pathIndex;

	public float HorizontalPosition => horizontalPosition;

	private void Awake()
	{
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
				float num = rotationOffsetCurve.Evaluate(horizontalPosition + 1f);
				Quaternion rhs = Quaternion.Euler(20f, 180f, num * zRotationMultiplier);
				pathIndex = Mathf.Clamp(pathIndex, 0, nodes.Length - 2);
				int num2 = pathIndex;
				Vector3 vector = track.Slide.transform.TransformPoint(nodes[num2].Position);
				Vector3 a = track.Slide.transform.TransformPoint(nodes[num2 + 1].Position);
				Vector3 normalized = (a - vector).normalized;
				Vector3 vector2 = track.Slide.transform.TransformDirection(nodes[num2].Normal);
				Vector2 vector3 = Movement.FindEllipseSegmentIntersections(horizontalPosition);
				float angle = 90f + Mathf.Atan2(vector3.y, vector3.x) * 57.29578f;
				Vector3 a2 = Quaternion.AngleAxis(angle, normalized) * -vector2 * vector3.magnitude;
				Vector3 position = vector + vector2 * Movement.SlideHeight + a2 * Movement.SlideHeight * 2f + vector2 * 2.9f;
				Vector3 upwards = Quaternion.AngleAxis(angle, normalized) * vector2;
				Quaternion quaternion = Quaternion.LookRotation(normalized, upwards) * rhs;
				Quaternion rotation = quaternion;
				base.transform.position = position;
				base.transform.rotation = rotation;
			}
		}
	}

	private void OnTriggerEnter(Collider other)
	{
		if (!other.CompareTag("Player") && !other.CompareTag("Opponent"))
		{
			return;
		}
		Movement componentInParent = other.GetComponentInParent<Movement>();
		if ((bool)componentInParent)
		{
			if (other.CompareTag("Player"))
			{
				ControllerBehaviour<CameraController>.Instance.ActivateSpeedBoosterEffect();
				SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.SpeedBooster);
				SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.HeavyImpact);
			}
		}
		else
		{
			UnityEngine.Debug.LogErrorFormat("No Movement script found in {0} named {1}", other.tag, other.gameObject.name);
		}
		ControllerBehaviour<PhysicsController>.Instance.AddSpeedBoostToCharacter(componentInParent);
	}

	public void SetRandomSpeedBoosterPositionAndHorizontal(bool overrideHorizontalOnly = false)
	{
		float num = horizontalPosition = UnityEngine.Random.Range(horizontalPositionMin, horizontalPositionMax);
		if (!overrideHorizontalOnly)
		{
			pathIndex = Mathf.Max(originalPathIndex + UnityEngine.Random.Range(-pathIndexVariation, pathIndexVariation), 0);
		}
		ValidatePositionAndRotation();
	}
}
