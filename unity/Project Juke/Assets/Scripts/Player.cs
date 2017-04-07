using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script on the player.
/// </summary>
[RequireComponent (typeof(Rigidbody2D))]
public class Player : MonoBehaviour {

	public int currentHealth;
	public int maxHealth;

	Animator animator;
	SpriteRenderer renderer;
	Controller controller;
	bool isBlinking = false;
	// Use this for initialization
	void Start() {
		animator = GetComponent<Animator> ();
		renderer = GetComponent<SpriteRenderer> ();
		controller = GetComponent<Controller> ();
	}

	/// <summary>
	/// Called when values are changed on the editor.
	/// </summary>
	[ExecuteInEditMode]
	void OnValidate() {
		currentHealth = Mathf.Clamp (currentHealth, 0, maxHealth);
	}



	public void Death() {
		StartCoroutine (Die ());
	}

	private  IEnumerator Die() {
		yield return new WaitForSeconds (1);
		Destroy (this.gameObject);
	}

	private float push = 2f;

	void OnCollisionEnter2D(Collision2D other) {
		if (!isBlinking && other.collider.CompareTag ("Enemy") && other.contacts [0].otherCollider.CompareTag ("Player")) {
			
			currentHealth--;
			if (currentHealth != 0) {
				Debug.Log ("Blinking" + currentHealth);
				animator.SetTrigger ("Blink");
			} 
			Vector2 dir = other.contacts [0].point - new Vector2 (transform.position.x, transform.position.y);
			// We then get the opposite (-Vector3) and normalize it
			dir = -dir.normalized;
			isBlinking = true;
			StartCoroutine (Push (dir));
		}
	}

	public IEnumerator Push(Vector2 dir) {
		float elapsedTime = 0;
		float lastTime = 0;
		float switchTime = 0;
		Vector2 startingPos = gameObject.transform.position;

		Vector2 end = startingPos + dir * push;

		float loopTime = currentHealth > 0 ? 1f : 0.09f;
		while (elapsedTime < loopTime) {
			if (elapsedTime < 0.1f) {
				gameObject.transform.position = Vector3.Lerp (startingPos, end, (elapsedTime / 0.1f));
			}
			switchTime += Time.deltaTime;
			if (switchTime > 0.1f) {
				switchTime = 0;
				renderer.enabled = !renderer.enabled;
			}
			elapsedTime += Time.deltaTime;
			yield return new WaitForEndOfFrame ();
		}
		isBlinking = false;
		renderer.enabled = true;
		if (currentHealth == 0) {
			controller.isDead = true;
			animator.SetTrigger ("Death");
		} 
	}
}
