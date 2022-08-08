// DecompilerFi decompiler from Assembly-CSharp.dll class: Tabtale.GameEvents.GameEventIntListener
using UnityEngine;

namespace Tabtale.GameEvents
{
	public class GameEventIntListener : MonoBehaviour, IGameEventListener
	{
		public GameEventArg Event;

		public UnityEventInt Response;

		private void OnEnable()
		{
			Event.RegisterListener(this);
		}

		private void OnDisable()
		{
			Event.UnregisterListener(this);
		}

		public void OnEventRaised(object param)
		{
			Response.Invoke((int)param);
		}
	}
}
