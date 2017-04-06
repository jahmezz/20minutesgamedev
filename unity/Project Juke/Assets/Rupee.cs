using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(CapsuleCollider2D))]
public class Rupee : MonoBehaviour {
	[SerializeField]
	private int value;

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player" || other.tag == "Sword") {
			FindObjectOfType <GameController> ().addRupees (value);
			Destroy (gameObject);
		}	
	}
}
