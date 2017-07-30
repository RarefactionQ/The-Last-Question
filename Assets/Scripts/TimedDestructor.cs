using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimedDestructor : MonoBehaviour {
	public float time;
	public GameObject obj;
	// Use this for initialization
	void Start () {
		time += Time.time;
	}
	
	// Update is called once per frame
	void Update () {
		if (Time.time > time)
			Destroy (obj);
	}
}
