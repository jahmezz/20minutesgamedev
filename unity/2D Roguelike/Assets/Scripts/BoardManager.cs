using UnityEngine;
using System; //enables serializable which allows us to modify how variables will appear in the editor
using System.Collections.Generic; //so we can use lists
using Random = UnityEngine.Random;

public class BoardManager : MonoBehaviour {
	[Serializable]
	public class Count {
		public int min;
		public int max;

		public Count (int min, int max) {
			this.min = min;
			this.max = max;
		}
	}

	public int cols = 8;
	public int rows = 8;
	public Count wallCount = new Count(5, 9);
	public Count foodCount = new Count(1, 5);
	public GameObject exit;
	public GameObject[] floorTiles;
	public GameObject[] wallTiles;
	public GameObject[] foodTiles;
	public GameObject[] enemyTiles;
	public GameObject[] outerWallTiles;

	private Transform boardHolder;
	private List <Vector3> gridPositions = new List<Vector3>();

	void InitializeList() {
		gridPositions.Clear ();

		for (int x = 1; x < cols - 1; x++) {
			for (int y = 1; y < rows - 1; y++) {
				gridPositions.Add (new Vector3 (x, y, 0f));
			}
		}
	}

	//lays out the floor and outer wall tiles
	void BoardSetup() {
		boardHolder = new GameObject ("Board").transform;
		for (int x = -1; x < cols + 1; x++) {
			for (int y = -1; y < rows + 1; y++) {
				GameObject toInstantiate = floorTiles [Random.Range (0, floorTiles.Length)];
				if (x == -1 || y == cols || y == -1 || y == rows) {
					toInstantiate = outerWallTiles [Random.Range (0, outerWallTiles.Length)];
				}
				GameObject instance = Instantiate (toInstantiate, new Vector3 (x, y, 0f), Quaternion.identity) as GameObject;

				instance.transform.SetParent (boardHolder);
			}
		}
	}

	Vector3 RandomPosition() {
		int randomIndex = Random.Range (0, gridPositions.Count);
		Vector3 randomPosition = gridPositions [randomIndex];
		gridPositions.RemoveAt (randomIndex);

		return randomPosition;
	}

	void LayoutObjectAtRandom(GameObject[] tileArray, int min, int max) {
		int objectCount = Random.Range (min, max + 1);
		for (int i = 0; i < objectCount; i++) {
			Vector3 randomPosition = RandomPosition ();
			GameObject tileChoice = tileArray [Random.Range (0, tileArray.Length)];
			Instantiate (tileChoice, randomPosition, Quaternion.identity);
		}
	}

	public void SetupScene (int level) {
		BoardSetup ();
		InitializeList ();
		LayoutObjectAtRandom (wallTiles, wallCount.min, wallCount.max);
		LayoutObjectAtRandom (foodTiles, foodCount.min, foodCount.max);
		int enemyCount = (int)Mathf.Log (level, 2f);
		LayoutObjectAtRandom (enemyTiles, enemyCount, enemyCount);
		Instantiate (exit, new Vector3 (cols - 1, rows - 1, 0f), Quaternion.identity);
	}
}
