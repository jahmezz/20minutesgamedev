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

	private bool isTyping = false;
	private bool cancelTyping = false;

	public float typeSpeed;

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
		//theText.text = textLines [currentLine];
		if(Input.GetKeyDown(KeyCode.Return)) {
			if(!isTyping) {
				currentLine++;

				if(currentLine > endAtLine) {
					disableTextBox ();
				} else {
					StartCoroutine (TextScroll(textLines[currentLine]));
				}
			} else if (isTyping && !cancelTyping) {
				cancelTyping = true;
			}
		}
	}

	private IEnumerator TextScroll(string lineOfText) {
		int letter = 0;
		theText.text = "";
		isTyping = true;
		cancelTyping = false;
		while(isTyping && !cancelTyping && letter < lineOfText.Length - 1) {
			theText.text += lineOfText [letter];
			letter += 1;
			yield return new WaitForSeconds (typeSpeed);
		}
		theText.text = lineOfText;
		isTyping = false;
		cancelTyping = false;
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
