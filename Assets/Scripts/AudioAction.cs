// DecompilerFi decompiler from Assembly-CSharp.dll class: AudioAction
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Button), typeof(Image))]
public class AudioAction : MonoBehaviour
{
	[SerializeField]
	private AudioType toggleAudioType;

	[SerializeField]
	private Sprite enabledSprite;

	[SerializeField]
	private Sprite disabledSprite;

	[SerializeField]
	private Color enabledColor;

	[SerializeField]
	private Color disabledColor;

	private Button button;

	private Image buttonImage;

	private Image symbolImage;

	private void Awake()
	{
		button = GetComponent<Button>();
		buttonImage = GetComponentsInChildren<Image>()[0];

	}

	private void Start()
	{
		Initialize();
	}

	private void Initialize()
	{
		bool flag = false;
		if (toggleAudioType == AudioType.Music)
		{
			flag = SingletonBehaviour<AudioController>.Instance.IsMusicEnabled;
		}
		else if (toggleAudioType == AudioType.Sound)
		{
			flag = SingletonBehaviour<AudioController>.Instance.IsSoundEnabled;
		}
		else if (toggleAudioType == AudioType.Vibration)
		{
			flag = SingletonBehaviour<AudioController>.Instance.IsVibrationEnabled;
		}
		buttonImage.sprite = ((!flag) ? disabledSprite : enabledSprite);

	}

	public void ToggleAudio()
	{
		bool flag = false;
		if (toggleAudioType == AudioType.Music)
		{
			flag = SingletonBehaviour<AudioController>.Instance.ToggleMuteMusic();
		}
		else if (toggleAudioType == AudioType.Sound)
		{
			flag = SingletonBehaviour<AudioController>.Instance.ToggleMuteSound();
		}
		else if (toggleAudioType == AudioType.Vibration)
		{
			flag = SingletonBehaviour<AudioController>.Instance.ToggleMuteVibration();
		}
		buttonImage.sprite = ((!flag) ? disabledSprite : enabledSprite);
		symbolImage.color = ((!flag) ? disabledColor : enabledColor);
		SingletonBehaviour<AudioController>.Instance.PlaySound((!flag) ? SoundType.UICancel : SoundType.UIClick);
	}
}
