// DecompilerFi decompiler from Assembly-CSharp.dll class: BackToMainMenu
using HyperCasual.PsdkSupport;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BackToMainMenu : MonoBehaviour
{
    public void LoadMainMenu()
    {
        Debug.Log("show ads");
        //Advertisements.Instance.ShowInterstitial();
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
