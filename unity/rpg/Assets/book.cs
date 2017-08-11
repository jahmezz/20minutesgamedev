using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class book : MonoBehaviour {
	Animator animator;
	public bool dialogue;
	// Use this for initialization
	void Start () {
		animator = GetComponent<Animator> ();
		dialogue = false;
	}
	
	// Update is called once per frame
	void Update () {
		animator.SetBool ("dialogue", dialogue);
	}

	public void noOp() {}
}
