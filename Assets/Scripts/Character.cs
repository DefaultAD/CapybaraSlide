// DecompilerFi decompiler from Assembly-CSharp.dll class: Character
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
	[Header("Settings")]
	[SerializeField]
	private bool isPlayer;

	[Header("References")]



	public BackToMainMenu backToMainMenu;

	public GameObject resetButton;

	public PhysicsCharacter physicsCharacter;

	//public GameObject interstitialADs;
	//public GameObject rewardedADs;

	private readonly int characterSkinIndex;

	private readonly int characterShortsIndex = 1;

    private void Update()
    {
		physicsCharacter = FindObjectOfType<PhysicsCharacter>();

	}

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Obsticle"))
        {
			resetButton.SetActive(true); 
			Time.timeScale = 0f;
		}

		if (other.CompareTag("Orange"))
		{			
			Destroy(other.gameObject);
			physicsCharacter.RaisePointEvent(PointType.Orange);
		}
	}
	
	//private IEnumerator Wait()
	//{
	//	yield return new WaitForSeconds(3);
	//}
	//public void WatchRewarded()
	//   {
	//	//play rewarded add
	//	rewardedADs.SetActive(true);
	//	Time.timeScale = 1f;
	//}

	public void RetryButton()
    {
		backToMainMenu.LoadMainMenu();
	}

	public void SetCharacterSkin(int skinIndex, Material overrideTubeMaterial = null)
	{
		PlayerSkin playerSkin = ControllerBehaviour<CharacterController>.Instance.PlayerSkins[skinIndex];
	
		SetOverlayMaterialColor();
	}

	public void SetCharacterSkin(PlayerSkin characterSkin, Material overrideTubeMaterial = null)
	{
		
		SetOverlayMaterialColor();
	}

	public void SetCharacterScale(float scale)
	{
		scale = Mathf.Clamp(scale, 0.5f, 5f);
	}

	public void SetOverlayMaterialColor(float alpha = 0f)
	{
		
	}
}
