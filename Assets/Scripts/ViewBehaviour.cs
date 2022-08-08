// DecompilerFi decompiler from Assembly-CSharp.dll class: ViewBehaviour
using UnityEngine;

public abstract class ViewBehaviour : MonoBehaviour
{
	private ViewFader viewFader;

	public bool IsActive => base.gameObject.activeSelf;

	public bool IsFadingOut => (bool)viewFader && viewFader.IsFadingOut;

	private void Awake()
	{
		viewFader = GetComponent<ViewFader>();
	}

	public virtual void Enable(bool isInstant = false)
	{
		base.gameObject.SetActive(value: true);
		if (!isInstant && viewFader != null)
		{
			FadeIn();
		}
	}

	public virtual void Disable(bool isInstant = false)
	{
		if (!isInstant && viewFader != null)
		{
			FadeOut(disableAfterFadedOut: true);
		}
		else
		{
			base.gameObject.SetActive(value: false);
		}
	}

	public void FadeIn()
	{
		if (viewFader != null)
		{
			viewFader.FadeIn();
		}
	}

	public void FadeOut(bool disableAfterFadedOut = false)
	{
		if (viewFader != null)
		{
			viewFader.FadeOut(startFadedIn: true, isInstant: false, disableAfterFadedOut);
		}
	}

	protected abstract void UpdateView();
}
