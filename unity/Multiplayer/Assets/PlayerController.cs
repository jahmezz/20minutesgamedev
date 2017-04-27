using UnityEngine;
using UnityEngine.Networking;

public class PlayerController : NetworkBehaviour {

	public GameObject bulletPrefab;
	public Transform bulletSpawn;

	void OnStartLocalPlayer() {
		GetComponent<MeshRenderer> ().material.color = Color.blue;
	}

	void Update() {
		if (!isLocalPlayer) {
			return;
		}
		if (Input.GetKeyDown (KeyCode.Space)) {
			CmdFire ();
		}
		var x = Input.GetAxis ("Horizontal") * Time.deltaTime * 150.0f;
		var z = Input.GetAxis ("Vertical") * Time.deltaTime * 3.0f;

		transform.Rotate (0, x, 0);
		transform.Translate (0, 0, z);
	}

	[Command]
	void CmdFire() {
		//Create the bullet from prefab
		var bullet = (GameObject)Instantiate (bulletPrefab, bulletSpawn.position, bulletSpawn.rotation);

		//velocity
		bullet.GetComponent<Rigidbody> ().velocity = bullet.transform.forward * 6;

		NetworkServer.Spawn (bullet);

		//destroy
		Destroy (bullet, 2.0f);
	}
}