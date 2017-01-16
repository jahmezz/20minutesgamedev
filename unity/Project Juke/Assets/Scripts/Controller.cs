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
	private Vector2 deltaForce;
	private Vector2 lastDirection;

	public float speed = 2f;

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
		var attack = Input.GetKeyDown (KeyCode.Space);

		if (h < 0 || h > 0 || v < 0 || v > 0) {
			isMoving = true;
			lastDirection = rb.velocity;
			if (!boxCollider.IsTouchingLayers (Physics2D.AllLayers)) {
				
			}
		}

		deltaForce = new Vector2 (h, v);
		Debug.Log (attack);
		CalculateMovement (deltaForce * speed);
		sendAnimationInfo (attack);
	}

	/// <summary>
	/// Finds where the player will move.
	/// </summary>
	/// <param name="playerForce">Player force.</param>
	void CalculateMovement(Vector2 playerForce) {
		rb.velocity = Vector2.zero;
		rb.AddForce (playerForce, ForceMode2D.Impulse);
	}

	float attackX = 0;
	float attackY = 0;

	/// <summary>
	/// Send animator information on player.
	/// </summary>
	private void sendAnimationInfo(bool attack) {
		animator.SetFloat ("xSpeed", rb.velocity.x);
		animator.SetFloat ("ySpeed", rb.velocity.y);
		animator.SetFloat ("lastX", lastDirection.x);
		animator.SetFloat ("lastY", lastDirection.y);
		animator.SetBool ("isMoving", isMoving);
		if (attack) {
			animator.SetTrigger ("attack");
			attackX = lastDirection.x;
			attackY = lastDirection.y;
		}
		animator.SetFloat ("attackX", attackX);
		animator.SetFloat ("attackY", attackY);
	}
}