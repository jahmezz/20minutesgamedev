using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Script on the player.
/// </summary>
[RequireComponent (typeof(Rigidbody2D))]
[RequireComponent (typeof(BoxCollider2D))]
public class Player : MonoBehaviour {

	public int currentHealth;
	public int maxHealth;

	/// <summary>
	/// Called when values are changed on the editor.
	/// </summary>
	[ExecuteInEditMode]
	void OnValidate() {
		currentHealth = Mathf.Clamp (currentHealth, 0, maxHealth);

	}
}
