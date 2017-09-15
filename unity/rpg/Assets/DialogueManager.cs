using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {

	public GameObject dBox;
	public Text dialogueText;
	public Text choiceText1;
	public Text choiceText2;
	public bool dialogActive;

	public string[] dialogueLines;
	public string[] choiceLines;
	public int currentLine;

	private bool currentChoice;

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
		currentChoice = true;
		choiceText1.text = "";
		choiceText1.enabled = false;
		choiceText2.text = "";
		choiceText2.enabled = false;

		typeSpeed = 0.05f;
	}

	private bool UpOrDown() {
		return Input.GetKeyDown (KeyCode.DownArrow) || Input.GetKeyDown (KeyCode.UpArrow);
	}

	// Update is called once per frame
	void Update () {
		if (!dialogActive) {
			return;
		}
		if(isSelecting && UpOrDown()) {
			currentChoice = !currentChoice;
			ShowChoices ();
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

		choiceText1.text = PrintChoices(currentChoice, 0);
		choiceText1.enabled = true;
		choiceText2.text = PrintChoices(!currentChoice, 1);
		choiceText2.enabled = true;

	}

	private string PrintChoices(bool choice, int ar) {
		char arrow = '\u25b6';

		string result = "";
		if(choice) {
			result += arrow.ToString () + " ";
		}

		result += choiceLines[ar] + "\n";
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
		isSelecting = false;
		choiceText1.enabled = false;
		choiceText2.enabled = false;
	}

	public void ShowDialogue() {
		dialogActive = true;
		dBox.SetActive (true);
		player.canMove = false;
		currentLine = 0;
		StartCoroutine (TextScroll(dialogueLines[currentLine]));
	}
}