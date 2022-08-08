// DecompilerFi decompiler from Assembly-CSharp.dll class: UIParticleSystem
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Canvas))]
public class UIParticleSystem : MonoBehaviour
{
	[Header("Settings")]
	[SerializeField]
	private Image particleImagePrefab;

	[SerializeField]
	private Sprite particleSprite;

	[SerializeField]
	private Color color = Color.white;

	[SerializeField]
	private int amount = 10;

	[SerializeField]
	private float lifetimeMin = 1.5f;

	[SerializeField]
	private float lifetimeMax = 2f;

	[SerializeField]
	private float speedMin = 5f;

	[SerializeField]
	private float speedMax = 6f;

	[SerializeField]
	private bool isPooled = true;

	[SerializeField]
	private float continuousEmitDelay = 1f;

	[SerializeField]
	private UIParticleMovement particleMovement;

	[SerializeField]
	private RectTransform destination;

	[SerializeField]
	private bool startOnEnable;

	private List<UIParticle> enabledUIParticles = new List<UIParticle>();

	private List<UIParticle> disabledUIParticles = new List<UIParticle>();

	private bool isInitialized;

	private void Awake()
	{
		InitializePool();
	}

	private void OnEnable()
	{
		if (isInitialized && startOnEnable)
		{
			EmitContinuous();
		}
	}

	private void OnDisable()
	{
		if (isInitialized && startOnEnable)
		{
			StopEmittingContinuous();
		}
	}

	private UIParticle CreateUIParticle()
	{
		Image image = UnityEngine.Object.Instantiate(particleImagePrefab, base.transform);
		image.color = color;
		if (particleMovement == UIParticleMovement.SimpleDirectional)
		{
			return new UIParticle(image, lifetimeMin, lifetimeMax, speedMin, speedMax, isPooled);
		}
		return new UIParticle(image, lifetimeMin, lifetimeMax, speedMin, speedMax, isPooled, destination);
	}

	public void InitializePool()
	{
		if (isPooled && !isInitialized)
		{
			for (int i = 0; i < amount; i++)
			{
				UIParticle uIParticle = CreateUIParticle();
				uIParticle.Image.sprite = particleSprite;
				disabledUIParticles.Add(uIParticle);
				uIParticle.Disable();
			}
			isInitialized = true;
		}
	}

	private void Update()
	{
		for (int num = enabledUIParticles.Count - 1; num >= 0; num--)
		{
			if (enabledUIParticles[num].IsAlive)
			{
				if (enabledUIParticles[num].Lifetime > 0f)
				{
					enabledUIParticles[num].Lifetime -= Time.deltaTime;
					float a = Mathf.Min(enabledUIParticles[num].Lifetime, 1f);
					if (particleMovement == UIParticleMovement.SingleDestination)
					{
						a = Mathf.Min(a, 1f - 1f / Vector2.SqrMagnitude(enabledUIParticles[num].Image.transform.position - destination.position));
					}
					enabledUIParticles[num].Image.color = new Color(color.r, color.g, color.b, a);
					enabledUIParticles[num].Move();
				}
				if (enabledUIParticles[num].Lifetime <= 0f)
				{
					enabledUIParticles[num].Disable();
					disabledUIParticles.Add(enabledUIParticles[num]);
					enabledUIParticles.Remove(enabledUIParticles[num]);
				}
			}
		}
	}

	public void Emit(bool emitHalf = false)
	{
		int num = 0;
		while (true)
		{
			if (num >= ((!emitHalf) ? amount : (amount / 2)))
			{
				return;
			}
			UIParticle uIParticle = null;
			if (disabledUIParticles.Any())
			{
				uIParticle = disabledUIParticles.FirstOrDefault();
				if (uIParticle == null)
				{
					break;
				}
				disabledUIParticles.Remove(uIParticle);
				uIParticle.Enable();
			}
			else if (!isPooled)
			{
				Image particleImage = UnityEngine.Object.Instantiate(particleImagePrefab, base.transform);
				uIParticle = new UIParticle(particleImage, lifetimeMin, lifetimeMax, speedMin, speedMax, isPooled);
			}
			if (uIParticle == null)
			{
				return;
			}
			uIParticle.Image.sprite = particleSprite;
			enabledUIParticles.Add(uIParticle);
			num++;
		}
		UnityEngine.Debug.LogError("UIParticleSystem: Pooled UIParticle is null!");
	}

	public void EmitContinuous()
	{
		StartCoroutine(EmitContinuous(continuousEmitDelay));
	}

	public void StopEmittingContinuous()
	{
		StopAllCoroutines();
	}

	private IEnumerator EmitContinuous(float emitDelay)
	{
		yield return new WaitForEndOfFrame();
		Emit(emitHalf: true);
		while (true)
		{
			yield return new WaitForSeconds(emitDelay);
			Emit();
		}
	}

	public void ChangeParticleSystemColor(Color color)
	{
		this.color = color;
	}
}
