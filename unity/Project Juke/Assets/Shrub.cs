using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shrub : MonoBehaviour {
	[SerializeField]
	private Sprite shrub, stump;
	[SerializeField]
	private GameObject leaf1, leaf2;
	private SpriteRenderer renderer;
	private CircleCollider2D collider;

	private List<GameObject> leaves;
	private int boxHeight, boxWidth;

	void Start() {
		renderer = GetComponent<SpriteRenderer> ();
		leaves = new List<GameObject> ();
		collider = GetComponent<CircleCollider2D> ();
	}

	void OnColliderEnter2D(Collider2D collider) {
		Debug.Log (collider.tag);
	}

	void OnCollisionEnter2D(Collision2D other) {
		Debug.Log ("shrub");
		Debug.Log (other.collider.tag);
		if (other.collider.CompareTag ("Sword")) {
			collider.isTrigger = true;
			renderer.sprite = stump;
			spawnLeafAnimation ();
		}
	}

	void spawnLeafAnimation() {
		Vector3 shrubLocation = this.gameObject.transform.position;
		shrubLocation.x -= renderer.sprite.bounds.extents.x;
		shrubLocation.y += renderer.sprite.bounds.extents.y;
		Debug.Log (shrubLocation);
		for (int i = 0; i < 4; i++) {
			int orientation = Random.Range (0, 2);
			GameObject leaf = orientation == 0 ? leaf1 : leaf2;
			Vector3 leafLocation = shrubLocation;
			leafLocation.x = leafLocation.x + Random.value * 2 * renderer.sprite.bounds.size.x;
			leafLocation.y = leafLocation.y + Random.value * renderer.sprite.bounds.extents.y;
			GameObject newLeaf = GameObject.Instantiate (leaf, leafLocation, Quaternion.identity) as GameObject;
			leaves.Add (newLeaf);
		}
	}
}
