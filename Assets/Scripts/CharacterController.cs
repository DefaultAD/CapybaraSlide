// DecompilerFi decompiler from Assembly-CSharp.dll class: CharacterController
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class CharacterController : ControllerBehaviour<CharacterController>
{
	[Header("References")]
	[SerializeField]
	private List<PlayerSkin> playerSkins = new List<PlayerSkin>();

	[SerializeField]
	private Material ironTubeMaterial;

    [Header("References characters")]
    public GameObject char1=null;
    public GameObject char2 = null;
    public GameObject char3 = null;
    public GameObject char4 = null;
    public GameObject char5 = null;
    public GameObject char6 = null;
    private Dictionary<GameObject, Movement> characterMovements = new Dictionary<GameObject, Movement>();

	private Dictionary<GameObject, Character> characters = new Dictionary<GameObject, Character>();

	private int lastUnlockedCharacterSkinIndex = 1;



    public void OnEnable()
    {
        if (PlayerPrefs.GetInt("selectedChar") == 1)
        {
            if(char1!=null)

            char1.SetActive(true);
        }
        else if (PlayerPrefs.GetInt("selectedChar") == 2)
        {
            if (char2!= null)
                char2.SetActive(true);

        }
        else if (PlayerPrefs.GetInt("selectedChar") == 3)
        {
            if (char3 != null)
                char3.SetActive(true);

        }
        else if (PlayerPrefs.GetInt("selectedChar") == 4)
        {
            if (char4 != null)
                char4.SetActive(true);

        }
        else if (PlayerPrefs.GetInt("selectedChar") == 5)
        {
            if (char5 != null)
                char5.SetActive(true);

        }
        else if (PlayerPrefs.GetInt("selectedChar") == 6)
        {
            if (char6 != null)
                char6.SetActive(true);

        }
       

    }








    public static string[] skinNames = new string[8]
	{
		"Starter Joe",
		"Bald Diver",
		"Afro Guy",
		"Nerd",
		"Old Sailor",
		"Shark",
		"Blondie",
		"Afro Girl"
	};

	public List<PlayerSkin> PlayerSkins => playerSkins;

	public Movement[] MovementsInSavedOrder
	{
		get;
		private set;
	}

	public Material IronTubeMaterial => ironTubeMaterial;

	private void OnValidate()
	{
		bool flag = false;
		foreach (PlayerSkin playerSkin in PlayerSkins)
		{
			if (playerSkin.IsDailySkin)
			{
				if (flag)
				{
					UnityEngine.Debug.LogError("Only one skin can be marked as daily skin! Discarding one daily skin.");
					playerSkin.IsDailySkin = false;
				}
				flag = true;
			}
		}
	}

	public override void Initialize()
	{
		throw new NotImplementedException();
	}

	public override void Enable()
	{
		throw new NotImplementedException();
	}

	public override void Disable()
	{
		throw new NotImplementedException();
	}

	public int AddCharacter(GameObject gameObject, Movement movement, bool isRandomSkin = true, int forceSkinIndex = 0)
	{
		if (!characterMovements.ContainsKey(gameObject))
		{
			characterMovements.Add(gameObject, movement);
			Character component = movement.GetComponent<Character>();
			characters.Add(gameObject, component);
			int num = (!isRandomSkin) ? forceSkinIndex : GetRandomCharacterSkinIndex(ControllerBehaviour<PlayerController>.Instance.PlayerSkinIndex);
			ChangeCharacterSkin(component, num);
			return num;
		}
		return -1;
	}

	public void RemoveNullCharacters()
	{
		Dictionary<GameObject, Movement>.KeyCollection keys = characterMovements.Keys;
		foreach (GameObject item in keys)
		{
			if (characterMovements[item] == null)
			{
				characterMovements.Remove(item);
				characters.Remove(item);
			}
		}
	}

	public Movement GetMovement(GameObject gameObject)
	{
		if (characterMovements.ContainsKey(gameObject))
		{
			return characterMovements[gameObject];
		}
		return null;
	}

	public int GetRandomCharacterSkinIndex(int playerSkinIndex = -1)
	{
		int num;
		for (num = UnityEngine.Random.Range(0, playerSkins.Count); num == playerSkinIndex; num = UnityEngine.Random.Range(0, playerSkins.Count))
		{
		}
		return num;
	}

	public int GetRandomCharacterTubeIndex(int playerSkinIndex)
	{
		return UnityEngine.Random.Range(0, playerSkins[Mathf.Min(playerSkinIndex, playerSkins.Count - 1)].TubeMaterials.Count);
	}

	public Material GetCharacterTubeMaterial(int playerSkinIndex, int tubeIndex)
	{
		return playerSkins[Mathf.Min(playerSkinIndex, playerSkins.Count - 1)].TubeMaterials[tubeIndex];
	}

	public Sprite GetLastUnlockedCharacterSkinIcon()
	{
		return playerSkins[Mathf.Min(lastUnlockedCharacterSkinIndex, playerSkins.Count - 1)].SkinIcon;
	}

	public void ChangeCharacterSkin(Character character, int skinIndex, bool isIronTube = false)
	{
		skinIndex = Mathf.Clamp(skinIndex, 0, playerSkins.Count - 1);
		character.SetCharacterSkin(skinIndex);
		character.SetCharacterScale(SingletonBehaviour<GameController>.Instance.GameSettings.CharacterScale);
	}

	public void ChangeCharacterSkin(Character character, PlayerSkin playerSkin, bool isIronTube = false)
	{
		character.SetCharacterSkin(playerSkin);
		character.SetCharacterScale(SingletonBehaviour<GameController>.Instance.GameSettings.CharacterScale);
	}

	public int GetPlayerRacePosition()
	{
		int result = 1;
		int instanceID = ControllerBehaviour<PlayerController>.Instance.Movement.GetInstanceID();
		List<Movement> list = (from x in characterMovements.Values
			orderby x.DistanceCovered descending
			select x).ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].GetInstanceID() == instanceID)
			{
				result = i + 1;
				break;
			}
		}
		return result;
	}

	public int GetOpponentRacePosition(Movement movement)
	{
		int result = 1;
		int instanceID = movement.GetInstanceID();
		List<Movement> list = (from x in characterMovements.Values
			orderby x.CurrentNodeIndex descending
			select x).ToList();
		for (int i = 0; i < list.Count; i++)
		{
			if (list[i].GetInstanceID() == instanceID)
			{
				result = i + 1;
				break;
			}
		}
		return result;
	}

	public void SaveCharacterOrder()
	{
		MovementsInSavedOrder = (from x in characterMovements.Values
			orderby x.DistanceCovered descending
			select x).ToArray();
	}

	public Movement[] GetAllCharacterMovements()
	{
		Movement[] array = new Movement[characterMovements.Values.Count];
		characterMovements.Values.CopyTo(array, 0);
		return array;
	}

	public Character GetCharacter(GameObject characterGameObject)
	{
		Character value = null;
		characters.TryGetValue(characterGameObject, out value);
		return value;
	}

	public bool IsIronTubeAvailable()
	{
		DateTime lastIronTubeUseTime = SaveController.GetLastIronTubeUseTime();
		DateTime now = DateTime.Now;
		return now > lastIronTubeUseTime && now.Day != lastIronTubeUseTime.Day;
	}

	public int UnlockRandomSkin(bool equipInstantly = false)
	{
		List<int> list = new List<int>();
		for (int i = 0; i < PlayerSkins.Count; i++)
		{
			if (!SaveController.IsSkinTubeUnlocked(i, 0) && !PlayerSkins[i].AlwaysUnlocked && !PlayerSkins[i].IsDailySkin)
			{
				for (int j = 0; j < PlayerSkins.Count - i; j++)
				{
					list.Add(i);
				}
			}
		}
		int num = -1;
		if (list.Count > 0)
		{
			num = (lastUnlockedCharacterSkinIndex = list[UnityEngine.Random.Range(0, list.Count)]);
			SaveController.SaveUnlockedSkin(num, 0);
			if (equipInstantly)
			{
				SaveController.SaveDefaultSkin(num, 0);
			}
		}
		return num;
	}

	public int UnlockDailySkin(bool equipInstantly = false)
	{
		PlayerSkin playerSkin = PlayerSkins.FirstOrDefault((PlayerSkin x) => x.IsDailySkin);
		if (playerSkin != null)
		{
			int num = lastUnlockedCharacterSkinIndex = PlayerSkins.IndexOf(playerSkin);
			SaveController.SaveUnlockedSkin(num, 0);
			if (equipInstantly)
			{
				SaveController.SaveDefaultSkin(num, 0);
			}
			SaveController.SetDailySkinUsed();
			return num;
		}
		UnityEngine.Debug.LogError("No Daily Skin found when trying to unlock one!");
		return -1;
	}

	public void EquipDailySkin()
	{
		PlayerSkin playerSkin = PlayerSkins.FirstOrDefault((PlayerSkin x) => x.IsDailySkin);
		if (playerSkin != null)
		{
			if (SaveController.IsDailySkinUsed())
			{
				int skinIndex = PlayerSkins.IndexOf(playerSkin);
				SaveController.SaveDefaultSkin(skinIndex, 0);
			}
			else
			{
				UnityEngine.Debug.LogError("Cannot equip Daily Skin because it is not unlocked!");
			}
		}
	}

	public void EquipUnlockedSkin()
	{
		PlayerPrefs.SetInt("SelectedSkinIndex", lastUnlockedCharacterSkinIndex);
		SaveController.SaveDefaultSkin(lastUnlockedCharacterSkinIndex, 0);
		PlayerSkin playerSkin = PlayerSkins[lastUnlockedCharacterSkinIndex].Initialize(0);
		ChangeCharacterSkin(ControllerBehaviour<PlayerController>.Instance.PlayerCharacter, playerSkin);
	}

	public int GetUnlockableSkinCount()
	{
		int num = 0;
		for (int i = 0; i < PlayerSkins.Count; i++)
		{
			if (!PlayerSkins[i].IsDailySkin && !PlayerSkins[i].AlwaysUnlocked)
			{
				num++;
			}
		}
		return num;
	}

	public int GetUnlockedSkinCount()
	{
		int num = 0;
		for (int i = 0; i < PlayerSkins.Count; i++)
		{
			if (SaveController.IsSkinUnlocked(i))
			{
				num++;
			}
		}
		return num;
	}

	public bool AllUnlockableSkinsUnlocked()
	{
		for (int i = 0; i < PlayerSkins.Count; i++)
		{
			if (!PlayerSkins[i].IsDailySkin && !PlayerSkins[i].AlwaysUnlocked && !SaveController.IsSkinUnlocked(i))
			{
				return false;
			}
		}
		return true;
	}
}
