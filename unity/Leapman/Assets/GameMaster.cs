using UnityEngine;
using System.Collections;
using Leapman;

//this class contains game logic. decides what the player does
public class GameMaster : MonoBehaviour {

	public static GameMaster gm;
	private static int spawnDelay = 2;

	// Use this for initialization
	void Start() {
		if (gm == null) {
			gm = GameObject.FindGameObjectWithTag ("GM").GetComponent<GameMaster> ();
		}
	}

	public Transform playerPrefab;
	public Transform spawnPoint;

	public static void KillPlayer(LeapmanCharacter2D player) {
		Destroy (player.gameObject);
		gm.RespawnPlayer ();
	}

	public void RespawnPlayer() {
		GameObject clone = Instantiate (playerPrefab, spawnPoint.position, spawnPoint.rotation) as GameObject;
	}
}
