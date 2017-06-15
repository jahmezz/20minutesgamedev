using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	// Use this for initialization
	void Start() {
		
	}
	
	// Update is called once per frame
	void Update() {
		CheckInput ();
	}

	void CheckInput() {
		//raw means the only possible values are -1, 0, and 1
		var h = Input.GetAxisRaw ("Horizontal");
		var v = Input.GetAxisRaw ("Vertical");

		var move = new Vector2 (h, v);
		move.Normalize ();
		this.transform.Translate (move);
	}

	void NoOp() {
	}


}
