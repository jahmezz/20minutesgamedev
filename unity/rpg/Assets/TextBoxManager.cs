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

	// Use this for initialization
	void Start () {
		textBox.SetActive (true);
		player = FindObjectOfType<PlayerController> ();
		if(textFile != null) {
			textLines = (textFile.text.Split ('\n'));
		}
	}

	// Update is called once per frame
	void Update () {
		theText.text = textLines [0];
		Debug.Log (textLines [0]);
		if(Input.GetKeyDown(KeyCode.Return)) {
			currentLine++;
		}

		if(currentLine > endAtLine) {
			textBox.SetActive (false);
		}
	}
}
