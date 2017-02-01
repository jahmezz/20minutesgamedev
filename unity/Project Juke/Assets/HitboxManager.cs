using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class HitboxManager : MonoBehaviour {

	//up
	public PolygonCollider2D upFrame1;
	public PolygonCollider2D upFrame2;
	public PolygonCollider2D upFrame3;
	public PolygonCollider2D upFrame4;
	public PolygonCollider2D upFrame5;
	public PolygonCollider2D upFrame6;

	//down
	public PolygonCollider2D downFrame1;
	public PolygonCollider2D downFrame2;
	public PolygonCollider2D downFrame3;
	public PolygonCollider2D downFrame4;
	public PolygonCollider2D downFrame5;
	public PolygonCollider2D downFrame6;

	//left
	public PolygonCollider2D leftFrame1;
	public PolygonCollider2D leftFrame2;
	public PolygonCollider2D leftFrame3;
	public PolygonCollider2D leftFrame4;
	public PolygonCollider2D leftFrame5;
	public PolygonCollider2D leftFrame6;

	//right
	public PolygonCollider2D rightFrame1;
	public PolygonCollider2D rightFrame2;
	public PolygonCollider2D rightFrame3;
	public PolygonCollider2D rightFrame4;
	public PolygonCollider2D rightFrame5;
	public PolygonCollider2D rightFrame6;

	public Dictionary<Direction, List<PolygonCollider2D>> frameMap;

	// Used for organization
	private PolygonCollider2D[] colliders;

	// Collider on this game object
	private PolygonCollider2D localCollider;

	private Rigidbody2D rb;

	public Controller controller;

	// We say box, but we're still using polygons.
	public enum Direction {
		up,
		down,
		left,
		right
	}

	private void setupFrameMap() {
		frameMap = new Dictionary<Direction, List<PolygonCollider2D>> ();
		List<PolygonCollider2D> upList = new List<PolygonCollider2D> ();
		upList.Add (upFrame1);
		upList.Add (upFrame2);
		upList.Add (upFrame3);
		upList.Add (upFrame4);
		upList.Add (upFrame5);
		upList.Add (upFrame6);

		List<PolygonCollider2D> downList = new List<PolygonCollider2D> ();
		downList.Add (downFrame1);
		downList.Add (downFrame2);
		downList.Add (downFrame3);
		downList.Add (downFrame4);
		downList.Add (downFrame5);
		downList.Add (downFrame6);

		List<PolygonCollider2D> leftList = new List<PolygonCollider2D> ();
		leftList.Add (leftFrame1);
		leftList.Add (leftFrame2);
		leftList.Add (leftFrame3);
		leftList.Add (leftFrame4);
		leftList.Add (leftFrame5);
		leftList.Add (leftFrame6);

		List<PolygonCollider2D> rightList = new List<PolygonCollider2D> ();
		rightList.Add (rightFrame1);
		rightList.Add (rightFrame2);
		rightList.Add (rightFrame3);
		rightList.Add (rightFrame4);
		rightList.Add (rightFrame5);
		rightList.Add (rightFrame6);


		frameMap.Add (Direction.up, upList);
		frameMap.Add (Direction.down, downList);
		frameMap.Add (Direction.left, leftList);
		frameMap.Add (Direction.right, rightList);
	}

	void Start() {
		setupFrameMap ();

		rb = GetComponent <Rigidbody2D> ();
		// Set up an array so our script can more easily set up the hit boxes
		colliders = new PolygonCollider2D[]{ };

	}

	public void setHitBox(int frame) {
		Direction d = DetermineDirection ();
		List<PolygonCollider2D> frames = null;
		frameMap.TryGetValue (d, out frames);
		frames.ForEach (delegate(PolygonCollider2D collider) {
			collider.enabled = false;
		});
		if (frame < 6) {
			setFrameHitbox (frame, frames);
		}
	}

	private void setFrameHitbox(int frame, List<PolygonCollider2D>frames) {
		frames.ForEach (delegate(PolygonCollider2D collider) {
			collider.enabled = false;
		});
		frames [frame].enabled = true;
	}

	private Direction DetermineDirection() {
		Controller controller = GetComponent ("Controller") as Controller;
		if (controller.lastDirection.y > 0) {
			return Direction.up;
		} else if (controller.lastDirection.y < 0) {
			return Direction.down;
		} else if (controller.lastDirection.x > 0) {
			return Direction.right;
		} else {
			return Direction.left;
		}
	}
}
