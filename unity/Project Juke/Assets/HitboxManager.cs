using UnityEngine;
using System.Collections;

public class HitboxManager : MonoBehaviour {

	// Set these in the editor
	public PolygonCollider2D frame2;
	public PolygonCollider2D frame3;

	// Used for organization
	private PolygonCollider2D[] colliders;

	// Collider on this game object
	private PolygonCollider2D localCollider;

	// We say box, but we're still using polygons.
	public enum hitBoxes {
		frame2Box,
		frame3Box,
		clear
		// special case to remove all boxes
	}

	void Start() {
		// Set up an array so our script can more easily set up the hit boxes
		colliders = new PolygonCollider2D[]{ frame2, frame3 };

		// Create a polygon collider
		localCollider = gameObject.AddComponent<PolygonCollider2D> ();
		localCollider.isTrigger = true; // Set as a trigger so it doesn't collide with our environment
		localCollider.pathCount = 0; // Clear auto-generated polygons
	}

	void OnTriggerEnter2D(Collider2D col) {
		Debug.Log ("Collider hit something!");
	}

	public void setHitBox(hitBoxes val) {
		if (val != hitBoxes.clear) {
			localCollider.SetPath (0, colliders [(int)val].GetPath (0));
			return;
		}
		localCollider.pathCount = 0;
	}
}
