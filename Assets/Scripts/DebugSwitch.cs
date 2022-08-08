// DecompilerFi decompiler from Assembly-CSharp.dll class: DebugSwitch
using UnityEngine;
using UnityEngine.UI;

public class DebugSwitch : MonoBehaviour
{
	[Header("References")]
	[SerializeField]
	private Text selectionText;

	[SerializeField]
	private Button increaseButton;

	[SerializeField]
	private Button decreaseButton;

	private int debugSettingIndex;

	private string settingName;

	public Text SelectionText => selectionText;

	public Button IncreaseButton => increaseButton;

	public Button DecreaseButton => decreaseButton;

	private void OnValidate()
	{
		if (!Application.isPlaying)
		{
			if (selectionText == null)
			{
				selectionText = GetComponentsInChildren<Text>()[1];
			}
			if (decreaseButton == null)
			{
				decreaseButton = GetComponentsInChildren<Button>()[0];
			}
			if (increaseButton == null)
			{
				increaseButton = GetComponentsInChildren<Button>()[1];
			}
		}
	}

	protected void Start()
	{
		decreaseButton.onClick.AddListener(Decrease);
		increaseButton.onClick.AddListener(Increase);
	}

	public void Initialize(int debugSettingIndex, string settingName, string initialValue)
	{
		this.debugSettingIndex = debugSettingIndex;
		this.settingName = settingName;
		selectionText.text = settingName + ": " + initialValue;
	}

	public void Increase()
	{
		string str = ControllerBehaviour<DebugController>.Instance.ChangeGameSetting(debugSettingIndex, 1);
		selectionText.text = settingName + ": " + str;
	}

	public void Decrease()
	{
		string str = ControllerBehaviour<DebugController>.Instance.ChangeGameSetting(debugSettingIndex, -1);
		selectionText.text = settingName + ": " + str;
	}
}
