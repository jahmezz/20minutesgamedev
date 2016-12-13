using UnityEngine;
using System.Collections.Generic;

public struct PlayerState {
	public Vector3 position;
	public int animState;
	public bool direction;

	public PlayerState (Vector3 position, int animState, bool direction) {
		this.position = position;
		this.animState = animState;
		this.direction = direction;
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
		if (isRecording) {
			states.Add (timeController.time, new PlayerState (transform.position, _animator.GetCurrentAnimatorStateInfo (0).shortNameHash, transform.localScale.x > 0));
		}
	}

	void Update() {
		if (Input.GetKeyDown (KeyCode.P)) {
			isRecording = false;
			player.SetRecording (states);
			timeController.time = 0;
		}
	}
}
