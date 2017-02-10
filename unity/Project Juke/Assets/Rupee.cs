using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(CapsuleCollider2D))]
public class Rupee : MonoBehaviour {
	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player" || other.tag == "Sword") {
			//gameController.addRupees (5);
			Destroy (gameObject);
		}	
	}
}
