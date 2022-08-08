// DecompilerFi decompiler from Assembly-CSharp.dll class: AudioController
using HyperCasual.PsdkSupport;
using MoreMountains.NiceVibrations;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class AudioController : SingletonBehaviour<AudioController>
{
	[Header("References")]
	[SerializeField]
	private AudioSource musicAudioSource;

	[SerializeField]
	private AudioSource soundAudioSource;

	[Header("Settings")]
	[SerializeField]
	private bool isAudioEnabled = true;

	[SerializeField]
	private bool isMusicEnabled = true;

	[SerializeField]
	private bool isSoundEnabled = true;

	[SerializeField]
	private bool isVibrationEnabled = true;

	[SerializeField]
	private List<MusicSetup> musicSetups = new List<MusicSetup>();

	[SerializeField]
	private List<SoundSetup> soundSetups = new List<SoundSetup>();

	private Dictionary<MusicType, MusicSetup> musicSetupsDictionary = new Dictionary<MusicType, MusicSetup>();

	private Dictionary<SoundType, SoundSetup> soundSetupsDictionary = new Dictionary<SoundType, SoundSetup>();

	private bool isVibrationSupported;

	private static bool isInitialized;

	public bool IsAudioEnabled => isAudioEnabled;

	public bool IsMusicEnabled => isMusicEnabled;

	public bool IsSoundEnabled => isSoundEnabled;

	public bool IsVibrationEnabled => isVibrationEnabled;

	protected override void Awake()
	{
		base.Awake();
		if (!isInitialized)
		{
			musicSetupsDictionary = musicSetups.ToDictionary((MusicSetup x) => x.Type, (MusicSetup x) => x);
			soundSetupsDictionary = soundSetups.ToDictionary((SoundSetup x) => x.Type, (SoundSetup x) => x);
			isInitialized = true;
			AddListenersToPSDKEvents();
		}
	}

	private void RemoveListenersToPSDKEvents()
	{

	}

	private void AddListenersToPSDKEvents()
	{

	}

	private void OnPSDKPauseMusic(bool value)
	{
		if (value)
		{
			PauseSoundEffects();
		}
		else
		{
			UnPauseSoundEffects();
		}
	}

	private void Start()
	{
	
		isMusicEnabled = SingletonBehaviour<GameController>.Instance.SaveSettings.IsMusicEnabled;
		isSoundEnabled = SingletonBehaviour<GameController>.Instance.SaveSettings.IsSoundEnabled;
		isVibrationEnabled = (isVibrationSupported && SingletonBehaviour<GameController>.Instance.SaveSettings.IsVibrationEnabled);
		MuteMusic(!isMusicEnabled);
		MuteSound(!isSoundEnabled);
		MuteVibration(!isVibrationEnabled);
	}

	public override void Initialize()
	{
		MusicType type = (MusicType)Random.Range(0, musicSetupsDictionary.Count);
		PlayMusic(type);
	}

	public void PlayMusic(MusicType type)
	{

		
			musicAudioSource.volume = musicSetupsDictionary[type].Volume;
			musicAudioSource.clip = musicSetupsDictionary[type].Clip;
			musicAudioSource.Play();
		
	}

	public void PlaySound(SoundType type, float volumeScale = 1f)
	{
		
			AudioClip clip = soundSetupsDictionary[type].Clip;
			float volume = soundSetupsDictionary[type].Volume;
			volumeScale = Mathf.Clamp(Mathf.Abs(volumeScale), 0f, 1f);
			soundAudioSource.PlayOneShot(clip, volume * volumeScale);
		
	}

	public void PlayVibration(HapticTypes hapticType)
	{
		if (isVibrationEnabled && isVibrationSupported)
		{

		}
	}

	

	public bool ToggleMuteAudio()
	{
		MuteAudio(isAudioEnabled);
		return isAudioEnabled;
	}

	public bool ToggleMuteMusic()
	{
		MuteMusic(isMusicEnabled);
		return isMusicEnabled;
	}

	public bool ToggleMuteSound()
	{
		MuteSound(isSoundEnabled);
		return isSoundEnabled;
	}

	public bool ToggleMuteVibration()
	{
		if (!isVibrationSupported)
		{
			return false;
		}
		MuteVibration(isVibrationEnabled);
		return isVibrationEnabled;
	}

	public void MuteAudio(bool toggle)
	{
		MuteMusic(toggle);
		MuteSound(toggle);
		isAudioEnabled = !toggle;
		OnAudioChanged();
	}

	public void MuteMusic(bool toggle)
	{
		musicAudioSource.mute = toggle;
		isMusicEnabled = !toggle;
		if (isMusicEnabled)
		{
			isAudioEnabled = true;
		}
		else if (!isMusicEnabled && !isSoundEnabled)
		{
			isAudioEnabled = false;
		}
		OnAudioChanged();
	}

	public void MuteSound(bool toggle)
	{
		soundAudioSource.mute = toggle;
		isSoundEnabled = !toggle;
		if (isSoundEnabled)
		{
			isAudioEnabled = true;
		}
		else if (!isMusicEnabled && !isSoundEnabled)
		{
			isAudioEnabled = false;
		}
		OnAudioChanged();
	}

	public void MuteVibration(bool toggle)
	{
		isVibrationEnabled = !toggle;
		OnAudioChanged();
	}

	public void SetMusicPitch(float pitch)
	{
		pitch = Mathf.Clamp(pitch, 0f, 1f);
		musicAudioSource.pitch = pitch;
	}

	private void OnAudioChanged()
	{
		SingletonBehaviour<GameController>.Instance.SaveSettings.IsMusicEnabled = isMusicEnabled;
		SingletonBehaviour<GameController>.Instance.SaveSettings.IsSoundEnabled = isSoundEnabled;
		SingletonBehaviour<GameController>.Instance.SaveSettings.IsVibrationEnabled = isVibrationEnabled;
	}

	public void PauseSoundEffects()
	{
		if (musicAudioSource != null)
		{
			musicAudioSource.Pause();
		}
		if (soundAudioSource != null)
		{
			soundAudioSource.Pause();
		}
	}

	public void UnPauseSoundEffects()
	{
		if (musicAudioSource != null)
		{
			musicAudioSource.UnPause();
		}
		if (soundAudioSource != null)
		{
			soundAudioSource.UnPause();
		}
	}
}
