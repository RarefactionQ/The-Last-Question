using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

	public GameObject mote;
	public GameObject dud;
	public float secondsBetweenSpawning;
	private float nextDeSpawnTime;
	private Vector3[] positions;
	private Vector3[] duds;
	private GameObject[] motes;
	private int index;
	public int size;

	void Start (){
		nextDeSpawnTime = secondsBetweenSpawning;
		positions = new Vector3[size];
		for (int i = 0; i < size; i++)
			positions [i] = new Vector3 (Random.Range (-70, 70), 0, Random.Range (-70, 70));
	
		index = 0;
		motes = new GameObject[positions.Length];
		MakeThingsToSpawn ();

		duds = new Vector3[5];
		for (int i = 0; i < duds.Length; i++)
			duds [i] = new Vector3 (Random.Range (-70, 70), 0, Random.Range (-70, 70));
		SpawnDuds ();



	}

	void Update (){

		// if time to spawn a new game object
		if (Time.time  >= nextDeSpawnTime && index < positions.Length) {

			deSpawn ();
			index++;
			nextDeSpawnTime = Time.time + secondsBetweenSpawning * Mathf.Pow(0.9f,index);
		}	
	}

	void SpawnDuds(){
		for (int i = 0; i < duds.Length; i++) {//keep making new motes until we run out of positions
			Vector3 spawnPosition = duds [i]; 
			GameObject newMote = Instantiate (dud, spawnPosition, transform.rotation) as GameObject;
			// make the parent the spawner so hierarchy doesn't get super messy
			newMote.transform.parent = gameObject.transform;
		}
	}

	void MakeThingsToSpawn (){
		for (int i = 0; i < positions.Length; i++) {//keep making new motes until we run out of positions
			Vector3 spawnPosition = positions [i]; 
			GameObject newMote = Instantiate (mote, spawnPosition, transform.rotation) as GameObject;
			// make the parent the spawner so hierarchy doesn't get super messy
			newMote.transform.parent = gameObject.transform;
			motes [i] = newMote;
		}
	}

	void deSpawn (){
		if(motes[index] != null)
			motes[index].BroadcastMessage ("DestroySelf");

	}


}
