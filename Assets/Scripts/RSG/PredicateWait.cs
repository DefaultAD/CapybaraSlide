// DecompilerFi decompiler from Assembly-CSharp.dll class: RSG.PredicateWait
using System;

namespace RSG
{
	internal class PredicateWait
	{
		public Func<TimeData, bool> predicate;

		public float timeStarted;

		public IPendingPromise pendingPromise;

		public TimeData timeData;
	}
}
