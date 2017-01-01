using UnityEngine;
using System.Collections;
using Leapman;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

//this class contains game logic. decides what the player does
public class GameMaster : MonoBehaviour {

	public static GameMaster gm;
	private static int spawnDelay = 2;
	public Text levelText;
	public static bool levelEnd = false;

	// Use this for initialization
	private void Start() {
		levelText.enabled = false;
		if (gm == null) {
			gm = GameObject.FindGameObjectWithTag ("GM").GetComponent<GameMaster> ();
		}
	}

	public Transform playerPrefab;
	public Transform spawnPoint;

	public static void ResetLevel() {
		int scene = SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (scene, LoadSceneMode.Single);
	}

	public static void NextLevel() {
		gm.StartCoroutine ("LoadLevel");
	}

	private IEnumerator LoadLevel() {
		levelText.enabled = true;
		levelEnd = true;
		yield return new WaitForSeconds (3);
		int scene = SceneManager.GetActiveScene ().buildIndex;
		SceneManager.LoadScene (scene, LoadSceneMode.Single);
		levelEnd = false;
	}

	public void RespawnPlayer() {
		GameObject clone = Instantiate (playerPrefab, spawnPoint.position, spawnPoint.rotation) as GameObject;
	}
}
