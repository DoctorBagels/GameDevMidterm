using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        transform.position += new Vector3(0, 0, -.6f);
        if (transform.position.z < -6)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, 16.597f);
        }            
     }
}
