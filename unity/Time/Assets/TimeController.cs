using UnityEngine;
using System.Collections;

public class TimeController : MonoBehaviour {
	public int time;
	bool isForward = true;
	bool pause = false;

	void Update() {
		if (Input.GetKeyDown (KeyCode.E)) {
			isForward = true;
		}
		if (Input.GetKeyDown (KeyCode.Q)) {
			isForward = false;
		}
		if (Input.GetKeyDown (KeyCode.W)) {
			pause = !pause;
		}
	}

	// Update is called once per frame
	void FixedUpdate() {
		if (pause) {
			
		} else if (isForward) {
			time++;
		} else {
			time--;
			time = time < 0 ? 0 : time;
		}
	}
}
  