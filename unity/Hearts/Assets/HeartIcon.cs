using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script for the animation state of the heart UI.
/// </summary>
[RequireComponent (typeof(Animator))]
public class HeartIcon : MonoBehaviour {

	public Animator animator;

	/// <summary>
	/// Pass heart value to the heart icon for animation.
	/// </summary>
	/// <param name="heartValue">Heart value.</param>
	public void SendAnimValue(int heartValue) {
		animator.SetInteger ("heartValue", heartValue);
	}

	public void Awake() {
		animator = GetComponent<Animator> (); 
	}
}
