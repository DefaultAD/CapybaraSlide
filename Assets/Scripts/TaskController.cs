// DecompilerFi decompiler from Assembly-CSharp.dll class: TaskController
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class TaskController : ControllerBehaviour<TaskController>
{
	[SerializeField]
	private Task[] tasks;

	private readonly string LastTaskDatePlayerPrefsKey = "LastTaskDate";

	private readonly string CurrentTasksPlayerPrefsKey = "CurrentTasks";

	public Task EasyTask
	{
		get;
		private set;
	}

	public Task MediumTask
	{
		get;
		private set;
	}

	public Task HardTask
	{
		get;
		private set;
	}

	public DateTime LastTasksDateTime
	{
		get;
		private set;
	}

	public Task[] Tasks => new Task[3]
	{
		EasyTask,
		MediumTask,
		HardTask
	};

	private Task ParseTaskFromPlayerPrefs(string taskString)
	{
		string[] array = taskString.Split(':');
		Task result = tasks[0];
		if (int.TryParse(array[0], out int result2) && int.TryParse(array[1], out int result3))
		{
			result = tasks[result2];
			result.Value = result3;
			return result;
		}
		UnityEngine.Debug.LogError("Could not parse task! Using default task.");
		return result;
	}

	public bool AllTasksPreviouslyCompleted()
	{
		return HardTask.Completed && !HardTask.JustCompleted && MediumTask.Completed && !MediumTask.JustCompleted && EasyTask.Completed && !EasyTask.JustCompleted;
	}

	public void SaveTasks()
	{
		string text = $"{EasyTask.Index}:{Mathf.Min(EasyTask.Value, EasyTask.Max)}/{MediumTask.Index}:{Mathf.Min(MediumTask.Value, MediumTask.Max)}/{HardTask.Index}:{Mathf.Min(HardTask.Value, HardTask.Max)}";
		PlayerPrefs.SetString(CurrentTasksPlayerPrefsKey, text);
		UnityEngine.Debug.LogFormat("Saved tasks: {0}", text);
	}

	public bool TryIncrementTaskProgress(TrophyType type, int amount)
	{
		bool result = false;
		if (Tasks != null)
		{
			for (int i = 0; i < Tasks.Length; i++)
			{
				Task task = (Tasks[i] == null || Tasks[i].TrophyType != type) ? null : Tasks[i];
				if (task != null)
				{
					task.Value += amount;
					result = true;
				}
			}
		}
		return result;
	}

	public override void Initialize()
	{
		string @string = PlayerPrefs.GetString(LastTaskDatePlayerPrefsKey, "0");
		bool flag = false;
		if (long.TryParse(@string, out long result))
		{
			DateTime dateTime = new DateTime(result);
			DateTime now = DateTime.Now;
			LastTasksDateTime = dateTime;
			if ((now - dateTime).Days >= 1)
			{
				for (int i = 0; i < tasks.Length; i++)
				{
					tasks[i].Index = i;
				}
				IEnumerable<Task> source = from x in tasks
					orderby UnityEngine.Random.value
					select x;
				EasyTask = source.First((Task x) => x.Difficulty == TaskDifficulty.Easy);
				MediumTask = source.First((Task x) => x.Difficulty == TaskDifficulty.Medium);
				HardTask = source.First((Task x) => x.Difficulty == TaskDifficulty.Hard);
				EasyTask.Value = 0;
				MediumTask.Value = 0;
				HardTask.Value = 0;
				SaveTasks();
				string value = string.Format(now.Ticks.ToString());
				LastTasksDateTime = now;
				PlayerPrefs.SetString(LastTaskDatePlayerPrefsKey, value);
				flag = true;
			}
		}
		else
		{
			UnityEngine.Debug.LogError("Could not parse last task date from PlayerPrefs! It should be specified in ticks!");
		}
		if (!flag)
		{
			string string2 = PlayerPrefs.GetString(CurrentTasksPlayerPrefsKey, "0:0/1:0/2:0");
			string[] array = string2.Split('/');
			try
			{
				EasyTask = ParseTaskFromPlayerPrefs(array[0]);
				MediumTask = ParseTaskFromPlayerPrefs(array[1]);
				HardTask = ParseTaskFromPlayerPrefs(array[2]);
				EasyTask.TryComplete();
				MediumTask.TryComplete();
				HardTask.TryComplete();
			}
			catch
			{
				UnityEngine.Debug.LogError("Could not parse tasks from PlayerPrefs!");
			}
		}
	}

	public override void Enable()
	{
		EasyTask.RaceStartValue = EasyTask.Value;
		MediumTask.RaceStartValue = MediumTask.Value;
		HardTask.RaceStartValue = HardTask.Value;
		EasyTask.JustCompleted = false;
		MediumTask.JustCompleted = false;
		HardTask.JustCompleted = false;
	}

	public override void Disable()
	{
		SaveTasks();
	}
}
