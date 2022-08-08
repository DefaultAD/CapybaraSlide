// DecompilerFi decompiler from Assembly-CSharp.dll class: UIParticle
using UnityEngine;
using UnityEngine.UI;

public class UIParticle
{
	private float lifetimeMin;

	private float lifetimeMax;

	private float speedMin;

	private float speedMax;

	private bool isPooled;

	private UIParticleMovement movement;

	private Transform destination;

	private float startLifeTime;

	private float speed;

	private Vector3 startPosition;

	private Vector3 direction;

	private GameObject particleObject;

	public bool IsAlive
	{
		get;
		private set;
	}

	public Image Image
	{
		get;
		private set;
	}

	public float Lifetime
	{
		get;
		set;
	}

	public UIParticle(Image particleImage, float lifetimeMin, float lifetimeMax, float speedMin, float speedMax, bool isPooled)
	{
		IsAlive = true;
		Image = particleImage;
		particleObject = particleImage.gameObject;
		movement = UIParticleMovement.SimpleDirectional;
		this.lifetimeMin = lifetimeMin;
		this.lifetimeMax = lifetimeMax;
		this.speedMin = speedMin;
		this.speedMax = speedMax;
		this.isPooled = isPooled;
		Initialize();
	}

	public UIParticle(Image particleImage, float lifetimeMin, float lifetimeMax, float speedMin, float speedMax, bool isPooled, RectTransform destination)
	{
		IsAlive = true;
		Image = particleImage;
		particleObject = particleImage.gameObject;
		movement = UIParticleMovement.SingleDestination;
		this.lifetimeMin = lifetimeMin;
		this.lifetimeMax = lifetimeMax;
		this.speedMin = speedMin;
		this.speedMax = speedMax;
		this.isPooled = isPooled;
		this.destination = destination;
		Initialize();
	}

	private void Initialize()
	{
		Lifetime = (startLifeTime = Random.Range(lifetimeMin, lifetimeMax));
		speed = Random.Range(speedMin, speedMax);
		direction = new Vector3(Random.Range(-1f, 1f) * speed, Random.Range(-1f, 1f) * speed);
		Image.transform.localPosition = Vector3.zero;
		startPosition = Image.transform.position;
	}

	public void Move()
	{
		if (movement == UIParticleMovement.SimpleDirectional)
		{
			Image.transform.localPosition += direction;
			return;
		}
		Transform transform = Image.transform;
		Vector3 a = startPosition + direction * (startLifeTime - Lifetime) * speed;
		Vector3 position = destination.position;
		Vector3 position2 = transform.position;
		position.z = position2.z;
		transform.position = Vector3.Lerp(a, position, (startLifeTime - Lifetime) / startLifeTime);
	}

	public void Enable()
	{
		if (!IsAlive)
		{
			Initialize();
			particleObject.SetActive(value: true);
			IsAlive = true;
		}
	}

	public void Disable()
	{
		if (IsAlive)
		{
			if (isPooled)
			{
				particleObject.SetActive(value: false);
			}
			else
			{
				UnityEngine.Object.Destroy(particleObject);
			}
			IsAlive = false;
		}
	}
}
