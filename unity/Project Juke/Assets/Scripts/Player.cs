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
	}

	/// <summary>
	/// Called when values are changed on the editor.
	/// </summary>
	[ExecuteInEditMode]
	void OnValidate() {
		currentHealth = Mathf.Clamp (currentHealth, 0, maxHealth);
	}

	private float push = 2f;

	void OnCollisionEnter2D(Collision2D other) {
		Debug.Log (other.contacts [0].otherCollider.tag);
		if (!isBlinking && other.collider.CompareTag ("Enemy") && other.contacts [0].otherCollider.CompareTag ("Player")) {
			animator.SetTrigger ("Blink");
			// get pushed back

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
		while (elapsedTime < 2f) {
			if (elapsedTime < 0.1f) {
				gameObject.transform.position = Vector3.Lerp (startingPos, end, (elapsedTime / 0.1f));
			}
			switchTime += Time.deltaTime;
			if (switchTime > 0.2f) {
				switchTime = 0;
				renderer.enabled = !renderer.enabled;
			}
			elapsedTime += Time.deltaTime;
			yield return new WaitForEndOfFrame ();
		}
		isBlinking = false;
		renderer.enabled = true;
	}
}
