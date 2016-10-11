using UnityEngine;
using System.Collections;
using Pathfinding;

[RequireComponent (typeof (Rigidbody2D))]
[RequireComponent (typeof (Seeker))]
public class EnemyAI : MonoBehaviour {
	public Transform target;
	//times per sec update path
	public float updateRate = 2f;

	private Seeker seeker;
	private Rigidbody2D rb;

	//calc path
	public Path path;

	//The AI's speed per second
	public float speed = 300f;
	public ForceMode2D fMode;

	[HideInInspector]
	public bool pathIsEnded = false;

	//max distance from AI to waypoint so it switches to another waypoint
	public float nextWaypointDistance = 3;

	private int currentWaypoint = 0;

	private bool searchingForPlayer = false;

	void Start () {
		seeker = GetComponent<Seeker> ();
		rb = GetComponent<Rigidbody2D> ();

		if (target == null) {
			if(!searchingForPlayer) {
				searchingForPlayer = true;
				StartCoroutine (SearchForPlayer ());
			}
			return;
		}

		//start a new path to the target position and return result to OnPathComplete
		seeker.StartPath (transform.position, target.position, OnPathComplete);

		StartCoroutine (UpdatePath ());
	}

	IEnumerator SearchForPlayer() {
		GameObject result = GameObject.FindGameObjectWithTag ("Player");
		if(result == null) {
			yield return new WaitForSeconds (0.5f);
			StartCoroutine (SearchForPlayer());
		} else {
			searchingForPlayer = false;
			target = result.transform;

			StartCoroutine (UpdatePath ());
			return false;
		}
	}

	IEnumerator UpdatePath() {
		if (target == null) {
			if(!searchingForPlayer) {
				searchingForPlayer = true;
				StartCoroutine (SearchForPlayer ());
			}
			return false;
		}

		seeker.StartPath (transform.position, target.position, OnPathComplete);

		yield return new WaitForSeconds (1f / updateRate);
		StartCoroutine (UpdatePath ());
	}

	public void OnPathComplete (Path p) {
		if (p.error) {
			Debug.Log ("Error: " + p.error);
		} else {
			path = p;
			currentWaypoint = 0;
		}
	}

	void FixedUpdate() {
		if (target == null) {
			if(!searchingForPlayer) {
				searchingForPlayer = true;
				StartCoroutine (SearchForPlayer ());
			}
			return;
		}

		//TODO: always look at player (ex. missle)

		if(path == null) {
			return;
		}

		if (currentWaypoint >= path.vectorPath.Count) {
			if(pathIsEnded) {
				return;
			}

			Debug.Log ("End of path reached.");
			pathIsEnded = true;
		}
		pathIsEnded = false;

		//direction to next waypoint
		Vector3 dir = (path.vectorPath[currentWaypoint] - transform.position).normalized;
		dir *= speed * Time.fixedDeltaTime;

		//move the AI
		rb.AddForce(dir, fMode);

		float dist = Vector3.Distance (transform.position, path.vectorPath [currentWaypoint]);
		if(dist < nextWaypointDistance) {
			currentWaypoint++;
			return;
		}
	}
}
