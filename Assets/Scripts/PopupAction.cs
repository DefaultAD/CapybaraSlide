// DecompilerFi decompiler from Assembly-CSharp.dll class: PopupAction
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[RequireComponent(typeof(Button))]
public class PopupAction : MonoBehaviour
{
	[SerializeField]
	private PopupViewState popupViewState;
    public GameObject loading=null;
    public Slider loadingslider;
    private AsyncOperation loadingOp = null;


    public void ShowPopupView()
	{
		ControllerBehaviour<ViewController>.Instance.ShowPopupView(popupViewState);
	}

	public void HidePopupView()
	{
		ControllerBehaviour<ViewController>.Instance.HidePopupView();
	}
    private void Update()
    {
        if (loadingOp != null)
        {
            loadingslider.gameObject.SetActive(true);
            loadingslider.value = loadingOp.progress;

        }
    }
    public void Loadscene()
    {
        loadingOp= SceneManager.LoadSceneAsync("selectCharacter");
    }
}
