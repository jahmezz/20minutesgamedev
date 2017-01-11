using System;
using UnityEngine;
using System.Collections;

public class Controller : MonoBehaviour {
	Animator animator;

	private void Start() {
		animator = GetComponent<Animator> ();
	}

	float speed = 0.3f;

	private void Update() {
		float moveX = Input.GetAxis ("Horizontal");
		float moveY = Input.GetAxis ("Vertical");
		Vector3 move = transform.TransformDirection (moveX, moveY, 0);

		Vector3 normMove = move * speed;
		this.transform.position += normMove;
		updateAnimation ();
	}

	private void updateAnimation() {
		int moveVert = 0;
		int moveHorz = 0;
		if (Input.GetKeyDown (KeyCode.UpArrow)) {
			moveVert = 1;
		} else if (Input.GetKeyDown (KeyCode.DownArrow)) {
			moveVert = -1;
		} else if (Input.GetKeyDown (KeyCode.LeftArrow)) {
			moveHorz = -1;
		} else if (Input.GetKeyDown (KeyCode.RightArrow)) {
			moveHorz = 1;
		}
		animator.SetInteger ("moveVert", moveVert);
		animator.SetInteger ("moveHorz", moveHorz);
	}
}