// DecompilerFi decompiler from Assembly-CSharp.dll class: DebugOverlayView
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class DebugOverlayView : ViewBehaviour
{
	[SerializeField]
	private Text textFPS;

	private int quantity;

	private float currentAverageFPS;

	private int currentFPS;

	private bool showFPS;

	private Coroutine updateViewCoroutine;

	private readonly float updateViewDelay = 0.2f;

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

	private void Update()
	{
		currentFPS = (int)(1f / Time.unscaledDeltaTime);
		UpdateCumulativeMovingAverageFPS(currentFPS);
	}

	protected override void UpdateView()
	{
		textFPS.text = currentFPS.ToString() + "\n" + FormatUtility.SingleDecimalValue(currentAverageFPS);
	}

	private float UpdateCumulativeMovingAverageFPS(float newFPS)
	{
		quantity++;
		currentAverageFPS += (newFPS - currentAverageFPS) / (float)quantity;
		return currentAverageFPS;
	}
}
