using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RateUs : MonoBehaviour
{
    private const string AndroidRatingURI = "http://play.google.com/store/apps/details?id={0}";
    private const string iOSRatingURI = "itms://itunes.apple.com/us/app/apple-store/{0}?mt=8";
    [Tooltip("iOS App ID (number), example: 1122334455")]
    public string iOSAppID = "";

    private string url;



    private GameController gameCtrl;
    // Start is called before the first frame update
    void Start()
    {

#if UNITY_IOS
        if (!string.IsNullOrEmpty (iOSAppID)) {
            url = iOSRatingURI.Replace("{0}",iOSAppID);
        }
        else {
            Debug.LogWarning ("Please set iOSAppID variable");
        }
 
#elif UNITY_ANDROID
        url = AndroidRatingURI.Replace("{0}", Application.identifier);
#endif


        gameCtrl = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameController>();
    }

   

  //rate later
    public void RateLater()
    {
        gameCtrl.timeToShowRate = gameCtrl.startTimeToShowRate;
        gameCtrl.rateBool = false;
        this.gameObject.SetActive(false);

    }
    /// Open rating url
    public void RateNow()
    {
        this.gameObject.SetActive(false);

        if (!string.IsNullOrEmpty(url))
        {
            Application.OpenURL(url);
            PlayerPrefs.SetInt("ALreadyrate", 1);
        }
        else
        {
            Debug.LogWarning("Unable to open URL, invalid OS");
        }
    }
}
