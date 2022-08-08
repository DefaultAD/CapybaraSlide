// DecompilerFi decompiler from Assembly-CSharp.dll class: HyperCasual.Revive.ReviveService
using RSG;
using System;
using System.Runtime.CompilerServices;
using UnityEngine;

namespace HyperCasual.Revive
{
	public static class ReviveService
	{
		public static string revivePanelLocation = "Game/Revive-Root";

		private static Promise<bool> revivePromise;

		[CompilerGenerated]
		private static Action<bool> _003C_003Ef__mg_0024cache0;

		[CompilerGenerated]
		private static Action<bool> _003C_003Ef__mg_0024cache1;

		public static int revivesPerRun
		{
			get;
			private set;
		}

		public static void StartRun()
		{
			revivesPerRun = 0;
		}

		public static IPromise<bool> Perform(Func<bool> ShouldOfferRevive, int countdownTime, int timeToShowSkip)
		{
			revivePromise = new Promise<bool>();
			if (!ShouldOfferRevive())
			{
				revivePromise.Resolve(value: false);
				return revivePromise;
			}
			GameObject gameObject = Resources.Load<GameObject>(revivePanelLocation);
			if (gameObject == null)
			{
				UnityEngine.Debug.LogError("Can't load reviveHud prefab at: " + revivePanelLocation);
				revivePromise.Resolve(value: false);
				return revivePromise;
			}
			GameObject gameObject2 = UnityEngine.Object.Instantiate(gameObject);
			ReviveHud.ReviveDoneEvent += OnReviveDoneEvent;
			gameObject2.GetComponent<ReviveHud>().StartCount(countdownTime, timeToShowSkip);
			return revivePromise;
		}

		private static void OnReviveDoneEvent(bool shouldRevive)
		{
			UnityEngine.Debug.Log("ReviveService: On Revive Done " + shouldRevive);
			ReviveHud.ReviveDoneEvent -= OnReviveDoneEvent;
			if (revivePromise != null)
			{
				if (shouldRevive)
				{
					revivesPerRun++;
					revivePromise.Resolve(value: true);
				}
				else
				{
					revivePromise.Resolve(value: false);
				}
			}
		}
	}
}
