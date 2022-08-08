// DecompilerFi decompiler from Assembly-CSharp.dll class: Leaderboard
using HyperCasual.PsdkSupport;
using UnityEngine;

public class Leaderboard : MonoBehaviour
{
	private void Start()
	{
		UpdateLeaderboardButton();
	}

	private void OnEnable()
	{
		UpdateLeaderboardButton();
	}

	private void UpdateLeaderboardButton()
	{
		base.gameObject.SetActive(value: false);
	}

	public void ShowLeaderboard()
	{

		UnityEngine.Debug.Log("requestLeaderboard");
	}
}
