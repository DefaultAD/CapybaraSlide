// DecompilerFi decompiler from Assembly-CSharp.dll class: TasksView
using HyperCasual.PsdkSupport;
using MoreMountains.NiceVibrations;
using System;
using System.Collections;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class TasksView : ViewBehaviour
{
	[SerializeField]
	private TaskViewContainer[] taskViewContainers;

	[SerializeField]
	private Text timeText;

	[SerializeField]
	private Text trophyText;

	[SerializeField]
	private Button nextButton;

	[SerializeField]
	private Text nextButtonText;

	[SerializeField]
	private GameObject closeButton;

	[SerializeField]
	private GameObject dailySkinText;

	[SerializeField]
	private GameObject dailySkinImage;

	[SerializeField]
	private GameObject risingSunImage;

	[SerializeField]
	private float animationTime;

	[SerializeField]
	private ViewBehaviour[] disabledViews;

	private bool isNextButtonPressed;

	private void OnEnable()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start)
		{
			if ((bool)ControllerBehaviour<UpgradeController>.Instance)
			{
				ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: false);
			}
			ViewBehaviour[] array = disabledViews;
			foreach (ViewBehaviour viewBehaviour in array)
			{
				if ((bool)viewBehaviour)
				{
					viewBehaviour.Disable();
				}
			}
		}
		ControllerBehaviour<TaskController>.Instance.Initialize();
		UpdateView();
		StartCoroutine(UpdateTaskTimeCoroutine());
		StartCoroutine(UpdateProgressionsCoroutine());
		bool flag = SaveController.IsDailySkinUsed();
		dailySkinText.SetActive(!flag);
		dailySkinImage.SetActive(!flag);
	}

	private void OnDisable()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start)
		{
			if ((bool)ControllerBehaviour<UpgradeController>.Instance)
			{
				ControllerBehaviour<UpgradeController>.Instance.ShowUpgradeViews(toggle: true, forceResetView: true);
			}
			ViewBehaviour[] array = disabledViews;
			foreach (ViewBehaviour viewBehaviour in array)
			{
				if ((bool)viewBehaviour)
				{
					viewBehaviour.Enable();
				}
			}
		}
		StopAllCoroutines();
	}

	private IEnumerator UpdateTaskTimeCoroutine()
	{
		while (true)
		{
			DateTime now = DateTime.Now;
			DateTime next = ControllerBehaviour<TaskController>.Instance.LastTasksDateTime.AddDays(1.0);
			TimeSpan subtract = next - now;
			timeText.text = FormatUtility.DoubleDigitTime(subtract.Hours, subtract.Minutes, subtract.Seconds);
			yield return new WaitForSeconds(1f);
		}
	}

	private IEnumerator UpdateProgressionsCoroutine()
	{
		Task[] tasks = ControllerBehaviour<TaskController>.Instance.Tasks;
		for (int i = 0; i < 3; i++)
		{
			if (!tasks[i].JustCompleted && tasks[i].Completed)
			{
				taskViewContainers[i].TrophyFillImage.fillAmount = 1f;
			}
		}
		for (float time3 = 0f; time3 < animationTime; time3 += Time.deltaTime)
		{
			float timePercentage = time3 / animationTime;
			for (int j = 0; j < 3; j++)
			{
				float a = Mathf.Lerp((float)tasks[j].RaceStartValue / (float)tasks[j].Max, (float)tasks[j].Value / (float)tasks[j].Max, timePercentage);
				int a2 = tasks[j].RaceStartValue + (int)((float)(tasks[j].Value - tasks[j].RaceStartValue) * timePercentage);
				taskViewContainers[j].FillImage.fillAmount = Mathf.Min(a, 1f);
				taskViewContainers[j].CompletedAmountText.text = $"{Mathf.Min(a2, tasks[j].Max)}/{tasks[j].Max}";
			}
			yield return null;
		}
		for (int k = 0; k < 3; k++)
		{
			taskViewContainers[k].FillImage.fillAmount = Mathf.Min((float)tasks[k].Value, (float)tasks[k].Max) / (float)tasks[k].Max;
			taskViewContainers[k].CompletedAmountText.text = $"{Mathf.Min(tasks[k].Value, tasks[k].Max)}/{tasks[k].Max}";
		}
		if (tasks.Any((Task x) => x.JustCompleted))
		{
			for (float time2 = 0f; time2 < animationTime; time2 += Time.deltaTime)
			{
				for (int l = 0; l < 3; l++)
				{
					if (tasks[l].JustCompleted)
					{
						taskViewContainers[l].TrophyFillImage.fillAmount = time2 / animationTime;
					}
				}
				yield return null;
			}
			for (int m = 0; m < 3; m++)
			{
				if (tasks[m].JustCompleted)
				{
					taskViewContainers[m].TrophyFillImage.fillAmount = 1f;
					taskViewContainers[m].uIParticleSystem.Emit();
				}
			}
			int totalTrophies = ControllerBehaviour<ScoreController>.Instance.TotalTrophies;
			int startTrophies = totalTrophies - ControllerBehaviour<ScoreController>.Instance.CurrentRaceTrophies;
			yield return new WaitForSeconds(1f);
			for (float time = 0f; time < animationTime; time += Time.deltaTime)
			{
				float timePercentage2 = time / animationTime;
				int inverseProgressPercentage = startTrophies + (int)((float)(totalTrophies - startTrophies) * timePercentage2);
				trophyText.text = Mathf.Min(inverseProgressPercentage, totalTrophies).ToString();
				yield return null;
			}
			trophyText.text = totalTrophies.ToString();
		}
		nextButton.gameObject.SetActive(value: true);
		yield return new WaitForSeconds(0.2f);
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score && ControllerBehaviour<ScoreController>.Instance.JustUnlockedDailySkin && !isNextButtonPressed)
		{
			NextButtonPressed();
			isNextButtonPressed = true;
		}
	}

	private void Update()
	{
		if (ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState != PopupViewState.Tasks )
		{
			return;
		}
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Start)
		{
			if (UnityEngine.Input.GetKeyDown(KeyCode.Escape))
			{
				ControllerBehaviour<ViewController>.Instance.HidePopupView();
			}
		}
		else if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score && UnityEngine.Input.GetKeyDown(KeyCode.Escape) && !isNextButtonPressed)
		{
			NextButtonPressed();
			isNextButtonPressed = true;
		}
	}

	protected override void UpdateView()
	{
		closeButton.SetActive(SingletonBehaviour<GameController>.Instance.GameState == GameState.Start);
		nextButtonText.text = ((SingletonBehaviour<GameController>.Instance.GameState != GameState.Start) ? "Next" : "OK");
		trophyText.text = (ControllerBehaviour<ScoreController>.Instance.TotalTrophies - ControllerBehaviour<ScoreController>.Instance.CurrentRaceTrophies).ToString();
		TaskController instance = ControllerBehaviour<TaskController>.Instance;
		Task[] array = new Task[3]
		{
			instance.EasyTask,
			instance.MediumTask,
			instance.HardTask
		};
		for (int i = 0; i < 3; i++)
		{
			taskViewContainers[i].Description.text = array[i].Description;
			taskViewContainers[i].FillImage.fillAmount = (float)array[i].Value / (float)array[i].Max;
			taskViewContainers[i].MaxText.text = array[i].TrophyCount.ToString();
		}
	}

	public void NextButtonPressed()
	{
		if (SingletonBehaviour<GameController>.Instance.GameState == GameState.Score)
		{
			SingletonBehaviour<AudioController>.Instance.PlayVibration(HapticTypes.Selection);
			if (ControllerBehaviour<ScoreController>.Instance.JustUnlockedDailySkin)
			{
				ControllerBehaviour<ViewController>.Instance.HidePopupView();
				ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.SkinUnlock);
			}
			else if (SaveController.GetAdsEnabled())
			{

				
					UnityEngine.Debug.Log("post level shown");
					nextButton.GetComponent<GameStateAction>().SwitchGameState();
					isNextButtonPressed = true;

			}
			else
			{
				nextButton.GetComponent<GameStateAction>().SwitchGameState();
				isNextButtonPressed = true;
			}
		}
		else
		{
			ControllerBehaviour<ViewController>.Instance.HidePopupView();
		}
	}
}
