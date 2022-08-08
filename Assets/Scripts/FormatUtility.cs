// DecompilerFi decompiler from Assembly-CSharp.dll class: FormatUtility
using UnityEngine;

public static class FormatUtility
{
	public static string FormatValue(int value)
	{
		long num = Mathf.Abs(Mathf.Clamp(value, int.MinValue, int.MaxValue));
		return $"{num:N0}";
	}

	public static string SingleDecimalValue(float value)
	{
		return $"{value:F1}";
	}

	public static string DoubleDecimalValue(float value)
	{
		return $"{value:F2}";
	}

	public static string TruncateValue(int value)
	{
		long num = Mathf.Abs(Mathf.Clamp(value, int.MinValue, int.MaxValue));
		long num2 = (long)Mathf.Pow(10f, (int)Mathf.Max(0f, Mathf.Log10(num) - 2f));
		num = num / num2 * num2;
		if (num >= 1000000000)
		{
			return ((double)num / 1000000000.0).ToString("0.##") + "B";
		}
		if (num >= 1000000)
		{
			return ((double)num / 1000000.0).ToString("0.##") + "M";
		}
		if (num >= 1000)
		{
			return ((double)num / 1000.0).ToString("0.##") + "K";
		}
		return num.ToString("#,0");
	}

	public static string Ordinal(int number, bool returnOnlySuffix = false)
	{
		string empty = string.Empty;
		int num = number % 10;
		int num2 = (int)Mathf.Floor((float)number / 10f) % 10;
		if (num2 == 1)
		{
			empty = "th";
		}
		else
		{
			switch (num)
			{
			case 1:
				empty = "st";
				break;
			case 2:
				empty = "nd";
				break;
			case 3:
				empty = "rd";
				break;
			default:
				empty = "th";
				break;
			}
		}
		return (!returnOnlySuffix) ? $"{number}{empty}" : empty;
	}

	public static string DoubleDigitTime(int hours, int minutes, int seconds)
	{
		return string.Format("{0}{1}:{2}{3}:{4}{5}", (hours >= 10) ? string.Empty : "0", Mathf.Clamp(hours, 0f, float.PositiveInfinity), (minutes >= 10) ? string.Empty : "0", Mathf.Clamp(minutes, 0f, float.PositiveInfinity), (seconds >= 10) ? string.Empty : "0", Mathf.Clamp(seconds, 0f, float.PositiveInfinity));
	}
}
