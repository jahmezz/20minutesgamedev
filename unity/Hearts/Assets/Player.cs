using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent (typeof(Rigidbody2D))]
[RequireComponent (typeof(BoxCollider2D))]
public class Player : MonoBehaviour {

	public int currentHealth;
	public int maxHealth;

	// Use this for initialization
	[ExecuteInEditMode]
	void OnValidate() {
		currentHealth = Mathf.Clamp (currentHealth, 0, maxHealth);

	}
}
