using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Glory : MonoBehaviour {

	public GameObject star;
	public GameObject me;

	void OnCollisionEnter(Collision Collision){
		if (Collision.gameObject.tag == "Mote" && me.activeSelf) {
			Destroy (me);
			Destroy (Collision.gameObject);
			GameObject newStar = Instantiate (star, transform.position, transform.rotation);
		}
		
			
	}
}
