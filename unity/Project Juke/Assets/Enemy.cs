using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {

	Animator animator;
	// Use this for initialization
	void Start() {
		animator = GetComponent<Animator> ();
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
			Vector3 center = coll.collider.bounds.center;

			bool right = coll.contacts [0].point.x > center.x;
			bool top = coll.contacts [0].point.y > center.y;

			StartCoroutine (Push (right, top));
		}
	}

	public IEnumerator Push(bool right, bool top) {
		float elapsedTime = 0;
		Vector3 startingPos = gameObject.transform.position;

		if (right) {
			if (top) {
				
			}
		}

		Vector3 end = startingPos + Vector3.right * push;

		while (elapsedTime < 0.1f) {
			gameObject.transform.position = Vector3.Lerp (startingPos, startingPos + Vector3.right * push, (elapsedTime / 0.1f));
			elapsedTime += Time.deltaTime;
			yield return new WaitForEndOfFrame ();
		}
		gameObject.transform.position = end;
	}
}
