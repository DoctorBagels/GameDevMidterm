#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManagerScript
struct GameManagerScript_t3648479706;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManagerScript
struct  GameManagerScript_t3648479706  : public MonoBehaviour_t1158329972
{
public:
	// System.String GameManagerScript::uText
	String_t* ___uText_3;
	// System.Single GameManagerScript::count
	float ___count_4;
	// System.Single GameManagerScript::timer
	float ___timer_5;
	// System.Boolean GameManagerScript::gameOver
	bool ___gameOver_6;

public:
	inline static int32_t get_offset_of_uText_3() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___uText_3)); }
	inline String_t* get_uText_3() const { return ___uText_3; }
	inline String_t** get_address_of_uText_3() { return &___uText_3; }
	inline void set_uText_3(String_t* value)
	{
		___uText_3 = value;
		Il2CppCodeGenWriteBarrier(&___uText_3, value);
	}

	inline static int32_t get_offset_of_count_4() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___count_4)); }
	inline float get_count_4() const { return ___count_4; }
	inline float* get_address_of_count_4() { return &___count_4; }
	inline void set_count_4(float value)
	{
		___count_4 = value;
	}

	inline static int32_t get_offset_of_timer_5() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___timer_5)); }
	inline float get_timer_5() const { return ___timer_5; }
	inline float* get_address_of_timer_5() { return &___timer_5; }
	inline void set_timer_5(float value)
	{
		___timer_5 = value;
	}

	inline static int32_t get_offset_of_gameOver_6() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706, ___gameOver_6)); }
	inline bool get_gameOver_6() const { return ___gameOver_6; }
	inline bool* get_address_of_gameOver_6() { return &___gameOver_6; }
	inline void set_gameOver_6(bool value)
	{
		___gameOver_6 = value;
	}
};

struct GameManagerScript_t3648479706_StaticFields
{
public:
	// GameManagerScript GameManagerScript::instance
	GameManagerScript_t3648479706 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameManagerScript_t3648479706_StaticFields, ___instance_2)); }
	inline GameManagerScript_t3648479706 * get_instance_2() const { return ___instance_2; }
	inline GameManagerScript_t3648479706 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameManagerScript_t3648479706 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
