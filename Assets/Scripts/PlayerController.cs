using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float speed = 10;
	public CharacterController myController;

	void Update(){

		Vector3 movementZ = Input.GetAxis("Vertical") * Vector3.forward * speed * Time.deltaTime;

		Vector3 movementX = Input.GetAxis("Horizontal") * Vector3.right * speed * Time.deltaTime;

		// Convert combined Vector3 from local space to world space based on the position of the current gameobject (player)
		Vector3 movement = transform.TransformDirection(movementZ+movementX);

		myController.Move(movement);
	}
}
