// DecompilerFi decompiler from Assembly-CSharp.dll class: ShadowProjector
using UnityEngine;

[RequireComponent(typeof(Projector))]
public class ShadowProjector : MonoBehaviour
{
	[SerializeField]
	private bool isPlayer;

	[SerializeField]
	private float projectorHeight = 1.5f;

	[SerializeField]
	private float maxDistanceFromCamera = 30f;

	private Movement movement;

	private Projector projector;

	private void Awake()
	{
		movement = GetComponentInParent<Movement>();
		projector = GetComponent<Projector>();
		if (!isPlayer)
		{
			projector.enabled = false;
		}
	}

	private void Update()
	{
		if (movement.enabled)
		{
			PathNode[] nodes = SingletonBehaviour<TrackController>.Instance.Track.Slide.Nodes;
			Vector3 vector = ControllerBehaviour<CameraController>.Instance.Camera.transform.position - base.transform.position;
			Vector3 forward = ControllerBehaviour<CameraController>.Instance.Camera.transform.forward;
			bool flag = vector.sqrMagnitude < maxDistanceFromCamera * maxDistanceFromCamera;
			bool flag2 = Vector3.Dot(forward, vector.normalized) < 0f;
			bool flag3 = nodes != null && nodes.Length > 0 && movement.CurrentNodeIndex == nodes.Length - 1;
			projector.enabled = (flag && flag2 && !flag3);
			base.transform.position = movement.PositionOnPath + movement.Up * projectorHeight;
			base.transform.rotation = Quaternion.LookRotation(-movement.RotatedUp, movement.RotatedUp);
		}
	}
}
