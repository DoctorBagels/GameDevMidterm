using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TransScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Pole")
        {
            Renderer R = col.gameObject.GetComponent<Renderer>();
            Color color = R.material.color;
            color.a = .4f;
            R.material.color = color;
        }

        if (col.gameObject.tag == "Wall")
        {
            Renderer R = col.gameObject.GetComponent<Renderer>();
            Color color = R.material.color;
            color.a = .4f;
            R.material.color = color;
        }
    }
}
