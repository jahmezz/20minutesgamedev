using System;
using UnityEngine;
using System.Collections;

[RequireComponent (typeof(Rigidbody2D))]
[RequireComponent (typeof(Animator))]
[RequireComponent (typeof(BoxCollider2D))]
public class Controller : MonoBehaviour {
	private Rigidbody2D rb;
	Animator animator;
	private BoxCollider2D boxCollider;

	/// <summary>
	/// The force applied to the player.
	/// </summary>
	[SerializeField]
	private Vector2 deltaForce;
	private Vector2 lastDirection;

	public float speed = 2;

	private bool isMoving;

	/// <summary>
	/// This runs before the start method, so put all initialization here to separate initialization and configuration.
	/// </summary>
	void Awake() {
		animator = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D> ();
		boxCollider = GetComponent < BoxCollider2D> ();
	}

	private void Start() {
		rb.gravityScale = 0;
		rb.constraints = RigidbodyConstraints2D.FreezeRotation;
	}

	/// <summary>
	/// Called once per frame.
	/// </summary>
	private void Update() {
		CheckInput ();
	}

	void CheckInput() {
		//raw means the only possible values are -1, 0, and 1
		isMoving = false;
		var h = Input.GetAxisRaw ("Horizontal");
		var v = Input.GetAxisRaw ("Vertical");

		if (h < 0 || h > 0 || v < 0 || v > 0) {
			isMoving = true;
		}

		deltaForce = new Vector2 (h, v);

		CalculateMovement (deltaForce * speed);
	}

	/// <summary>
	/// Finds where the player will move.
	/// </summary>
	/// <param name="playerForce">Player force.</param>
	void CalculateMovement(Vector2 playerForce) {
		rb.velocity = Vector2.zero;
		rb.AddForce (playerForce, ForceMode2D.Impulse);
		sendAnimationInfo ();
	}

	/// <summary>
	/// Send animator information on player.
	/// </summary>
	private void sendAnimationInfo() {
		animator.SetFloat ("xSpeed", rb.velocity.x);
		animator.SetFloat ("ySpeed", rb.velocity.x);
		animator.SetFloat ("lastX", lastDirection.x);
		animator.SetFloat ("lastY", lastDirection.y);
		animator.SetBool ("xSpeed", rb.velocity.x);
	}
}