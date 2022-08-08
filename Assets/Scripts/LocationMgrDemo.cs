// DecompilerFi decompiler from Assembly-CSharp.dll class: LocationMgrDemo

using UnityEngine;

public class LocationMgrDemo : MonoBehaviour
{
	private const string TEST_LOCATION = "moreApps";

	private const string SESSION_START_LOCATION_NAME = "sessionStart";

	private void Start()
	{

		
	}

	public void ReportLocation()
	{
		
	}

	public void IsLocationReady()
	{
		
	}

	public void Show()
	{
	}

	public void OnLocationLoaded(string location, long attributes)
	{
		
	}

	public void OnLocationFailed(string location, string message)
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnLocationFailed " + location + ", msg:" + message);
	}

	public void OnShown(string location, long attributes)
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnShown " + location);
	}

	public void OnShownFailed(string location, long attributes)
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnShownFailed " + location);
	}

	public void OnClosed(string location, long attributes)
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnClosed " + location);
	}

	public void OnConfigurationLoaded()
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnConfigurationLoaded ");
	}

	public void OnPauseGameMusic(bool shouldPause)
	{
		if (!shouldPause)
		{
		}
	}

	public void OnPsdkReady()
	{
		UnityEngine.Debug.Log("LocationMgrDemo : UnityLocationMgrDelegate::OnPsdkReady ");
	}
}
