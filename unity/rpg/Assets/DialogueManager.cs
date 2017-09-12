using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {

	public GameObject dBox;
	public Text dialogueText;
	public Text choiceText;
	public bool dialogActive;

	public string[] dialogueLines;
	public string[] choiceLines;
	public int currentLine;

	private bool isTyping = false;
	private bool cancelTyping = false;
	private bool isSelecting = false;

	private float typeSpeed;
	private PlayerController player;

	private book book;

	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerController>();
		book = FindObjectOfType<book> ();
		dBox.SetActive (false);
		choiceText.text = "";
		choiceText.enabled = false;
		typeSpeed = 0.05f;
	}
	
	// Update is called once per frame
	void Update () {
		if (!dialogActive) {
			return;
		}

		//action button
		if(Input.GetKeyDown(KeyCode.X)) {
			//dialogue finished scrolling
			if(isSelecting) {
				HideBox ();
			} else if(!isTyping) {
				currentLine++;
				//show choices
				if(currentLine >= dialogueLines.Length) {
					if(choiceLines != null) {
						ShowChoices ();
					} else {
						HideBox ();
					}
				} else {
					StartCoroutine (TextScroll(dialogueLines[currentLine]));
				}
			//currently scrolling
			} else if (isTyping && !cancelTyping) {
				cancelTyping = true;
			}
		}
	}

	private void ShowChoices() {
		isSelecting = true;
		choiceText.text = PrintChoices();
		choiceText.enabled = true;

	}

	private string PrintChoices() {
		char arrow = '\u25b6';
		string result = arrow.ToString();
		for(int i = 0; i < choiceLines.Length; i++) {
			result += choiceLines [i] + "\n";
		}
		return result;
	}
	private IEnumerator TextScroll(string LineOfText) {
		int letter = 0;
		dialogueText.text = "";
		isTyping = true;
		cancelTyping = false;
		while(isTyping && !cancelTyping && letter < LineOfText.Length - 1) {
			dialogueText.text += LineOfText [letter];
			letter += 1;
			yield return new WaitForSeconds (typeSpeed);
		}
		dialogueText.text = LineOfText;
		isTyping = false;
		cancelTyping = false;
	}

	public void ShowBox(string dialogue) {
		dialogActive = true;
		dBox.SetActive (true);
		dialogueText.text = dialogue;
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
