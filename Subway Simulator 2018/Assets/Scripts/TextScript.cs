using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextScript : MonoBehaviour {

    Text txt;

	void Start ()
    {
        txt = GetComponent<Text>();
	}
	

	void Update ()
    {
        txt.text = GameManagerScript.instance.uText;
	}
}
