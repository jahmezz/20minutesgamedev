using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartItem : MonoBehaviour {
	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			//gameController.addRupees (5);
			Destroy (gameObject);
		}	
	}
	// Use this for initialization
	void Start() {
		
	}
	
	// Update is called once per frame
	void Update() {
		
	}
}
