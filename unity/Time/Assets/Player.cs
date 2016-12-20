using UnityEngine;
using System.Collections.Generic;

public class Player : MonoBehaviour {
	[SerializeField] TimeController timeController;

	Animator _animator;
	Rigidbody2D _rigidbody2d;

	Dictionary<int, PlayerState> states = new Dictionary<int, PlayerState> ();

	void Start() {
		_animator = GetComponent<Animator> ();
		_rigidbody2d = GetComponent<Rigidbody2D> ();
	}

	// Update is called once per frame
	void FixedUpdate() {
		if (timeController.isForward) {
			_rigidbody2d.isKinematic = false;
			PlayerState newState = new PlayerState (transform.position, _animator.GetCurrentAnimatorStateInfo (0).shortNameHash, transform.localScale.x > 0, _rigidbody2d.velocity);
			if (states.ContainsKey (timeController.time)) {
				states [timeController.time] = newState;
			} else {
				states.Add (timeController.time, newState);
			}
		} else {
			if (states.ContainsKey (timeController.time)) {
				PlayState (states [timeController.time]);
				if (timeController.time == 0) {
					_rigidbody2d.isKinematic = true;
				}
			}
		}
	}

	void PlayState(PlayerState state) {
		transform.position = state.position;
		_animator.Play (state.animState);
		Vector3 localScale = transform.localScale;
		localScale.x = state.direction ? Mathf.Abs (localScale.x) : -Mathf.Abs (localScale.x);
		transform.localScale = localScale;
		_rigidbody2d.velocity = state.velocity;
	}
}
