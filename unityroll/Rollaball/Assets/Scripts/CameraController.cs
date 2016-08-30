using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	public GameObject player;
	private Vector3 offset;

	// Use this for initialization
	void Start () {
		offset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	// late update means it runs after all info is processed
	void LateUpdate () {
		transform.position = player.transform.position + offset;
	}
}
