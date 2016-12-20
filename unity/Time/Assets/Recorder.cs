using UnityEngine;
using System.Collections.Generic;

public struct PlayerState {
	public Vector3 position;
	public int animState;
	public bool direction;
	public Vector3 velocity;

	public PlayerState (Vector3 position, int animState, bool direction, Vector3 velocity) {
		this.position = position;
		this.animState = animState;
		this.direction = direction;
		this.velocity = velocity;
	}
}

public class Recorder : MonoBehaviour {
	[SerializeField] TimeController timeController;
	[SerializeField] Player player;

	Dictionary<int, PlayerState> states = new Dictionary<int, PlayerState> ();

	Animator _animator;

	// Use this for initialization
	void Start() {
		_animator = GetComponent<Animator> ();
	}

	bool isRecording = true;
	
	// Update is called once per frame
	void FixedUpdate() {

	}

	void Update() {
		if (Input.GetKeyDown (KeyCode.P)) {
			isRecording = false;

			timeController.time = 0;
		}
	}
}
