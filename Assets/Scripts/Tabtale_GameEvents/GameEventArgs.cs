// DecompilerFi decompiler from Assembly-CSharp.dll class: Tabtale.GameEvents.GameEventArgs
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Tabtale.GameEvents
{
	public class GameEventArgs : ScriptableObject
	{
		private readonly List<GameEventIntListener> listeners = new List<GameEventIntListener>();

		public void Raise(int param)
		{
			for (int num = listeners.Count - 1; num >= 0; num--)
			{
				listeners[num].OnEventRaised(param);
			}
		}

		public void RegisterListener(GameEventIntListener listener)
		{
			if (listeners.Contains(listener))
			{
				throw new InvalidOperationException("Duplicate key");
			}
			listeners.Add(listener);
		}

		public void UnregisterListener(GameEventIntListener listener)
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
