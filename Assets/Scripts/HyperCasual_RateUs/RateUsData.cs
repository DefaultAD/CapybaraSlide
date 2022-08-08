// DecompilerFi decompiler from Assembly-CSharp.dll class: HyperCasual.RateUs.RateUsData
using System.Collections.Generic;
using UnityEngine;

namespace HyperCasual.RateUs
{
	[CreateAssetMenu(fileName = "RateUsData", menuName = "Custom/RateUs Data", order = 1)]
	public class RateUsData : ScriptableObject
	{
		public List<int> satisfactionLevels = new List<int>
		{
			5,
			10,
			15,
			20,
			25,
			30,
			35,
			40,
			45,
			50,
			55,
			60,
			65,
			70,
			75,
			80,
			85,
			90,
			95,
			100
		};

		public bool IsSatisfactionPoint(int level)
		{
			return satisfactionLevels.Contains(level);
		}

		public bool IsFirstStasifactionPoint(int level)
		{
			return satisfactionLevels.IndexOf(level) == 0;
		}
	}
}
