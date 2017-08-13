using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {
	public int direction = 0;
	Animator animator;
	private Rigidbody2D rb;

	public bool canMove;
	public bool playerMoving;

	// Use this for initialization
	void Start() {
		animator = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D> ();

		canMove = true;
	}
	
	// Update is called once per frame
	void Update() {
		playerMoving = false;
		if(!canMove) {
			rb.velocity = Vector2.zero;
			return;
		}
		CheckInput ();
	}
	float speed = 15f;
	void CheckInput() {
		//raw means the only possible values are -1, 0, and 1
		var h = Input.GetAxisRaw ("Horizontal");
		var v = Input.GetAxisRaw ("Vertical");

		var l = Input.GetKeyDown (KeyCode.Space);

		if (h > 0.5) {
			direction = 0;
			v = 0;
		} else if (h < -0.5) {
			direction = 1;
			v = 0;
		} else if (v > 0.5) {
			direction = 2;
			h = 0;
		} else if (v < -0.5) {
			direction = 3;
			h = 0;
		}
		var move = new Vector2 (h, v);
		move.Normalize ();
		rb.velocity = (move * speed);
		animator.SetInteger ("direction", direction);
	}

	void NoOp() {
	}


}
