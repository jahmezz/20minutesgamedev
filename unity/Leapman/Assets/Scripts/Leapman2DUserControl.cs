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
		private bool WasBlink = false;

		private void Awake() {
			Character = GetComponent<LeapmanCharacter2D> ();
		}

		private void Update() {
			if (Input.GetKeyDown (KeyCode.Escape)) {
				Character.TogglePaused ();
			}
			if (CrossPlatformInputManager.GetButtonDown ("Reset")) {
				GameMaster.ResetLevel ();
			}
			if (!IsJump) {
				IsJump = CrossPlatformInputManager.GetButtonDown ("Jump");
			}
			if (!IsDash) {
				IsDash = CrossPlatformInputManager.GetButtonDown ("Dash");
			}
			IsBlink = CrossPlatformInputManager.GetButton ("Blink");
		}

		private void FixedUpdate() {
			float v = CrossPlatformInputManager.GetAxis ("Vertical");
			float h = CrossPlatformInputManager.GetAxis ("Horizontal");
			if (Character.canBlink && IsBlink) {
				Character.StartBlink (WasBlink);
				WasBlink = true;
			} else if (WasBlink) {
				Character.EndBlink ();
				WasBlink = false;
			} else {
				
				Character.Control (v, h, IsJump, IsDash);
			}
			IsJump = false;
			IsDash = false;
		}
	}
}
