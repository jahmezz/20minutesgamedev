using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {

	public GameObject dBox;
	public Text dText;
	public bool dialogActive;

	public string[] dialogueLines;
	public int currentLine;

	private bool isTyping = false;
	private bool cancelTyping = false;

	private float typeSpeed;
	private PlayerController player;

	private book book;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerController>();
		book = FindObjectOfType<book> ();
		dBox.SetActive (false);
		typeSpeed = 0.05f;
	}
	
	// Update is called once per frame
	void Update () {
		if (!dialogActive) {
			return;
		}

		//advance line
		if(Input.GetKeyDown(KeyCode.X)) {
			//dialogue finished scrolling
			if(!isTyping) {
				currentLine++;
				//end of dialogue
				if(currentLine >= dialogueLines.Length) {
					HideBox();
				//scroll through next line
				} else {
					StartCoroutine (TextScroll(dialogueLines[currentLine]));
				}
			//currently scrolling
			} else if (isTyping && !cancelTyping) {
				cancelTyping = true;
			}
		}
	}

	private IEnumerator TextScroll(string LineOfText) {
		int letter = 0;
		dText.text = "";
		isTyping = true;
		cancelTyping = false;
		while(isTyping && !cancelTyping && letter < LineOfText.Length - 1) {
			dText.text += LineOfText [letter];
			letter += 1;
			yield return new WaitForSeconds (typeSpeed);
		}
		dText.text = LineOfText;
		isTyping = false;
		cancelTyping = false;
	}

	public void ShowBox(string dialogue) {
		dialogActive = true;
		dBox.SetActive (true);
		dText.text = dialogue;
	}

	public void HideBox() {
		dialogActive = false;
		dBox.SetActive (false);
		player.canMove = true;
		book.dialogue = false;
	}

	public void ShowDialogue() {
		dialogActive = true;
		dBox.SetActive (true);
		player.canMove = false;
		currentLine = 0;
		StartCoroutine (TextScroll(dialogueLines[currentLine]));
	}
}
