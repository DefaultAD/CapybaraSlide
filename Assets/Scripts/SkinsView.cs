// DecompilerFi decompiler from Assembly-CSharp.dll class: SkinsView
using HyperCasual.PsdkSupport;
using SlipperySlides.Logging;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SkinsView : ViewBehaviour
{
	[Header("References")]
	[SerializeField]
	private Camera skinUICamera;

	[SerializeField]
	private Character skinCharacter;

	[SerializeField]
	private Character playerCharacter;

	[SerializeField]
	private Text selectedIndexText;

	[SerializeField]
	private ViewBehaviour[] disabledViews;

	[SerializeField]
	private Button selectButton;

	[SerializeField]
	private Button buyIronTubeButton;

	[SerializeField]
	private Button watchAndTryButton;

	[SerializeField]
	private Button unlockButton;

	[SerializeField]
	private Text selectButtonText;

	[SerializeField]
	private Text ironTubeText;

	[SerializeField]
	private Text watchAndTryTimerText;

	[SerializeField]
	private GameObject watchAndTryTextContainer;

	[SerializeField]
	private Text trophiesText;

	[SerializeField]
	private Image selectButtonLockImage;

	[SerializeField]
	private Image backgroundImage;

	[SerializeField]
	private TubeTextureContainer[] tubeTextureContainers;

	[SerializeField]
	private List<UIParticleSystem> bottomUIParticles = new List<UIParticleSystem>();

	[SerializeField]
	private UIParticleSystem centerUIParticles;

	[SerializeField]
	private UIParticleSystem unlockParticles;

	[SerializeField]
	private Sprite normalBackground;

	[SerializeField]
	private Sprite specialBackground;

	[SerializeField]
	private Image risingSunImage;

	[SerializeField]
	private PulsingButtonAnimator unlockButtonPulsingAnimator;

	[Header("Fields")]
	[SerializeField]
	[Range(0f, 1f)]
	private float selectedTubeMaterialButtonSize = 0.8f;

	[SerializeField]
	private Color normalRisingSunColor;

	[SerializeField]
	private Color specialRisingSunColor;

	[SerializeField]
	private bool isIronTubeIncluded = true;

	[SerializeField]
	private bool isIronTubeIAP = true;

	private bool isIronTubeActive;

	private int selectedIndex;

	private int[] tubeIndices;

	private int defaultIndex;

	private TimeSpan ironTubeTime;

	private Selectable[] selectables;

	private bool isSkinUnlockAnimationActive;

	private readonly int skinCost = 100;

	private readonly float[] unlockAnimationIntervals = new float[10]
	{
		0.2f,
		0.2f,
		0.2f,
		0.2f,
		0.3f,
		0.3f,
		0.3f,
		0.4f,
		0.4f,
		0.5f
	};

	private void OnEnable()
	{
		if (skinUICamera != null)
		{
			skinUICamera.gameObject.SetActive(value: true);
		}
		if (skinCharacter != null)
		{
			skinCharacter.gameObject.SetActive(value: true);
		}
		selectedIndex = ControllerBehaviour<PlayerController>.Instance.PlayerSkinIndex;
		if ((bool)ControllerBehaviour<UpgradeController>.Instance)
		{
			ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: false);
		}
		ViewBehaviour[] array = disabledViews;
		foreach (ViewBehaviour viewBehaviour in array)
		{
			if ((bool)viewBehaviour)
			{
				viewBehaviour.Disable();
			}
		}
		tubeIndices = new int[ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count];
		for (int j = 0; j < ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count; j++)
		{
			tubeIndices[j] = 0;
		}
		foreach (UIParticleSystem bottomUIParticle in bottomUIParticles)
		{
			bottomUIParticle.EmitContinuous();
		}
		centerUIParticles.EmitContinuous();
		selectedIndex = SaveController.GetDefaultSkinIndex();
		tubeIndices[selectedIndex] = SaveController.GetDefaultSkinTubeIndex();
		defaultIndex = SaveController.GetDefaultSkinIndex();
		selectables = GetComponentsInChildren<Selectable>();
		StartCoroutine(CalculateIronTubeTime());
		UpdateView();
		backgroundImage.sprite = normalBackground;
	}

	public override void Disable(bool isInstant = false)
	{
		base.Disable(isInstant);
		if (skinCharacter != null)
		{
			skinCharacter.gameObject.SetActive(value: false);
		}
	}

	private void OnDisable()
	{
		if (skinUICamera != null)
		{
			skinUICamera.gameObject.SetActive(value: false);
		}
		if ((bool)ControllerBehaviour<UpgradeController>.Instance)
		{
			ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: true, forceResetView: true);
		}
		ViewBehaviour[] array = disabledViews;
		foreach (ViewBehaviour viewBehaviour in array)
		{
			if ((bool)viewBehaviour)
			{
				viewBehaviour.Enable();
			}
		}
		foreach (UIParticleSystem bottomUIParticle in bottomUIParticles)
		{
			bottomUIParticle.StopEmittingContinuous();
		}
		centerUIParticles.StopEmittingContinuous();
		StopAllCoroutines();
	}

	private bool IsCurrentSkinUnlocked()
	{
		if (selectedIndex >= ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count)
		{
			return false;
		}
		return ControllerBehaviour<CharacterController>.Instance.PlayerSkins[selectedIndex].AlwaysUnlocked || SaveController.IsSkinUnlocked(selectedIndex);
	}

	private bool IsCurrentSkinTubeUnlocked(int tubeIndex)
	{
		if (selectedIndex >= ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count)
		{
			return false;
		}
		return (ControllerBehaviour<CharacterController>.Instance.PlayerSkins[selectedIndex].AlwaysUnlocked && tubeIndex == 0) || SaveController.IsSkinTubeUnlocked(selectedIndex, tubeIndex);
	}

	private IEnumerator RemoveTrophies(int count, int initial)
	{
		for (float time = 0f; time < 1f; time += Time.deltaTime)
		{
			int animatedTrophiesCount = (int)Mathf.Lerp(initial, initial - count, time);
			trophiesText.text = animatedTrophiesCount.ToString();
			yield return null;
		}
		trophiesText.text = (initial - count).ToString();
	}

	private IEnumerator UnlockAnimation()
	{
		CharacterController characterController = ControllerBehaviour<CharacterController>.Instance;
		if (characterController.PlayerSkins.Count < 2)
		{
			UnityEngine.Debug.LogError("Tried to play skin unlock animation, but there are too few player skins available!");
			yield break;
		}
		isSkinUnlockAnimationActive = true;
		Selectable[] array = selectables;
		foreach (Selectable selectable in array)
		{
			selectable.interactable = false;
		}
		int[] animationSkinIndices = new int[unlockAnimationIntervals.Length];
		for (int k = 0; k < animationSkinIndices.Length - 1; k++)
		{
			int num = (k != 0) ? animationSkinIndices[k - 1] : selectedIndex;
			int num2 = UnityEngine.Random.Range(0, ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count);
			if (num2 == num)
			{
				num2 = ((num != characterController.PlayerSkins.Count - 1) ? (num2 + 1) : 0);
			}
			animationSkinIndices[k] = num2;
		}
		animationSkinIndices[animationSkinIndices.Length - 1] = selectedIndex;
		Vector3 startScale = skinCharacter.transform.localScale;
		bool animateAllPhases = false;
		for (int i = 0; i < animationSkinIndices.Length; i++)
		{
			skinCharacter.SetCharacterSkin(characterController.PlayerSkins[animationSkinIndices[i]].Initialize(0));
			for (float time = 0f; time < unlockAnimationIntervals[i]; time += Time.deltaTime)
			{
				if (animateAllPhases || i == unlockAnimationIntervals.Length - 1)
				{
					unlockParticles.Emit();
					float num3 = time / unlockAnimationIntervals[i];
					Vector3 localScale = (!(num3 < 0.5f)) ? Vector3.Lerp(startScale / 0.9f, startScale, (num3 - 0.5f) * 2f) : Vector3.Lerp(startScale, startScale / 0.9f, num3 * 2f);
					skinCharacter.transform.localScale = localScale;
				}
				yield return null;
			}
			skinCharacter.transform.localScale = startScale;
		}
		isSkinUnlockAnimationActive = false;
		Selectable[] array2 = selectables;
		foreach (Selectable selectable2 in array2)
		{
			selectable2.interactable = true;
		}
		ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.SkinUnlock);
		UpdateView();
	}

	private IEnumerator CalculateIronTubeTime()
	{
		while (true)
		{
			CheckWatchAndTryState();
			yield return new WaitForSeconds(1f);
		}
	}

	private void CheckWatchAndTryState()
	{
		ironTubeTime = DateTime.Today.AddDays(1.0) - DateTime.Now;
		if (!ControllerBehaviour<CharacterController>.Instance.IsIronTubeAvailable())
		{
			watchAndTryTextContainer.SetActive(value: false);
			watchAndTryTimerText.enabled = true;
			watchAndTryTimerText.text = FormatUtility.DoubleDigitTime(ironTubeTime.Hours, ironTubeTime.Minutes, ironTubeTime.Seconds);
		}
		else
		{
			watchAndTryTextContainer.SetActive(value: true);
			watchAndTryTimerText.enabled = false;
		}
	}

	private void Update()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start && (ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.Skins || ControllerBehaviour<ViewController>.Instance.IsPopupViewActive(PopupViewState.Skins)) && !ControllerBehaviour<ViewController>.Instance.IsPopupViewActive(PopupViewState.SkinUnlock)  && UnityEngine.Input.GetKeyDown(KeyCode.Escape) && !isSkinUnlockAnimationActive)
		{
			CloseButtonClicked();
		}
	}

	protected override void UpdateView()
	{
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		int count = ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count;
		CharacterController instance = ControllerBehaviour<CharacterController>.Instance;
		bool flag = selectedIndex == instance.PlayerSkins.Count;
		PlayerSkin playerSkin = (!flag) ? instance.PlayerSkins[selectedIndex] : instance.PlayerSkins[defaultIndex];
		PlayerSkin characterSkin = playerSkin.Initialize((!flag) ? tubeIndices[selectedIndex] : 0, flag);
		Texture2D[] array = (from x in playerSkin.TubeMaterials
			select x.mainTexture as Texture2D).ToArray();
		bool flag2 = IsCurrentSkinUnlocked() || gameSettings.AllSkinsUnlocked;
		SetIronTubeView(flag, instance);
		bool flag3 = ControllerBehaviour<ScoreController>.Instance.IsEnoughTotalTrophies(skinCost) && !instance.AllUnlockableSkinsUnlocked();
		unlockButton.interactable = flag3;
		if (flag3)
		{
			unlockButtonPulsingAnimator.StartPulsing();
		}
		for (int i = 0; i < 3; i++)
		{
			tubeTextureContainers[i].RectTransform.gameObject.SetActive(!flag);
			if (!flag)
			{
				TubeTextureContainer tubeTextureContainer = tubeTextureContainers[i];
				tubeTextureContainer.TubeMaterial.SetTexture("_TubeTexture", array[i]);
				bool flag4 = IsCurrentSkinTubeUnlocked(i) || gameSettings.AllSkinsUnlocked;
				tubeTextureContainer.RectTransform.localScale = ((tubeIndices[selectedIndex] != i || !flag4) ? new Vector3(selectedTubeMaterialButtonSize, selectedTubeMaterialButtonSize, selectedTubeMaterialButtonSize) : Vector3.one);
				tubeTextureContainer.Button.interactable = (flag4 || (flag2 && ControllerBehaviour<ScoreController>.Instance.TotalTrophies >= playerSkin.TubePrices[i]));
				tubeTextureContainer.LockedContainer.SetActive(!flag4);
				tubeTextureContainer.PriceText.text = ((i != 0) ? playerSkin.TubePrices[i].ToString() : string.Empty);
			}
		}
		skinCharacter.SetCharacterSkin(characterSkin);
		selectedIndexText.text = $"{selectedIndex + 1}/{count + (isIronTubeIncluded ? 1 : 0)}";
		if (!flag)
		{
			selectButtonText.enabled = flag2;
			selectButtonLockImage.enabled = !flag2;
			selectButton.interactable = flag2;
		}
		trophiesText.text = ControllerBehaviour<ScoreController>.Instance.TotalTrophies.ToString();
		backgroundImage.sprite = ((!flag) ? normalBackground : specialBackground);
		Color color = (!flag) ? normalRisingSunColor : specialRisingSunColor;
		risingSunImage.color = color;
		centerUIParticles.ChangeParticleSystemColor(color);
	}

	private void SetIronTubeView(bool isIronTubeActive, CharacterController characterController)
	{
		
			watchAndTryButton.gameObject.SetActive(value: false);
			buyIronTubeButton.gameObject.SetActive(value: false);
			selectButtonText.enabled = true;
			selectButtonLockImage.enabled = false;
			selectButton.interactable = true;
			selectButton.gameObject.SetActive(value: true);
			selectButton.onClick.AddListener(SetIronTube);
		
		
		
			bool interactable = characterController.IsIronTubeAvailable();
			watchAndTryButton.interactable = interactable;
			CheckWatchAndTryState();
			buyIronTubeButton.gameObject.SetActive(isIronTubeActive && isIronTubeIAP);
			watchAndTryButton.gameObject.SetActive(isIronTubeActive);
			selectButton.gameObject.SetActive(!isIronTubeActive);
		
		ironTubeText.gameObject.SetActive(isIronTubeActive);
		if (isIronTubeActive)
		{
			Transform transform = skinCharacter.transform;
			Vector3 localPosition = skinCharacter.transform.localPosition;
			transform.localPosition = new Vector3(localPosition.x, -0.2f, 10f);
		}
		else
		{
			Transform transform2 = skinCharacter.transform;
			Vector3 localPosition2 = skinCharacter.transform.localPosition;
			transform2.localPosition = new Vector3(localPosition2.x, -0.5f, 10f);
		}
	}



	public void MoveIndex(int next)
	{
		int num = (next > 0) ? 1 : (-1);
		int num2 = selectedIndex + num;
		int count = ControllerBehaviour<CharacterController>.Instance.PlayerSkins.Count;
		if (num2 < 0)
		{
			num2 = count - ((!isIronTubeIncluded) ? 1 : 0);
		}
		else if (num2 == count + (isIronTubeIncluded ? 1 : 0))
		{
			num2 = 0;
		}
		selectedIndex = num2;
		UpdateView();
		SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UIClick);
	}

	public void SelectSkin()
	{
		if (IsCurrentSkinUnlocked() || SingletonBehaviour<GameController>.Instance.GameSettings.AllSkinsUnlocked)
		{
			PlayerPrefs.SetInt("SelectedSkinIndex", selectedIndex);
			PlayerSkin playerSkin = ControllerBehaviour<CharacterController>.Instance.PlayerSkins[selectedIndex].Initialize(tubeIndices[selectedIndex]);
			ControllerBehaviour<CharacterController>.Instance.ChangeCharacterSkin(playerCharacter, playerSkin);
			CloseButtonClicked();
			SaveController.SaveDefaultSkin(selectedIndex, tubeIndices[selectedIndex]);
			if (ControllerBehaviour<PlayerController>.Instance.IsIronTube())
			{
				ControllerBehaviour<PlayerController>.Instance.RestartGameWithIronTubeActive(active: false);
			}
		}
	}

    public void SelectIronTube()
    {
        if (SaveController.GetAdsEnabled())
        {
            {
               
                    SetIronTube();
                

            }
        }
    }

	private void SetIronTube()
	{
		PlayerPrefs.SetInt("SelectedSkinIndex", defaultIndex);
		PlayerSkin playerSkin = ControllerBehaviour<CharacterController>.Instance.PlayerSkins[defaultIndex].Initialize(0, ironTube: true);
		ControllerBehaviour<CharacterController>.Instance.ChangeCharacterSkin(playerCharacter, playerSkin);
		ControllerBehaviour<ViewController>.Instance.HidePopupView();
		SaveController.SaveDefaultSkin(defaultIndex, SaveController.GetDefaultSkinTubeIndex());
		SaveController.SetIronTubeAsUsed();
		ControllerBehaviour<PlayerController>.Instance.RestartGameWithIronTubeActive(active: true);
	}

	public void SetTubeIndex(int index)
	{
        //if (Advertisements.Instance.IsInterstitialAvailable())
        //{
        //    Advertisements.Instance.ShowInterstitial();
        //}
        int num = ControllerBehaviour<CharacterController>.Instance.PlayerSkins[selectedIndex].TubePrices[index];
		int totalTrophies = ControllerBehaviour<ScoreController>.Instance.TotalTrophies;
		if (!IsCurrentSkinTubeUnlocked(index) && ControllerBehaviour<ScoreController>.Instance.TotalTrophies >= num)
		{
			SaveController.SaveUnlockedSkin(selectedIndex, index);
			ControllerBehaviour<ScoreController>.Instance.RemoveTotalTrophies(num);
			string itemAcquire = "skin_" + selectedIndex + "_tube_" + index;
			DDNAGameTransactionSpent("trophies", num, itemAcquire, "skin_tube");
			SendDeltaEvent.LogVisitShop("buy", "premiumCurrency", totalTrophies, num, "skin_" + CharacterController.skinNames[selectedIndex] + "_tube_" + index, "skin button", "main screen", string.Empty);
			StartCoroutine(RemoveTrophies(num, ControllerBehaviour<ScoreController>.Instance.TotalTrophies + num));
		}
		tubeIndices[selectedIndex] = index;
		UpdateView();
		SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UIClick);
	}

	public void UnlockRandomSkin()
	{
		int totalTrophies = ControllerBehaviour<ScoreController>.Instance.TotalTrophies;
		if (ControllerBehaviour<ScoreController>.Instance.TotalTrophies >= skinCost)
		{
			selectedIndex = ControllerBehaviour<CharacterController>.Instance.UnlockRandomSkin();
			ControllerBehaviour<ScoreController>.Instance.RemoveTotalTrophies(skinCost);
			DDNAGameTransactionSpent("trophies", skinCost, "skin_" + selectedIndex, "skin");
			SendDeltaEvent.LogVisitShop("buy", "premiumCurrency", totalTrophies, skinCost, "skin_" + CharacterController.skinNames[selectedIndex], "skin button", "main screen", string.Empty);
			StartCoroutine(RemoveTrophies(skinCost, ControllerBehaviour<ScoreController>.Instance.TotalTrophies + skinCost));
			StartCoroutine(UnlockAnimation());
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UIClick);
			unlockButtonPulsingAnimator.StopPulsing();
		}
	}

	private void DDNAGameTransactionSpent(string itemSpent, int amountSpent, string itemAcquire, string itemAcquiredType)
	{
		int precoinAmount = ControllerBehaviour<ScoreController>.Instance.TotalTrophies + amountSpent;
		SendDeltaEvent.GameTransaction(itemSpent, amountSpent, itemAcquire, 1, itemAcquiredType, precoinAmount, "shop");
	}

	public void CloseButtonClicked()
	{
		int totalTrophies = ControllerBehaviour<ScoreController>.Instance.TotalTrophies;
		if (!SendDeltaEvent.HasVisitShopEventsPending())
		{
			SendDeltaEvent.LogVisitShop("nothing", "nothing", totalTrophies, 0, "nothing", "skin button", "main screen", string.Empty);
		}
		SendDeltaEvent.SendVisitShopEvents();
		ControllerBehaviour<ViewController>.Instance.HidePopupView();
	}
}
