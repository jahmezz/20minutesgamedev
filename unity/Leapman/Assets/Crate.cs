using UnityEngine;
using System.Collections;

public class Crate : MonoBehaviour {
	int x = 0;

	void OnTriggerEnter() {
		Debug.Log ("dang");
		Destroy (this.gameObject);
	}
	// Update is called once per frame
	void FixedUpdate() {
		Rotate ();
	}

	void Rotate() {
		RectTransform rt = (RectTransform)this.transform;
	}
}
