// DecompilerFi decompiler from Assembly-CSharp.dll class: TipTutorialView
using UnityEngine;
using UnityEngine.UI;

public class TipTutorialView : ViewBehaviour
{
	[SerializeField]
	private Text tipText;

	private void OnEnable()
	{
	}

	private void OnDisable()
	{
	}

	protected override void UpdateView()
	{
	}

	public void Enable(string tip, bool isInstant = false)
	{
		tipText.text = tip;
		base.Enable(isInstant);
	}
}
