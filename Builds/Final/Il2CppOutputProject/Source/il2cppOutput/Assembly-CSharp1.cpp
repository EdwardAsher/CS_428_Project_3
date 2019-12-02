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
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// ASCLBasicController
struct ASCLBasicController_t1532E06ACA28C65C0A626859B1C78AE5EF220BD8;
// CamAngleObject
struct CamAngleObject_tB7633A38BCC314D12D2CCDC84801B56773004A46;
// Game
struct Game_t9EF095401D7E7EC79CAFA19AAB9B531AE38805E1;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C;
// System.Collections.Generic.List`1<Zone>
struct List_1_t8D7B22EC5DA1FE2DA666BD515819C5F6B7C6126F;
// System.Collections.Generic.List`1<envVars>
struct List_1_t6AC2760205CBBA43FBE2B1FFB8306C89C7993C27;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// Zone
struct Zone_tE0168A5F03364D3FB6A76239C4544429244A591A;
// envVars
struct envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC;
// killGameObject
struct killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA;
// killParticle
struct killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F;

IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Zone_Start_m35E7301E534CAA2103394E20B610680717D849A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t killGameObject_Update_m8A95AAA7FB87ECF14151A9DA04706B3F6AA7DF6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t killParticle_Update_mCB300C03C88707026F3654D1B22A015EB5390F50_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// envTargetType
struct  envTargetType_t96D0C2CC663FB73FB90630A73E9A1CFA7D1FAFD5 
{
public:
	// System.Int32 envTargetType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(envTargetType_t96D0C2CC663FB73FB90630A73E9A1CFA7D1FAFD5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Zone
struct  Zone_tE0168A5F03364D3FB6A76239C4544429244A591A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Game Zone::game
	Game_t9EF095401D7E7EC79CAFA19AAB9B531AE38805E1 * ___game_4;
	// System.Boolean Zone::world
	bool ___world_5;
	// System.Int32 Zone::index
	int32_t ___index_6;
	// System.Collections.Generic.List`1<Zone> Zone::zones
	List_1_t8D7B22EC5DA1FE2DA666BD515819C5F6B7C6126F * ___zones_7;
	// System.Collections.Generic.List`1<envVars> Zone::envs
	List_1_t6AC2760205CBBA43FBE2B1FFB8306C89C7993C27 * ___envs_8;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Zone::jumpTargets
	List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * ___jumpTargets_9;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Zone::platforms
	List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * ___platforms_10;
	// System.Collections.Generic.List`1<UnityEngine.Collider> Zone::floors
	List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * ___floors_11;
	// UnityEngine.Transform Zone::player
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___player_12;
	// ASCLBasicController Zone::abc
	ASCLBasicController_t1532E06ACA28C65C0A626859B1C78AE5EF220BD8 * ___abc_13;
	// UnityEngine.Collider Zone::collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___collider_14;

public:
	inline static int32_t get_offset_of_game_4() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___game_4)); }
	inline Game_t9EF095401D7E7EC79CAFA19AAB9B531AE38805E1 * get_game_4() const { return ___game_4; }
	inline Game_t9EF095401D7E7EC79CAFA19AAB9B531AE38805E1 ** get_address_of_game_4() { return &___game_4; }
	inline void set_game_4(Game_t9EF095401D7E7EC79CAFA19AAB9B531AE38805E1 * value)
	{
		___game_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___game_4), (void*)value);
	}

	inline static int32_t get_offset_of_world_5() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___world_5)); }
	inline bool get_world_5() const { return ___world_5; }
	inline bool* get_address_of_world_5() { return &___world_5; }
	inline void set_world_5(bool value)
	{
		___world_5 = value;
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}

	inline static int32_t get_offset_of_zones_7() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___zones_7)); }
	inline List_1_t8D7B22EC5DA1FE2DA666BD515819C5F6B7C6126F * get_zones_7() const { return ___zones_7; }
	inline List_1_t8D7B22EC5DA1FE2DA666BD515819C5F6B7C6126F ** get_address_of_zones_7() { return &___zones_7; }
	inline void set_zones_7(List_1_t8D7B22EC5DA1FE2DA666BD515819C5F6B7C6126F * value)
	{
		___zones_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___zones_7), (void*)value);
	}

	inline static int32_t get_offset_of_envs_8() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___envs_8)); }
	inline List_1_t6AC2760205CBBA43FBE2B1FFB8306C89C7993C27 * get_envs_8() const { return ___envs_8; }
	inline List_1_t6AC2760205CBBA43FBE2B1FFB8306C89C7993C27 ** get_address_of_envs_8() { return &___envs_8; }
	inline void set_envs_8(List_1_t6AC2760205CBBA43FBE2B1FFB8306C89C7993C27 * value)
	{
		___envs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___envs_8), (void*)value);
	}

	inline static int32_t get_offset_of_jumpTargets_9() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___jumpTargets_9)); }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * get_jumpTargets_9() const { return ___jumpTargets_9; }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C ** get_address_of_jumpTargets_9() { return &___jumpTargets_9; }
	inline void set_jumpTargets_9(List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * value)
	{
		___jumpTargets_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jumpTargets_9), (void*)value);
	}

	inline static int32_t get_offset_of_platforms_10() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___platforms_10)); }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * get_platforms_10() const { return ___platforms_10; }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C ** get_address_of_platforms_10() { return &___platforms_10; }
	inline void set_platforms_10(List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * value)
	{
		___platforms_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___platforms_10), (void*)value);
	}

	inline static int32_t get_offset_of_floors_11() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___floors_11)); }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * get_floors_11() const { return ___floors_11; }
	inline List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C ** get_address_of_floors_11() { return &___floors_11; }
	inline void set_floors_11(List_1_t34F3153FFE29D834C770DB7FD47483EE5175933C * value)
	{
		___floors_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___floors_11), (void*)value);
	}

	inline static int32_t get_offset_of_player_12() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___player_12)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_player_12() const { return ___player_12; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_player_12() { return &___player_12; }
	inline void set_player_12(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___player_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_12), (void*)value);
	}

	inline static int32_t get_offset_of_abc_13() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___abc_13)); }
	inline ASCLBasicController_t1532E06ACA28C65C0A626859B1C78AE5EF220BD8 * get_abc_13() const { return ___abc_13; }
	inline ASCLBasicController_t1532E06ACA28C65C0A626859B1C78AE5EF220BD8 ** get_address_of_abc_13() { return &___abc_13; }
	inline void set_abc_13(ASCLBasicController_t1532E06ACA28C65C0A626859B1C78AE5EF220BD8 * value)
	{
		___abc_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abc_13), (void*)value);
	}

	inline static int32_t get_offset_of_collider_14() { return static_cast<int32_t>(offsetof(Zone_tE0168A5F03364D3FB6A76239C4544429244A591A, ___collider_14)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_collider_14() const { return ___collider_14; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_collider_14() { return &___collider_14; }
	inline void set_collider_14(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___collider_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collider_14), (void*)value);
	}
};


// envVars
struct  envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean envVars::isPlatform
	bool ___isPlatform_4;
	// System.Boolean envVars::isLadder
	bool ___isLadder_5;
	// System.Boolean envVars::isJumpTarget
	bool ___isJumpTarget_6;
	// System.Boolean envVars::isUnderWater
	bool ___isUnderWater_7;
	// System.Boolean envVars::notWalkable
	bool ___notWalkable_8;
	// System.Boolean envVars::notClickable
	bool ___notClickable_9;
	// CamAngleObject envVars::camObject
	CamAngleObject_tB7633A38BCC314D12D2CCDC84801B56773004A46 * ___camObject_10;

public:
	inline static int32_t get_offset_of_isPlatform_4() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___isPlatform_4)); }
	inline bool get_isPlatform_4() const { return ___isPlatform_4; }
	inline bool* get_address_of_isPlatform_4() { return &___isPlatform_4; }
	inline void set_isPlatform_4(bool value)
	{
		___isPlatform_4 = value;
	}

	inline static int32_t get_offset_of_isLadder_5() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___isLadder_5)); }
	inline bool get_isLadder_5() const { return ___isLadder_5; }
	inline bool* get_address_of_isLadder_5() { return &___isLadder_5; }
	inline void set_isLadder_5(bool value)
	{
		___isLadder_5 = value;
	}

	inline static int32_t get_offset_of_isJumpTarget_6() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___isJumpTarget_6)); }
	inline bool get_isJumpTarget_6() const { return ___isJumpTarget_6; }
	inline bool* get_address_of_isJumpTarget_6() { return &___isJumpTarget_6; }
	inline void set_isJumpTarget_6(bool value)
	{
		___isJumpTarget_6 = value;
	}

	inline static int32_t get_offset_of_isUnderWater_7() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___isUnderWater_7)); }
	inline bool get_isUnderWater_7() const { return ___isUnderWater_7; }
	inline bool* get_address_of_isUnderWater_7() { return &___isUnderWater_7; }
	inline void set_isUnderWater_7(bool value)
	{
		___isUnderWater_7 = value;
	}

	inline static int32_t get_offset_of_notWalkable_8() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___notWalkable_8)); }
	inline bool get_notWalkable_8() const { return ___notWalkable_8; }
	inline bool* get_address_of_notWalkable_8() { return &___notWalkable_8; }
	inline void set_notWalkable_8(bool value)
	{
		___notWalkable_8 = value;
	}

	inline static int32_t get_offset_of_notClickable_9() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___notClickable_9)); }
	inline bool get_notClickable_9() const { return ___notClickable_9; }
	inline bool* get_address_of_notClickable_9() { return &___notClickable_9; }
	inline void set_notClickable_9(bool value)
	{
		___notClickable_9 = value;
	}

	inline static int32_t get_offset_of_camObject_10() { return static_cast<int32_t>(offsetof(envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC, ___camObject_10)); }
	inline CamAngleObject_tB7633A38BCC314D12D2CCDC84801B56773004A46 * get_camObject_10() const { return ___camObject_10; }
	inline CamAngleObject_tB7633A38BCC314D12D2CCDC84801B56773004A46 ** get_address_of_camObject_10() { return &___camObject_10; }
	inline void set_camObject_10(CamAngleObject_tB7633A38BCC314D12D2CCDC84801B56773004A46 * value)
	{
		___camObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camObject_10), (void*)value);
	}
};


// killGameObject
struct  killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single killGameObject::lifespan
	float ___lifespan_4;
	// System.Single killGameObject::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_lifespan_4() { return static_cast<int32_t>(offsetof(killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA, ___lifespan_4)); }
	inline float get_lifespan_4() const { return ___lifespan_4; }
	inline float* get_address_of_lifespan_4() { return &___lifespan_4; }
	inline void set_lifespan_4(float value)
	{
		___lifespan_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA, ___startTime_5)); }
	inline float get_startTime_5() const { return ___startTime_5; }
	inline float* get_address_of_startTime_5() { return &___startTime_5; }
	inline void set_startTime_5(float value)
	{
		___startTime_5 = value;
	}
};


// killParticle
struct  killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single killParticle::lifespan
	float ___lifespan_4;
	// System.Single killParticle::startTime
	float ___startTime_5;

public:
	inline static int32_t get_offset_of_lifespan_4() { return static_cast<int32_t>(offsetof(killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F, ___lifespan_4)); }
	inline float get_lifespan_4() const { return ___lifespan_4; }
	inline float* get_address_of_lifespan_4() { return &___lifespan_4; }
	inline void set_lifespan_4(float value)
	{
		___lifespan_4 = value;
	}

	inline static int32_t get_offset_of_startTime_5() { return static_cast<int32_t>(offsetof(killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F, ___startTime_5)); }
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


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B (Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mA81C3C1F2161F09735E2547A91539618D4D71E9E (const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Zone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone_Start_m35E7301E534CAA2103394E20B610680717D849A9 (Zone_tE0168A5F03364D3FB6A76239C4544429244A591A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Zone_Start_m35E7301E534CAA2103394E20B610680717D849A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collider = gameObject.GetComponent<Collider>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_1 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_0, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		__this->set_collider_14(L_1);
		// collider.enabled=false;
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_2 = __this->get_collider_14();
		NullCheck(L_2);
		Collider_set_enabled_mF84DE8B0C8CAF33ACDB7F29BC055D9C8CFACB57B(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Zone::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone_Update_m76D23F1873A4327BA23A477B7DA705DAB68785E2 (Zone_tE0168A5F03364D3FB6A76239C4544429244A591A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Zone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zone__ctor_m64ABF2AB830869565387F6DBDFA61DE9B2661F1A (Zone_tE0168A5F03364D3FB6A76239C4544429244A591A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void envVars::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void envVars__ctor_mEBACD53CA5B6F089C7698E4B935C365F1C4DE117 (envVars_tC227CD2FFACC0A1DEEE47930BFBC35854C0AD5FC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void killGameObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killGameObject_Start_mAA350DBD948A159D95076CD8F792636F3AE3F813 (killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA * __this, const RuntimeMethod* method)
{
	{
		// startTime = Time.fixedTime;
		float L_0 = Time_get_fixedTime_mA81C3C1F2161F09735E2547A91539618D4D71E9E(/*hidden argument*/NULL);
		__this->set_startTime_5(L_0);
		// }
		return;
	}
}
// System.Void killGameObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killGameObject_Update_m8A95AAA7FB87ECF14151A9DA04706B3F6AA7DF6D (killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (killGameObject_Update_m8A95AAA7FB87ECF14151A9DA04706B3F6AA7DF6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if((startTime+lifespan)< Time.fixedTime)
		float L_0 = __this->get_startTime_5();
		float L_1 = __this->get_lifespan_4();
		float L_2 = Time_get_fixedTime_mA81C3C1F2161F09735E2547A91539618D4D71E9E(/*hidden argument*/NULL);
		if ((!(((float)((float)il2cpp_codegen_add((float)L_0, (float)L_1))) < ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void killGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killGameObject__ctor_mE19F57299E60C533189610BE2EF2A5A488345C9C (killGameObject_t9C34EE952EF9EFD0738A03AEB2F64498DD83B0AA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void killParticle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killParticle_Start_m1A5424D3A043E9973E6C7D8A7F6113060C798295 (killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F * __this, const RuntimeMethod* method)
{
	{
		// startTime = Time.fixedTime;
		float L_0 = Time_get_fixedTime_mA81C3C1F2161F09735E2547A91539618D4D71E9E(/*hidden argument*/NULL);
		__this->set_startTime_5(L_0);
		// }
		return;
	}
}
// System.Void killParticle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killParticle_Update_mCB300C03C88707026F3654D1B22A015EB5390F50 (killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (killParticle_Update_mCB300C03C88707026F3654D1B22A015EB5390F50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if((Time.fixedTime-startTime)> lifespan)
		float L_0 = Time_get_fixedTime_mA81C3C1F2161F09735E2547A91539618D4D71E9E(/*hidden argument*/NULL);
		float L_1 = __this->get_startTime_5();
		float L_2 = __this->get_lifespan_4();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) > ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void killParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void killParticle__ctor_mC32D6C66A94A0E6AF8D23F468B3BF526DEC39C5C (killParticle_tD4A96AD2F8627C8B20B62E2155463F91B93DB64F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
