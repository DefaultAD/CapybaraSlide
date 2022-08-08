// DecompilerFi decompiler from Assembly-CSharp.dll class: UpgradeTutorialView
using UnityEngine;
using UnityEngine.UI;

public class UpgradeTutorialView : ViewBehaviour
{
	[Header("References")]
	[SerializeField]
	private Text upgradePriceText;

	private void OnEnable()
	{
		UpdateView();
	}

	private void OnDisable()
	{
	}

	protected override void UpdateView()
	{
		upgradePriceText.text = ControllerBehaviour<UpgradeController>.Instance.GetUpgradePrice(ControllerBehaviour<TutorialController>.Instance.UpgradeTutorialUpgradeIndex).ToString();
	}
}
