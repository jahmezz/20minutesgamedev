using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActivateTextAtLine : MonoBehaviour {

	public TextAsset theText;

	public int startLine;
	public int endLine;

	public TextBoxManager manager;

	public bool destroyWhenActivated;

	// Use this for initialization
	void Start () {
		theTextBox = FindObjectOfType<TextBoxManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter2D(Collider2D other) {
		if(other.name == "Player") {
			manager.ReloadScript (theText);
			manager.currentLine = startLine;
			manager.endAtLine = endLine;
			manager.enableTextBox ();

			if(destroyWhenActivated) {
				Destroy (gameObject);
			}
		}
	}
}
