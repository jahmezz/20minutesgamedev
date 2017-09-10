using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateTextAtLine : MonoBehaviour {

	public TextAsset theText;

	public int startLine;
	public int endLine;

	public TextBoxManager manager;

	public bool destroyWhenActivated;

	public bool requireButtonPress;
	private bool waitForPress;

	// Use this for initialization
	void Start () {
		manager = FindObjectOfType<TextBoxManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		if(waitForPress && Input.GetKeyDown(KeyCode.Space)) {
			manager.ReloadScript (theText);
			manager.currentLine = startLine;
			manager.endAtLine = endLine;
			manager.enableTextBox ();

			if(destroyWhenActivated) {
				Destroy (gameObject);
			}
		}
	}

	void OnTriggerEnter2D(Collider2D other) {
		if(other.name == "Player") {
			if(requireButtonPress) {
				waitForPress = true;
				return;
			}
			manager.ReloadScript (theText);
			manager.currentLine = startLine;
			manager.endAtLine = endLine;
			manager.enableTextBox ();

			if(destroyWhenActivated) {
				Destroy (gameObject);
			}
		}
	}

	void OnTriggerExit2D(Collider2D other) {
		if(other.name == "Player") {
			waitForPress = false;
		}
	}
}
