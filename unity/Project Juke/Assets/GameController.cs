using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameController : MonoBehaviour {
	public Text rupeeDisplay;
	private int rupees;
	// Use this for initialization
	void Start() {
		rupeeDisplay.text = "Rupees: " + rupees;
	}
	
	// Update is called once per frame
	void Update() {
		
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
}
