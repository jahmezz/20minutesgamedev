using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public int DeathY = -20;

	[System.Serializable]
	public class PlayerStats {
		public float Health = 100f;
	}

	public PlayerStats playerStats = new PlayerStats();

	void Update() {
		if (transform.position.y <= DeathY) {
			DamagePlayer (9999999);
		}
	}

	public void DamagePlayer(int damage) {
		playerStats.Health -= damage;
		if (playerStats.Health <= 0) {
			GameMaster.KillPlayer (this);
		}
	}
}
