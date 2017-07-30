#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::speed
	float ___speed_2;
	// UnityEngine.CharacterController PlayerController::myController
	CharacterController_t4094781467 * ___myController_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_myController_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___myController_3)); }
	inline CharacterController_t4094781467 * get_myController_3() const { return ___myController_3; }
	inline CharacterController_t4094781467 ** get_address_of_myController_3() { return &___myController_3; }
	inline void set_myController_3(CharacterController_t4094781467 * value)
	{
		___myController_3 = value;
		Il2CppCodeGenWriteBarrier(&___myController_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
