// DecompilerFi decompiler from Assembly-CSharp.dll class: HyperCasual.Revive.ReviveHud
using HyperCasual.PsdkSupport;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace HyperCasual.Revive
{
	public class ReviveHud : MonoBehaviour
	{
		[Header("Revive Hud")]
		public ReviveCountdownProgressBar reviveCounter;

		public GameObject noInternetHud;

		public Button skipButton;

		public Button reviveButton;

		public static event Action<bool> ReviveDoneEvent;

		public void StartCount(int countdownTime, int skipTime)
		{
			reviveButton.interactable = true;
			reviveCounter.gameObject.SetActive(value: true);
			reviveCounter.StartCount(countdownTime);
			ReviveCountdownProgressBar.ExpiredEvent += OnReviveExpired;
			StartCoroutine(ShowSkipButtonCoro(skipTime));
		}

		public void SkipReviveClicked()
		{
			UnityEngine.Debug.Log("SkipReviveClicked ");
			reviveCounter.StopCount();
			ReviveHud.ReviveDoneEvent(obj: false);
		}

		public void WatchRVForContinueButtonClicked()
		{
			StopAllCoroutines();
			reviveButton.interactable = false;
			skipButton.gameObject.SetActive(value: true);
			reviveCounter.StopCount();
			reviveCounter.gameObject.SetActive(value: false);
            Debug.Log("show ads");


        }

        private void OnReviveExpired()
		{
			ReviveCountdownProgressBar.ExpiredEvent -= OnReviveExpired;
			ReviveHud.ReviveDoneEvent(obj: false);
		}

		private IEnumerator ShowSkipButtonCoro(int skipTime)
		{
			yield return new WaitForSeconds(skipTime);
			skipButton.gameObject.SetActive(value: true);
		}

		private void OnRVFail()
		{
			UnityEngine.Object.Destroy(base.gameObject);
			ReviveHud.ReviveDoneEvent(obj: false);
		}

		private void OnRVSuccess()
		{
			UnityEngine.Object.Destroy(base.gameObject);
			ReviveHud.ReviveDoneEvent(obj: true);
		}

		static ReviveHud()
		{
			ReviveHud.ReviveDoneEvent = delegate
			{
			};
		}
	}
}
