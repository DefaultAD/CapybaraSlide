// DecompilerFi decompiler from Assembly-CSharp.dll class: UpgradeAction
using HyperCasual.PsdkSupport;
using MoreMountains.NiceVibrations;
using SlipperySlides.Logging;

using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class UpgradeAction : MonoBehaviour
{
	[SerializeField]
	private bool isUpgradeTutorial;

	private bool isTutorialPurchased;

	private bool isSuccessfulPurchase;

	public void PurchaseUpgrade(int viewIndex)
	{
		if (isUpgradeTutorial && isTutorialPurchased)
		{
			return;
		}
		if (isUpgradeTutorial && !isTutorialPurchased)
		{
			SendDeltaEvent.TutorialScheme("1", 1, "upgrade", 3);
		}
		isSuccessfulPurchase = false;

		
			isSuccessfulPurchase = ControllerBehaviour<UpgradeController>.Instance.PurchaseUpgrade(viewIndex);
			SuccessfulPurchase();
		
	}

	private void SuccessfulPurchase()
	{
		if (isSuccessfulPurchase)
		{
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UIClick);
			SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.Selection);
			if (isUpgradeTutorial && !isTutorialPurchased)
			{
				isTutorialPurchased = true;
				ControllerBehaviour<TutorialController>.Instance.SetUpgradeTutorialPassed();
			}
		}
	}
}
