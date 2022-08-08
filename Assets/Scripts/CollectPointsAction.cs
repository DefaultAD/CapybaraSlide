// DecompilerFi decompiler from Assembly-CSharp.dll class: CollectPointsAction
using HyperCasual.PsdkSupport;
using SlipperySlides.Logging;
using UnityEngine;

public class CollectPointsAction : MonoBehaviour
{
	[SerializeField]
	private CollectType collectType;

	private ScoreDoubleView scoreDoubleView;
    public GameObject NoAds;


    private void OnEnable()
	{
		scoreDoubleView = GetComponentInParent<ScoreDoubleView>();
	}

	public void Collect()
	{
		if (scoreDoubleView.IsAnyCollectButtonPressed)
		{
			return;
		}
		if (scoreDoubleView.IsBackButtonPressed)
		{
			scoreDoubleView.CollectPoints(collectType);
			SendDeltaEvent.PopUp("postLevel", "collect_backButton", "earned points popup", "initiated");
			scoreDoubleView.SetCollectButtonPressed();
            Debug.Log("single");
			return;
		}

	
		
		else
		{
			
            if (collectType == 0)
            {
                Debug.Log("Single");
                scoreDoubleView.CollectPoints(collectType);
                SendDeltaEvent.PopUp("postLevel", "collect", "earned points popup", "initiated");

            }
            //else if (collectType != 0)
            //{
            //    if (Advertisements.Instance.IsRewardVideoAvailable())
            //    {
            //        Debug.Log("Double only in Game");
            //        Advertisements.Instance.ShowRewardedVideo(CompleteMethod);
            //    }
            //    else
            //    {
            //        NoAds.SetActive(true);
            //        scoreDoubleView.CollectPoints(0);

            //        scoreDoubleView.SetCollectButtonPressed();


            //    }



            //}
        }
	}



    // ads 

    private void CompleteMethod(bool completed, string advertiser)
    {
       
        
            if (completed == true)
            {
            //give the reward
            scoreDoubleView.CollectPoints(collectType);
            SendDeltaEvent.PopUp("postLevel", "collect", "earned points popup", "initiated");
        }
            else
            {
                //no reward
            }
        
    }
}
