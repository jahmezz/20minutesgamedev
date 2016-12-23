using UnityEngine;
using System.Collections;

public class MainMenu : MonoBehaviour {

	public int button1x, button1y, button2x, button2y;
	public Texture backgroundTexture;
	public Texture random1;

	void OnGUI() {
		//display background texture
		GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), backgroundTexture);
		//buttons
		GUI.Button (new Rect (button1x, button1y, Screen.width * .5f, Screen.height * .1f), "Play Game");
		GUI.Button (new Rect (button2x, button2y, Screen.width * .5f, Screen.height * .1f), "Options");
	}
}
