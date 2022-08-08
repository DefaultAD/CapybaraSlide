using System.Collections;
using System.Collections.Generic;
using HyperCasual.PsdkSupport;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Reset : MonoBehaviour
{
    public void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            Debug.Log("bang");
            //Advertisements.Instance.ShowInterstitial();
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }    
}
