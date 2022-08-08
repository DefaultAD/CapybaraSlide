// DecompilerFi decompiler from Assembly-CSharp.dll class: HyperCasual.Revive.ReviveCountdownProgressBar
using System;
using UnityEngine;
using UnityEngine.UI;

namespace HyperCasual.Revive
{
	public class ReviveCountdownProgressBar : MonoBehaviour
	{
		public Text timeLeftText;

		public Image bar;

		private bool isActive;

		private DateTime timeStart;

		private DateTime timeEnd;

		private float counterSeconds;

		private float counterMiliseconds;

		private int lastSeconds = -1;

		private bool isPaused;

		private TimeSpan timeLeftBeforePause;

		public static event Action ExpiredEvent;

		private void Start()
		{
			timeLeftText.text = Mathf.CeilToInt(counterSeconds).ToString();
			if (bar != null)
			{
				bar.fillAmount = 1f;
			}
		}

		public void StartCount(int seconds)
		{
			isActive = true;
			Time.timeScale = 1f;
			counterSeconds = seconds;
			counterMiliseconds = counterSeconds * 1000f;
			timeStart = DateTime.Now;
			timeEnd = timeStart.AddSeconds(counterSeconds);
			isActive = true;
			isPaused = false;
		}

		public void StopCount()
		{
			isActive = false;
			isPaused = false;
		}

		private void OnApplicationPause(bool pauseStatus)
		{
			if (pauseStatus)
			{
				if (isActive)
				{
					isPaused = true;
					timeLeftBeforePause = timeEnd - DateTime.Now;
				}
			}
			else if (isPaused)
			{
				timeEnd = DateTime.Now + timeLeftBeforePause;
				isPaused = false;
			}
		}

		public void FixedUpdate()
		{
			if (!isActive || isPaused)
			{
				return;
			}
			TimeSpan timeSpan = timeEnd - DateTime.Now;
			if (timeSpan.TotalMilliseconds < 0.0)
			{
				isActive = false;
				ReviveCountdownProgressBar.ExpiredEvent();
				return;
			}
			if (bar != null)
			{
				float fillAmount = ((float)timeSpan.Milliseconds + (float)timeSpan.Seconds * 1000f) / counterMiliseconds;
				bar.fillAmount = fillAmount;
			}
			if (lastSeconds != timeSpan.Seconds)
			{
				timeLeftText.text = Mathf.Ceil((float)timeSpan.Seconds + 1f).ToString();
				lastSeconds = timeSpan.Seconds;
			}
		}

		static ReviveCountdownProgressBar()
		{
			ReviveCountdownProgressBar.ExpiredEvent = delegate
			{
			};
		}
	}
}
