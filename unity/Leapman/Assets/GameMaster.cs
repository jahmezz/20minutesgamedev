using UnityEngine;
using System.Collections;

public class GameMaster : MonoBehaviour {

	public static GameMaster gm;

	// Use this for initialization
	void Start() {
		if (gm == null) {
			gm = GameObject.FindGameObjectWithTag ("GM").GetComponent<GameMaster> ();
		}
	}

	public Transform playerPrefab;
	public Transform spawnPoint;

	public void RespawnPlayer() {
		Instantiate (playerPrefab, spawnPoint.position, spawnPoint.rotation);
	}
	
	// Update is called once per frame
	void Update() {
	
	}
}
