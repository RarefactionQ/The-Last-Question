using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimedDestroyer : MonoBehaviour {

	public GameObject frozen_mote;
	public GameObject me;
	public float duration = 5.0f;
	private float startTime;

	void Start(){
		startTime = Time.time;
	}

	void Update(){
		if (Time.time > startTime + duration)
			DestroySelf ();
	}

	void DestroySelf(){
		GameObject newMote = Instantiate (frozen_mote, transform.position, transform.rotation);
		Destroy (me);
	}
}
