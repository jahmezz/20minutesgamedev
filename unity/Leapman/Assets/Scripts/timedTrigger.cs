using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

public class timedTrigger : MonoBehaviour {
	public Image cross;
	public float countdown;
	public Vector2 startPosition;
	// Use this for initialization
	void Start() {
		cross.enabled = false;
	}
	
	// Update is called once per frame
	private void Update() {
		if (countdown == 0 && Input.GetKeyDown ("space")) {
			cross.enabled = true;
			countdown = 2;
			startPosition = cross.transform.position;
		}
		if (cross.enabled) {
			countdown -= Time.deltaTime;
			readMoves ();
		}
		if (countdown < 0) {
			countdown = 0;
			cross.enabled = false;
			cross.transform.position = startPosition;
		}
	}

	void readMoves() {
		Vector2 position = cross.transform.position;
		if (Input.GetKey ("up")) {
			position.y += 1;
		}
		if (Input.GetKey ("down")) {
			position.y -= 1;
		}
		if (Input.GetKey ("left")) {
			position.x -= 1;
		}
		if (Input.GetKey ("right")) {
			position.x += 1;
		}
		cross.transform.position = position;
	}

	void ShowCross() {
		
	}

	void DrawLine() {
		
	}
}
