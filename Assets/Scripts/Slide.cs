// DecompilerFi decompiler from Assembly-CSharp.dll class: Slide
using System;
using UnityEngine;

public class Slide : MonoBehaviour
{
	[HideInInspector]
	[SerializeField]
	private PathNode[] nodes;

	[SerializeField]
	private float height = 1f;

	[SerializeField]
	private float width = 3f;

	[SerializeField]
	private MeshFilter[] allSlideMeshes = new MeshFilter[0];

	[SerializeField]
	private float[] nodeDistances = new float[0];

	[SerializeField]
	private bool drawNodeIndices;

	public PathNode[] Nodes
	{
		get
		{
			return nodes;
		}
		set
		{
			nodes = value;
		}
	}

	public float[] NodeDistances
	{
		get
		{
			return nodeDistances;
		}
		set
		{
			nodeDistances = value;
		}
	}

	public float Height => height;

	public float Width => width;

	public SpeedBooster[] SpeedBoosters
	{
		get;
		private set;
	}

	public Ramp[] Ramps
	{
		get;
		private set;
	}

	public MeshFilter[] AllSlideMeshes => allSlideMeshes;

	public float Circumference
	{
		get;
		private set;
	}

	public bool DrawLineIndices => drawNodeIndices;

	private void OnDrawGizmos()
	{
		if (nodes == null)
		{
			return;
		}
		for (int i = 0; i < nodes.Length; i++)
		{
			Vector3 vector = base.transform.TransformPoint(nodes[i].Position);
			Vector3 b = base.transform.TransformDirection(nodes[i].Normal);
			Gizmos.DrawLine(vector, vector + b);
			if (i < nodes.Length - 1)
			{
				Vector3 a = base.transform.TransformPoint(nodes[i + 1].Position);
				Vector3 b2 = base.transform.TransformDirection(nodes[i + 1].Normal);
				Gizmos.DrawLine(vector + b, a + b2);
			}
		}
	}

	private void Start()
	{
		SpeedBoosters = GetComponentsInChildren<SpeedBooster>();
		Ramps = GetComponentsInChildren<Ramp>();
		Ramp[] ramps = Ramps;
		foreach (Ramp ramp in ramps)
		{
			ramp.gameObject.SetActive(SingletonBehaviour<GameController>.Instance.GameSettings.IsWaterRampsEnabled);
		}
		if (!SingletonBehaviour<GameController>.Instance.GameSettings.IsWaterRampsEnabled)
		{
			Ramps = new Ramp[0];
		}
		Circumference = (float)Math.PI * Mathf.Sqrt(2f * Mathf.Pow(width, 2f) + Mathf.Pow(height, 2f));
		if (SpeedBoosters.Length == 0)
		{
			UnityEngine.Debug.LogWarning("Speed Booster issue: Array is empty!");
		}
		if (Ramps.Length == 0 && SingletonBehaviour<GameController>.Instance.GameSettings.IsWaterRampsEnabled)
		{
			UnityEngine.Debug.LogWarning("Water Ramp issue: Array is empty!");
		}
	}

	public void RandomizeWaterRampAndSpeedBoosterPositions(bool overrideHorizontalOnly = false)
	{
		Ramp[] ramps = Ramps;
		foreach (Ramp ramp in ramps)
		{
			ramp.SetRandomRampPositionAndHorizontal(overrideHorizontalOnly);
		}
		SpeedBooster[] speedBoosters = SpeedBoosters;
		foreach (SpeedBooster speedBooster in speedBoosters)
		{
			speedBooster.SetRandomSpeedBoosterPositionAndHorizontal(overrideHorizontalOnly);
		}
	}
}
