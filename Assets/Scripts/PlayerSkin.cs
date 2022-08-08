// DecompilerFi decompiler from Assembly-CSharp.dll class: PlayerSkin
using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class PlayerSkin
{
	public GameObject HeadgearPrefab;

	public Material SkinMaterial;

	public Material ShortsMaterial;

	public Material ChestgearMaterial;

	public Sprite SkinIcon;

	public List<Material> TubeMaterials;

	public List<int> TubePrices = new List<int>
	{
		5,
		20,
		50
	};

	public bool AlwaysUnlocked;

	public bool IsDailySkin;

	private Material selectedTubeMaterial;

	public Material SelectedTubeMaterial
	{
		get
		{
			return selectedTubeMaterial ?? TubeMaterials[0];
		}
		private set
		{
			selectedTubeMaterial = value;
		}
	}

	public Material RandomTubeMaterial
	{
		get
		{
			return selectedTubeMaterial ?? TubeMaterials[UnityEngine.Random.Range(0, TubeMaterials.Count)];
		}
		private set
		{
			selectedTubeMaterial = value;
		}
	}

	public PlayerSkin Initialize(int tubeIndex, bool ironTube = false)
	{
		PlayerSkin playerSkin = new PlayerSkin();
		playerSkin.HeadgearPrefab = HeadgearPrefab;
		playerSkin.SkinMaterial = SkinMaterial;
		playerSkin.ShortsMaterial = ShortsMaterial;
		playerSkin.ChestgearMaterial = ChestgearMaterial;
		playerSkin.SkinIcon = SkinIcon;
		playerSkin.TubeMaterials = TubeMaterials;
		playerSkin.SelectedTubeMaterial = ((!ironTube) ? TubeMaterials[tubeIndex] : ControllerBehaviour<CharacterController>.Instance.IronTubeMaterial);
		return playerSkin;
	}
}
