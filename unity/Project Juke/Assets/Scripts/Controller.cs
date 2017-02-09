using System;
using UnityEngine;
using System.Collections;

[RequireComponent (typeof(Rigidbody2D))]
[RequireComponent (typeof(Animator))]
public class Controller : MonoBehaviour {
	private Rigidbody2D rb;
	Animator animator;
	private CircleCollider2D circleCollider;

	/// <summary>
	/// The force applied to the player.
	/// </summary>
	private Vector2 deltaForce;
	public Vector2 lastDirection;

	public float speed = 2f;
	public float strafeSpeed = 1f;

	private bool isMoving;

	public Direction direction;
	public Direction animationDirection;

	/// <summary>
	/// This runs before the start method, so put all initialization here to separate initialization and configuration.
	/// </summary>
	void Awake() {
		animator = GetComponent<Animator> ();
		rb = GetComponent<Rigidbody2D> ();
		circleCollider = GetComponent < CircleCollider2D> ();
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
		//theory of how to implement first direction and strafe
		//on first input, we record initialDirection
		//while input in initialDirection > 0, we allow movement up, left and right
		//when input <= 0, set direction null
		//

		//raw means the only possible values are -1, 0, and 1

		var h = Input.GetAxisRaw ("Horizontal");
		var v = Input.GetAxisRaw ("Vertical");
		var attack = Input.GetKeyDown (KeyCode.Space);

		Debug.Log ("h: " + h);
		Debug.Log ("v: " + v);
		if (h < 0 || h > 0 || v < 0 || v > 0) {
			if (directionChanged (direction, h, v)) {
				direction = determineDirection (direction, h, v);
			}
			isMoving = true;
			//when you first start moving, store the direction

		} else {
			isMoving = false;
		}

		if (direction == Direction.up || direction == Direction.down) {
			h = h / 2;
		} else if (direction == Direction.left || direction == Direction.right) {
			v = v / 2;
		}
		deltaForce = new Vector2 (h, v);
		CalculateMovement (direction, deltaForce * speed);
		sendAnimationInfo (direction, attack);
	}

	public bool directionChanged(Direction direction, float h, float v) {
		if (direction == Direction.up) {
			return v <= 0;
		} else if (direction == Direction.down) {
			return v >= 0;
		} else if (direction == Direction.left) {
			return h >= 0;
		} else if (direction == Direction.right) {
			return h <= 0;
		} else {
			return true;
		}
	}

	public Direction determineDirection(Direction direction, float h, float v) {
		
		if (h > 0) {
			return Direction.right;
		} else if (h < 0) {
			return Direction.left;
		} else if (v > 0) {
			return Direction.up;
		} else {
			return Direction.down;
		}
	}

	/// <summary>
	/// Finds where the player will move.
	/// </summary>
	/// <param name="playerForce">Player force.</param>
	void CalculateMovement(Direction direction, Vector2 playerForce) {
		rb.velocity = Vector2.zero;
		rb.AddForce (playerForce, ForceMode2D.Impulse);
	}

	float attackX = 0;
	float attackY = 0;

	/// <summary>
	/// Send animator information on player.
	/// </summary>
	private void sendAnimationInfo(Direction direction, bool attack) {
		animator.SetFloat ("xSpeed", rb.velocity.x);
		animator.SetFloat ("ySpeed", rb.velocity.y);

		animator.SetInteger ("direction", (int)direction);
		animator.SetBool ("isMoving", isMoving);
		if (attack) {
			animator.SetTrigger ("attack");
			animationDirection = direction;
		}
	}
}