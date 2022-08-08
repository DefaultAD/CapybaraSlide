// DecompilerFi decompiler from Assembly-CSharp.dll class: SplashDemo

using UnityEngine;

public class SplashDemo : MonoBehaviour
{
	public void Awake()
	{

	
	}

	private void OnSplashConfigurationLoaded()
	{
		UnityEngine.Debug.Log("DemoAll::OnSplashConfigurationLoaded !");
	}

	private void OnPsdkReady()
	{
		UnityEngine.Debug.Log("OnPsdkReady !");
		UnityEngine.SceneManagement.SceneManager.LoadScene(1);
	}
}
