// DecompilerFi decompiler from Assembly-CSharp.dll class: RejectHandler
using System;

namespace RSG
{
	public struct RejectHandler
	{
		public Action<Exception> callback;

		public IRejectable rejectable;
	}
}
