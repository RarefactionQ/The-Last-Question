using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Destroyer : MonoBehaviour {
	public GameObject freezing_mote;
	public GameObject me;

	void DestroySelf(){
		GameObject newMote = Instantiate (freezing_mote, transform.position, transform.rotation);
		Destroy (me);
	}
}
