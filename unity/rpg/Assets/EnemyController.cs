using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyController : MonoBehaviour {

	public float moveSpeed;

	private Rigidbody2D rb;

	private bool moving;

	public float timeBetweenMove;
	private float timeBetweenMoveCounter;
	public float timeToMove;
	private float timeToMoveCounter;

	private Vector3 moveDirection;


	// Use this for initialization
	void Start () {
		timeBetweenMoveCounter = timeBetweenMove;
		timeToMoveCounter = timeToMove;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
