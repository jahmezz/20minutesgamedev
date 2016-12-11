using UnityEngine;
using System.Collections;

public class Trigger : MonoBehaviour {

	// Use this for initialization
	void OnTriggerEnter2D() {
		Debug.Log ("Entered");
		GameMaster.NextLevel ();
	}

}
