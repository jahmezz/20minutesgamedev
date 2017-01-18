using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(Animator))]
public class HeartIcon : MonoBehaviour {

	public Animator animator;

	public void SendAnimValue(int heartValue) {
		animator.SetInteger ("heartValue", heartValue);
	}

	public void Awake() {
		animator = GetComponent<Animator> (); 
	}
	// Use this for initialization
	void Start() {
		
	}
	
	// Update is called once per frame
	void Update() {
		
	}
}
