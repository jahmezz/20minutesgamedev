using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(BoxCollider2D))]
public class HeartPieces : MonoBehaviour {

	public int heartPieceValue;
	public HeartUI heartUI;

	// Use this for initialization
	void Start() {
		GetComponent<BoxCollider2D> ().isTrigger = true;
		heartUI = FindObjectOfType<HeartUI> ();
	}

	// Update is called once per frame
	void Update() {
		
	}

	public void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			heartUI.AddHeartPiece (heartPieceValue);
			Destroy (gameObject);
		}	
	}
}
