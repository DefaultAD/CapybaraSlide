// DecompilerFi decompiler from Assembly-CSharp.dll class: ViewFader
using System.Collections;
using UnityEngine;

[RequireComponent(typeof(CanvasGroup))]
public class ViewFader : MonoBehaviour
{
	[Header("Settings")]
	[SerializeField]
	private float fadeInSpeed = 5f;

	[SerializeField]
	private float fadeOutSpeed = 5f;

	[Header("References")]
	[SerializeField]
	private CanvasGroup canvasGroup;

	private readonly float fadeAccuracy = 0.01f;

	private bool isFadingOut;

	public bool IsFadingOut => isFadingOut;

	private void OnValidate()
	{
		if (canvasGroup == null)
		{
			canvasGroup = GetComponent<CanvasGroup>();
		}
	}

	public void FadeIn(bool startFadedOut = true, bool isInstant = false)
	{
		StopAllCoroutines();
		if (startFadedOut)
		{
			canvasGroup.alpha = 0f;
		}
		if (isInstant)
		{
			canvasGroup.alpha = 1f;
		}
		else if (base.gameObject.activeSelf)
		{
			StartCoroutine(FadeInCoroutine());
		}
	}

	public void FadeOut(bool startFadedIn = true, bool isInstant = false, bool disableAfterFadedOut = false)
	{
		StopAllCoroutines();
		if (startFadedIn)
		{
			canvasGroup.alpha = 1f;
		}
		if (isInstant)
		{
			canvasGroup.alpha = 0f;
		}
		else if (base.gameObject.activeSelf)
		{
			StartCoroutine(FadeOutCoroutine(disableAfterFadedOut));
		}
	}

	private IEnumerator FadeInCoroutine()
	{
		isFadingOut = false;
		canvasGroup.interactable = true;
		while (canvasGroup.alpha < 1f - fadeAccuracy)
		{
			canvasGroup.alpha = Mathf.Lerp(canvasGroup.alpha, 1f, fadeInSpeed * Time.deltaTime);
			yield return null;
		}
		canvasGroup.alpha = 1f;
	}

	private IEnumerator FadeOutCoroutine(bool disableAfterFadedOut = false)
	{
		isFadingOut = true;
		canvasGroup.interactable = false;
		while (canvasGroup.alpha > fadeAccuracy)
		{
			canvasGroup.alpha = Mathf.Lerp(canvasGroup.alpha, 0f, fadeOutSpeed * Time.deltaTime);
			yield return null;
		}
		canvasGroup.alpha = 0f;
		if (disableAfterFadedOut)
		{
			base.gameObject.SetActive(value: false);
		}
		isFadingOut = false;
	}
}
