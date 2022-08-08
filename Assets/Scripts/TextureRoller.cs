// DecompilerFi decompiler from Assembly-CSharp.dll class: TextureRoller
using UnityEngine;

public class TextureRoller : MonoBehaviour
{
	[SerializeField]
	private float offset = 7f;

	[SerializeField]
	private Material material;

	private Vector2 currentOffset;

	private void Update()
	{
		currentOffset.y += Time.deltaTime * offset;
		SetTextureOffset(currentOffset);
	}

	private void SetTextureOffset(Vector2 offsetValue)
	{
		if (material != null)
		{
			material.SetTextureOffset("_MainTex", offsetValue);
		}
		else
		{
			UnityEngine.Debug.LogError("TextureRoller: no material was supplied!");
		}
	}

	public void SetMaterial(Material nextMaterial)
	{
		material = nextMaterial;
	}
}
