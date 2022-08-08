// DecompilerFi decompiler from Assembly-CSharp.dll class: NativeCampaignDemoScene

using UnityEngine;
using UnityEngine.UI;

public class NativeCampaignDemoScene : MonoBehaviour
{
	private GameObject _canvas;

	private InputField _showLocNameInputField;

	private void Start()
	{
		_canvas = GameObject.Find("Canvas");
		_canvas.SetActive(value: false);
		_showLocNameInputField = _canvas.GetComponentInChildren<InputField>();

		
	}

	public void OnClickShowLocation()
	{
		string text = _showLocNameInputField.text;
		if (string.IsNullOrEmpty(text))
		{
		}
		else
		{
		}
	}

	public void OnClickHideLocation()
	{
		string text = _showLocNameInputField.text;
		if (string.IsNullOrEmpty(text))
		{

		}
		else
		{
		}
	}
}
