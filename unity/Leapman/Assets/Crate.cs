using UnityEngine;
using System.Collections;

public class Crate : MonoBehaviour {
	
	// Update is called once per frame
	void Update() {
		transform.Rotate (new Vector3 (90, 90, 0) * Time.deltaTime);
	}
}
