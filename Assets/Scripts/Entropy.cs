using UnityEngine;
using System.Collections;

public class Entropy : MonoBehaviour {
	public Material second;
	public float duration = 5.0f;
	public float gameLength = 630f;
	private Material skybox;
	private bool swap;
	public Material darkness;

	void Start() {
		swap = false;
	}
	void Update() {

		if (!swap && Time.time > duration*10) {
			print ("trying to swap SkyBox");
			RenderSettings.skybox = second;
			swap = true;
		}
		float blend = Mathf.PingPong(Time.time, duration) / duration;
		RenderSettings.skybox.SetFloat("_Blend", blend);

		if (Time.time > duration * 24) {
			RenderSettings.skybox = darkness;

		}

		if (Time.time > gameLength)
			Application.Quit ();

	}
}
