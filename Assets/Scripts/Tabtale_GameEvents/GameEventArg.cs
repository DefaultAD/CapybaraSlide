// DecompilerFi decompiler from Assembly-CSharp.dll class: Tabtale.GameEvents.GameEventArg
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Tabtale.GameEvents
{
	[CreateAssetMenu]
	public class GameEventArg : ScriptableObject
	{
		private readonly List<IGameEventListener> listeners = new List<IGameEventListener>();

		public void Raise(object param)
		{
			for (int num = listeners.Count - 1; num >= 0; num--)
			{
				listeners[num].OnEventRaised(param);
			}
		}

		public void RegisterListener(IGameEventListener listener)
		{
			if (listeners.Contains(listener))
			{
				throw new InvalidOperationException("Duplicate key");
			}
			listeners.Add(listener);
		}

		public void UnregisterListener(IGameEventListener listener)
		{
			if (listeners.Contains(listener))
			{
				listeners.Remove(listener);
				return;
			}
			throw new InvalidOperationException("No listener to remove");
		}
	}
}
