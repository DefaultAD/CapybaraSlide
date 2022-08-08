// DecompilerFi decompiler from Assembly-CSharp.dll class: Track
using UnityEngine;

public class Track : MonoBehaviour
{
	[SerializeField]
	private Slide slide;

	[SerializeField]
	private SlideEndArea slideEndArea;

	[SerializeField]
	private Vector3 slideEndAreaOffset;

	public Slide Slide => slide;

	public SlideEndArea SlideEndArea => slideEndArea;
    private void Update()
    {
		if (Input.GetKeyDown(KeyCode.R))
		{
			Initialize();
		}
	}
    public void Reset()
	{
		Initialize();
	}

	public void Initialize()
	{
		if (!Slide)
		{
			return;
		}
		if (Slide.Nodes != null)
		{
			if (Slide.Nodes.Length > 0)
			{
				Vector3 a = Slide.transform.TransformPoint(Slide.Nodes[Slide.Nodes.Length - 1].Position);
				slideEndArea.Reset(a + slideEndAreaOffset);
			}
			else
			{
				UnityEngine.Debug.LogErrorFormat("Slide {0} node array is zero length", slide.gameObject.name);
			}
		}
		else
		{
			UnityEngine.Debug.LogErrorFormat("Slide {0} nodes are null", slide.gameObject.name);
		}
	}

	public Vector3 GetEndAreaNode(EndAreaLocation location)
	{
		return slideEndArea.GetNextFreePosition(location);
	}

	private int GetClosestSpeedBoosterNodeIndex(int compareNodeIndex, int range)
	{
		int result = -1;
		if (slide == null)
		{
			UnityEngine.Debug.LogError("Speed Booster error: Slide is null!");
			return result;
		}
		if (slide.SpeedBoosters.Length == 0)
		{
			UnityEngine.Debug.LogError("Speed Booster error: Array is empty!");
			return result;
		}
		for (int i = 0; i < slide.SpeedBoosters.Length; i++)
		{
			int num = slide.SpeedBoosters[i].ClosestNodeIndex - compareNodeIndex;
			if (num >= 0 && num <= range)
			{
				result = slide.SpeedBoosters[i].ClosestNodeIndex;
			}
		}
		return result;
	}

	public bool IsSpeedBoosterInRange(int compareNodeIndex, int range)
	{
		int closestSpeedBoosterNodeIndex = GetClosestSpeedBoosterNodeIndex(compareNodeIndex, range);
		return closestSpeedBoosterNodeIndex >= 0;
	}

	public float GetClosestSpeedBoosterHorizontalPosition(int compareNodeIndex, int range)
	{
		float result = 0f;
		if (slide == null)
		{
			UnityEngine.Debug.LogError("Speed Booster error: Slide is null!");
			return result;
		}
		if (slide.SpeedBoosters.Length == 0)
		{
			UnityEngine.Debug.LogError("Speed Booster error: Array is empty!");
			return result;
		}
		for (int i = 0; i < slide.SpeedBoosters.Length; i++)
		{
			int num = slide.SpeedBoosters[i].ClosestNodeIndex - compareNodeIndex;
			if (num >= 0 && num <= range)
			{
				result = slide.SpeedBoosters[i].HorizontalPosition;
			}
		}
		return result;
	}

	private int GetClosestWaterRampNodeIndex(int compareNodeIndex, int range)
	{
		int result = -1;
		if (slide == null)
		{
			UnityEngine.Debug.LogError("Water Ramp error: Slide is null!");
			return result;
		}
		if (slide.Ramps.Length == 0)
		{
			UnityEngine.Debug.LogError("Water Ramp error: Array is empty!");
			return result;
		}
		for (int i = 0; i < slide.Ramps.Length; i++)
		{
			int num = slide.Ramps[i].ClosestNodeIndex - compareNodeIndex;
			if (num >= 0 && num <= range)
			{
				result = slide.Ramps[i].ClosestNodeIndex;
			}
		}
		return result;
	}

	public bool IsWaterRampInRange(int compareNodeIndex, int range)
	{
		int closestWaterRampNodeIndex = GetClosestWaterRampNodeIndex(compareNodeIndex, range);
		return closestWaterRampNodeIndex >= 0;
	}

	public float GetClosestWaterRampHorizontalPosition(int compareNodeIndex, int range)
	{
		float result = 0f;
		if (slide == null)
		{
			UnityEngine.Debug.LogError("Water Ramp error: Slide is null!");
			return result;
		}
		if (slide.Ramps.Length == 0)
		{
			UnityEngine.Debug.LogError("Water Ramp error: Array is empty!");
			return result;
		}
		for (int i = 0; i < slide.Ramps.Length; i++)
		{
			int num = slide.Ramps[i].ClosestNodeIndex - compareNodeIndex;
			if (num >= 0 && num <= range)
			{
				result = slide.Ramps[i].HorizontalPosition;
			}
		}
		return result;
	}

	private void OnDrawGizmos()
	{
		if (Application.isPlaying && slide != null && SingletonBehaviour<TrackController>.Instance != null && slide.Nodes.Length > SingletonBehaviour<TrackController>.Instance.TrackEntranceAttachIndex)
		{
			Gizmos.color = Color.green;
			Gizmos.DrawSphere(slide.transform.TransformPoint(slide.Nodes[SingletonBehaviour<TrackController>.Instance.TrackEntranceAttachIndex].Position), 2f);
		}
	}
}
