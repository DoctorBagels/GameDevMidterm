using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArmScript : MonoBehaviour {
    float pos;
    float jumppos;

	void Start () {
        jumppos = transform.position.y +.5f;
        pos = transform.position.y;
	}
	
	// Update is called once per frame
	void Update () {
        if (PlayerScript.instance.jumping||TutorialPlayerScript.instance.jumping)
            transform.position = new Vector3(transform.position.x, jumppos, transform.position.z);
        else
            transform.position = new Vector3(transform.position.x, pos, transform.position.z);
	}
}
