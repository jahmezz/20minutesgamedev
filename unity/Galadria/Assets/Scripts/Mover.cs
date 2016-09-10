using UnityEngine;
using System.Collections;

public class Mover : MonoBehaviour {

	public float speed;

	void Start () {
		Rigidbody rigidbody = GetComponent <Rigidbody> ();
		Transform transform = GetComponent <Transform> ();
		rigidbody.velocity = transform.forward * speed;
	}
}
