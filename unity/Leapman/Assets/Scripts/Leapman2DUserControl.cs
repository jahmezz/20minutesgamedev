using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace Leapman {
	[RequireComponent (typeof(LeapmanCharacter2D))]
	public class Leapman2DUserControl : MonoBehaviour {
		private LeapmanCharacter2D Character;
		private bool IsJump;
		private bool IsDash;
		private bool IsBlink;

		private void Awake() {
			Character = GetComponent<LeapmanCharacter2D> ();
		}

		private void Update() {
			if (!IsJump) {
				IsJump = CrossPlatformInputManager.GetButtonDown ("Jump");
			}
			if (!IsDash) {
				IsDash = CrossPlatformInputManager.GetButtonDown ("Dash");
			}
			if (!IsBlink) {
				IsBlink = CrossPlatformInputManager.GetButtonDown ("Blink");
			}
		}

		private void FixedUpdate() {
			float h = CrossPlatformInputManager.GetAxis ("Horizontal");
			if (IsBlink) {
				Character.Blink ();
			} else {
				Character.Move (h, IsJump, IsDash);
			}
			IsJump = false;
			IsDash = false;
		}
	}
}
