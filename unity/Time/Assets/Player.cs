using UnityEngine;
using System.Collections.Generic;

public class Player : MonoBehaviour {
	Dictionary<int, PlayerState> recording;
	[SerializeField] TimeController timeController;

	Animator _animator;
	Rigidbody2D _rigidbody2d;

	void Start() {
		_animator = GetComponent<Animator> ();
		_rigidbody2d = GetComponent<Rigidbody2D> ();
	}

	bool isPlaying = false;
	// Update is called once per frame
	void FixedUpdate() {
		if (isPlaying) {
			if (recording.ContainsKey (timeController.time)) {
				PlayState (recording [timeController.time]);
			}
		}
	}

	public void SetRecording(Dictionary<int, PlayerState> recording) {
		this.recording = new Dictionary<int, PlayerState> (recording);
		isPlaying = true;
		_rigidbody2d.isKinematic = true;
	}

	void PlayState(PlayerState state) {
		transform.position = state.position;
		_animator.Play (state.animState);
		Vector3 localScale = transform.localScale;
		localScale.x = state.direction ? Mathf.Abs (localScale.x) : -Mathf.Abs (localScale.x);
		transform.localScale = localScale;
	}
}
