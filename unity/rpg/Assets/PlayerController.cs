using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public int direction = 0;
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

		if (h > 0.5) {
			direction = 0;
			v = 0;
		} else if (h < -0.5) {
			direction = 1;
			v = 0;
		} else if (v > 0.5) {
			direction = 2;
			h = 0;
		} else {
			direction = 3;
			h = 0;
		}
		var move = new Vector2 (h, v);
		move.Normalize ();
		this.transform.Translate (move);
	}

	void NoOp() {
	}


}
