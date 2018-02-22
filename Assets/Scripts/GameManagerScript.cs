using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerScript : MonoBehaviour {

    public static GameManagerScript instance;
    public string uText;
    public float count;
    public float timer = 2;
    public bool gameOver;

	void Start ()
    {
        count = Random.Range(2.4f, 3.2f);
        instance = this;
	}
	
	void Update ()
    {
        if (!gameOver)
        {
            count -= Time.deltaTime;
            if (count <= 0)
            {
                uText = "HOLD ON!";
                timer -= Time.deltaTime;
                if (timer <= 0)
                {
                    uText = "";
                    timer = 2f;
                    count = Random.Range(2.4f, 3.2f);
                    if (PlayerScript.instance.inPoleRange && PlayerScript.instance.holding)
                    {
                        gameOver = false;
                    }
                    else
                    {
                        gameOver = true;
                    }
                }
            }
         }
            if (gameOver)
            {
                uText = "GAME OVER!\nPRESS R TO RESTART";
                if (Input.GetKey(KeyCode.R))
                {
                    gameOver = false;
                    UnityEngine.SceneManagement.SceneManager.LoadScene("Prototype");
                }
            }             
        }
	}
