using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AmbienceScript : MonoBehaviour {

    AudioSource a;
	void Start () {
        a = GetComponent<AudioSource>();
	}
	
	// Update is called once per frame
	void Update () {
        if (GameManagerScript.instance.inShake)
        {
            a.volume = .8f;
        }
        
        else
        {
            a.volume = .16f;
        }

	}
}
