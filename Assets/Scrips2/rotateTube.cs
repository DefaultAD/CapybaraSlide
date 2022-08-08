using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateTube : MonoBehaviour
{
    private Animator tubeanime;
    private void Start()
    {
        tubeanime = GetComponent<Animator>();
        InvokeRepeating("Swingrotate", 4, 4);
    }
    void Swingrotate()
    {
        tubeanime.SetTrigger("Rotate");
    }


}
