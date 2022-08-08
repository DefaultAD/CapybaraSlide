// DecompilerFi decompiler from Assembly-CSharp.dll class: RSG.ExceptionEventArgs
using System;

namespace RSG
{
	public class ExceptionEventArgs : EventArgs
	{
		public Exception Exception
		{
			get;
			private set;
		}

		internal ExceptionEventArgs(Exception exception)
		{
			Exception = exception;
		}
	}
}
