// DecompilerFi decompiler from Assembly-CSharp.dll class: CoinRush.Components.LoadGameScene
using HyperCasual.PsdkSupport;
using System;
using System.Collections;

using UnityEngine;
using UnityEngine.UI;

using UnityEngine.SceneManagement;

namespace CoinRush.Components
{
	public class LoadGameScene : MonoBehaviour
	{

        public Slider sliderloading;
        private AsyncOperation loadingOp = null;


        private bool isAppInBG;

        public GameObject screen1;
        public GameObject screen2;
        bool screenlandscape;
        private bool _session_start_ready;

		private bool _main_scene_loaded;

		private bool _first_session;

		private static bool _did_play;
        
		private bool psdkReady;

		private IEnumerator _coroutine_holdForSessionStart;

		private IEnumerator _coroutine_performReady;

		private IEnumerator _coroutine_waitForSessionStart;

		private IEnumerator _coroutine_checkForSessionStart;

		public void Awake()
		{

if(screenlandscape)
            {
                screen1.SetActive(true);
            }else
            {
                screen2.SetActive(true);

            }
            psdkReady = false;
			isAppInBG = false;
            StartCoroutine(HoldForSessionStart());
		}

        void Update()
        {
            if (Input.deviceOrientation == DeviceOrientation.LandscapeLeft)
            {
                screenlandscape = true;
            }
            else if (Input.deviceOrientation == DeviceOrientation.Portrait)
            {
                screenlandscape = false;
            }
        }

        private void OnApplicationFocus(bool focus)
		{
			if (focus)
			{
				if (isAppInBG)
				{
					isAppInBG = false;
					if (!psdkReady)
					{
					}
				}
			}
			else if (!focus)
			{
				isAppInBG = true;
			}
		}

		private void OnApplicationPause(bool pause)
		{
			if (!pause)
			{
				if (isAppInBG)
				{
					isAppInBG = false;
				
				}
			}
			else if (pause)
			{
				isAppInBG = true;
			}
		}
		public void Start()
		{
            //Advertisements.Instance.Initialize();
		}

       

        private void OnPSDKReady()
		{
			psdkReady = true;
			StartCoroutine(_coroutine_holdForSessionStart);
		}

		private IEnumerator HoldForSessionStart()
		{
            yield return new WaitForSeconds(2);
				StartCoroutine(PerformReady());
				
		
		}

		private IEnumerator WaitForSessionStart()
		{
			if (_session_start_ready)
			{
				yield return null;
			}
			StopCoroutine(_coroutine_checkForSessionStart);
			_session_start_ready = true;
			
		}

		private IEnumerator CheckForSessionStart()
		{
			float wait_time = 2f;
			while (!_session_start_ready && wait_time > 1E-05f)
			{
				yield return null;
				wait_time -= Time.deltaTime;
			}
			StartCoroutine(_coroutine_performReady);
		}

		private IEnumerator PerformReady()
		{
			_main_scene_loaded = true;

            loadingOp = SceneManager.LoadSceneAsync("selectCharacter");

            yield return null;
            Debug.Log("show ads");

        }

        private void HandleRunInitialized(object sender, EventArgs args)
		{
			UnityEngine.Object.Destroy(base.gameObject);
		}

		public void InitializeCoroutines()
		{
			_coroutine_holdForSessionStart = HoldForSessionStart();
			_coroutine_performReady = PerformReady();
			_coroutine_waitForSessionStart = WaitForSessionStart();
			_coroutine_checkForSessionStart = CheckForSessionStart();
		}
	}
}
