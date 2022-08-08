using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GoogleMobileAds.Api;

public class GoogleAds : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake()
    {
        MobileAds.Initialize((InitializationStatus) =>
        {

        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
