using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerScript : MonoBehaviour {

    public float vel;
    Rigidbody rb;
    public bool holding;
    public bool inPoleRange;
    public bool jumping;
    public Material DMat;
    public Material SMat;
    public Material FMat;
    public static PlayerScript instance;
    public float zpos;
    int sCount = 1;
    public AudioSource jump;

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
        instance = this;
	}	

	void Update ()
    {
        if (Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift))
        {
            holding = true;
        }
        else
        {
            holding = false;
        }
        if (!GameManagerScript.instance.gameOver)
        {
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
        }
        else
        {
            gameObject.GetComponent<Renderer>().material = DMat;
        }
        if (!GameManagerScript.instance.gameOver)
        {
            Movement();
            transform.position += transform.forward * vel * .40f;
        }
        else
        {
            if (sCount > 0)
            {
                rb.AddForce(Random.Range(-3f,3f), 3, -7, ForceMode.Impulse);
                sCount -= 1;
                rb.freezeRotation = false;
            }
            
        }
        zpos = rb.transform.position.z;
        if (GameManagerScript.instance.inShake)
        {
            Camera.main.transform.position = new Vector3(Random.Range(-.05f, .05f), Random.Range(-.05f, .05f), 0) + new Vector3(.58f, 3.4f, PlayerScript.instance.zpos - 2);
        }
        else
        {
            Camera.main.transform.position = new Vector3(.58f, 3.4f, rb.transform.position.z - 2);
        }
    }

    void Movement()
    {
        if (Input.GetKey(KeyCode.W) && !holding)
        {
            vel += .003f;
        }
        if (Input.GetKey(KeyCode.S) && !holding)
        {
            vel -= .003f;
        }
        if (vel < 0 && (!Input.GetKey(KeyCode.S) || holding && !jumping))
        {
            vel += .002f;
        }
        else if (vel > 0 && (!Input.GetKey(KeyCode.W) || holding && !jumping))
        {
            vel -= .002f;
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
        if (Input.GetKey(KeyCode.D))
        {
           transform.eulerAngles += new Vector3(0, 2, 0);
        }
        if (Input.GetKeyDown(KeyCode.Space) && !jumping)
        {

            rb.AddForce(0, 3.8f, 0, ForceMode.Impulse);
            jump.Play();
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

        if(col.gameObject.tag == "Death")
        {
            GameManagerScript.instance.gameOver = true;
            GameManagerScript.instance.dedSound.Play();
        }
    }

    void OnTriggerExit(Collider col)
    {
        if (col.gameObject.tag == "Pole")
        {
            inPoleRange = false;
        }
    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "floor")
        {
            jumping = false;
        }
    }

    void OnCollisionExit(Collision col)
    {
        if (col.gameObject.tag == "floor")
        {
            jumping = true;
        }
    }
}
