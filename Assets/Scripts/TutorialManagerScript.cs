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
            tText = "Welcome to Subway Simulator 2018!\nPress W and S to move forward and backward.\nYour goal is to get to the cake at the end of the car.";
        }
        if(trigger1)
        {
            start = false;
            tText = "Press A and D to turn, and space to jump!.\nWalk over to the pole on the left and hold shift to grab it.\n(You will glow green if this is successful)";
        }
        if(hasHeld)
        {
            Destroy(iWall);
            trigger1 = false;
            tText = "Good job!\nYou may now continue.";
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
            tText = "Awesome job!\nGo to the cake to complete the tutorial!";
        }
	}
}
