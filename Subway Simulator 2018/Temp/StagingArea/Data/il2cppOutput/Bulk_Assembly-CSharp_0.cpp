#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// GameManagerScript
struct GameManagerScript_t3648479706;
// PlayerScript
struct PlayerScript_t2594555350;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Object
struct Il2CppObject;
// UnityEngine.Renderer
struct Renderer_t257310565;
// UnityEngine.Collider
struct Collider_t3497673348;
// TextScript
struct TextScript_t905916468;
// UnityEngine.UI.Text
struct Text_t356221433;
// WinScript
struct WinScript_t4163745213;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameManagerScript3648479706.h"
#include "AssemblyU2DCSharp_GameManagerScript3648479706MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerScript2594555350.h"
#include "AssemblyU2DCSharp_PlayerScript2594555350MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode2283395152.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Renderer257310565.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "AssemblyU2DCSharp_TextScript905916468.h"
#include "AssemblyU2DCSharp_TextScript905916468MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "AssemblyU2DCSharp_WinScript4163745213.h"
#include "AssemblyU2DCSharp_WinScript4163745213MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
#define GameObject_GetComponent_TisRenderer_t257310565_m1312615893(__this, method) ((  Renderer_t257310565 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t356221433_m1342661039(__this, method) ((  Text_t356221433 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameManagerScript::.ctor()
extern "C"  void GameManagerScript__ctor_m1386325925 (GameManagerScript_t3648479706 * __this, const MethodInfo* method)
{
	{
		__this->set_timer_5((2.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManagerScript::Start()
extern Il2CppClass* GameManagerScript_t3648479706_il2cpp_TypeInfo_var;
extern const uint32_t GameManagerScript_Start_m1053163509_MetadataUsageId;
extern "C"  void GameManagerScript_Start_m1053163509 (GameManagerScript_t3648479706 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManagerScript_Start_m1053163509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = Random_Range_m2884721203(NULL /*static, unused*/, (2.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_count_4(L_0);
		((GameManagerScript_t3648479706_StaticFields*)GameManagerScript_t3648479706_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		return;
	}
}
// System.Void GameManagerScript::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* PlayerScript_t2594555350_il2cpp_TypeInfo_var;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral520397775;
extern Il2CppCodeGenString* _stringLiteral3323649096;
extern Il2CppCodeGenString* _stringLiteral1992826220;
extern const uint32_t GameManagerScript_Update_m305162840_MetadataUsageId;
extern "C"  void GameManagerScript_Update_m305162840 (GameManagerScript_t3648479706 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManagerScript_Update_m305162840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_gameOver_6();
		if (L_0)
		{
			goto IL_00b6;
		}
	}
	{
		float L_1 = __this->get_count_4();
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_count_4(((float)((float)L_1-(float)L_2)));
		float L_3 = __this->get_count_4();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		__this->set_uText_3(_stringLiteral520397775);
		float L_4 = __this->get_timer_5();
		float L_5 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)((float)L_4-(float)L_5)));
		float L_6 = __this->get_timer_5();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_00b6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_uText_3(L_7);
		__this->set_timer_5((2.0f));
		float L_8 = Random_Range_m2884721203(NULL /*static, unused*/, (2.0f), (3.0f), /*hidden argument*/NULL);
		__this->set_count_4(L_8);
		PlayerScript_t2594555350 * L_9 = ((PlayerScript_t2594555350_StaticFields*)PlayerScript_t2594555350_il2cpp_TypeInfo_var->static_fields)->get_instance_10();
		bool L_10 = L_9->get_inPoleRange_5();
		if (!L_10)
		{
			goto IL_00af;
		}
	}
	{
		PlayerScript_t2594555350 * L_11 = ((PlayerScript_t2594555350_StaticFields*)PlayerScript_t2594555350_il2cpp_TypeInfo_var->static_fields)->get_instance_10();
		bool L_12 = L_11->get_holding_4();
		if (!L_12)
		{
			goto IL_00af;
		}
	}
	{
		__this->set_gameOver_6((bool)0);
		goto IL_00b6;
	}

IL_00af:
	{
		__this->set_gameOver_6((bool)1);
	}

IL_00b6:
	{
		bool L_13 = __this->get_gameOver_6();
		if (!L_13)
		{
			goto IL_00e9;
		}
	}
	{
		__this->set_uText_3(_stringLiteral3323649096);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_14 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00e9;
		}
	}
	{
		__this->set_gameOver_6((bool)0);
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral1992826220, /*hidden argument*/NULL);
	}

IL_00e9:
	{
		return;
	}
}
// System.Void PlayerScript::.ctor()
extern "C"  void PlayerScript__ctor_m2337956147 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Start()
extern Il2CppClass* PlayerScript_t2594555350_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t PlayerScript_Start_m2738359927_MetadataUsageId;
extern "C"  void PlayerScript_Start_m2738359927 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Start_m2738359927_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		__this->set_rb_3(L_0);
		((PlayerScript_t2594555350_StaticFields*)PlayerScript_t2594555350_il2cpp_TypeInfo_var->static_fields)->set_instance_10(__this);
		return;
	}
}
// System.Void PlayerScript::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* GameManagerScript_t3648479706_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRenderer_t257310565_m1312615893_MethodInfo_var;
extern const uint32_t PlayerScript_Update_m3394982276_MetadataUsageId;
extern "C"  void PlayerScript_Update_m3394982276 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Update_m3394982276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_ded_9();
		if (L_0)
		{
			goto IL_00f2;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		__this->set_holding_4((bool)1);
		goto IL_002a;
	}

IL_0023:
	{
		__this->set_holding_4((bool)0);
	}

IL_002a:
	{
		bool L_2 = __this->get_inPoleRange_5();
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		bool L_3 = __this->get_holding_4();
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Renderer_t257310565 * L_5 = GameObject_GetComponent_TisRenderer_t257310565_m1312615893(L_4, /*hidden argument*/GameObject_GetComponent_TisRenderer_t257310565_m1312615893_MethodInfo_var);
		Material_t193706927 * L_6 = __this->get_SMat_7();
		Renderer_set_material_m1053097112(L_5, L_6, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_005b:
	{
		bool L_7 = __this->get_holding_4();
		if (!L_7)
		{
			goto IL_008c;
		}
	}
	{
		bool L_8 = __this->get_inPoleRange_5();
		if (L_8)
		{
			goto IL_008c;
		}
	}
	{
		GameObject_t1756533147 * L_9 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Renderer_t257310565 * L_10 = GameObject_GetComponent_TisRenderer_t257310565_m1312615893(L_9, /*hidden argument*/GameObject_GetComponent_TisRenderer_t257310565_m1312615893_MethodInfo_var);
		Material_t193706927 * L_11 = __this->get_FMat_8();
		Renderer_set_material_m1053097112(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00a2;
	}

IL_008c:
	{
		GameObject_t1756533147 * L_12 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Renderer_t257310565 * L_13 = GameObject_GetComponent_TisRenderer_t257310565_m1312615893(L_12, /*hidden argument*/GameObject_GetComponent_TisRenderer_t257310565_m1312615893_MethodInfo_var);
		Material_t193706927 * L_14 = __this->get_DMat_6();
		Renderer_set_material_m1053097112(L_13, L_14, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		GameManagerScript_t3648479706 * L_15 = ((GameManagerScript_t3648479706_StaticFields*)GameManagerScript_t3648479706_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		bool L_16 = L_15->get_gameOver_6();
		if (L_16)
		{
			goto IL_00ed;
		}
	}
	{
		PlayerScript_Movement_m1937524392(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_17 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_18 = L_17;
		Vector3_t2243707580  L_19 = Transform_get_position_m1104419803(L_18, /*hidden argument*/NULL);
		Transform_t3275118058 * L_20 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_21 = Transform_get_forward_m1833488937(L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_vel_2();
		Vector3_t2243707580  L_23 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_21, L_22, /*hidden argument*/NULL);
		Vector3_t2243707580  L_24 = Vector3_op_Division_m3315615850(NULL /*static, unused*/, L_23, (3.5f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_25 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_19, L_24, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_18, L_25, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		goto IL_00fd;
	}

IL_00f2:
	{
		bool L_26 = __this->get_ded_9();
		if (!L_26)
		{
			goto IL_00fd;
		}
	}

IL_00fd:
	{
		Camera_t189460977 * L_27 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		Transform_t3275118058 * L_28 = Component_get_transform_m2697483695(L_27, /*hidden argument*/NULL);
		Rigidbody_t4233889191 * L_29 = __this->get_rb_3();
		Transform_t3275118058 * L_30 = Component_get_transform_m2697483695(L_29, /*hidden argument*/NULL);
		Vector3_t2243707580  L_31 = Transform_get_position_m1104419803(L_30, /*hidden argument*/NULL);
		V_0 = L_31;
		float L_32 = (&V_0)->get_z_3();
		Vector3_t2243707580  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector3__ctor_m2638739322(&L_33, (0.58f), (3.4f), ((float)((float)L_32-(float)(2.0f))), /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_28, L_33, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Movement()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t PlayerScript_Movement_m1937524392_MetadataUsageId;
extern "C"  void PlayerScript_Movement_m1937524392 (PlayerScript_t2594555350 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Movement_m1937524392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		bool L_1 = __this->get_holding_4();
		if (L_1)
		{
			goto IL_002e;
		}
	}
	{
		float L_2 = __this->get_vel_2();
		__this->set_vel_2(((float)((float)L_2+(float)(0.002f))));
		goto IL_012d;
	}

IL_002e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		bool L_4 = __this->get_holding_4();
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		float L_5 = __this->get_vel_2();
		__this->set_vel_2(((float)((float)L_5-(float)(0.002f))));
		goto IL_012d;
	}

IL_005c:
	{
		float L_6 = __this->get_vel_2();
		if ((!(((float)L_6) < ((float)(0.0f)))))
		{
			goto IL_009a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		bool L_8 = __this->get_holding_4();
		if (!L_8)
		{
			goto IL_009a;
		}
	}

IL_0083:
	{
		float L_9 = __this->get_vel_2();
		__this->set_vel_2(((float)((float)L_9+(float)(0.001f))));
		goto IL_012d;
	}

IL_009a:
	{
		float L_10 = __this->get_vel_2();
		if ((!(((float)L_10) > ((float)(0.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_11 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00c1;
		}
	}
	{
		bool L_12 = __this->get_holding_4();
		if (!L_12)
		{
			goto IL_00d8;
		}
	}

IL_00c1:
	{
		float L_13 = __this->get_vel_2();
		__this->set_vel_2(((float)((float)L_13-(float)(0.001f))));
		goto IL_012d;
	}

IL_00d8:
	{
		float L_14 = __this->get_vel_2();
		if ((!(((float)L_14) <= ((float)(0.002f)))))
		{
			goto IL_012d;
		}
	}
	{
		float L_15 = __this->get_vel_2();
		if ((!(((float)L_15) >= ((float)(-0.002f)))))
		{
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_16 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)119), /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0110;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_17 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)115), /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_011b;
		}
	}

IL_0110:
	{
		bool L_18 = __this->get_holding_4();
		if (!L_18)
		{
			goto IL_012d;
		}
	}

IL_011b:
	{
		float L_19 = __this->get_vel_2();
		__this->set_vel_2(((float)((float)L_19*(float)(0.0f))));
	}

IL_012d:
	{
		float L_20 = __this->get_vel_2();
		if ((!(((float)L_20) >= ((float)(0.1f)))))
		{
			goto IL_0148;
		}
	}
	{
		__this->set_vel_2((0.1f));
	}

IL_0148:
	{
		float L_21 = __this->get_vel_2();
		if ((!(((float)L_21) <= ((float)(-0.1f)))))
		{
			goto IL_0163;
		}
	}
	{
		__this->set_vel_2((-0.1f));
	}

IL_0163:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_22 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)97), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_019e;
		}
	}
	{
		Transform_t3275118058 * L_23 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_24 = L_23;
		Vector3_t2243707580  L_25 = Transform_get_eulerAngles_m4066505159(L_24, /*hidden argument*/NULL);
		Vector3_t2243707580  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m2638739322(&L_26, (0.0f), (-2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_27 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m2881310872(L_24, L_27, /*hidden argument*/NULL);
		goto IL_01d4;
	}

IL_019e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_28 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)100), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_01d4;
		}
	}
	{
		Transform_t3275118058 * L_29 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_30 = L_29;
		Vector3_t2243707580  L_31 = Transform_get_eulerAngles_m4066505159(L_30, /*hidden argument*/NULL);
		Vector3_t2243707580  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector3__ctor_m2638739322(&L_32, (0.0f), (2.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_33 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m2881310872(L_30, L_33, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		return;
	}
}
// System.Void PlayerScript::OnTriggerEnter(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1414246596;
extern Il2CppCodeGenString* _stringLiteral204392321;
extern Il2CppCodeGenString* _stringLiteral339800536;
extern const uint32_t PlayerScript_OnTriggerEnter_m3105039559_MetadataUsageId;
extern "C"  void PlayerScript_OnTriggerEnter_m3105039559 (PlayerScript_t2594555350 * __this, Collider_t3497673348 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_OnTriggerEnter_m3105039559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral1414246596, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->set_inPoleRange_5((bool)1);
	}

IL_0021:
	{
		Collider_t3497673348 * L_4 = ___col0;
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(L_4, /*hidden argument*/NULL);
		String_t* L_6 = GameObject_get_tag_m1425941094(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_6, _stringLiteral204392321, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0045;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral339800536, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void PlayerScript::OnTriggerExit(UnityEngine.Collider)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1414246596;
extern const uint32_t PlayerScript_OnTriggerExit_m4270157003_MetadataUsageId;
extern "C"  void PlayerScript_OnTriggerExit_m4270157003 (PlayerScript_t2594555350 * __this, Collider_t3497673348 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_OnTriggerExit_m4270157003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m1425941094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral1414246596, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		__this->set_inPoleRange_5((bool)0);
	}

IL_0021:
	{
		return;
	}
}
// System.Void TextScript::.ctor()
extern "C"  void TextScript__ctor_m2622823169 (TextScript_t905916468 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TextScript::Start()
extern const MethodInfo* Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var;
extern const uint32_t TextScript_Start_m91633665_MetadataUsageId;
extern "C"  void TextScript_Start_m91633665 (TextScript_t905916468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextScript_Start_m91633665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = Component_GetComponent_TisText_t356221433_m1342661039(__this, /*hidden argument*/Component_GetComponent_TisText_t356221433_m1342661039_MethodInfo_var);
		__this->set_txt_2(L_0);
		return;
	}
}
// System.Void TextScript::Update()
extern Il2CppClass* GameManagerScript_t3648479706_il2cpp_TypeInfo_var;
extern const uint32_t TextScript_Update_m973595138_MetadataUsageId;
extern "C"  void TextScript_Update_m973595138 (TextScript_t905916468 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TextScript_Update_m973595138_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_txt_2();
		GameManagerScript_t3648479706 * L_1 = ((GameManagerScript_t3648479706_StaticFields*)GameManagerScript_t3648479706_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		String_t* L_2 = L_1->get_uText_3();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void WinScript::.ctor()
extern "C"  void WinScript__ctor_m3190579448 (WinScript_t4163745213 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WinScript::Start()
extern "C"  void WinScript_Start_m837413976 (WinScript_t4163745213 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void WinScript::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1992826220;
extern const uint32_t WinScript_Update_m196158621_MetadataUsageId;
extern "C"  void WinScript_Update_m196158621 (WinScript_t4163745213 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WinScript_Update_m196158621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3849524999(NULL /*static, unused*/, ((int32_t)114), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, _stringLiteral1992826220, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
