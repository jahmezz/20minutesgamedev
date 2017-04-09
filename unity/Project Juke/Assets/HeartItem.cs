using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeartItem : MonoBehaviour {
	public Player player;

	void OnTriggerEnter2D(Collider2D other) {
		if (other.tag == "Player" || other.tag == "Sword") {
			player.currentHealth += 2;
			Destroy (gameObject);
		}	
	}
	// Use this for initialization
	void Start() {
		player = GetComponent<Player> ();
	}
	
	// Update is called once per frame
	void Update() {
		
	}
}
