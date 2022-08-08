// DecompilerFi decompiler from Assembly-CSharp.dll class: SpeedBoosterArrowPlacer
using UnityEngine;

public class SpeedBoosterArrowPlacer : MonoBehaviour
{
	[SerializeField]
	private GameObject speedBoosterArrow;

	[SerializeField]
	private Vector3 localPosition = new Vector3(0f, 0f, 0f);

	[SerializeField]
	private Vector3 localScale = new Vector3(0.3f, 0.3f, 0.3f);

	[SerializeField]
	private Quaternion localRotation = Quaternion.Euler(270f, 0f, 0f);

	[SerializeField]
	private Color color = Color.white;

	private void Awake()
	{
		base.gameObject.SetActive(value: false);
	}
}
