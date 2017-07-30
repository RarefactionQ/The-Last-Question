#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TimedDestructor
struct  TimedDestructor_t1678687940  : public MonoBehaviour_t1158329972
{
public:
	// System.Single TimedDestructor::time
	float ___time_2;
	// UnityEngine.GameObject TimedDestructor::obj
	GameObject_t1756533147 * ___obj_3;

public:
	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(TimedDestructor_t1678687940, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}

	inline static int32_t get_offset_of_obj_3() { return static_cast<int32_t>(offsetof(TimedDestructor_t1678687940, ___obj_3)); }
	inline GameObject_t1756533147 * get_obj_3() const { return ___obj_3; }
	inline GameObject_t1756533147 ** get_address_of_obj_3() { return &___obj_3; }
	inline void set_obj_3(GameObject_t1756533147 * value)
	{
		___obj_3 = value;
		Il2CppCodeGenWriteBarrier(&___obj_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
