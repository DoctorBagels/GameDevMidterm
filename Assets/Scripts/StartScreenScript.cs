using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartScreenScript : MonoBehaviour {

	void Start ()
    {
		
	}
	
	void Update ()
    {
		if (Input.GetKey(KeyCode.Space))
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene("Tutorial");
        }
	}
}
