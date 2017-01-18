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
		updateHearts ();
	}

	/// <summary>
	/// This function is where we will update the list of hearts UI.
	/// </summary>
	private void updateHearts() {
		heartIcons = GetComponentsInChildren<HeartIcon> ().ToList ();
		player = FindObjectOfType<Player> ();
		player.maxHealth = heartIcons.Count * 4;
	}

	public void Update() {
		drawHearts ();

	}

	private void drawHearts() {
		for (int i = 1; i < heartIcons.Count + 1; i++) {
			drawHeartPiece = player.currentHealth % 4;

			if (player.currentHealth >= i * 4) {
				heartIcons [i - 1].SendAnimValue (4);
			} else {
				if ((player.currentHealth - ((i - 1) * 4)) <= 0) {
					heartIcons [i - 1].SendAnimValue (0);
				} else {
					heartIcons [i - 1].SendAnimValue (drawHeartPiece);
				}
			}
		}
	}

	public void addHeartPiece(int heartPieceValue) {
		if (heartIcons.Count >= maxHeartContainer) {
			return;
		}
		heartPieces = heartPieceValue;

		if (heartPieces - 4 >= 0) {
			GameObject temp = Instantiate (heartPieceUI, Vector2.zero, Quaternion.identity) as GameObject;
			temp.transform.SetParent (this.transform);
			heartPieces -= 4;
			updateHearts ();
			player.currentHealth = player.maxHealth;
		}
	}
}
