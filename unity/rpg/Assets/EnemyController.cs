using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour {

	public float moveSpeed;

	private Rigidbody2D rb;

	private bool moving;

	//how long an NPC stands still
	public float timeBetweenMove;
	//timer variable that actually holds count
	private float timeBetweenMoveCounter;
	//how long NPC moves
	public float timeToMove;
	//active timer
	private float timeToMoveCounter;

	private Vector3 moveDirection;

	private Animator animator;

	// Use this for initialization
	void Start () {
		rb = GetComponent<Rigidbody2D> ();
		timeBetweenMoveCounter = timeBetweenMove;
		timeToMoveCounter = timeToMove;
		animator = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		if(moving) {
			timeToMoveCounter -= Time.deltaTime;
			rb.velocity = moveDirection * moveSpeed;
			animator.SetFloat ("moveX", moveDirection.x);
			animator.SetFloat ("moveY", moveDirection.y);
			animator.SetBool ("moving", moving);

			if(timeToMoveCounter < 0f) {
				moving = false;
				animator.SetBool ("moving", moving);
				timeBetweenMoveCounter = timeBetweenMove;
			}
		//not moving
		} else {
			timeBetweenMoveCounter -= Time.deltaTime;
			rb.velocity = Vector2.zero;
			if(timeBetweenMoveCounter < 0f) {
				moving = true;
				timeToMoveCounter = timeToMove;

				int direction = Random.Range (0, 4);
				if(direction == 0) {
					moveDirection = Vector3.right;
				} else if(direction == 1) {
					moveDirection = Vector3.left;
				} else if(direction == 2) {
					moveDirection = Vector3.up;
				} else {
					moveDirection = Vector3.down;
				}
			}
		}
	}
}
