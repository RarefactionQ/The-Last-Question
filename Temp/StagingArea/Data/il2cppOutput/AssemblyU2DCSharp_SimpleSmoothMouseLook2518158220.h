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
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleSmoothMouseLook
struct  SimpleSmoothMouseLook_t2518158220  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 SimpleSmoothMouseLook::_mouseAbsolute
	Vector2_t2243707579  ____mouseAbsolute_2;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::_smoothMouse
	Vector2_t2243707579  ____smoothMouse_3;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::clampInDegrees
	Vector2_t2243707579  ___clampInDegrees_4;
	// System.Boolean SimpleSmoothMouseLook::lockCursor
	bool ___lockCursor_5;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::sensitivity
	Vector2_t2243707579  ___sensitivity_6;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::smoothing
	Vector2_t2243707579  ___smoothing_7;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::targetDirection
	Vector2_t2243707579  ___targetDirection_8;
	// UnityEngine.Vector2 SimpleSmoothMouseLook::targetCharacterDirection
	Vector2_t2243707579  ___targetCharacterDirection_9;
	// UnityEngine.GameObject SimpleSmoothMouseLook::characterBody
	GameObject_t1756533147 * ___characterBody_10;

public:
	inline static int32_t get_offset_of__mouseAbsolute_2() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ____mouseAbsolute_2)); }
	inline Vector2_t2243707579  get__mouseAbsolute_2() const { return ____mouseAbsolute_2; }
	inline Vector2_t2243707579 * get_address_of__mouseAbsolute_2() { return &____mouseAbsolute_2; }
	inline void set__mouseAbsolute_2(Vector2_t2243707579  value)
	{
		____mouseAbsolute_2 = value;
	}

	inline static int32_t get_offset_of__smoothMouse_3() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ____smoothMouse_3)); }
	inline Vector2_t2243707579  get__smoothMouse_3() const { return ____smoothMouse_3; }
	inline Vector2_t2243707579 * get_address_of__smoothMouse_3() { return &____smoothMouse_3; }
	inline void set__smoothMouse_3(Vector2_t2243707579  value)
	{
		____smoothMouse_3 = value;
	}

	inline static int32_t get_offset_of_clampInDegrees_4() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___clampInDegrees_4)); }
	inline Vector2_t2243707579  get_clampInDegrees_4() const { return ___clampInDegrees_4; }
	inline Vector2_t2243707579 * get_address_of_clampInDegrees_4() { return &___clampInDegrees_4; }
	inline void set_clampInDegrees_4(Vector2_t2243707579  value)
	{
		___clampInDegrees_4 = value;
	}

	inline static int32_t get_offset_of_lockCursor_5() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___lockCursor_5)); }
	inline bool get_lockCursor_5() const { return ___lockCursor_5; }
	inline bool* get_address_of_lockCursor_5() { return &___lockCursor_5; }
	inline void set_lockCursor_5(bool value)
	{
		___lockCursor_5 = value;
	}

	inline static int32_t get_offset_of_sensitivity_6() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___sensitivity_6)); }
	inline Vector2_t2243707579  get_sensitivity_6() const { return ___sensitivity_6; }
	inline Vector2_t2243707579 * get_address_of_sensitivity_6() { return &___sensitivity_6; }
	inline void set_sensitivity_6(Vector2_t2243707579  value)
	{
		___sensitivity_6 = value;
	}

	inline static int32_t get_offset_of_smoothing_7() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___smoothing_7)); }
	inline Vector2_t2243707579  get_smoothing_7() const { return ___smoothing_7; }
	inline Vector2_t2243707579 * get_address_of_smoothing_7() { return &___smoothing_7; }
	inline void set_smoothing_7(Vector2_t2243707579  value)
	{
		___smoothing_7 = value;
	}

	inline static int32_t get_offset_of_targetDirection_8() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___targetDirection_8)); }
	inline Vector2_t2243707579  get_targetDirection_8() const { return ___targetDirection_8; }
	inline Vector2_t2243707579 * get_address_of_targetDirection_8() { return &___targetDirection_8; }
	inline void set_targetDirection_8(Vector2_t2243707579  value)
	{
		___targetDirection_8 = value;
	}

	inline static int32_t get_offset_of_targetCharacterDirection_9() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___targetCharacterDirection_9)); }
	inline Vector2_t2243707579  get_targetCharacterDirection_9() const { return ___targetCharacterDirection_9; }
	inline Vector2_t2243707579 * get_address_of_targetCharacterDirection_9() { return &___targetCharacterDirection_9; }
	inline void set_targetCharacterDirection_9(Vector2_t2243707579  value)
	{
		___targetCharacterDirection_9 = value;
	}

	inline static int32_t get_offset_of_characterBody_10() { return static_cast<int32_t>(offsetof(SimpleSmoothMouseLook_t2518158220, ___characterBody_10)); }
	inline GameObject_t1756533147 * get_characterBody_10() const { return ___characterBody_10; }
	inline GameObject_t1756533147 ** get_address_of_characterBody_10() { return &___characterBody_10; }
	inline void set_characterBody_10(GameObject_t1756533147 * value)
	{
		___characterBody_10 = value;
		Il2CppCodeGenWriteBarrier(&___characterBody_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
