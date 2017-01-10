using System;
using UnityEngine;
using System.Collections;

public class Controller : MonoBehaviour {
	Animator animator;

	private void Start() {
		animator = GetComponent<Animator> ();
	}

	float speed = 0.3f;

	private void FixedUpdate() {
		Vector3 move = transform.TransformDirection (Input.GetAxis ("Horizontal"), Input.GetAxis ("Vertical"), 0);

		Vector3 normMove = move * speed;
		this.transform.position += normMove;
		updateAnimation (normMove);
	}

	private void updateAnimation(Vector3 normMove) {
		int moveVert = 0;
		int moveHorz = 0;
		if (normMove.y > 0) {
			moveVert = 1;
		} else if (normMove.y < 0) {
			moveVert = -1;
		} else if (normMove.x > 0) {
			moveHorz = 1;
		} else if (normMove.x < 0) {
			moveHorz = -1;
		}
		animator.SetInteger ("moveVert", moveVert);
		animator.SetInteger ("moveHorz", moveHorz);
	}
}