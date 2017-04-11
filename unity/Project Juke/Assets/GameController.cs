using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class GameController : MonoBehaviour {
	public Text rupeeDisplay;
	public Text gameOverDisplay;
	private int rupees;
	// Use this for initialization
	void Start() {
		rupeeDisplay.text = "Rupees: " + rupees;
		gameOverDisplay.enabled = false;
	}
	
	// Update is called once per frame
	void Update() {
		CheckInput ();
	}

	private void CheckInput() {
		var r = Input.GetKeyDown (KeyCode.R);

		if (r) {
			SceneManager.LoadScene (0);
		}
	}

	public void addRupees(int count) {
		StartCoroutine (increment (count));
	}

	private IEnumerator increment(int count) {
		while (count > 0) {
			rupees++;
			count--;
			rupeeDisplay.text = "Rupees: " + rupees;
			yield return new WaitForFixedUpdate ();
		}
	}

	public void gameOver() {
		gameOverDisplay.enabled = true;
	}
}
