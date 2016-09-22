using UnityEngine;
using System.Collections;

public class Parallax : MonoBehaviour {

	public Transform[] backgrounds;
	private float[] parallaxScale;
	public float smoothFactor;

	private Transform cam;
	private Vector3 previousCamPosition;

	//called after objects created and before start
	void Awake () {
		cam = Camera.main.transform;
	}

	// Use this for initialization
	void Start () {
		previousCamPosition = cam.position;

		parallaxScale = new float[backgrounds.Length];

		for (int i = 0; i < backgrounds.Length; i++) {
			parallaxScale [i] = backgrounds [i].position.z * -1;
		}
	}
	
	// Update is called once per frame
	void Update () {
		for (int i = 0; i < backgrounds.Length; i++) {
			//the parallax is the opposite of the camera movement because the previous frame multiplied by the scale
			float parallax = (previousCamPosition.x - cam.position.x) * parallaxScale[i];

			float backgroundTargetPosX = backgrounds [i].position.x + parallax;

			Vector3 backgroundTargetPos = new Vector3 (backgroundTargetPosX, backgrounds [i].position.y, backgrounds [i].position.z);

			//fade between current and target position using lerp
			backgrounds[i].position = Vector3.Lerp(backgrounds[i].position, backgroundTargetPos, smoothFactor * Time.deltaTime);
		}

		previousCamPosition = cam.position;
	}
}
