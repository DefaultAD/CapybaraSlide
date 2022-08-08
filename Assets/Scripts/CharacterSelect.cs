using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CharacterSelect : MonoBehaviour
{
    public GameObject[] Characters;
    public int selectedChar = 0;


    [Header(" characterLock ")]
    public GameObject charLock2;
    public GameObject charLock3;
    public GameObject charLock4;
    public GameObject charLock5;
    public GameObject charLock6;
    public GameObject charLock7;
    public GameObject notEnoughPoints;
    public int points;
    public Text pointsText;
    public GameObject itemActivated;
    //loading stuff
    public Slider sliderloading;
    private AsyncOperation loadingOp = null;
    public GameObject loading;
    // Start is called before the first frame update
    void Start()
    {
      //  SaveController.AddPoints(1000000);

        points = SaveController.GetPointCount();
        pointsText.text = points.ToString();

        //set character1 as a default character
        if (!PlayerPrefs.HasKey("selectedChar"))
        {
            PlayerPrefs.SetInt("selectedChar", 1);
        }


        //if already bought character 2 disable lock image
        if (PlayerPrefs.GetInt("boughtchar2") == 1)
        {
            charLock2.SetActive(false);

        }
        if (PlayerPrefs.GetInt("boughtchar3") == 1)
        {
            charLock3.SetActive(false);

        }
        if (PlayerPrefs.GetInt("boughtchar4") == 1)
        {
            charLock4.SetActive(false);

        }
        if (PlayerPrefs.GetInt("boughtchar5") == 1)
        {
            charLock5.SetActive(false);

        }
        if (PlayerPrefs.GetInt("boughtchar6") == 1)
        {
            charLock6.SetActive(false);

        }

    }

    //activate item bought and disable it after 2 seconds
    IEnumerator itemActivat()
    {
        itemActivated.SetActive(true);
        yield return new WaitForSeconds(2);
        itemActivated.SetActive(false);


    }

    IEnumerator NotEnough()
    {
        notEnoughPoints.SetActive(true);
        yield return new WaitForSeconds(2);
        notEnoughPoints.SetActive(false);


    }
    //buy character 1
    public void selectChar1(int price)
    {
        PlayerPrefs.SetInt("boughtchar1", 1);

        if (PlayerPrefs.GetInt("boughtchar1") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 1);
            LoadScene();
        }

    }



    //  buy character 2
    public void selectChar2(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar2") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 2);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar2", 1);

            charLock2.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 2);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            StartCoroutine(itemActivat());
            LoadScene();

        }
        else
        {
            Debug.Log("not enough points");
            StartCoroutine(NotEnough());

        }
    }

    //  buy character 3
    public void selectChar3(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar3") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 3);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar3", 1);

            charLock3.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 3);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            LoadScene();

        }
        else
        {
            Debug.Log("not enough points");
            StartCoroutine(NotEnough());

        }
    }
    //  buy selectChar 4
    public void selectChar4(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar4") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 4);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar4", 1);

            charLock4.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 4);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            LoadScene();
        }
        else
        {
            Debug.Log("not enough points");
            StartCoroutine(NotEnough());

        }
    }
    //  buy character 5
    public void selectChar5(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar5") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 5);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar5", 1);

            charLock5.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 5);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            LoadScene();
        }
        else
        {
            Debug.Log("not enough points");
        }
    }
    //  buy character 6
    public void selectChar6(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar6") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 6);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar6", 1);

            charLock6.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 6);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            LoadScene();
        }
        else
        {
            Debug.Log("not enough points");
            StartCoroutine(NotEnough());

        }
    }
    //  buy character 7
    public void selectChar7(int price)
    {
        if (PlayerPrefs.GetInt("boughtchar7") == 1)
        {
            PlayerPrefs.SetInt("selectedChar", 7);
            LoadScene();
        }

        else
       if (points >= price)
        {
            PlayerPrefs.SetInt("boughtchar7", 1);

            charLock7.SetActive(false);
            PlayerPrefs.SetInt("selectedChar", 7);
            Debug.Log("character 1 activated");

            SaveController.SubtractPoints(price);

            points = SaveController.GetPointCount();
            pointsText.text = points.ToString();
            LoadScene();
        }
        else
        {
            Debug.Log("not enough points");
            StartCoroutine(NotEnough());

        }
    }
    //function to loop between characters
    void selectcharacter()
    {
        int i = 0;

        foreach (GameObject character in Characters)
        {
            character.gameObject.SetActive(false);

            if (i == selectedChar)

                character.gameObject.SetActive(true);

            else

                character.gameObject.SetActive(false);
            i++;



        }
    }

    //go to next charcter from list
    public void nextCharacter()
    {
        if (selectedChar >= Characters.Length - 1)
        {
            selectedChar = 0;
        }
        else

            selectedChar++;
        selectcharacter();

    }

    //go to previous charcter from list

    public void prevCharacter()
    {
        if (selectedChar <= 0)
        {
            selectedChar = Characters.Length - 1;
        }

        else

            selectedChar--;
        selectcharacter();

    }

    //load scene
    public void LoadScene()
    {
        loading.SetActive(true);
        loadingOp = SceneManager.LoadSceneAsync("Main");
       


    }

    private void Update()
    {
       
        if (loadingOp != null)
        {

            if(sliderloading!=null)
            {
                sliderloading.gameObject.SetActive(true);
                sliderloading.value = loadingOp.progress;
            }
            if (sliderloading.value==100 )
            {
                sliderloading.enabled = false;
                Debug.Log("loaded");
            }

        }
      
    }




}
