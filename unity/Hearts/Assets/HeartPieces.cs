using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script on the heart piece item.
/// </summary>
[RequireComponent (typeof(BoxCollider2D))]
public class HeartPieces : MonoBehaviour {

	public int heartPieceValue;
	public HeartUI heartUI;

	// Use this for initialization
	void Start() {
		GetComponent<BoxCollider2D> ().isTrigger = true;
		heartUI = FindObjectOfType<HeartUI> ();
	}

	/// <summary>
	/// Player picks up a heart piece.
	/// </summary>
	/// <param name="other">Other.</param>
	public void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player") {
			heartUI.addHeartPiece (heartPieceValue);
			Destroy (gameObject);
		}	
	}
}
