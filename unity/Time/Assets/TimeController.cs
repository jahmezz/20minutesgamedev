using UnityEngine;
using System.Collections;

//the wizard of time
public class TimeController : MonoBehaviour {
	public int time;
	public bool isForward = true;
	bool pause = false;

	void Update() {
		if (Input.GetKey (KeyCode.W)) {
			isForward = false;
		} else {
			isForward = true;
		}
		if (Input.GetKeyDown (KeyCode.E)) {
			pause = !pause;
		}
	}

	// Update is called once per frame
	void FixedUpdate() {
		if (pause) {
			//do nothing
		} else if (isForward) {
			time++;
		} else {
			time--;
			time = time < 0 ? 0 : time;
		}
		Debug.Log (time);
	}
}
  