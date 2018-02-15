using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour {

    public float vel;
    Rigidbody rb;

	void Start ()
    {
        rb = GetComponent<Rigidbody>();
	}	

	void Update ()
    {
        Movement();
        transform.position += new Vector3(rb.velocity.x, rb.velocity.y, vel);
        Camera.main.transform.position = new Vector3(.58f, 3.4f, rb.transform.position.z - 2);
	}

    void Movement()
    {
        if (Input.GetKey(KeyCode.W))
        {
            vel += .002f;
        }
        else if (Input.GetKey(KeyCode.S))
        {
            vel -= .002f;
        }
        else if (vel < 0 && !Input.GetKey(KeyCode.S))
        {
            vel += .001f;
        }
        else if (vel > 0 && !Input.GetKey(KeyCode.W))
        {
            vel -= .001f;
        }
        else if (vel <= .002f && vel >= -.002f && !Input.GetKey(KeyCode.W) && !Input.GetKey(KeyCode.S))
        {
            vel = 0;
        }
        if (vel >= .2f)
        {
            vel = .2f;
        }
        if (vel <= -.2f)
        {
            vel = -.2f;
        }
        if (Input.GetKey(KeyCode.A))
        {
           transform.eulerAngles += new Vector3(0, -2, 0);
        }
        else if (Input.GetKey(KeyCode.D))
        {
           transform.eulerAngles += new Vector3(0, 2, 0);
        }
    }
}
