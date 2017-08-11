﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour {


	public GameObject dBox;
	public Text dText;
	public bool dialogActive;

	public string[] dialogueLines;
	public int currentLine;

	private PlayerController player;
	private book book;
	// Use this for initialization
	void Start () {
		player = FindObjectOfType<PlayerController>();
		book = FindObjectOfType<book> ();
		dBox.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		if (dialogActive && Input.GetKeyDown(KeyCode.X)) {
//			dBox.SetActive (false);
//			dialogActive = false;
//			Debug.Log ("Deactivate");

			currentLine++;
		}

		if (currentLine >= dialogueLines.Length) {
			dBox.SetActive (false);
			dialogActive = false;

			player.canMove = true;
			book.dialogue = false;

			currentLine = 0;
		}

		dText.text = dialogueLines [currentLine];
	}

	public void ShowBox(string dialogue) {
		dialogActive = true;
		dBox.SetActive (true);
		dText.text = dialogue;
	}

	public void ShowDialogue() {
		dialogActive = true;
		dBox.SetActive (true);
		player.canMove = false;
		Debug.Log (player.canMove);
	}
}
