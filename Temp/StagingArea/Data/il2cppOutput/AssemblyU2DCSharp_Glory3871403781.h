﻿#pragma once

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

// Glory
struct  Glory_t3871403781  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Glory::star
	GameObject_t1756533147 * ___star_2;
	// UnityEngine.GameObject Glory::me
	GameObject_t1756533147 * ___me_3;

public:
	inline static int32_t get_offset_of_star_2() { return static_cast<int32_t>(offsetof(Glory_t3871403781, ___star_2)); }
	inline GameObject_t1756533147 * get_star_2() const { return ___star_2; }
	inline GameObject_t1756533147 ** get_address_of_star_2() { return &___star_2; }
	inline void set_star_2(GameObject_t1756533147 * value)
	{
		___star_2 = value;
		Il2CppCodeGenWriteBarrier(&___star_2, value);
	}

	inline static int32_t get_offset_of_me_3() { return static_cast<int32_t>(offsetof(Glory_t3871403781, ___me_3)); }
	inline GameObject_t1756533147 * get_me_3() const { return ___me_3; }
	inline GameObject_t1756533147 ** get_address_of_me_3() { return &___me_3; }
	inline void set_me_3(GameObject_t1756533147 * value)
	{
		___me_3 = value;
		Il2CppCodeGenWriteBarrier(&___me_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
