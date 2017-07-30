#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Entropy
struct  Entropy_t2474115961  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material Entropy::second
	Material_t193706927 * ___second_2;
	// System.Single Entropy::duration
	float ___duration_3;
	// System.Single Entropy::gameLength
	float ___gameLength_4;
	// UnityEngine.Material Entropy::skybox
	Material_t193706927 * ___skybox_5;
	// System.Boolean Entropy::swap
	bool ___swap_6;
	// UnityEngine.Material Entropy::darkness
	Material_t193706927 * ___darkness_7;

public:
	inline static int32_t get_offset_of_second_2() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___second_2)); }
	inline Material_t193706927 * get_second_2() const { return ___second_2; }
	inline Material_t193706927 ** get_address_of_second_2() { return &___second_2; }
	inline void set_second_2(Material_t193706927 * value)
	{
		___second_2 = value;
		Il2CppCodeGenWriteBarrier(&___second_2, value);
	}

	inline static int32_t get_offset_of_duration_3() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___duration_3)); }
	inline float get_duration_3() const { return ___duration_3; }
	inline float* get_address_of_duration_3() { return &___duration_3; }
	inline void set_duration_3(float value)
	{
		___duration_3 = value;
	}

	inline static int32_t get_offset_of_gameLength_4() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___gameLength_4)); }
	inline float get_gameLength_4() const { return ___gameLength_4; }
	inline float* get_address_of_gameLength_4() { return &___gameLength_4; }
	inline void set_gameLength_4(float value)
	{
		___gameLength_4 = value;
	}

	inline static int32_t get_offset_of_skybox_5() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___skybox_5)); }
	inline Material_t193706927 * get_skybox_5() const { return ___skybox_5; }
	inline Material_t193706927 ** get_address_of_skybox_5() { return &___skybox_5; }
	inline void set_skybox_5(Material_t193706927 * value)
	{
		___skybox_5 = value;
		Il2CppCodeGenWriteBarrier(&___skybox_5, value);
	}

	inline static int32_t get_offset_of_swap_6() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___swap_6)); }
	inline bool get_swap_6() const { return ___swap_6; }
	inline bool* get_address_of_swap_6() { return &___swap_6; }
	inline void set_swap_6(bool value)
	{
		___swap_6 = value;
	}

	inline static int32_t get_offset_of_darkness_7() { return static_cast<int32_t>(offsetof(Entropy_t2474115961, ___darkness_7)); }
	inline Material_t193706927 * get_darkness_7() const { return ___darkness_7; }
	inline Material_t193706927 ** get_address_of_darkness_7() { return &___darkness_7; }
	inline void set_darkness_7(Material_t193706927 * value)
	{
		___darkness_7 = value;
		Il2CppCodeGenWriteBarrier(&___darkness_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
