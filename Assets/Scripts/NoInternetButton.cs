// DecompilerFi decompiler from Assembly-CSharp.dll class: NoInternetButton
using HyperCasual.PsdkSupport;
using UnityEngine;
using UnityEngine.UI;

public class NoInternetButton : MonoBehaviour
{
	public void OnEnable()
	{
		GetComponent<Button>().onClick.AddListener(OnClick);
	}

	private void OnClick()
	{

	}
}
