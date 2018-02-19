using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour {

    public float vel;
    Rigidbody rb;
    public bool holding;
    public bool inPoleRange;
    public Material DMat;
    public Material SMat;
    public Material FMat;
    bool ded;
    public static PlayerScript instance;

	void Start ()
    {
        rb = GetComponent<Rigidbody>();
        instance = this;
	}	

	void Update ()
    {
        if (!ded)
        {
            if (Input.GetKey(KeyCode.Space))
            {
                holding = true;
            }
            else
            {
                holding = false;
            }
            if (inPoleRange && holding)
            {
                gameObject.GetComponent<Renderer>().material = SMat;
            }
            else if (holding && !inPoleRange)
            {
                gameObject.GetComponent<Renderer>().material = FMat;
            }
            else
            {
                gameObject.GetComponent<Renderer>().material = DMat;
            }
            if (!GameManagerScript.instance.gameOver)
            {
                Movement();
                transform.position += transform.forward * vel / 3.5f;
            }
        }
        else if (ded)
        { 

        }
        Camera.main.transform.position = new Vector3(.58f, 3.4f, rb.transform.position.z - 2);
    }

    void Movement()
    {
        if (Input.GetKey(KeyCode.W) && !holding)
        {
            vel += .002f;
        }
        else if (Input.GetKey(KeyCode.S) && !holding)
        {
            vel -= .002f;
        }
        else if (vel < 0 && (!Input.GetKey(KeyCode.S) || holding))
        {
            vel += .001f;
        }
        else if (vel > 0 && (!Input.GetKey(KeyCode.W) || holding))
        {
            vel -= .001f;
        }
        else if (vel <= .002f && vel >= -.002f && ((!Input.GetKey(KeyCode.W) && !Input.GetKey(KeyCode.S)) || holding))
        {
            vel *= 0;
        }
        if (vel >= .1f)
        {
            vel = .1f;
        }
        if (vel <= -.1f)
        {
            vel = -.1f;
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


    void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.tag == "Pole")
        {
            inPoleRange = true;
        }

        if(col.gameObject.tag == "Goal")
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene("Win");
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Pole")
        {
            inPoleRange = false;
        }
    }
}
