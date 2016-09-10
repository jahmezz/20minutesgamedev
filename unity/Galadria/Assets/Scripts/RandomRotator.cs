using UnityEngine;
using System.Collections;

public class RandomRotator : MonoBehaviour {
	public float tumble;

	void Start () {
		Rigidbody rigidbody = GetComponent<Rigidbody> ();
		rigidbody.angularVelocity = Random.insideUnitCircle * tumble;

	}
}
