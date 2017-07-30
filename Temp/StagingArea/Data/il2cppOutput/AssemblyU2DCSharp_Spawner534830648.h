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
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t534830648  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Spawner::mote
	GameObject_t1756533147 * ___mote_2;
	// UnityEngine.GameObject Spawner::dud
	GameObject_t1756533147 * ___dud_3;
	// System.Single Spawner::secondsBetweenSpawning
	float ___secondsBetweenSpawning_4;
	// System.Single Spawner::nextDeSpawnTime
	float ___nextDeSpawnTime_5;
	// UnityEngine.Vector3[] Spawner::positions
	Vector3U5BU5D_t1172311765* ___positions_6;
	// UnityEngine.Vector3[] Spawner::duds
	Vector3U5BU5D_t1172311765* ___duds_7;
	// UnityEngine.GameObject[] Spawner::motes
	GameObjectU5BU5D_t3057952154* ___motes_8;
	// System.Int32 Spawner::index
	int32_t ___index_9;
	// System.Int32 Spawner::size
	int32_t ___size_10;

public:
	inline static int32_t get_offset_of_mote_2() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___mote_2)); }
	inline GameObject_t1756533147 * get_mote_2() const { return ___mote_2; }
	inline GameObject_t1756533147 ** get_address_of_mote_2() { return &___mote_2; }
	inline void set_mote_2(GameObject_t1756533147 * value)
	{
		___mote_2 = value;
		Il2CppCodeGenWriteBarrier(&___mote_2, value);
	}

	inline static int32_t get_offset_of_dud_3() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___dud_3)); }
	inline GameObject_t1756533147 * get_dud_3() const { return ___dud_3; }
	inline GameObject_t1756533147 ** get_address_of_dud_3() { return &___dud_3; }
	inline void set_dud_3(GameObject_t1756533147 * value)
	{
		___dud_3 = value;
		Il2CppCodeGenWriteBarrier(&___dud_3, value);
	}

	inline static int32_t get_offset_of_secondsBetweenSpawning_4() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___secondsBetweenSpawning_4)); }
	inline float get_secondsBetweenSpawning_4() const { return ___secondsBetweenSpawning_4; }
	inline float* get_address_of_secondsBetweenSpawning_4() { return &___secondsBetweenSpawning_4; }
	inline void set_secondsBetweenSpawning_4(float value)
	{
		___secondsBetweenSpawning_4 = value;
	}

	inline static int32_t get_offset_of_nextDeSpawnTime_5() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___nextDeSpawnTime_5)); }
	inline float get_nextDeSpawnTime_5() const { return ___nextDeSpawnTime_5; }
	inline float* get_address_of_nextDeSpawnTime_5() { return &___nextDeSpawnTime_5; }
	inline void set_nextDeSpawnTime_5(float value)
	{
		___nextDeSpawnTime_5 = value;
	}

	inline static int32_t get_offset_of_positions_6() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___positions_6)); }
	inline Vector3U5BU5D_t1172311765* get_positions_6() const { return ___positions_6; }
	inline Vector3U5BU5D_t1172311765** get_address_of_positions_6() { return &___positions_6; }
	inline void set_positions_6(Vector3U5BU5D_t1172311765* value)
	{
		___positions_6 = value;
		Il2CppCodeGenWriteBarrier(&___positions_6, value);
	}

	inline static int32_t get_offset_of_duds_7() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___duds_7)); }
	inline Vector3U5BU5D_t1172311765* get_duds_7() const { return ___duds_7; }
	inline Vector3U5BU5D_t1172311765** get_address_of_duds_7() { return &___duds_7; }
	inline void set_duds_7(Vector3U5BU5D_t1172311765* value)
	{
		___duds_7 = value;
		Il2CppCodeGenWriteBarrier(&___duds_7, value);
	}

	inline static int32_t get_offset_of_motes_8() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___motes_8)); }
	inline GameObjectU5BU5D_t3057952154* get_motes_8() const { return ___motes_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_motes_8() { return &___motes_8; }
	inline void set_motes_8(GameObjectU5BU5D_t3057952154* value)
	{
		___motes_8 = value;
		Il2CppCodeGenWriteBarrier(&___motes_8, value);
	}

	inline static int32_t get_offset_of_index_9() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___index_9)); }
	inline int32_t get_index_9() const { return ___index_9; }
	inline int32_t* get_address_of_index_9() { return &___index_9; }
	inline void set_index_9(int32_t value)
	{
		___index_9 = value;
	}

	inline static int32_t get_offset_of_size_10() { return static_cast<int32_t>(offsetof(Spawner_t534830648, ___size_10)); }
	inline int32_t get_size_10() const { return ___size_10; }
	inline int32_t* get_address_of_size_10() { return &___size_10; }
	inline void set_size_10(int32_t value)
	{
		___size_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
