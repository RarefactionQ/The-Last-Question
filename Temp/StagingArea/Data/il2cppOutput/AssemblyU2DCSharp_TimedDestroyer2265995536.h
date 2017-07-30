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

// TimedDestroyer
struct  TimedDestroyer_t2265995536  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TimedDestroyer::frozen_mote
	GameObject_t1756533147 * ___frozen_mote_2;
	// UnityEngine.GameObject TimedDestroyer::me
	GameObject_t1756533147 * ___me_3;
	// System.Single TimedDestroyer::duration
	float ___duration_4;
	// System.Single TimedDestroyer::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_frozen_mote_2() { return static_cast<int32_t>(offsetof(TimedDestroyer_t2265995536, ___frozen_mote_2)); }
	inline GameObject_t1756533147 * get_frozen_mote_2() const { return ___frozen_mote_2; }
	inline GameObject_t1756533147 ** get_address_of_frozen_mote_2() { return &___frozen_mote_2; }
	inline void set_frozen_mote_2(GameObject_t1756533147 * value)
	{
		___frozen_mote_2 = value;
		Il2CppCodeGenWriteBarrier(&___frozen_mote_2, value);
	}

	inline static int32_t get_offset_of_me_3() { return static_cast<int32_t>(offsetof(TimedDestroyer_t2265995536, ___me_3)); }
	inline GameObject_t1756533147 * get_me_3() const { return ___me_3; }
	inline GameObject_t1756533147 ** get_address_of_me_3() { return &___me_3; }
	inline void set_me_3(GameObject_t1756533147 * value)
	{
		___me_3 = value;
		Il2CppCodeGenWriteBarrier(&___me_3, value);
	}

	inline static int32_t get_offset_of_duration_4() { return static_cast<int32_t>(offsetof(TimedDestroyer_t2265995536, ___duration_4)); }
	inline float get_duration_4() const { return ___duration_4; }
	inline float* get_address_of_duration_4() { return &___duration_4; }
	inline void set_duration_4(float value)
	{
		___duration_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(TimedDestroyer_t2265995536, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
