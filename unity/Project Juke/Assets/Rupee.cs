using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(CapsuleCollider2D))]
public class Rupee : MonoBehaviour {
	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			//gameController.addRupees (5);
			Debug.Log ("rupees!");
			Destroy (gameObject);
		}	
	}
}
