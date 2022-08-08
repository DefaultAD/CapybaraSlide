// DecompilerFi decompiler from Assembly-CSharp.dll class: OpponentPositionView
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class OpponentPositionView : ViewBehaviour
{
	public enum PositionTextType
	{
		NickName,
		Position
	}

	[SerializeField]
	private Movement movement;

	[SerializeField]
	private Transform canvasTransform;

	[SerializeField]
	private Text positionText;

	[SerializeField]
	private PositionTextType positionTextType;

	private readonly float updateViewDelay = 0.3f;

	private Coroutine updateViewCoroutine;

	private string opponentTypeIndicator = string.Empty;

	private string opponentNickName = string.Empty;

	private readonly float fadeDistanceMultiplier = 0.0075f;

	private readonly float farFadeDistance = 1250f;

	private void OnEnable()
	{
		if (updateViewCoroutine != null)
		{
			StopCoroutine(updateViewCoroutine);
		}
		updateViewCoroutine = StartCoroutine(UpdateViewCoroutine());
	}

	private void OnDisable()
	{
		if (updateViewCoroutine != null)
		{
			StopCoroutine(updateViewCoroutine);
		}
	}

	private IEnumerator UpdateViewCoroutine()
	{
		while (true)
		{
			yield return new WaitForSeconds(updateViewDelay);
			UpdateView();
		}
	}

	protected override void UpdateView()
	{
		if (!movement.IsNearFinishLine)
		{
			switch (positionTextType)
			{
			case PositionTextType.NickName:
				positionText.text = opponentNickName;
				break;
			case PositionTextType.Position:
				positionText.text = FormatUtility.Ordinal(ControllerBehaviour<CharacterController>.Instance.GetOpponentRacePosition(movement)) + opponentTypeIndicator;
				break;
			}
		}
	}

	private void Update()
	{
		canvasTransform.LookAt(ControllerBehaviour<CameraController>.Instance.Camera.transform.position, ControllerBehaviour<CameraController>.Instance.Camera.transform.up);
		float num = Vector3.SqrMagnitude(ControllerBehaviour<CameraController>.Instance.Camera.transform.position - base.transform.position);
		if (num < farFadeDistance)
		{
			float a = num * fadeDistanceMultiplier;
			positionText.color = new Color(1f, 1f, 1f, a);
		}
		else if (num > farFadeDistance)
		{
			float a2 = Mathf.Clamp(farFadeDistance / num, 0f, 1f);
			positionText.color = new Color(1f, 1f, 1f, a2);
		}
	}

	public void SetOpponentType(string opponentTypeName)
	{
		string str = opponentTypeName[0].ToString() + opponentTypeName[1].ToString();
		opponentTypeIndicator = " (" + str + ")";
	}

	public void SetOpponentNickName(string nickName)
	{
		opponentNickName = nickName;
	}
}
