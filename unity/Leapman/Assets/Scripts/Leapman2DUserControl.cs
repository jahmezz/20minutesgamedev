using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace Leapman {
	[RequireComponent (typeof(LeapmanCharacter2D))]
	public class Leapman2DUserControl : MonoBehaviour {
		private LeapmanCharacter2D Character;
		private bool IsJump;

		private void Awake () {
			Character = GetComponent<LeapmanCharacter2D> ();
		}

		private void Update () {
			if (!IsJump) {
				IsJump = CrossPlatformInputManager.GetButtonDown ("Jump");
			}
		}

		private void FixedUpdate () {
			bool crouch = Input.GetKey (KeyCode.LeftControl);
			float h = CrossPlatformInputManager.GetAxis ("Horizontal");

			Character.Move (h, IsJump);
			IsJump = false;
		}
	}
}
