// DecompilerFi decompiler from Assembly-CSharp.dll class: GameStateAction
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class GameStateAction : MonoBehaviour
{
	[SerializeField]
	private GameState gameState;

	private Button button;

	private readonly bool isStartReloadScene = true;

	private void Awake()
	{
		button = GetComponent<Button>();
	}

	private void OnEnable()
	{
		button.interactable = true;
	}

	public void OnTriggerEnter(Collider other)
	{
		if (other.CompareTag("Player"))
		{
			SwitchGameState();
			Debug.Log("bang");
		}
	}

	public void SwitchGameState()
	{
		if (gameState == GameState.Start)
		{
			SingletonBehaviour<AudioController>.Instance.PlaySound(SoundType.UICancel);
			if (isStartReloadScene)
			{
				ReloadScene();
				ControllerBehaviour<UpgradeController>.Instance.DidUpgradeBeforeRace = false;
			}
			else
			{
				SingletonBehaviour<GameController>.Instance.SetGameState(gameState);
			}
		}
		else
		{
			SingletonBehaviour<GameController>.Instance.SetGameState(gameState);
			if (gameState == GameState.Race)
			{
				SingletonBehaviour<GameController>.Instance.SetGameRaceState(GameRaceState.Race);
			}
		}
		button.interactable = false;
	}

	private void ReloadScene()
	{
		SceneManager.LoadScene(GameController.MainSceneIndexOffset, LoadSceneMode.Single);
	}
}
