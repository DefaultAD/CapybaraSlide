// DecompilerFi decompiler from Assembly-CSharp.dll class: Tabtale.GameEvents.GameEventListener
using UnityEngine;
using UnityEngine.Events;

namespace Tabtale.GameEvents
{
	public class GameEventListener : MonoBehaviour
	{
		public GameEvent Event;

		public UnityEvent Response;

		private void OnEnable()
		{
			Event.RegisterListener(this);
		}

		private void OnDisable()
		{
			Event.UnregisterListener(this);
		}

		public void OnEventRaised()
		{
			Response.Invoke();
		}
	}
}
