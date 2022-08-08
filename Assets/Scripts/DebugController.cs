// DecompilerFi decompiler from Assembly-CSharp.dll class: DebugController
using System;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

public class DebugController : ControllerBehaviour<DebugController>
{
	[Header("References")]
	[SerializeField]
	private DebugSwitchGroup debugSwitchGroup;

	[SerializeField]
	private DebugOverlayView debugOverlayView;

	[Header("Settings")]
	[SerializeField]
	private bool isDebugMode;

	[SerializeField]
	private DebugSwitch debugSwitchPrefab;

	private List<DebugSwitch> debugSwitches = new List<DebugSwitch>();

	private readonly int minValue;

	private readonly int maxValue = 100;

	private readonly int changeInt = 1;

	private readonly float changeFloat = 0.05f;

	public bool IsDebugMode => isDebugMode;

	private void Start()
	{
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		FieldInfo[] fields = gameSettings.GetType().GetFields();
		for (int i = 0; i < fields.Length; i++)
		{
			DebugSwitch debugSwitch = UnityEngine.Object.Instantiate(debugSwitchPrefab, debugSwitchGroup.transform);
			debugSwitch.Initialize(i, fields[i].Name, GetFormattedValue(fields[i].GetValue(gameSettings)));
			debugSwitches.Add(debugSwitch);
		}
	}

	public override void Initialize()
	{
		if (!isDebugMode && !Application.isEditor)
		{
			isDebugMode = UnityEngine.Debug.isDebugBuild;
		}
		if (SingletonBehaviour<GameController>.Instance.GameSettings.ShowFPS)
		{
			debugOverlayView.Enable();
		}
		else
		{
			debugOverlayView.Disable();
		}
	}

	public override void Enable()
	{
		throw new NotImplementedException();
	}

	public override void Disable()
	{
		throw new NotImplementedException();
	}

	private void Update()
	{
		UpdateDebugViewRequest();
	}

	private void UpdateDebugViewRequest()
	{
		if (!isDebugMode)
		{
			return;
		}
		bool flag = false;
		if (UnityEngine.Input.touchCount == 3)
		{
			flag = true;
			for (int i = 0; i < UnityEngine.Input.touchCount; i++)
			{
				if (Input.touches[i].phase != TouchPhase.Stationary)
				{
					flag = false;
					break;
				}
			}
		}
		if (flag && ControllerBehaviour<ViewController>.Instance.CurrentViewState == ViewState.Start && ControllerBehaviour<ViewController>.Instance.CurrentPopupViewState == PopupViewState.None)
		{
			ControllerBehaviour<ViewController>.Instance.ShowPopupView(PopupViewState.Debug);
		}
	}

	public string ChangeGameSetting(int index, object value)
	{
		GameSettings gameSettings = SingletonBehaviour<GameController>.Instance.GameSettings;
		FieldInfo[] fields = gameSettings.GetType().GetFields();
		if (index < fields.Length)
		{
			FieldInfo fieldInfo = fields[index];
			Type fieldType = fieldInfo.FieldType;
			if (fieldType == typeof(bool))
			{
				bool flag = !(bool)fieldInfo.GetValue(gameSettings);
				fieldInfo.SetValue(gameSettings, flag);
				return flag.ToString();
			}
			if (fieldType == typeof(int))
			{
				int num = Convert.ToInt32(fieldInfo.GetValue(gameSettings));
				int num2 = num + Convert.ToInt32(value) * changeInt;
				if (num2 >= minValue && num2 <= maxValue)
				{
					fieldInfo.SetValue(gameSettings, num2);
					return num2.ToString();
				}
				return num.ToString();
			}
			if (fieldType == typeof(float))
			{
				float num3 = Convert.ToSingle(fieldInfo.GetValue(gameSettings));
				float num4 = num3 + Convert.ToSingle(value) * changeFloat;
				if (num4 >= (float)minValue && num4 <= (float)maxValue)
				{
					fieldInfo.SetValue(gameSettings, num4);
					return FormatUtility.DoubleDecimalValue(num4);
				}
				return FormatUtility.DoubleDecimalValue(num3);
			}
			UnityEngine.Debug.LogError("Non-supported field type!");
		}
		return string.Empty;
	}

	private string GetFormattedValue(object value)
	{
		if (value is float)
		{
			return FormatUtility.DoubleDecimalValue(Convert.ToSingle(value));
		}
		return value.ToString();
	}
}
