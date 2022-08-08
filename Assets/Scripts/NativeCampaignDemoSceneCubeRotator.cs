// DecompilerFi decompiler from Assembly-CSharp.dll class: NativeCampaignDemoSceneCubeRotator
using UnityEngine;

public class NativeCampaignDemoSceneCubeRotator : MonoBehaviour
{
	public float speed = 2f;

	private void Start()
	{
	}

	private void Update()
	{
		base.transform.Rotate(0f, Time.deltaTime * speed, 0f, Space.Self);
	}
}
