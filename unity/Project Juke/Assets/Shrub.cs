using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shrub : MonoBehaviour {
	public Sprite shrub, stump;

	void OnCollisionEnter2D(Collision2D other) {
		Debug.Log ("collision");
		if (other.collider.tag == "Sword") {
			GetComponent<SpriteRenderer> ().sprite = stump;
		}	
	}
}
