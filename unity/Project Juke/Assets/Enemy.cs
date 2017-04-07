using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {

	private int health;
	Animator animator;
	// Use this for initialization
	void Start() {
		health = 4;
		animator = GetComponent<Animator> ();
		animator.SetInteger ("enemyHealth", health);
	}
	
	// Update is called once per frame
	void Update() {
		
	}

	private float push = 0.5f;

	void OnCollisionEnter2D(Collision2D coll) {
		//if not blinking and hit by sword
		if (!this.animator.GetCurrentAnimatorStateInfo (0).IsName ("Blink") && coll.collider.CompareTag ("Sword")) {
			animator.SetTrigger ("Blink");

			// get pushed back
			Vector2 dir = coll.contacts [0].point - new Vector2 (transform.position.x, transform.position.y);
			// We then get the opposite (-Vector3) and normalize it
			dir = -dir.normalized;
			StartCoroutine (Push (dir));
		}
	}

	public IEnumerator Push(Vector2 dir) {
		float elapsedTime = 0;
		Vector2 startingPos = gameObject.transform.position;

		Vector2 end = startingPos + dir * push;
		while (elapsedTime < 0.1f) {
			gameObject.transform.position = Vector3.Lerp (startingPos, end, (elapsedTime / 0.1f));
			elapsedTime += Time.deltaTime;
			yield return new WaitForEndOfFrame ();
		}
		gameObject.transform.position = end;
		health--;
		Debug.Log (health);
		animator.SetInteger ("enemyHealth", health);
	}

	private void Dead() {
		Destroy (this.gameObject);
	}
}
