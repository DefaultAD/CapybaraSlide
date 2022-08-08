// DecompilerFi decompiler from Assembly-CSharp.dll class: PulsingButtonAnimator
using System.Collections;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class PulsingButtonAnimator : MonoBehaviour
{
	[SerializeField]
	private bool pulseOnAwake;

	[SerializeField]
	private bool pulseOnAwakeInScoreState;

	[SerializeField]
	[Range(0.1f, 5f)]
	private float speed = 1f;

	[SerializeField]
	[Range(1.02f, 1.5f)]
	private float size = 1.1f;

	private Transform button;

	private Vector3 originalScale;

	private bool isPulsing;

	private bool isStopping;

	private Coroutine startCoroutine;

	private Coroutine stopCoroutine;

	private Transform cachedButton
	{
		get
		{
			if (button == null)
			{
				button = (button = GetComponent<Button>().transform);
				originalScale = button.localScale;
			}
			return button;
		}
	}

	private void OnEnable()
	{
		if (pulseOnAwake || (pulseOnAwakeInScoreState && SingletonBehaviour<GameController>.Instance.GameState == GameState.Score))
		{
			StartPulsing();
		}
	}

	private IEnumerator StartPulsingCoroutine()
	{
		float time = 0f;
		while (true)
		{
			time += Time.deltaTime * speed;
			float fraction = Mathf.PingPong(time, size);
			cachedButton.localScale = Vector3.LerpUnclamped(originalScale, originalScale * size, fraction);
			yield return null;
		}
	}

	private IEnumerator StopPulsingCoroutine()
	{
		Vector3 startScale = cachedButton.localScale;
		for (float time = 0f; time < 1f; time += Time.deltaTime * speed)
		{
			cachedButton.localScale = Vector3.Lerp(startScale, originalScale, time);
			yield return null;
		}
		cachedButton.localScale = originalScale;
		isStopping = false;
		if (isPulsing)
		{
			startCoroutine = StartCoroutine(StartPulsingCoroutine());
		}
	}

	public void StartPulsing()
	{
		isPulsing = true;
		if (!isStopping)
		{
			startCoroutine = StartCoroutine(StartPulsingCoroutine());
		}
	}

	public void StopPulsing()
	{
		if (isPulsing)
		{
			isPulsing = false;
			isStopping = true;
			StopCoroutine(startCoroutine);
			stopCoroutine = StartCoroutine(StopPulsingCoroutine());
		}
	}

	public void SetOverrideSize(float minSize)
	{
		originalScale = new Vector3(minSize, minSize, minSize);
	}
}
