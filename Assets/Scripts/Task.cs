// DecompilerFi decompiler from Assembly-CSharp.dll class: Task
using System;

[Serializable]
public class Task
{
	public TrophyType TrophyType;

	public int RaceStartValue;

	public int Value;

	public int Max;

	public TaskDifficulty Difficulty;

	public int TrophyCount;

	public string Description;

	public bool Completed;

	public int Index;

	public bool JustCompleted;

	public void AddToValue(int count)
	{
		Value += count;
	}

	public bool TryComplete()
	{
		Completed = (Value >= Max);
		return Completed;
	}
}
