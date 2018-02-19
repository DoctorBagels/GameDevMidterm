#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Material
struct Material_t193706927;
// PlayerScript
struct PlayerScript_t2594555350;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::vel
	float ___vel_2;
	// UnityEngine.Rigidbody PlayerScript::rb
	Rigidbody_t4233889191 * ___rb_3;
	// System.Boolean PlayerScript::holding
	bool ___holding_4;
	// System.Boolean PlayerScript::inPoleRange
	bool ___inPoleRange_5;
	// UnityEngine.Material PlayerScript::DMat
	Material_t193706927 * ___DMat_6;
	// UnityEngine.Material PlayerScript::SMat
	Material_t193706927 * ___SMat_7;
	// UnityEngine.Material PlayerScript::FMat
	Material_t193706927 * ___FMat_8;
	// System.Boolean PlayerScript::ded
	bool ___ded_9;

public:
	inline static int32_t get_offset_of_vel_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___vel_2)); }
	inline float get_vel_2() const { return ___vel_2; }
	inline float* get_address_of_vel_2() { return &___vel_2; }
	inline void set_vel_2(float value)
	{
		___vel_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___rb_3)); }
	inline Rigidbody_t4233889191 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody_t4233889191 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_holding_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___holding_4)); }
	inline bool get_holding_4() const { return ___holding_4; }
	inline bool* get_address_of_holding_4() { return &___holding_4; }
	inline void set_holding_4(bool value)
	{
		___holding_4 = value;
	}

	inline static int32_t get_offset_of_inPoleRange_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___inPoleRange_5)); }
	inline bool get_inPoleRange_5() const { return ___inPoleRange_5; }
	inline bool* get_address_of_inPoleRange_5() { return &___inPoleRange_5; }
	inline void set_inPoleRange_5(bool value)
	{
		___inPoleRange_5 = value;
	}

	inline static int32_t get_offset_of_DMat_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___DMat_6)); }
	inline Material_t193706927 * get_DMat_6() const { return ___DMat_6; }
	inline Material_t193706927 ** get_address_of_DMat_6() { return &___DMat_6; }
	inline void set_DMat_6(Material_t193706927 * value)
	{
		___DMat_6 = value;
		Il2CppCodeGenWriteBarrier(&___DMat_6, value);
	}

	inline static int32_t get_offset_of_SMat_7() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___SMat_7)); }
	inline Material_t193706927 * get_SMat_7() const { return ___SMat_7; }
	inline Material_t193706927 ** get_address_of_SMat_7() { return &___SMat_7; }
	inline void set_SMat_7(Material_t193706927 * value)
	{
		___SMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___SMat_7, value);
	}

	inline static int32_t get_offset_of_FMat_8() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___FMat_8)); }
	inline Material_t193706927 * get_FMat_8() const { return ___FMat_8; }
	inline Material_t193706927 ** get_address_of_FMat_8() { return &___FMat_8; }
	inline void set_FMat_8(Material_t193706927 * value)
	{
		___FMat_8 = value;
		Il2CppCodeGenWriteBarrier(&___FMat_8, value);
	}

	inline static int32_t get_offset_of_ded_9() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___ded_9)); }
	inline bool get_ded_9() const { return ___ded_9; }
	inline bool* get_address_of_ded_9() { return &___ded_9; }
	inline void set_ded_9(bool value)
	{
		___ded_9 = value;
	}
};

struct PlayerScript_t2594555350_StaticFields
{
public:
	// PlayerScript PlayerScript::instance
	PlayerScript_t2594555350 * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350_StaticFields, ___instance_10)); }
	inline PlayerScript_t2594555350 * get_instance_10() const { return ___instance_10; }
	inline PlayerScript_t2594555350 ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(PlayerScript_t2594555350 * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier(&___instance_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
