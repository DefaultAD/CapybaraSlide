// DecompilerFi decompiler from Assembly-CSharp.dll class: UpgradeView
using UnityEngine;
using UnityEngine.UI;

public class UpgradeView : ViewBehaviour
{
	[Header("References")]
	[SerializeField]
	private Text upgradeLevelText;

	[SerializeField]
	private Text upgradePriceText;

	[SerializeField]
	private Text upgradeButtonTitleText;

	[SerializeField]
	private Image upgradeButtonSymbolImage;

	[SerializeField]
	private GameObject upgradeAdContainer;

	[SerializeField]
	private Text upgradeDescriptionText;

	[SerializeField]
	private Button upgradeButton;

	[SerializeField]
	private Image upgradeButtonImage;

	[SerializeField]
	private GameObject upgradeReminder;

	[SerializeField]
	private PulsingButtonAnimator pulsingButtonAnimator;

	[Header("Settings")]
	[SerializeField]
	private Sprite upgradePointsButtonSprite;

	[SerializeField]
	private Sprite upgradeAdButtonSprite;

	[SerializeField]
	private Sprite upgradeDisabledButtonSprite;

	[SerializeField]
	private float upgradeNormalAlpha = 1f;

	[SerializeField]
	private float upgradeDisabledAlpha = 0.5f;

	private int upgradeViewIndex;

	private bool isPulsing;

	private void OnDisable()
	{
		isPulsing = false;
		ShowUpgradeReminder(toggle: false);
	}

	public void InitializeView(int viewIndex)
	{
		upgradeViewIndex = viewIndex;
	}

	protected override void UpdateView()
	{
		upgradeLevelText.text = ControllerBehaviour<UpgradeController>.Instance.GetUpgradeLevel(upgradeViewIndex).ToString();
		upgradePriceText.text = ControllerBehaviour<UpgradeController>.Instance.GetUpgradePrice(upgradeViewIndex).ToString();
		upgradeDescriptionText.text = "+" + Mathf.RoundToInt(100f * ControllerBehaviour<UpgradeController>.Instance.GetUpgradeValue(upgradeViewIndex) - 100f).ToString() + "%";
		bool flag = ControllerBehaviour<UpgradeController>.Instance.CanPurchaseUpgrade(upgradeViewIndex);

		bool willShowUpgradeTutorial = ControllerBehaviour<TutorialController>.Instance.WillShowUpgradeTutorial;
		if ( !flag)
		{
			upgradeAdContainer.SetActive(value: true);
			upgradePriceText.gameObject.SetActive(value: false);
			upgradeButtonImage.sprite = upgradeAdButtonSprite;
			upgradeButton.interactable = true;
			upgradeButtonTitleText.color = new Color(1f, 1f, 1f, upgradeNormalAlpha);
			upgradeButtonSymbolImage.color = new Color(1f, 1f, 1f, upgradeNormalAlpha);
		}
		else
		{
			upgradeAdContainer.SetActive(value: false);
			upgradePriceText.gameObject.SetActive(value: true);

			upgradeButton.interactable = flag;
			upgradeButtonTitleText.color = new Color(1f, 1f, 1f, upgradeNormalAlpha);
			upgradeButtonSymbolImage.color = new Color(1f, 1f, 1f, upgradeNormalAlpha);
			if (!flag)
			{
				upgradeButtonImage.sprite = upgradeDisabledButtonSprite;
				upgradeButtonTitleText.color = new Color(1f, 1f, 1f, upgradeDisabledAlpha);
				upgradeButtonSymbolImage.color = new Color(1f, 1f, 1f, upgradeDisabledAlpha);
			}
		}
		if ((flag ) && !willShowUpgradeTutorial)
		{
			if (!isPulsing)
			{
				pulsingButtonAnimator.StartPulsing();
				isPulsing = true;
			}
		}
		else if (isPulsing)
		{
			pulsingButtonAnimator.StopPulsing();
			isPulsing = false;
		}
	}

	public void ForceUpdateView()
	{
		UpdateView();
	}

	public void ShowUpgradeReminder(bool toggle)
	{
		upgradeReminder.SetActive(toggle);
	}

	public void PlayAd()
    {

    }
}
