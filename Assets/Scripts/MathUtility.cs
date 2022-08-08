// DecompilerFi decompiler from Assembly-CSharp.dll class: MathUtility
using UnityEngine;

public static class MathUtility
{
	public static bool IsOdd(int value)
	{
		return value % 2 != 0;
	}

	public static int ToNearest(int number, int precision = 5)
	{
		return precision * (int)Mathf.Round((float)number / (float)precision);
	}
}
