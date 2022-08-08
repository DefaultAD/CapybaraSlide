// DecompilerFi decompiler from Assembly-CSharp.dll class: IronTubeView
using HyperCasual.PsdkSupport;
using UnityEngine;
using UnityEngine.UI;

public class IronTubeView : ViewBehaviour
{
	[Header("References")]
	[SerializeField]
	private Camera skinUICamera;

	[SerializeField]
	private Character skinCharacter;

	[SerializeField]
	private Button watchAndTryButton;

	private void OnEnable()
	{
		UpdateView();
		if (skinUICamera != null)
		{
			skinUICamera.gameObject.SetActive(value: true);
		}
		if (skinCharacter != null)
		{
			skinCharacter.gameObject.SetActive(value: true);
		}
	}

	protected override void UpdateView()
	{
		if (skinCharacter != null)
		{
			skinCharacter.gameObject.SetActive(value: true);
		}
		int defaultSkinIndex = SaveController.GetDefaultSkinIndex();
		CharacterController instance = ControllerBehaviour<CharacterController>.Instance;
		PlayerSkin playerSkin = instance.PlayerSkins[defaultSkinIndex];
		PlayerSkin characterSkin = playerSkin.Initialize(0, ironTube: true);
		skinCharacter.SetCharacterSkin(characterSkin);
		Transform transform = skinCharacter.transform;
		Vector3 localPosition = skinCharacter.transform.localPosition;
		transform.localPosition = new Vector3(localPosition.x, -0.9f, 10f);
		ControllerBehaviour<ScoreController>.Instance.DidShowIronTubePromotion();
	}

	//public void WatchAndTry()
	//{
 //       Debug.Log("show ads");
 //       Advertisements.Instance.ShowRewardedVideo(CompleteMethodSpeed);

 //   }

    private void CompleteMethodSpeed(bool completed, string advertiser)
    {


        if (completed == true)
        {
            //give the reward
            UpdateView();
        }
        else
        {
            //no reward
        }

    }
}
