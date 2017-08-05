using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueHolder : MonoBehaviour {

	public string dialogue;
	private DialogueManager dMan;

	public string[] dialogueLines;

	// Use this for initialization
	void Start () {
		dMan = FindObjectOfType<DialogueManager> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerStay2D(Collider2D other) {
		if (!dMan.dialogActive && other.gameObject.tag == "Player") {
			if(Input.GetKeyUp(KeyCode.X)) {
//				dMan.ShowBox(dialogue);
				if (!dMan.dialogActive) {
					dMan.dialogueLines = dialogueLines;
					dMan.currentLine = 0;
					dMan.ShowDialogue ();
				}

				if(transform.parent.GetComponent<PlayerController>() != null) {
					transform.parent.GetComponent<PlayerController>().canMove = false;
				}
			}
		}
	}
}
