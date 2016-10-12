using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	public float fireRate = 0;
	public int damage = 10;
	public LayerMask whatToHit;

	public Transform HitPrefab;
	public Transform BulletTrailPrefab;
	public Transform MuzzleFlashPrefab;

	float timeToFire = 0;
	float timeToSpawnEffect = 0;
	public float effectSpawnRate = 10;
	Transform firePoint;

	public float camShakeAmt = 0.005f;
	public float camShakeLength = 0.05f;
	CameraShake camShake;

	void Awake() {
		firePoint = transform.FindChild ("FirePoint");
		if (firePoint == null) {
			Debug.LogError ("No FirePoint...");
		}
	}

	void Start() {
		camShake = GameMaster.gm.GetComponent<CameraShake> ();
		if(camShake == null) {
			Debug.LogError ("No CameraShake component found.");
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (fireRate == 0) {
			if (Input.GetButtonDown ("Fire1")) {
				Shoot ();
			}
		} else {
			if (Input.GetButton ("Fire1") && Time.time > timeToFire) {
				timeToFire = Time.time + 1 / fireRate;
				Shoot ();
			}
		}
	}

	void Shoot() {
		Vector2 mousePosition = new Vector2 (Camera.main.ScreenToWorldPoint(Input.mousePosition).x,
											 Camera.main.ScreenToWorldPoint(Input.mousePosition).y);
		Vector2 firePointPosition = new Vector2 (firePoint.position.x, firePoint.position.y);
		RaycastHit2D hit = Physics2D.Raycast (firePointPosition, mousePosition-firePointPosition, 100, whatToHit);

		Debug.DrawLine (firePointPosition, (mousePosition-firePointPosition)*100, Color.cyan);
		if (hit.collider != null) {
			Debug.DrawLine (firePointPosition, hit.point, Color.red);
			Enemy enemy = hit.collider.GetComponent<Enemy> ();
			if(enemy != null) {
				enemy.DamageEnemy (damage);
				Debug.Log ("Damaged enemy 10");
			}
		}
		if (Time.time >= timeToSpawnEffect) {
			Vector3 hitPos;
			Vector3 hitNormal;

			if(hit.collider == null) {
				hitPos = (mousePosition - firePointPosition) * 30;
				hitNormal = new Vector3 (9999, 9999, 9999);
			} else {
				hitPos = hit.point;
				hitNormal = hit.normal;
			}

			Effect (hitPos, hitNormal);
			timeToSpawnEffect = Time.time + 1 / effectSpawnRate;
		}
	}

	void Effect(Vector3 hitPos, Vector3 hitNormal) {
		Transform trail = Instantiate (BulletTrailPrefab, firePoint.position, firePoint.rotation) as Transform;
		LineRenderer lr = trail.GetComponent<LineRenderer> ();

		if(lr != null) {
			lr.SetPosition (0, firePoint.position);
			lr.SetPosition (1, hitPos);
		}

		Destroy (trail.gameObject, 0.04f);

		if (hitNormal != new Vector3 (9999, 9999, 9999)) {
			Transform hitParticle = Instantiate (HitPrefab, hitPos, Quaternion.FromToRotation(Vector3.right, hitNormal)) as Transform;
			Destroy (hitParticle.gameObject, 1f);
		}

		//muzzle flash
		Transform clone = (Transform)Instantiate (MuzzleFlashPrefab, firePoint.position, firePoint.rotation);
		clone.parent = firePoint;
		float size = Random.Range (0.6f, 0.9f);
		clone.localScale = new Vector3 (size, size, size);
		Destroy (clone.gameObject, 0.02f);

		camShake.Shake (camShakeAmt, camShakeLength);
	}
}
