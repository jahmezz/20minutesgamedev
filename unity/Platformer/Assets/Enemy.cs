using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	[System.Serializable]
	public class EnemyStats {
		public float Health = 100f;
	}

	public EnemyStats stats = new EnemyStats();

	public void DamageEnemy(int damage) {
		stats.Health -= damage;
		if (stats.Health <= 0) {
			GameMaster.KillEnemy (this);
		}
	}
}
