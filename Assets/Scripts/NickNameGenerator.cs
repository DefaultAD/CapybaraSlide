// DecompilerFi decompiler from Assembly-CSharp.dll class: NickNameGenerator
using System.Runtime.CompilerServices;
using System.Text;
using UnityEngine;

public static class NickNameGenerator
{
	private static readonly int MaxLength = 12;

	private static readonly string[] Adjectives = new string[71]
	{
		"OVL",
		"sbH_",
		"Night",
		"Winter",
		"Day",
		"Night",
		"Fabulous",
		"ExL",
		"Dreamy",
		"Chunky",
		"Elite",
		"Loving",
		"You",
		"i",
		"ShN_",
		"Mott",
		"Neat",
		"LHS",
		"Fine",
		"[Z]",
		"Shy",
		"Sk8tr",
		"Extra",
		"Mr",
		"Ch4os",
		"MLG",
		"33l",
		"bl0ps",
		"Juicy",
		"omit",
		"h3h3",
		"w1nner",
		"best",
		"Pizza",
		"P4sta",
		"sl33k",
		"troll",
		"Lab",
		"Dogg",
		"Dope",
		"loska",
		"Synth",
		"Bouncy",
		"Sturdy",
		"Gooey",
		"Sticky",
		"Worst",
		"Bestest",
		"VHS-",
		"!",
		"Ninja",
		"Real",
		"Noice",
		"404",
		"s1ck",
		"sir",
		"walrus",
		"mlg",
		"viceral",
		"BoopThe",
		"Pro",
		"Shadow",
		"Time",
		"Dirty",
		"The",
		"Sly",
		"System",
		"WrathOf",
		"Single",
		"Aqua",
		"WowSuch"
	};

	private static readonly string[] Substantives = new string[82]
	{
		"Helium",
		"Error",
		"Hulk",
		"M4sk",
		"Weaver",
		"Brake",
		"Sun",
		"Panda",
		"Fox",
		"Bear",
		"Fish",
		"Duck",
		"Cheese",
		"Rabbit",
		"Trees",
		"Toy",
		"Guard",
		"Boy",
		"Girl",
		"S0me",
		"Airplane",
		"Liquid",
		"Heart",
		"Snow",
		"Ulle",
		"Jose",
		"12",
		"522",
		"w33",
		"87",
		"99",
		"94",
		"82",
		"05",
		"007",
		"NRK",
		"hs",
		"Carlos",
		"l33t",
		"le3t",
		"Stream",
		"axux",
		"FIN",
		"P00L",
		"K3bab",
		"Kebaba",
		"Burger",
		"b0rk",
		"IRL",
		"Dude",
		"Tube",
		"Fish",
		"!?",
		"-__-",
		"Juice",
		"blender",
		"m0rty",
		"Muffin",
		"Frank",
		"sanic",
		"DESTROY",
		"NotFound",
		"Law",
		"thescoper",
		"hunter",
		"XOXO",
		"feed",
		"M4in",
		"Snoot",
		"Snake",
		"BoX",
		"Frank",
		"Reaper",
		"Midnight",
		"Wave",
		"Guy",
		"Shoe",
		"Racer",
		"Zombie",
		"Moneyz",
		"Guy",
		"Fruit"
	};

	private static readonly string[][] Words = new string[2][]
	{
		Substantives,
		Adjectives
	};

	private static string RandomSubstantive
	{
		[CompilerGenerated]
		get
		{
			return Substantives[Random.Range(0, Substantives.Length)];
		}
	}

	private static string RandomAdjective
	{
		[CompilerGenerated]
		get
		{
			return Adjectives[Random.Range(0, Adjectives.Length)];
		}
	}

	private static string RandomWord
	{
		get
		{
			string[] array = Words[Random.Range(0, Words.Length)];
			return array[Random.Range(0, array.Length)];
		}
	}

	public static string GetRandomNickName()
	{
		switch (Random.Range(0, 3))
		{
		case 0:
			return RandomWord;
		case 1:
			return RandomSubstantive;
		case 2:
			return GetRandomNickName(WordType.Adjective, WordType.Substantive);
		default:
			return RandomWord;
		}
	}

	public static string GetRandomNickName(params WordType[] wordTypes)
	{
		StringBuilder stringBuilder = new StringBuilder();
		for (int i = 0; i < wordTypes.Length; i++)
		{
			switch (wordTypes[i])
			{
			case WordType.Adjective:
				stringBuilder.Append(RandomAdjective);
				break;
			case WordType.Substantive:
				stringBuilder.Append(RandomSubstantive);
				break;
			case WordType.Any:
				stringBuilder.Append(RandomWord);
				break;
			}
		}
		if (stringBuilder.Length > MaxLength)
		{
			stringBuilder.Remove(MaxLength, stringBuilder.Length - MaxLength);
		}
		return stringBuilder.ToString();
	}
}
