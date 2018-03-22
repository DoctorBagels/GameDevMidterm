using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialManagerScript : MonoBehaviour {

    public static TutorialManagerScript instance;
    public bool inShake;
    public bool start = true;
    public bool trigger1 = false;
    public bool trigger2 = false;
    public bool hasHeld = false;
    public bool held2;
    public string tText;
    public GameObject iWall;
    public GameObject iWall2;

	void Start ()
    {
        instance = this;
	}
	
	void Update ()
    {
		if (start)
        {
            tText = "Uh oh, Looks like you forgot your arms again!\nThis is gonna be another tough subway ride.\nYour goal is to get to the cake at the end of the car.\nPress W and S to move forward and backward.";
        }
        if(trigger1)
        {
            start = false;
            tText = "You can also press A and D to turn.\nWalk over to the pole on the left and hold shift to grab it with your teeth.\n(Your pants will glow green if this is successful)";
        }
        if(hasHeld)
        {
            Destroy(iWall);
            trigger1 = false;
            tText = "Good job!\nLets keep going.";
        }
        if(trigger2)
        {
            hasHeld = false;
            inShake = true;
            tText = "OH NO!\nLooks like there's some turbulence on the subway!\nWhen the subway shakes like this you need to get to a pole and hold on\nas soon as possible!";
        }
        if(held2)
        {
            inShake = false;
            trigger2 = false;
            Destroy(iWall2);
            tText = "Awesome job!\nGo to the cake to move on to the real challenge.\n(Press 'Space' to jump.)";
        }
	}
}
