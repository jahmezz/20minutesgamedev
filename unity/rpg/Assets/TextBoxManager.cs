using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TextBoxManager : MonoBehaviour {

	public GameObject textBox;
	public Text theText;

	public TextAsset textFile;
	public string[] textLines;

	public int currentLine;
	public int endAtLine;

	public PlayerController player;

	public bool isActive;

	public bool stopPlayerMovement;

	// Use this for initialization
	void Start () {
		textBox.SetActive (true);
		player = FindObjectOfType<PlayerController> ();
		if(textFile != null) {
			textLines = (textFile.text.Split ('\n'));
		}
		if(isActive) {
			enableTextBox ();
		} else {
			disableTextBox ();
		}
	}

	// Update is called once per frame
	void Update () {
		if(!isActive) {
			return;
		}
		theText.text = textLines [0];
		Debug.Log (textLines [0]);
		if(Input.GetKeyDown(KeyCode.Return)) {
			currentLine++;
		}

		if(currentLine > endAtLine) {
			disableTextBox ();
		}
	}

	public void enableTextBox() {
		textBox.SetActive (true);
		isActive = true;
		if(stopPlayerMovement) {
			player.canMove = false;
		}
	}

	public void disableTextBox() {
		textBox.SetActive (false);
		player.canMove = true;
		isActive = false;
	}

	public void ReloadScript(TextAsset theText) {
		if(theText != null) {
			textLines = new string[1];
			textLines = (theText.text.Split ('\n'));
		}
	}
}
