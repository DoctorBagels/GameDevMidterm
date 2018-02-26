using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Screenshake : MonoBehaviour {

    public static Screenshake instance;
	void Start ()
    {
        instance = this;
	}
	

	void Update ()
    {
		
	}

    public void Shake()
    {
        StartCoroutine("Screenshaker");
    }

    public IEnumerator Screenshaker()
    {
        float time = 1;
        while (time > 0.0f)
        {
            Debug.Log(time);
            Camera.main.transform.position = new Vector3(Random.Range(-.2f, .2f), Random.Range(-.2f, .2f), Random.Range(-.2f, .2f)) + new Vector3(.58f, 3.4f, PlayerScript.instance.zpos - 2);
            time -= Time.deltaTime;
            yield return 0;
        }
    }

}
