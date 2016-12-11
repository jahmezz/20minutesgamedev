using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

namespace Leapman {
	public class LeapmanCharacter2D : MonoBehaviour {
		[SerializeField] private float MaxSpeed = 10f;
		[SerializeField] private float JumpForce = 800f;
		[SerializeField] private float DashVelocity = 30f;
		[SerializeField] private LayerMask GroundLayers;
		[SerializeField] public Text speedText;
		[SerializeField] public Image Circle;
		[SerializeField] public Image Cross;
		public Text dashText;
		public int dashCount = 3;
		private int blinkCount = 3;

		private Transform GroundCheck;
		// A position marking where to check if the player is grounded.
		const float GroundRadius = .2f;
		// Radius of the overlap circle to determine if grounded
		private bool Grounded;
		// Whether or not the player is grounded.
		private Transform CeilingCheck;
		// A position marking where to check for ceilings
		const float k_CeilingRadius = .01f;
		// Radius of the overlap circle to determine if the player can stand up
		private Animator Animator;
		// Reference to the player's animator component.
		private Rigidbody2D rb;
		private bool FacingRight = true;
		// For determining which way the player is currently facing.
		private int maxJumps = 3;
		private int jumpsLeft;
		private int direction;
		private float PreBlinkX = 0;
		private float PreBlinkY = 0;
		private bool blinking = false;
		Behaviour halo;

		public int fallBoundary = -20;

		private void Awake() {
			// Setting up references.
			GroundCheck = transform.Find ("GroundCheck");
			CeilingCheck = transform.Find ("CeilingCheck");
			Animator = GetComponent<Animator> ();
			rb = GetComponent<Rigidbody2D> ();
			halo = (Behaviour)GetComponent ("Halo");
			halo.enabled = false;
			Cross.enabled = false;
			Circle.enabled = false;
			direction = FacingRight ? 1 : -1;
		}

		public void OnEnable() {
			// Setting up references.
			GroundCheck = transform.Find ("GroundCheck");
			CeilingCheck = transform.Find ("CeilingCheck");
			Animator = GetComponent<Animator> ();
			rb = GetComponent<Rigidbody2D> ();
			halo = (Behaviour)GetComponent ("Halo");
			halo.enabled = false;
			Cross.enabled = false;
			Circle.enabled = false;
		}

		private void OnTriggerEnter() {
			Debug.Log ("Collided");
			GameMaster.NextLevel ();
		}

		private void FixedUpdate() {
			
			Grounded = false;

			// The player is grounded if a circlecast to the groundcheck position hits anything designated as ground
			// This can be done using layers instead but Sample Assets will not overwrite your project settings.
			if (!blinking) {
				Collider2D[] colliders = Physics2D.OverlapCircleAll (GroundCheck.position, GroundRadius, GroundLayers);
				for (int i = 0; i < colliders.Length; i++) {
					if (colliders [i].gameObject != gameObject) {
						Grounded = true;
						resetCounts ();
					}
				}
			}
			Animator.SetBool ("Ground", Grounded);

			// Set the vertical animation
			Animator.SetFloat ("vSpeed", rb.velocity.y);

			if (!GameMaster.levelEnd && transform.position.y < fallBoundary) {
				GameMaster.ResetLevel (this);
			}
		}

		private void resetCounts() {
			jumpsLeft = 2;
		}

		float friction = 0.95f;
		float airFriction = 0.98f;

		//show and move cursor
		float MaxDistance = 5f;

		public void StartBlink(bool hold) {
			//preserve speed
			if (!hold) {
				Debug.Log ("here");
				PreBlinkX = rb.velocity.x;
				PreBlinkY = rb.velocity.y;
				Cross.transform.position = rb.position;
				Circle.transform.position = rb.position;
				Debug.Log (PreBlinkX + " " + PreBlinkY);
			} else {
				//move x around
				var newPosition = Cross.transform.position;

				if (Input.GetKey ("up")) {
					newPosition.y += 0.5f;
				}
				if (Input.GetKey ("down")) {
					newPosition.y -= 0.5f;
				}
				if (Input.GetKey ("left")) {
					newPosition.x -= 0.5f;
				}
				if (Input.GetKey ("right")) {
					newPosition.x += 0.5f;
				}

				var distance = Math.Abs (Vector2.Distance (newPosition, rb.transform.position));
				Debug.Log (distance);
				if (distance > MaxDistance) {
					newPosition = newPosition.normalized * MaxDistance;
				}

				Cross.transform.position = newPosition;
			}

			//effect
			blinking = true;
			Grounded = false;
			Animator.SetBool ("Ground", false);
			Cross.enabled = true;
			Circle.enabled = true;
			halo.enabled = true;

			//stop dude
			rb.isKinematic = true;
		}

		public void EndBlink() {
			blinking = false;
			halo.enabled = false;
			Debug.Log (PreBlinkX + " " + PreBlinkY);
			rb.MovePosition (Cross.transform.position);
			rb.isKinematic = false;
			rb.velocity = new Vector2 (PreBlinkX, PreBlinkY);
			PreBlinkX = PreBlinkY = 0;

			Circle.enabled = false;
			Cross.enabled = false;
		}

		public void Move(float move, bool jump, bool dash) {
			// The Speed animator parameter is set to the absolute value of the horizontal input.
			Animator.SetFloat ("Speed", Mathf.Abs (move));

			// Move the character
			var vel = rb.velocity;
			if (vel.x < MaxSpeed && vel.x > -MaxSpeed) {
				rb.AddRelativeForce (new Vector2 (move * 100, 0));
			}

			checkFlip (move);

			if (Grounded) {
				vel.x *= friction;
			} else {
				vel.x *= airFriction;
			}

			if (jumpsLeft > 0 && jump) {
				//allow jumps to slow horizontal momentum
				if (!Grounded) {
					vel.x = 0;
				}

				Grounded = false;
				Animator.SetBool ("Ground", false);

				vel.y = 0;
				rb.AddForce (new Vector2 (0f, JumpForce));
				jumpsLeft--;
			} else if (Grounded && dash && dashCount > 0) {
				//dash has set velocity
				vel.x = direction * DashVelocity;
				vel.y = 0f;
				dashCount--;
				dashText.text = "Dashes: " + (int)dashCount;
			}
			rb.velocity = vel;
			speedText.text = "" + direction;
		}

		Vector2 newPosition;

		private void checkFlip(float move) {
			// If the input is moving the player right and the player is facing left...
			if (move > 0 && !FacingRight) {
				// ... flip the player.
				Flip ();
			}
			// Otherwise if the input is moving the player left and the player is facing right...
			else if (move < 0 && FacingRight) {
				// ... flip the player.
				Flip ();
			}
		}

		private void Flip() {
			// Switch the way the player is labelled as facing.
			FacingRight = !FacingRight;
			direction = FacingRight ? 1 : -1;
			// Multiply the player's x local scale by -1.
			Vector3 theScale = transform.localScale;
			theScale.x *= -1;
			transform.localScale = theScale;
		}
	}
}
