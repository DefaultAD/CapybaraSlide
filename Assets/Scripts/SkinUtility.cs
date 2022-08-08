// DecompilerFi decompiler from Assembly-CSharp.dll class: SkinUtility
using UnityEngine;

public static class SkinUtility
{
	private static string GetSkinPlayerPrefsKey(int index)
	{
		return $"SkinUnlocked{index}";
	}

	public static bool IsSkinUnlocked(int index)
	{
		string skinPlayerPrefsKey = GetSkinPlayerPrefsKey(index);
		return PlayerPrefs.GetInt(skinPlayerPrefsKey, 0) > 0;
	}

	public static bool IsSkinTubeUnlocked(int skinIndex, int tubeIndex)
	{
		string skinPlayerPrefsKey = GetSkinPlayerPrefsKey(skinIndex);
		return PlayerPrefs.GetInt(skinPlayerPrefsKey, 0) > tubeIndex;
	}

	public static void UnlockSkinOrTube(int index)
	{
		string skinPlayerPrefsKey = GetSkinPlayerPrefsKey(index);
		int value = PlayerPrefs.GetInt(skinPlayerPrefsKey, 0) + 1;
		PlayerPrefs.SetInt(skinPlayerPrefsKey, value);
	}

	public static Sprite[] TexturesToSprites(Texture2D[] textures)
	{
		Sprite[] array = new Sprite[textures.Length];
		for (int i = 0; i < array.Length; i++)
		{
			Texture texture = textures[i];
			array[i] = Sprite.Create(rect: new Rect(0f, 0f, 256f, 256f), texture: textures[i], pivot: new Vector2(0.5f, 0.5f));
		}
		return array;
	}
}
