using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class HeartUI : MonoBehaviour {

	public Player player;
	public List<HeartIcon> heartIcons;
	public int heartPieces;

	public int maxHeartContainer = 20;
	public GameObject heartPieceUI;

	private int drawHeartPiece;

	// Use this for initialization
	void Start() {
		resetHearts ();
	}

	/// <summary>
	/// This function is where we will update the list of hearts UI.
	/// </summary>
	private void resetHearts() {
		heartIcons = GetComponentsInChildren<HeartIcon> ().ToList ();
		player = FindObjectOfType<Player> ();
		player.maxHealth = heartIcons.Count * 2;
	}

	public void Update() {
		drawHearts ();

	}

	private void drawHearts() {
		for (int i = 1; i < heartIcons.Count + 1; i++) {
			//find the remainder
			drawHeartPiece = player.currentHealth % 2;

			//if we are above this heart, then fill it
			if (player.currentHealth >= i * 2) {
				heartIcons [i - 1].SendAnimValue (2);
			} else {
				//if we are below this heart, then leave empty
				if ((player.currentHealth - ((i - 1) * 2)) <= 0) {
					heartIcons [i - 1].SendAnimValue (0);
					//else fill it halfway
				} else {
					heartIcons [i - 1].SendAnimValue (drawHeartPiece);
				}
			}
		}
	}

	/// <summary>
	/// Logic for when player picks up heart piece.
	/// </summary>
	/// <param name="heartPieceValue">Heart piece value.</param>
	public void addHeartPiece(int heartPieceValue) {
		if (heartIcons.Count >= maxHeartContainer) {
			return;
		}
		heartPieces = heartPieceValue;

		if (heartPieces - 4 >= 0) {
			GameObject temp = Instantiate (heartPieceUI, Vector2.zero, Quaternion.identity) as GameObject;
			temp.transform.SetParent (this.transform);
			heartPieces -= 4;
			resetHearts ();
			player.currentHealth = player.maxHealth;
		}
	}
}
