using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Leaf : MonoBehaviour {
	public void destroy() {
		Destroy (transform.parent.gameObject);
	}
}