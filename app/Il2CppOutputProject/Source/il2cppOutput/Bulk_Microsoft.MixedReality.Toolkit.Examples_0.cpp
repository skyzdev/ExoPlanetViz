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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct MixedRealityBoundaryVisualizationProfile_t915324864;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile
struct MixedRealityDiagnosticsProfile_t4161815031;
// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile
struct MixedRealityInputSystemProfile_t2588460320;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile
struct MixedRealityCameraProfile_t808486961;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile
struct MixedRealityConfigurationProfile_t3030501312;
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile
struct MixedRealityRegisteredServiceProvidersProfile_t4135801282;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType
struct SystemType_t1210221219;
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType[]
struct SystemTypeU5BU5D_t4083083122;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct BoundaryEventData_t2497240288;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData
struct InputEventData_t1552512027;
// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData
struct MixedRealityPointerEventData_t420287197;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem
struct IMixedRealityBoundarySystem_t3781727551;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem
struct IMixedRealityDiagnosticsSystem_t2672125686;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t3753294479;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_t86469781;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t758185949;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t3090763169;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem
struct IMixedRealityTeleportSystem_t3884465212;
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct MixedRealityToolkit_t1632592044;
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t1961245047;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct BoundaryVisualizationDemo_t2326157821;
// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c
struct U3CU3Ec_t3591545808;
// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct LoFiFilterSelection_t2077164845;
// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct MaterialMatrix_t2973875676;
// Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume
struct SwapVolume_t3528663124;
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioInfluencerController
struct AudioInfluencerController_t1412283275;
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect
struct AudioLoFiEffect_t3876553922;
// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler
struct SolverHandler_t2870684933;
// System.Action
struct Action_t1264377477;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType,Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings>
struct Dictionary_2_t3628277339;
// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService>
struct Dictionary_2_t2258896059;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t2059959053;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Transform>
struct IEnumerable_1_t2580218810;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.Solver>
struct List_1_t4067997016;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityServiceProvider>>
struct List_1_t478172613;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t777473367;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioHighPassFilter
struct AudioHighPassFilter_t4137291619;
// UnityEngine.AudioLowPassFilter
struct AudioLowPassFilter_t919637367;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Transform[]
struct TransformU5BU5D_t807237628;
// UnityEngine.WaitUntil
struct WaitUntil_t3373419216;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Func_1_t3822001908_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var;
extern RuntimeClass* IMixedRealityEventSystem_t3431071463_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2585711361_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCoroutineAwaiter_t1961245047_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec_t3591545808_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitUntil_t3373419216_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1243785301;
extern String_t* _stringLiteral2438763459;
extern String_t* _stringLiteral3258293634;
extern String_t* _stringLiteral474850886;
extern String_t* _stringLiteral548396354;
extern String_t* _stringLiteral730774742;
extern String_t* _stringLiteral778727724;
extern const RuntimeMethod* AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3COnEnableU3Ed__10_t1612606443_m2726740902_RuntimeMethod_var;
extern const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_Cast_TisTransform_t3600365921_m3857377578_RuntimeMethod_var;
extern const RuntimeMethod* Enumerable_ToList_TisTransform_t3600365921_m4208630033_RuntimeMethod_var;
extern const RuntimeMethod* Func_1__ctor_m4025184632_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisAudioLoFiEffect_t3876553922_m682209347_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisRenderer_t2627027031_m171735387_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisSolverHandler_t2870684933_m470628409_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m2765963565_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1424466557_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2812834599_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3249086042_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3651111564_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3572510816_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__10_0_m1626971214_RuntimeMethod_var;
extern const uint32_t BoundaryVisualizationDemo_AddMarkers_m3541291039_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Awake_m3157749041_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m2268900202_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnDisable_m33221367_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_OnEnable_m2827179319_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Start_m2813642153_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo_Update_m2685918975_MetadataUsageId;
extern const uint32_t BoundaryVisualizationDemo__ctor_m1576285073_MetadataUsageId;
extern const uint32_t LoFiFilterSelection_OnPointerClicked_m2664884081_MetadataUsageId;
extern const uint32_t LoFiFilterSelection_Start_m550672155_MetadataUsageId;
extern const uint32_t MaterialMatrix_BuildMatrix_m2579498062_MetadataUsageId;
extern const uint32_t MaterialMatrix__ctor_m3010007991_MetadataUsageId;
extern const uint32_t SwapVolume_Awake_m712097455_MetadataUsageId;
extern const uint32_t SwapVolume_OnDestroy_m1497649539_MetadataUsageId;
extern const uint32_t SwapVolume_OnPointerClicked_m3841587597_MetadataUsageId;
extern const uint32_t SwapVolume_Start_m3851863744_MetadataUsageId;
extern const uint32_t U3COnEnableU3Ed__10_MoveNext_m2312595140_MetadataUsageId;
extern const uint32_t U3CU3Ec_U3COnEnableU3Eb__10_0_m1626971214_MetadataUsageId;
extern const uint32_t U3CU3Ec__cctor_m1374287669_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;



#ifndef U3CMODULEU3E_T692745593_H
#define U3CMODULEU3E_T692745593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745593 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745593_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef SIMPLECOROUTINEAWAITER_T1961245047_H
#define SIMPLECOROUTINEAWAITER_T1961245047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct  SimpleCoroutineAwaiter_t1961245047  : public RuntimeObject
{
public:
	// System.Exception Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::exception
	Exception_t * ___exception_0;
	// System.Action Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::continuation
	Action_t1264377477 * ___continuation_1;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_exception_0() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t1961245047, ___exception_0)); }
	inline Exception_t * get_exception_0() const { return ___exception_0; }
	inline Exception_t ** get_address_of_exception_0() { return &___exception_0; }
	inline void set_exception_0(Exception_t * value)
	{
		___exception_0 = value;
		Il2CppCodeGenWriteBarrier((&___exception_0), value);
	}

	inline static int32_t get_offset_of_continuation_1() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t1961245047, ___continuation_1)); }
	inline Action_t1264377477 * get_continuation_1() const { return ___continuation_1; }
	inline Action_t1264377477 ** get_address_of_continuation_1() { return &___continuation_1; }
	inline void set_continuation_1(Action_t1264377477 * value)
	{
		___continuation_1 = value;
		Il2CppCodeGenWriteBarrier((&___continuation_1), value);
	}

	inline static int32_t get_offset_of_U3CIsCompletedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SimpleCoroutineAwaiter_t1961245047, ___U3CIsCompletedU3Ek__BackingField_2)); }
	inline bool get_U3CIsCompletedU3Ek__BackingField_2() const { return ___U3CIsCompletedU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsCompletedU3Ek__BackingField_2() { return &___U3CIsCompletedU3Ek__BackingField_2; }
	inline void set_U3CIsCompletedU3Ek__BackingField_2(bool value)
	{
		___U3CIsCompletedU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLECOROUTINEAWAITER_T1961245047_H
#ifndef U3CU3EC_T3591545808_H
#define U3CU3EC_T3591545808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c
struct  U3CU3Ec_t3591545808  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3591545808_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::<>9
	U3CU3Ec_t3591545808 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::<>9__10_0
	Func_1_t3822001908 * ___U3CU3E9__10_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3591545808_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3591545808 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3591545808 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3591545808 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3591545808_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_1_t3822001908 * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_1_t3822001908 * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__10_0_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T3591545808_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2585711361_H
#define LIST_1_T2585711361_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t2585711361  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_t3328599146* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____items_1)); }
	inline GameObjectU5BU5D_t3328599146* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_t3328599146* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2585711361, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2585711361_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_t3328599146* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2585711361_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_t3328599146* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_t3328599146** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_t3328599146* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2585711361_H
#ifndef LIST_1_T777473367_H
#define LIST_1_T777473367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t777473367  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t807237628* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____items_1)); }
	inline TransformU5BU5D_t807237628* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t807237628** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t807237628* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t777473367, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t777473367_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t807237628* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t777473367_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t807237628* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t807237628** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t807237628* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T777473367_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef CUSTOMYIELDINSTRUCTION_T1895667560_H
#define CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CustomYieldInstruction
struct  CustomYieldInstruction_t1895667560  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMYIELDINSTRUCTION_T1895667560_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef AUDIOLOFIFILTERSETTINGS_T61635165_H
#define AUDIOLOFIFILTERSETTINGS_T61635165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings
struct  AudioLoFiFilterSettings_t61635165 
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings::<LowPassCutoff>k__BackingField
	float ___U3CLowPassCutoffU3Ek__BackingField_0;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings::<HighPassCutoff>k__BackingField
	float ___U3CHighPassCutoffU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLowPassCutoffU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t61635165, ___U3CLowPassCutoffU3Ek__BackingField_0)); }
	inline float get_U3CLowPassCutoffU3Ek__BackingField_0() const { return ___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline float* get_address_of_U3CLowPassCutoffU3Ek__BackingField_0() { return &___U3CLowPassCutoffU3Ek__BackingField_0; }
	inline void set_U3CLowPassCutoffU3Ek__BackingField_0(float value)
	{
		___U3CLowPassCutoffU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CHighPassCutoffU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AudioLoFiFilterSettings_t61635165, ___U3CHighPassCutoffU3Ek__BackingField_1)); }
	inline float get_U3CHighPassCutoffU3Ek__BackingField_1() const { return ___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline float* get_address_of_U3CHighPassCutoffU3Ek__BackingField_1() { return &___U3CHighPassCutoffU3Ek__BackingField_1; }
	inline void set_U3CHighPassCutoffU3Ek__BackingField_1(float value)
	{
		___U3CHighPassCutoffU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFIFILTERSETTINGS_T61635165_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ASYNCMETHODBUILDERCORE_T2955600131_H
#define ASYNCMETHODBUILDERCORE_T2955600131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t2955600131 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t1264377477 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t2955600131, ___m_defaultContextAction_1)); }
	inline Action_t1264377477 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t1264377477 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t1264377477 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t2955600131_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T2955600131_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITUNTIL_T3373419216_H
#define WAITUNTIL_T3373419216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitUntil
struct  WaitUntil_t3373419216  : public CustomYieldInstruction_t1895667560
{
public:
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t3822001908 * ___m_Predicate_0;

public:
	inline static int32_t get_offset_of_m_Predicate_0() { return static_cast<int32_t>(offsetof(WaitUntil_t3373419216, ___m_Predicate_0)); }
	inline Func_1_t3822001908 * get_m_Predicate_0() const { return ___m_Predicate_0; }
	inline Func_1_t3822001908 ** get_address_of_m_Predicate_0() { return &___m_Predicate_0; }
	inline void set_m_Predicate_0(Func_1_t3822001908 * value)
	{
		___m_Predicate_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Predicate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITUNTIL_T3373419216_H
#ifndef AXISTYPE_T759119256_H
#define AXISTYPE_T759119256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType
struct  AxisType_t759119256 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t759119256, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AXISTYPE_T759119256_H
#ifndef EXPERIENCESCALE_T2552586923_H
#define EXPERIENCESCALE_T2552586923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale
struct  ExperienceScale_t2552586923 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExperienceScale_t2552586923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPERIENCESCALE_T2552586923_H
#ifndef HANDEDNESS_T4147255396_H
#define HANDEDNESS_T4147255396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness
struct  Handedness_t4147255396 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t4147255396, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDEDNESS_T4147255396_H
#ifndef TRACKEDOBJECTTYPE_T1331105867_H
#define TRACKEDOBJECTTYPE_T1331105867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType
struct  TrackedObjectType_t1331105867 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedObjectType_t1331105867, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKEDOBJECTTYPE_T1331105867_H
#ifndef VECTOR3SMOOTHED_T1555276329_H
#define VECTOR3SMOOTHED_T1555276329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed
struct  Vector3Smoothed_t1555276329 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<Current>k__BackingField
	Vector3_t3722313464  ___U3CCurrentU3Ek__BackingField_0;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<Goal>k__BackingField
	Vector3_t3722313464  ___U3CGoalU3Ek__BackingField_1;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed::<SmoothTime>k__BackingField
	float ___U3CSmoothTimeU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CCurrentU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1555276329, ___U3CCurrentU3Ek__BackingField_0)); }
	inline Vector3_t3722313464  get_U3CCurrentU3Ek__BackingField_0() const { return ___U3CCurrentU3Ek__BackingField_0; }
	inline Vector3_t3722313464 * get_address_of_U3CCurrentU3Ek__BackingField_0() { return &___U3CCurrentU3Ek__BackingField_0; }
	inline void set_U3CCurrentU3Ek__BackingField_0(Vector3_t3722313464  value)
	{
		___U3CCurrentU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGoalU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1555276329, ___U3CGoalU3Ek__BackingField_1)); }
	inline Vector3_t3722313464  get_U3CGoalU3Ek__BackingField_1() const { return ___U3CGoalU3Ek__BackingField_1; }
	inline Vector3_t3722313464 * get_address_of_U3CGoalU3Ek__BackingField_1() { return &___U3CGoalU3Ek__BackingField_1; }
	inline void set_U3CGoalU3Ek__BackingField_1(Vector3_t3722313464  value)
	{
		___U3CGoalU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CSmoothTimeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3Smoothed_t1555276329, ___U3CSmoothTimeU3Ek__BackingField_2)); }
	inline float get_U3CSmoothTimeU3Ek__BackingField_2() const { return ___U3CSmoothTimeU3Ek__BackingField_2; }
	inline float* get_address_of_U3CSmoothTimeU3Ek__BackingField_2() { return &___U3CSmoothTimeU3Ek__BackingField_2; }
	inline void set_U3CSmoothTimeU3Ek__BackingField_2(float value)
	{
		___U3CSmoothTimeU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3SMOOTHED_T1555276329_H
#ifndef GENERICBASEEVENTDATA_T2446438405_H
#define GENERICBASEEVENTDATA_T2446438405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData
struct  GenericBaseEventData_t2446438405  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource Microsoft.MixedReality.Toolkit.Core.EventDatum.GenericBaseEventData::<EventSource>k__BackingField
	RuntimeObject* ___U3CEventSourceU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CEventSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(GenericBaseEventData_t2446438405, ___U3CEventSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CEventSourceU3Ek__BackingField_2() const { return ___U3CEventSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CEventSourceU3Ek__BackingField_2() { return &___U3CEventSourceU3Ek__BackingField_2; }
	inline void set_U3CEventSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CEventSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CEventSourceU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICBASEEVENTDATA_T2446438405_H
#ifndef AUDIOLOFISOURCEQUALITYTYPE_T720908522_H
#define AUDIOLOFISOURCEQUALITYTYPE_T720908522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType
struct  AudioLoFiSourceQualityType_t720908522 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioLoFiSourceQualityType_t720908522, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFISOURCEQUALITYTYPE_T720908522_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef ASYNCVOIDMETHODBUILDER_T3819840891_H
#define ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct  AsyncVoidMethodBuilder_t3819840891 
{
public:
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t3187275312 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_synchronizationContext_0() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_synchronizationContext_0)); }
	inline SynchronizationContext_t2326897723 * get_m_synchronizationContext_0() const { return ___m_synchronizationContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_m_synchronizationContext_0() { return &___m_synchronizationContext_0; }
	inline void set_m_synchronizationContext_0(SynchronizationContext_t2326897723 * value)
	{
		___m_synchronizationContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_synchronizationContext_0), value);
	}

	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncVoidMethodBuilder_t3819840891, ___m_task_2)); }
	inline Task_t3187275312 * get_m_task_2() const { return ___m_task_2; }
	inline Task_t3187275312 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_t3187275312 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_pinvoke
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_pinvoke ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t3819840891_marshaled_com
{
	SynchronizationContext_t2326897723 * ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_t2955600131_marshaled_com ___m_coreState_1;
	Task_t3187275312 * ___m_task_2;
};
#endif // ASYNCVOIDMETHODBUILDER_T3819840891_H
#ifndef TYPE_T1872440698_H
#define TYPE_T1872440698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.XR.Boundary/Type
struct  Type_t1872440698 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t1872440698, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1872440698_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef PRIMITIVETYPE_T3468579401_H
#define PRIMITIVETYPE_T3468579401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PrimitiveType
struct  PrimitiveType_t3468579401 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t3468579401, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMITIVETYPE_T3468579401_H
#ifndef MIXEDREALITYINPUTACTION_T905637591_H
#define MIXEDREALITYINPUTACTION_T905637591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct  MixedRealityInputAction_t905637591 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.AxisType Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t905637591, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t905637591, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((&___description_2), value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t905637591, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t905637591_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t905637591  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t905637591_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t905637591  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t905637591 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t905637591  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_t905637591_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction
struct MixedRealityInputAction_t905637591_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};
#endif // MIXEDREALITYINPUTACTION_T905637591_H
#ifndef BOUNDARYEVENTDATA_T2497240288_H
#define BOUNDARYEVENTDATA_T2497240288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData
struct  BoundaryEventData_t2497240288  : public GenericBaseEventData_t2446438405
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsFloorVisualized>k__BackingField
	bool ___U3CIsFloorVisualizedU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsPlayAreaVisualized>k__BackingField
	bool ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsTrackedAreaVisualized>k__BackingField
	bool ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<AreBoundaryWallsVisualized>k__BackingField
	bool ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData::<IsCeilingVisualized>k__BackingField
	bool ___U3CIsCeilingVisualizedU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BoundaryEventData_t2497240288, ___U3CIsFloorVisualizedU3Ek__BackingField_3)); }
	inline bool get_U3CIsFloorVisualizedU3Ek__BackingField_3() const { return ___U3CIsFloorVisualizedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsFloorVisualizedU3Ek__BackingField_3() { return &___U3CIsFloorVisualizedU3Ek__BackingField_3; }
	inline void set_U3CIsFloorVisualizedU3Ek__BackingField_3(bool value)
	{
		___U3CIsFloorVisualizedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BoundaryEventData_t2497240288, ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4)); }
	inline bool get_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() const { return ___U3CIsPlayAreaVisualizedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4() { return &___U3CIsPlayAreaVisualizedU3Ek__BackingField_4; }
	inline void set_U3CIsPlayAreaVisualizedU3Ek__BackingField_4(bool value)
	{
		___U3CIsPlayAreaVisualizedU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BoundaryEventData_t2497240288, ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5)); }
	inline bool get_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() const { return ___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5() { return &___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5; }
	inline void set_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5(bool value)
	{
		___U3CIsTrackedAreaVisualizedU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BoundaryEventData_t2497240288, ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6)); }
	inline bool get_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() const { return ___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6() { return &___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6; }
	inline void set_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6(bool value)
	{
		___U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BoundaryEventData_t2497240288, ___U3CIsCeilingVisualizedU3Ek__BackingField_7)); }
	inline bool get_U3CIsCeilingVisualizedU3Ek__BackingField_7() const { return ___U3CIsCeilingVisualizedU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsCeilingVisualizedU3Ek__BackingField_7() { return &___U3CIsCeilingVisualizedU3Ek__BackingField_7; }
	inline void set_U3CIsCeilingVisualizedU3Ek__BackingField_7(bool value)
	{
		___U3CIsCeilingVisualizedU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYEVENTDATA_T2497240288_H
#ifndef U3CONENABLEU3ED__10_T1612606443_H
#define U3CONENABLEU3ED__10_T1612606443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10
struct  U3COnEnableU3Ed__10_t1612606443 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::<>4__this
	BoundaryVisualizationDemo_t2326157821 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t1612606443, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t1612606443, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t1612606443, ___U3CU3E4__this_2)); }
	inline BoundaryVisualizationDemo_t2326157821 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline BoundaryVisualizationDemo_t2326157821 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(BoundaryVisualizationDemo_t2326157821 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3COnEnableU3Ed__10_t1612606443, ___U3CU3Eu__1_3)); }
	inline RuntimeObject * get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(RuntimeObject * value)
	{
		___U3CU3Eu__1_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CONENABLEU3ED__10_T1612606443_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef BASEMIXEDREALITYPROFILE_T1467075899_H
#define BASEMIXEDREALITYPROFILE_T1467075899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_t1467075899  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_t1467075899, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMIXEDREALITYPROFILE_T1467075899_H
#ifndef BASEINPUTEVENTDATA_T1701052491_H
#define BASEINPUTEVENTDATA_T1701052491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData
struct  BaseInputEventData_t1701052491  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_2;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<SourceId>k__BackingField
	uint32_t ___U3CSourceIdU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.BaseInputEventData::<MixedRealityInputAction>k__BackingField
	MixedRealityInputAction_t905637591  ___U3CMixedRealityInputActionU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1701052491, ___U3CInputSourceU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_2() const { return ___U3CInputSourceU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_2() { return &___U3CInputSourceU3Ek__BackingField_2; }
	inline void set_U3CInputSourceU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CSourceIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1701052491, ___U3CSourceIdU3Ek__BackingField_3)); }
	inline uint32_t get_U3CSourceIdU3Ek__BackingField_3() const { return ___U3CSourceIdU3Ek__BackingField_3; }
	inline uint32_t* get_address_of_U3CSourceIdU3Ek__BackingField_3() { return &___U3CSourceIdU3Ek__BackingField_3; }
	inline void set_U3CSourceIdU3Ek__BackingField_3(uint32_t value)
	{
		___U3CSourceIdU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseInputEventData_t1701052491, ___U3CMixedRealityInputActionU3Ek__BackingField_4)); }
	inline MixedRealityInputAction_t905637591  get_U3CMixedRealityInputActionU3Ek__BackingField_4() const { return ___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline MixedRealityInputAction_t905637591 * get_address_of_U3CMixedRealityInputActionU3Ek__BackingField_4() { return &___U3CMixedRealityInputActionU3Ek__BackingField_4; }
	inline void set_U3CMixedRealityInputActionU3Ek__BackingField_4(MixedRealityInputAction_t905637591  value)
	{
		___U3CMixedRealityInputActionU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINPUTEVENTDATA_T1701052491_H
#ifndef FUNC_1_T3822001908_H
#define FUNC_1_T3822001908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Func`1<System.Boolean>
struct  Func_1_t3822001908  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUNC_1_T3822001908_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T915324864_H
#define MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T915324864_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile
struct  MixedRealityBoundaryVisualizationProfile_t915324864  : public BaseMixedRealityProfile_t1467075899
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryHeight
	float ___boundaryHeight_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showFloor
	bool ___showFloor_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorMaterial
	Material_t340375123 * ___floorMaterial_7;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::floorScale
	Vector2_t2156229523  ___floorScale_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showPlayArea
	bool ___showPlayArea_9;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::playAreaMaterial
	Material_t340375123 * ___playAreaMaterial_10;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showTrackedArea
	bool ___showTrackedArea_11;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::trackedAreaMaterial
	Material_t340375123 * ___trackedAreaMaterial_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryWalls
	bool ___showBoundaryWalls_13;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryWallMaterial
	Material_t340375123 * ___boundaryWallMaterial_14;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::showBoundaryCeiling
	bool ___showBoundaryCeiling_15;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::boundaryCeilingMaterial
	Material_t340375123 * ___boundaryCeilingMaterial_16;

public:
	inline static int32_t get_offset_of_boundaryHeight_5() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___boundaryHeight_5)); }
	inline float get_boundaryHeight_5() const { return ___boundaryHeight_5; }
	inline float* get_address_of_boundaryHeight_5() { return &___boundaryHeight_5; }
	inline void set_boundaryHeight_5(float value)
	{
		___boundaryHeight_5 = value;
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_floorMaterial_7() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___floorMaterial_7)); }
	inline Material_t340375123 * get_floorMaterial_7() const { return ___floorMaterial_7; }
	inline Material_t340375123 ** get_address_of_floorMaterial_7() { return &___floorMaterial_7; }
	inline void set_floorMaterial_7(Material_t340375123 * value)
	{
		___floorMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((&___floorMaterial_7), value);
	}

	inline static int32_t get_offset_of_floorScale_8() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___floorScale_8)); }
	inline Vector2_t2156229523  get_floorScale_8() const { return ___floorScale_8; }
	inline Vector2_t2156229523 * get_address_of_floorScale_8() { return &___floorScale_8; }
	inline void set_floorScale_8(Vector2_t2156229523  value)
	{
		___floorScale_8 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_9() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___showPlayArea_9)); }
	inline bool get_showPlayArea_9() const { return ___showPlayArea_9; }
	inline bool* get_address_of_showPlayArea_9() { return &___showPlayArea_9; }
	inline void set_showPlayArea_9(bool value)
	{
		___showPlayArea_9 = value;
	}

	inline static int32_t get_offset_of_playAreaMaterial_10() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___playAreaMaterial_10)); }
	inline Material_t340375123 * get_playAreaMaterial_10() const { return ___playAreaMaterial_10; }
	inline Material_t340375123 ** get_address_of_playAreaMaterial_10() { return &___playAreaMaterial_10; }
	inline void set_playAreaMaterial_10(Material_t340375123 * value)
	{
		___playAreaMaterial_10 = value;
		Il2CppCodeGenWriteBarrier((&___playAreaMaterial_10), value);
	}

	inline static int32_t get_offset_of_showTrackedArea_11() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___showTrackedArea_11)); }
	inline bool get_showTrackedArea_11() const { return ___showTrackedArea_11; }
	inline bool* get_address_of_showTrackedArea_11() { return &___showTrackedArea_11; }
	inline void set_showTrackedArea_11(bool value)
	{
		___showTrackedArea_11 = value;
	}

	inline static int32_t get_offset_of_trackedAreaMaterial_12() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___trackedAreaMaterial_12)); }
	inline Material_t340375123 * get_trackedAreaMaterial_12() const { return ___trackedAreaMaterial_12; }
	inline Material_t340375123 ** get_address_of_trackedAreaMaterial_12() { return &___trackedAreaMaterial_12; }
	inline void set_trackedAreaMaterial_12(Material_t340375123 * value)
	{
		___trackedAreaMaterial_12 = value;
		Il2CppCodeGenWriteBarrier((&___trackedAreaMaterial_12), value);
	}

	inline static int32_t get_offset_of_showBoundaryWalls_13() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___showBoundaryWalls_13)); }
	inline bool get_showBoundaryWalls_13() const { return ___showBoundaryWalls_13; }
	inline bool* get_address_of_showBoundaryWalls_13() { return &___showBoundaryWalls_13; }
	inline void set_showBoundaryWalls_13(bool value)
	{
		___showBoundaryWalls_13 = value;
	}

	inline static int32_t get_offset_of_boundaryWallMaterial_14() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___boundaryWallMaterial_14)); }
	inline Material_t340375123 * get_boundaryWallMaterial_14() const { return ___boundaryWallMaterial_14; }
	inline Material_t340375123 ** get_address_of_boundaryWallMaterial_14() { return &___boundaryWallMaterial_14; }
	inline void set_boundaryWallMaterial_14(Material_t340375123 * value)
	{
		___boundaryWallMaterial_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryWallMaterial_14), value);
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_15() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___showBoundaryCeiling_15)); }
	inline bool get_showBoundaryCeiling_15() const { return ___showBoundaryCeiling_15; }
	inline bool* get_address_of_showBoundaryCeiling_15() { return &___showBoundaryCeiling_15; }
	inline void set_showBoundaryCeiling_15(bool value)
	{
		___showBoundaryCeiling_15 = value;
	}

	inline static int32_t get_offset_of_boundaryCeilingMaterial_16() { return static_cast<int32_t>(offsetof(MixedRealityBoundaryVisualizationProfile_t915324864, ___boundaryCeilingMaterial_16)); }
	inline Material_t340375123 * get_boundaryCeilingMaterial_16() const { return ___boundaryCeilingMaterial_16; }
	inline Material_t340375123 ** get_address_of_boundaryCeilingMaterial_16() { return &___boundaryCeilingMaterial_16; }
	inline void set_boundaryCeilingMaterial_16(Material_t340375123 * value)
	{
		___boundaryCeilingMaterial_16 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryCeilingMaterial_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYBOUNDARYVISUALIZATIONPROFILE_T915324864_H
#ifndef MIXEDREALITYCONFIGURATIONPROFILE_T3030501312_H
#define MIXEDREALITYCONFIGURATIONPROFILE_T3030501312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile
struct  MixedRealityConfigurationProfile_t3030501312  : public BaseMixedRealityProfile_t1467075899
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType[] Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::initialServiceTypes
	SystemTypeU5BU5D_t4083083122* ___initialServiceTypes_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityService> Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::<ActiveServices>k__BackingField
	Dictionary_2_t2258896059 * ___U3CActiveServicesU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.ExperienceScale Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::targetExperienceScale
	int32_t ___targetExperienceScale_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::enableCameraProfile
	bool ___enableCameraProfile_8;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityCameraProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::cameraProfile
	MixedRealityCameraProfile_t808486961 * ___cameraProfile_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::enableInputSystem
	bool ___enableInputSystem_10;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.InputSystem.MixedRealityInputSystemProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::inputSystemProfile
	MixedRealityInputSystemProfile_t2588460320 * ___inputSystemProfile_11;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::inputSystemType
	SystemType_t1210221219 * ___inputSystemType_12;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::enableBoundarySystem
	bool ___enableBoundarySystem_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::boundarySystemType
	SystemType_t1210221219 * ___boundarySystemType_14;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::boundaryVisualizationProfile
	MixedRealityBoundaryVisualizationProfile_t915324864 * ___boundaryVisualizationProfile_15;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::enableTeleportSystem
	bool ___enableTeleportSystem_16;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::teleportSystemType
	SystemType_t1210221219 * ___teleportSystemType_17;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Diagnostics.MixedRealityDiagnosticsProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::diagnosticsSystemProfile
	MixedRealityDiagnosticsProfile_t4161815031 * ___diagnosticsSystemProfile_18;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::enableDiagnosticsSystem
	bool ___enableDiagnosticsSystem_19;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.SystemType Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::diagnosticsSystemType
	SystemType_t1210221219 * ___diagnosticsSystemType_20;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityRegisteredServiceProvidersProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::registeredServiceProvidersProfile
	MixedRealityRegisteredServiceProvidersProfile_t4135801282 * ___registeredServiceProvidersProfile_21;

public:
	inline static int32_t get_offset_of_initialServiceTypes_5() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___initialServiceTypes_5)); }
	inline SystemTypeU5BU5D_t4083083122* get_initialServiceTypes_5() const { return ___initialServiceTypes_5; }
	inline SystemTypeU5BU5D_t4083083122** get_address_of_initialServiceTypes_5() { return &___initialServiceTypes_5; }
	inline void set_initialServiceTypes_5(SystemTypeU5BU5D_t4083083122* value)
	{
		___initialServiceTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___initialServiceTypes_5), value);
	}

	inline static int32_t get_offset_of_U3CActiveServicesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___U3CActiveServicesU3Ek__BackingField_6)); }
	inline Dictionary_2_t2258896059 * get_U3CActiveServicesU3Ek__BackingField_6() const { return ___U3CActiveServicesU3Ek__BackingField_6; }
	inline Dictionary_2_t2258896059 ** get_address_of_U3CActiveServicesU3Ek__BackingField_6() { return &___U3CActiveServicesU3Ek__BackingField_6; }
	inline void set_U3CActiveServicesU3Ek__BackingField_6(Dictionary_2_t2258896059 * value)
	{
		___U3CActiveServicesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CActiveServicesU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_targetExperienceScale_7() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___targetExperienceScale_7)); }
	inline int32_t get_targetExperienceScale_7() const { return ___targetExperienceScale_7; }
	inline int32_t* get_address_of_targetExperienceScale_7() { return &___targetExperienceScale_7; }
	inline void set_targetExperienceScale_7(int32_t value)
	{
		___targetExperienceScale_7 = value;
	}

	inline static int32_t get_offset_of_enableCameraProfile_8() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___enableCameraProfile_8)); }
	inline bool get_enableCameraProfile_8() const { return ___enableCameraProfile_8; }
	inline bool* get_address_of_enableCameraProfile_8() { return &___enableCameraProfile_8; }
	inline void set_enableCameraProfile_8(bool value)
	{
		___enableCameraProfile_8 = value;
	}

	inline static int32_t get_offset_of_cameraProfile_9() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___cameraProfile_9)); }
	inline MixedRealityCameraProfile_t808486961 * get_cameraProfile_9() const { return ___cameraProfile_9; }
	inline MixedRealityCameraProfile_t808486961 ** get_address_of_cameraProfile_9() { return &___cameraProfile_9; }
	inline void set_cameraProfile_9(MixedRealityCameraProfile_t808486961 * value)
	{
		___cameraProfile_9 = value;
		Il2CppCodeGenWriteBarrier((&___cameraProfile_9), value);
	}

	inline static int32_t get_offset_of_enableInputSystem_10() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___enableInputSystem_10)); }
	inline bool get_enableInputSystem_10() const { return ___enableInputSystem_10; }
	inline bool* get_address_of_enableInputSystem_10() { return &___enableInputSystem_10; }
	inline void set_enableInputSystem_10(bool value)
	{
		___enableInputSystem_10 = value;
	}

	inline static int32_t get_offset_of_inputSystemProfile_11() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___inputSystemProfile_11)); }
	inline MixedRealityInputSystemProfile_t2588460320 * get_inputSystemProfile_11() const { return ___inputSystemProfile_11; }
	inline MixedRealityInputSystemProfile_t2588460320 ** get_address_of_inputSystemProfile_11() { return &___inputSystemProfile_11; }
	inline void set_inputSystemProfile_11(MixedRealityInputSystemProfile_t2588460320 * value)
	{
		___inputSystemProfile_11 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemProfile_11), value);
	}

	inline static int32_t get_offset_of_inputSystemType_12() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___inputSystemType_12)); }
	inline SystemType_t1210221219 * get_inputSystemType_12() const { return ___inputSystemType_12; }
	inline SystemType_t1210221219 ** get_address_of_inputSystemType_12() { return &___inputSystemType_12; }
	inline void set_inputSystemType_12(SystemType_t1210221219 * value)
	{
		___inputSystemType_12 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystemType_12), value);
	}

	inline static int32_t get_offset_of_enableBoundarySystem_13() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___enableBoundarySystem_13)); }
	inline bool get_enableBoundarySystem_13() const { return ___enableBoundarySystem_13; }
	inline bool* get_address_of_enableBoundarySystem_13() { return &___enableBoundarySystem_13; }
	inline void set_enableBoundarySystem_13(bool value)
	{
		___enableBoundarySystem_13 = value;
	}

	inline static int32_t get_offset_of_boundarySystemType_14() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___boundarySystemType_14)); }
	inline SystemType_t1210221219 * get_boundarySystemType_14() const { return ___boundarySystemType_14; }
	inline SystemType_t1210221219 ** get_address_of_boundarySystemType_14() { return &___boundarySystemType_14; }
	inline void set_boundarySystemType_14(SystemType_t1210221219 * value)
	{
		___boundarySystemType_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystemType_14), value);
	}

	inline static int32_t get_offset_of_boundaryVisualizationProfile_15() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___boundaryVisualizationProfile_15)); }
	inline MixedRealityBoundaryVisualizationProfile_t915324864 * get_boundaryVisualizationProfile_15() const { return ___boundaryVisualizationProfile_15; }
	inline MixedRealityBoundaryVisualizationProfile_t915324864 ** get_address_of_boundaryVisualizationProfile_15() { return &___boundaryVisualizationProfile_15; }
	inline void set_boundaryVisualizationProfile_15(MixedRealityBoundaryVisualizationProfile_t915324864 * value)
	{
		___boundaryVisualizationProfile_15 = value;
		Il2CppCodeGenWriteBarrier((&___boundaryVisualizationProfile_15), value);
	}

	inline static int32_t get_offset_of_enableTeleportSystem_16() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___enableTeleportSystem_16)); }
	inline bool get_enableTeleportSystem_16() const { return ___enableTeleportSystem_16; }
	inline bool* get_address_of_enableTeleportSystem_16() { return &___enableTeleportSystem_16; }
	inline void set_enableTeleportSystem_16(bool value)
	{
		___enableTeleportSystem_16 = value;
	}

	inline static int32_t get_offset_of_teleportSystemType_17() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___teleportSystemType_17)); }
	inline SystemType_t1210221219 * get_teleportSystemType_17() const { return ___teleportSystemType_17; }
	inline SystemType_t1210221219 ** get_address_of_teleportSystemType_17() { return &___teleportSystemType_17; }
	inline void set_teleportSystemType_17(SystemType_t1210221219 * value)
	{
		___teleportSystemType_17 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystemType_17), value);
	}

	inline static int32_t get_offset_of_diagnosticsSystemProfile_18() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___diagnosticsSystemProfile_18)); }
	inline MixedRealityDiagnosticsProfile_t4161815031 * get_diagnosticsSystemProfile_18() const { return ___diagnosticsSystemProfile_18; }
	inline MixedRealityDiagnosticsProfile_t4161815031 ** get_address_of_diagnosticsSystemProfile_18() { return &___diagnosticsSystemProfile_18; }
	inline void set_diagnosticsSystemProfile_18(MixedRealityDiagnosticsProfile_t4161815031 * value)
	{
		___diagnosticsSystemProfile_18 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemProfile_18), value);
	}

	inline static int32_t get_offset_of_enableDiagnosticsSystem_19() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___enableDiagnosticsSystem_19)); }
	inline bool get_enableDiagnosticsSystem_19() const { return ___enableDiagnosticsSystem_19; }
	inline bool* get_address_of_enableDiagnosticsSystem_19() { return &___enableDiagnosticsSystem_19; }
	inline void set_enableDiagnosticsSystem_19(bool value)
	{
		___enableDiagnosticsSystem_19 = value;
	}

	inline static int32_t get_offset_of_diagnosticsSystemType_20() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___diagnosticsSystemType_20)); }
	inline SystemType_t1210221219 * get_diagnosticsSystemType_20() const { return ___diagnosticsSystemType_20; }
	inline SystemType_t1210221219 ** get_address_of_diagnosticsSystemType_20() { return &___diagnosticsSystemType_20; }
	inline void set_diagnosticsSystemType_20(SystemType_t1210221219 * value)
	{
		___diagnosticsSystemType_20 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystemType_20), value);
	}

	inline static int32_t get_offset_of_registeredServiceProvidersProfile_21() { return static_cast<int32_t>(offsetof(MixedRealityConfigurationProfile_t3030501312, ___registeredServiceProvidersProfile_21)); }
	inline MixedRealityRegisteredServiceProvidersProfile_t4135801282 * get_registeredServiceProvidersProfile_21() const { return ___registeredServiceProvidersProfile_21; }
	inline MixedRealityRegisteredServiceProvidersProfile_t4135801282 ** get_address_of_registeredServiceProvidersProfile_21() { return &___registeredServiceProvidersProfile_21; }
	inline void set_registeredServiceProvidersProfile_21(MixedRealityRegisteredServiceProvidersProfile_t4135801282 * value)
	{
		___registeredServiceProvidersProfile_21 = value;
		Il2CppCodeGenWriteBarrier((&___registeredServiceProvidersProfile_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYCONFIGURATIONPROFILE_T3030501312_H
#ifndef INPUTEVENTDATA_T1552512027_H
#define INPUTEVENTDATA_T1552512027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData
struct  InputEventData_t1552512027  : public BaseInputEventData_t1701052491
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData::<Handedness>k__BackingField
	uint8_t ___U3CHandednessU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(InputEventData_t1552512027, ___U3CHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessU3Ek__BackingField_5() const { return ___U3CHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessU3Ek__BackingField_5() { return &___U3CHandednessU3Ek__BackingField_5; }
	inline void set_U3CHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTEVENTDATA_T1552512027_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef MIXEDREALITYPOINTEREVENTDATA_T420287197_H
#define MIXEDREALITYPOINTEREVENTDATA_T420287197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData
struct  MixedRealityPointerEventData_t420287197  : public InputEventData_t1552512027
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t420287197, ___U3CPointerU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_6() const { return ___U3CPointerU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_6() { return &___U3CPointerU3Ek__BackingField_6; }
	inline void set_U3CPointerU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityPointerEventData_t420287197, ___U3CCountU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountU3Ek__BackingField_7() const { return ___U3CCountU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_7() { return &___U3CCountU3Ek__BackingField_7; }
	inline void set_U3CCountU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYPOINTEREVENTDATA_T420287197_H
#ifndef MIXEDREALITYTOOLKIT_T1632592044_H
#define MIXEDREALITYTOOLKIT_T1632592044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit
struct  MixedRealityToolkit_t1632592044  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::isInitializing
	bool ___isInitializing_5;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::activeProfile
	MixedRealityConfigurationProfile_t3030501312 * ___activeProfile_6;
	// System.Collections.Generic.List`1<System.Tuple`2<System.Type,Microsoft.MixedReality.Toolkit.Core.Interfaces.IMixedRealityServiceProvider>> Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::<MixedRealityComponents>k__BackingField
	List_1_t478172613 * ___U3CMixedRealityComponentsU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::mixedRealityComponentsCount
	int32_t ___mixedRealityComponentsCount_8;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::initializedLock
	RuntimeObject * ___initializedLock_11;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::mixedRealityPlayspace
	Transform_t3600365921 * ___mixedRealityPlayspace_12;

public:
	inline static int32_t get_offset_of_isInitializing_5() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___isInitializing_5)); }
	inline bool get_isInitializing_5() const { return ___isInitializing_5; }
	inline bool* get_address_of_isInitializing_5() { return &___isInitializing_5; }
	inline void set_isInitializing_5(bool value)
	{
		___isInitializing_5 = value;
	}

	inline static int32_t get_offset_of_activeProfile_6() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___activeProfile_6)); }
	inline MixedRealityConfigurationProfile_t3030501312 * get_activeProfile_6() const { return ___activeProfile_6; }
	inline MixedRealityConfigurationProfile_t3030501312 ** get_address_of_activeProfile_6() { return &___activeProfile_6; }
	inline void set_activeProfile_6(MixedRealityConfigurationProfile_t3030501312 * value)
	{
		___activeProfile_6 = value;
		Il2CppCodeGenWriteBarrier((&___activeProfile_6), value);
	}

	inline static int32_t get_offset_of_U3CMixedRealityComponentsU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___U3CMixedRealityComponentsU3Ek__BackingField_7)); }
	inline List_1_t478172613 * get_U3CMixedRealityComponentsU3Ek__BackingField_7() const { return ___U3CMixedRealityComponentsU3Ek__BackingField_7; }
	inline List_1_t478172613 ** get_address_of_U3CMixedRealityComponentsU3Ek__BackingField_7() { return &___U3CMixedRealityComponentsU3Ek__BackingField_7; }
	inline void set_U3CMixedRealityComponentsU3Ek__BackingField_7(List_1_t478172613 * value)
	{
		___U3CMixedRealityComponentsU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMixedRealityComponentsU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_mixedRealityComponentsCount_8() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___mixedRealityComponentsCount_8)); }
	inline int32_t get_mixedRealityComponentsCount_8() const { return ___mixedRealityComponentsCount_8; }
	inline int32_t* get_address_of_mixedRealityComponentsCount_8() { return &___mixedRealityComponentsCount_8; }
	inline void set_mixedRealityComponentsCount_8(int32_t value)
	{
		___mixedRealityComponentsCount_8 = value;
	}

	inline static int32_t get_offset_of_initializedLock_11() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___initializedLock_11)); }
	inline RuntimeObject * get_initializedLock_11() const { return ___initializedLock_11; }
	inline RuntimeObject ** get_address_of_initializedLock_11() { return &___initializedLock_11; }
	inline void set_initializedLock_11(RuntimeObject * value)
	{
		___initializedLock_11 = value;
		Il2CppCodeGenWriteBarrier((&___initializedLock_11), value);
	}

	inline static int32_t get_offset_of_mixedRealityPlayspace_12() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044, ___mixedRealityPlayspace_12)); }
	inline Transform_t3600365921 * get_mixedRealityPlayspace_12() const { return ___mixedRealityPlayspace_12; }
	inline Transform_t3600365921 ** get_address_of_mixedRealityPlayspace_12() { return &___mixedRealityPlayspace_12; }
	inline void set_mixedRealityPlayspace_12(Transform_t3600365921 * value)
	{
		___mixedRealityPlayspace_12 = value;
		Il2CppCodeGenWriteBarrier((&___mixedRealityPlayspace_12), value);
	}
};

struct MixedRealityToolkit_t1632592044_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::instance
	MixedRealityToolkit_t1632592044 * ___instance_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::searchForInstance
	bool ___searchForInstance_10;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::inputSystem
	RuntimeObject* ___inputSystem_13;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::boundarySystem
	RuntimeObject* ___boundarySystem_14;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::teleportSystem
	RuntimeObject* ___teleportSystem_15;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Diagnostics.IMixedRealityDiagnosticsSystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::diagnosticsSystem
	RuntimeObject* ___diagnosticsSystem_16;

public:
	inline static int32_t get_offset_of_instance_9() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___instance_9)); }
	inline MixedRealityToolkit_t1632592044 * get_instance_9() const { return ___instance_9; }
	inline MixedRealityToolkit_t1632592044 ** get_address_of_instance_9() { return &___instance_9; }
	inline void set_instance_9(MixedRealityToolkit_t1632592044 * value)
	{
		___instance_9 = value;
		Il2CppCodeGenWriteBarrier((&___instance_9), value);
	}

	inline static int32_t get_offset_of_searchForInstance_10() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___searchForInstance_10)); }
	inline bool get_searchForInstance_10() const { return ___searchForInstance_10; }
	inline bool* get_address_of_searchForInstance_10() { return &___searchForInstance_10; }
	inline void set_searchForInstance_10(bool value)
	{
		___searchForInstance_10 = value;
	}

	inline static int32_t get_offset_of_inputSystem_13() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___inputSystem_13)); }
	inline RuntimeObject* get_inputSystem_13() const { return ___inputSystem_13; }
	inline RuntimeObject** get_address_of_inputSystem_13() { return &___inputSystem_13; }
	inline void set_inputSystem_13(RuntimeObject* value)
	{
		___inputSystem_13 = value;
		Il2CppCodeGenWriteBarrier((&___inputSystem_13), value);
	}

	inline static int32_t get_offset_of_boundarySystem_14() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___boundarySystem_14)); }
	inline RuntimeObject* get_boundarySystem_14() const { return ___boundarySystem_14; }
	inline RuntimeObject** get_address_of_boundarySystem_14() { return &___boundarySystem_14; }
	inline void set_boundarySystem_14(RuntimeObject* value)
	{
		___boundarySystem_14 = value;
		Il2CppCodeGenWriteBarrier((&___boundarySystem_14), value);
	}

	inline static int32_t get_offset_of_teleportSystem_15() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___teleportSystem_15)); }
	inline RuntimeObject* get_teleportSystem_15() const { return ___teleportSystem_15; }
	inline RuntimeObject** get_address_of_teleportSystem_15() { return &___teleportSystem_15; }
	inline void set_teleportSystem_15(RuntimeObject* value)
	{
		___teleportSystem_15 = value;
		Il2CppCodeGenWriteBarrier((&___teleportSystem_15), value);
	}

	inline static int32_t get_offset_of_diagnosticsSystem_16() { return static_cast<int32_t>(offsetof(MixedRealityToolkit_t1632592044_StaticFields, ___diagnosticsSystem_16)); }
	inline RuntimeObject* get_diagnosticsSystem_16() const { return ___diagnosticsSystem_16; }
	inline RuntimeObject** get_address_of_diagnosticsSystem_16() { return &___diagnosticsSystem_16; }
	inline void set_diagnosticsSystem_16(RuntimeObject* value)
	{
		___diagnosticsSystem_16 = value;
		Il2CppCodeGenWriteBarrier((&___diagnosticsSystem_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MIXEDREALITYTOOLKIT_T1632592044_H
#ifndef BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#define BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo
struct  BoundaryVisualizationDemo_t2326157821  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markerParent
	GameObject_t1113636619 * ___markerParent_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::markers
	List_1_t2585711361 * ___markers_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showFloor
	bool ___showFloor_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showPlayArea
	bool ___showPlayArea_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showTrackedArea
	bool ___showTrackedArea_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryWalls
	bool ___showBoundaryWalls_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::showBoundaryCeiling
	bool ___showBoundaryCeiling_10;

public:
	inline static int32_t get_offset_of_markerParent_4() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___markerParent_4)); }
	inline GameObject_t1113636619 * get_markerParent_4() const { return ___markerParent_4; }
	inline GameObject_t1113636619 ** get_address_of_markerParent_4() { return &___markerParent_4; }
	inline void set_markerParent_4(GameObject_t1113636619 * value)
	{
		___markerParent_4 = value;
		Il2CppCodeGenWriteBarrier((&___markerParent_4), value);
	}

	inline static int32_t get_offset_of_markers_5() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___markers_5)); }
	inline List_1_t2585711361 * get_markers_5() const { return ___markers_5; }
	inline List_1_t2585711361 ** get_address_of_markers_5() { return &___markers_5; }
	inline void set_markers_5(List_1_t2585711361 * value)
	{
		___markers_5 = value;
		Il2CppCodeGenWriteBarrier((&___markers_5), value);
	}

	inline static int32_t get_offset_of_showFloor_6() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showFloor_6)); }
	inline bool get_showFloor_6() const { return ___showFloor_6; }
	inline bool* get_address_of_showFloor_6() { return &___showFloor_6; }
	inline void set_showFloor_6(bool value)
	{
		___showFloor_6 = value;
	}

	inline static int32_t get_offset_of_showPlayArea_7() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showPlayArea_7)); }
	inline bool get_showPlayArea_7() const { return ___showPlayArea_7; }
	inline bool* get_address_of_showPlayArea_7() { return &___showPlayArea_7; }
	inline void set_showPlayArea_7(bool value)
	{
		___showPlayArea_7 = value;
	}

	inline static int32_t get_offset_of_showTrackedArea_8() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showTrackedArea_8)); }
	inline bool get_showTrackedArea_8() const { return ___showTrackedArea_8; }
	inline bool* get_address_of_showTrackedArea_8() { return &___showTrackedArea_8; }
	inline void set_showTrackedArea_8(bool value)
	{
		___showTrackedArea_8 = value;
	}

	inline static int32_t get_offset_of_showBoundaryWalls_9() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showBoundaryWalls_9)); }
	inline bool get_showBoundaryWalls_9() const { return ___showBoundaryWalls_9; }
	inline bool* get_address_of_showBoundaryWalls_9() { return &___showBoundaryWalls_9; }
	inline void set_showBoundaryWalls_9(bool value)
	{
		___showBoundaryWalls_9 = value;
	}

	inline static int32_t get_offset_of_showBoundaryCeiling_10() { return static_cast<int32_t>(offsetof(BoundaryVisualizationDemo_t2326157821, ___showBoundaryCeiling_10)); }
	inline bool get_showBoundaryCeiling_10() const { return ___showBoundaryCeiling_10; }
	inline bool* get_address_of_showBoundaryCeiling_10() { return &___showBoundaryCeiling_10; }
	inline void set_showBoundaryCeiling_10(bool value)
	{
		___showBoundaryCeiling_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVISUALIZATIONDEMO_T2326157821_H
#ifndef LOFIFILTERSELECTION_T2077164845_H
#define LOFIFILTERSELECTION_T2077164845_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection
struct  LoFiFilterSelection_t2077164845  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::NarrowBandTelephony
	Material_t340375123 * ___NarrowBandTelephony_4;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::AmRadio
	Material_t340375123 * ___AmRadio_5;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::FullRange
	Material_t340375123 * ___FullRange_6;
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::UnknownQuality
	Material_t340375123 * ___UnknownQuality_7;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::loFiEffect
	AudioLoFiEffect_t3876553922 * ___loFiEffect_8;
	// UnityEngine.Renderer Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::objectRenderer
	Renderer_t2627027031 * ___objectRenderer_9;

public:
	inline static int32_t get_offset_of_NarrowBandTelephony_4() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___NarrowBandTelephony_4)); }
	inline Material_t340375123 * get_NarrowBandTelephony_4() const { return ___NarrowBandTelephony_4; }
	inline Material_t340375123 ** get_address_of_NarrowBandTelephony_4() { return &___NarrowBandTelephony_4; }
	inline void set_NarrowBandTelephony_4(Material_t340375123 * value)
	{
		___NarrowBandTelephony_4 = value;
		Il2CppCodeGenWriteBarrier((&___NarrowBandTelephony_4), value);
	}

	inline static int32_t get_offset_of_AmRadio_5() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___AmRadio_5)); }
	inline Material_t340375123 * get_AmRadio_5() const { return ___AmRadio_5; }
	inline Material_t340375123 ** get_address_of_AmRadio_5() { return &___AmRadio_5; }
	inline void set_AmRadio_5(Material_t340375123 * value)
	{
		___AmRadio_5 = value;
		Il2CppCodeGenWriteBarrier((&___AmRadio_5), value);
	}

	inline static int32_t get_offset_of_FullRange_6() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___FullRange_6)); }
	inline Material_t340375123 * get_FullRange_6() const { return ___FullRange_6; }
	inline Material_t340375123 ** get_address_of_FullRange_6() { return &___FullRange_6; }
	inline void set_FullRange_6(Material_t340375123 * value)
	{
		___FullRange_6 = value;
		Il2CppCodeGenWriteBarrier((&___FullRange_6), value);
	}

	inline static int32_t get_offset_of_UnknownQuality_7() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___UnknownQuality_7)); }
	inline Material_t340375123 * get_UnknownQuality_7() const { return ___UnknownQuality_7; }
	inline Material_t340375123 ** get_address_of_UnknownQuality_7() { return &___UnknownQuality_7; }
	inline void set_UnknownQuality_7(Material_t340375123 * value)
	{
		___UnknownQuality_7 = value;
		Il2CppCodeGenWriteBarrier((&___UnknownQuality_7), value);
	}

	inline static int32_t get_offset_of_loFiEffect_8() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___loFiEffect_8)); }
	inline AudioLoFiEffect_t3876553922 * get_loFiEffect_8() const { return ___loFiEffect_8; }
	inline AudioLoFiEffect_t3876553922 ** get_address_of_loFiEffect_8() { return &___loFiEffect_8; }
	inline void set_loFiEffect_8(AudioLoFiEffect_t3876553922 * value)
	{
		___loFiEffect_8 = value;
		Il2CppCodeGenWriteBarrier((&___loFiEffect_8), value);
	}

	inline static int32_t get_offset_of_objectRenderer_9() { return static_cast<int32_t>(offsetof(LoFiFilterSelection_t2077164845, ___objectRenderer_9)); }
	inline Renderer_t2627027031 * get_objectRenderer_9() const { return ___objectRenderer_9; }
	inline Renderer_t2627027031 ** get_address_of_objectRenderer_9() { return &___objectRenderer_9; }
	inline void set_objectRenderer_9(Renderer_t2627027031 * value)
	{
		___objectRenderer_9 = value;
		Il2CppCodeGenWriteBarrier((&___objectRenderer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOFIFILTERSELECTION_T2077164845_H
#ifndef MATERIALMATRIX_T2973875676_H
#define MATERIALMATRIX_T2973875676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix
struct  MaterialMatrix_t2973875676  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Material Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::material
	Material_t340375123 * ___material_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::dimension
	int32_t ___dimension_5;
	// System.Single Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::positionOffset
	float ___positionOffset_6;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::firstPropertyName
	String_t* ___firstPropertyName_7;
	// System.String Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::secondPropertyName
	String_t* ___secondPropertyName_8;

public:
	inline static int32_t get_offset_of_material_4() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___material_4)); }
	inline Material_t340375123 * get_material_4() const { return ___material_4; }
	inline Material_t340375123 ** get_address_of_material_4() { return &___material_4; }
	inline void set_material_4(Material_t340375123 * value)
	{
		___material_4 = value;
		Il2CppCodeGenWriteBarrier((&___material_4), value);
	}

	inline static int32_t get_offset_of_dimension_5() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___dimension_5)); }
	inline int32_t get_dimension_5() const { return ___dimension_5; }
	inline int32_t* get_address_of_dimension_5() { return &___dimension_5; }
	inline void set_dimension_5(int32_t value)
	{
		___dimension_5 = value;
	}

	inline static int32_t get_offset_of_positionOffset_6() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___positionOffset_6)); }
	inline float get_positionOffset_6() const { return ___positionOffset_6; }
	inline float* get_address_of_positionOffset_6() { return &___positionOffset_6; }
	inline void set_positionOffset_6(float value)
	{
		___positionOffset_6 = value;
	}

	inline static int32_t get_offset_of_firstPropertyName_7() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___firstPropertyName_7)); }
	inline String_t* get_firstPropertyName_7() const { return ___firstPropertyName_7; }
	inline String_t** get_address_of_firstPropertyName_7() { return &___firstPropertyName_7; }
	inline void set_firstPropertyName_7(String_t* value)
	{
		___firstPropertyName_7 = value;
		Il2CppCodeGenWriteBarrier((&___firstPropertyName_7), value);
	}

	inline static int32_t get_offset_of_secondPropertyName_8() { return static_cast<int32_t>(offsetof(MaterialMatrix_t2973875676, ___secondPropertyName_8)); }
	inline String_t* get_secondPropertyName_8() const { return ___secondPropertyName_8; }
	inline String_t** get_address_of_secondPropertyName_8() { return &___secondPropertyName_8; }
	inline void set_secondPropertyName_8(String_t* value)
	{
		___secondPropertyName_8 = value;
		Il2CppCodeGenWriteBarrier((&___secondPropertyName_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALMATRIX_T2973875676_H
#ifndef SWAPVOLUME_T3528663124_H
#define SWAPVOLUME_T3528663124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume
struct  SwapVolume_t3528663124  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::hideThisObject
	GameObject_t1113636619 * ___hideThisObject_4;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::spawnThisPrefab
	GameObject_t1113636619 * ___spawnThisPrefab_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::updateSolverTargetToClickSource
	bool ___updateSolverTargetToClickSource_6;
	// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::solverHandler
	SolverHandler_t2870684933 * ___solverHandler_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::spawnedObject
	GameObject_t1113636619 * ___spawnedObject_8;

public:
	inline static int32_t get_offset_of_hideThisObject_4() { return static_cast<int32_t>(offsetof(SwapVolume_t3528663124, ___hideThisObject_4)); }
	inline GameObject_t1113636619 * get_hideThisObject_4() const { return ___hideThisObject_4; }
	inline GameObject_t1113636619 ** get_address_of_hideThisObject_4() { return &___hideThisObject_4; }
	inline void set_hideThisObject_4(GameObject_t1113636619 * value)
	{
		___hideThisObject_4 = value;
		Il2CppCodeGenWriteBarrier((&___hideThisObject_4), value);
	}

	inline static int32_t get_offset_of_spawnThisPrefab_5() { return static_cast<int32_t>(offsetof(SwapVolume_t3528663124, ___spawnThisPrefab_5)); }
	inline GameObject_t1113636619 * get_spawnThisPrefab_5() const { return ___spawnThisPrefab_5; }
	inline GameObject_t1113636619 ** get_address_of_spawnThisPrefab_5() { return &___spawnThisPrefab_5; }
	inline void set_spawnThisPrefab_5(GameObject_t1113636619 * value)
	{
		___spawnThisPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___spawnThisPrefab_5), value);
	}

	inline static int32_t get_offset_of_updateSolverTargetToClickSource_6() { return static_cast<int32_t>(offsetof(SwapVolume_t3528663124, ___updateSolverTargetToClickSource_6)); }
	inline bool get_updateSolverTargetToClickSource_6() const { return ___updateSolverTargetToClickSource_6; }
	inline bool* get_address_of_updateSolverTargetToClickSource_6() { return &___updateSolverTargetToClickSource_6; }
	inline void set_updateSolverTargetToClickSource_6(bool value)
	{
		___updateSolverTargetToClickSource_6 = value;
	}

	inline static int32_t get_offset_of_solverHandler_7() { return static_cast<int32_t>(offsetof(SwapVolume_t3528663124, ___solverHandler_7)); }
	inline SolverHandler_t2870684933 * get_solverHandler_7() const { return ___solverHandler_7; }
	inline SolverHandler_t2870684933 ** get_address_of_solverHandler_7() { return &___solverHandler_7; }
	inline void set_solverHandler_7(SolverHandler_t2870684933 * value)
	{
		___solverHandler_7 = value;
		Il2CppCodeGenWriteBarrier((&___solverHandler_7), value);
	}

	inline static int32_t get_offset_of_spawnedObject_8() { return static_cast<int32_t>(offsetof(SwapVolume_t3528663124, ___spawnedObject_8)); }
	inline GameObject_t1113636619 * get_spawnedObject_8() const { return ___spawnedObject_8; }
	inline GameObject_t1113636619 ** get_address_of_spawnedObject_8() { return &___spawnedObject_8; }
	inline void set_spawnedObject_8(GameObject_t1113636619 * value)
	{
		___spawnedObject_8 = value;
		Il2CppCodeGenWriteBarrier((&___spawnedObject_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWAPVOLUME_T3528663124_H
#ifndef AUDIOLOFIEFFECT_T3876553922_H
#define AUDIOLOFIEFFECT_T3876553922_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect
struct  AudioLoFiEffect_t3876553922  : public MonoBehaviour_t3962482529
{
public:
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::sourceQuality
	int32_t ___sourceQuality_4;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioInfluencerController Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::influencerController
	AudioInfluencerController_t1412283275 * ___influencerController_5;
	// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::filterSettings
	AudioLoFiFilterSettings_t61635165  ___filterSettings_6;
	// UnityEngine.AudioLowPassFilter Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::lowPassFilter
	AudioLowPassFilter_t919637367 * ___lowPassFilter_7;
	// UnityEngine.AudioHighPassFilter Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::highPassFilter
	AudioHighPassFilter_t4137291619 * ___highPassFilter_8;
	// System.Collections.Generic.Dictionary`2<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType,Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect/AudioLoFiFilterSettings> Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::sourceQualityFilterSettings
	Dictionary_2_t3628277339 * ___sourceQualityFilterSettings_9;

public:
	inline static int32_t get_offset_of_sourceQuality_4() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___sourceQuality_4)); }
	inline int32_t get_sourceQuality_4() const { return ___sourceQuality_4; }
	inline int32_t* get_address_of_sourceQuality_4() { return &___sourceQuality_4; }
	inline void set_sourceQuality_4(int32_t value)
	{
		___sourceQuality_4 = value;
	}

	inline static int32_t get_offset_of_influencerController_5() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___influencerController_5)); }
	inline AudioInfluencerController_t1412283275 * get_influencerController_5() const { return ___influencerController_5; }
	inline AudioInfluencerController_t1412283275 ** get_address_of_influencerController_5() { return &___influencerController_5; }
	inline void set_influencerController_5(AudioInfluencerController_t1412283275 * value)
	{
		___influencerController_5 = value;
		Il2CppCodeGenWriteBarrier((&___influencerController_5), value);
	}

	inline static int32_t get_offset_of_filterSettings_6() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___filterSettings_6)); }
	inline AudioLoFiFilterSettings_t61635165  get_filterSettings_6() const { return ___filterSettings_6; }
	inline AudioLoFiFilterSettings_t61635165 * get_address_of_filterSettings_6() { return &___filterSettings_6; }
	inline void set_filterSettings_6(AudioLoFiFilterSettings_t61635165  value)
	{
		___filterSettings_6 = value;
	}

	inline static int32_t get_offset_of_lowPassFilter_7() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___lowPassFilter_7)); }
	inline AudioLowPassFilter_t919637367 * get_lowPassFilter_7() const { return ___lowPassFilter_7; }
	inline AudioLowPassFilter_t919637367 ** get_address_of_lowPassFilter_7() { return &___lowPassFilter_7; }
	inline void set_lowPassFilter_7(AudioLowPassFilter_t919637367 * value)
	{
		___lowPassFilter_7 = value;
		Il2CppCodeGenWriteBarrier((&___lowPassFilter_7), value);
	}

	inline static int32_t get_offset_of_highPassFilter_8() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___highPassFilter_8)); }
	inline AudioHighPassFilter_t4137291619 * get_highPassFilter_8() const { return ___highPassFilter_8; }
	inline AudioHighPassFilter_t4137291619 ** get_address_of_highPassFilter_8() { return &___highPassFilter_8; }
	inline void set_highPassFilter_8(AudioHighPassFilter_t4137291619 * value)
	{
		___highPassFilter_8 = value;
		Il2CppCodeGenWriteBarrier((&___highPassFilter_8), value);
	}

	inline static int32_t get_offset_of_sourceQualityFilterSettings_9() { return static_cast<int32_t>(offsetof(AudioLoFiEffect_t3876553922, ___sourceQualityFilterSettings_9)); }
	inline Dictionary_2_t3628277339 * get_sourceQualityFilterSettings_9() const { return ___sourceQualityFilterSettings_9; }
	inline Dictionary_2_t3628277339 ** get_address_of_sourceQualityFilterSettings_9() { return &___sourceQualityFilterSettings_9; }
	inline void set_sourceQualityFilterSettings_9(Dictionary_2_t3628277339 * value)
	{
		___sourceQualityFilterSettings_9 = value;
		Il2CppCodeGenWriteBarrier((&___sourceQualityFilterSettings_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLOFIEFFECT_T3876553922_H
#ifndef CONTROLLERFINDER_T2763216949_H
#define CONTROLLERFINDER_T2763216949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder
struct  ControllerFinder_t2763216949  : public MonoBehaviour_t3962482529
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder::handedness
	uint8_t ___handedness_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.ControllerFinder::ControllerTransform
	Transform_t3600365921 * ___ControllerTransform_5;

public:
	inline static int32_t get_offset_of_handedness_4() { return static_cast<int32_t>(offsetof(ControllerFinder_t2763216949, ___handedness_4)); }
	inline uint8_t get_handedness_4() const { return ___handedness_4; }
	inline uint8_t* get_address_of_handedness_4() { return &___handedness_4; }
	inline void set_handedness_4(uint8_t value)
	{
		___handedness_4 = value;
	}

	inline static int32_t get_offset_of_ControllerTransform_5() { return static_cast<int32_t>(offsetof(ControllerFinder_t2763216949, ___ControllerTransform_5)); }
	inline Transform_t3600365921 * get_ControllerTransform_5() const { return ___ControllerTransform_5; }
	inline Transform_t3600365921 ** get_address_of_ControllerTransform_5() { return &___ControllerTransform_5; }
	inline void set_ControllerTransform_5(Transform_t3600365921 * value)
	{
		___ControllerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___ControllerTransform_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTROLLERFINDER_T2763216949_H
#ifndef SOLVERHANDLER_T2870684933_H
#define SOLVERHANDLER_T2870684933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler
struct  SolverHandler_t2870684933  : public ControllerFinder_t2763216949
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::trackedObjectToReference
	int32_t ___trackedObjectToReference_6;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::additionalOffset
	Vector3_t3722313464  ___additionalOffset_7;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::additionalRotation
	Vector3_t3722313464  ___additionalRotation_8;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::transformTarget
	Transform_t3600365921 * ___transformTarget_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::updateSolvers
	bool ___updateSolvers_10;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalPosition>k__BackingField
	Vector3_t3722313464  ___U3CGoalPositionU3Ek__BackingField_11;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalRotation>k__BackingField
	Quaternion_t2301928331  ___U3CGoalRotationU3Ek__BackingField_12;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<GoalScale>k__BackingField
	Vector3_t3722313464  ___U3CGoalScaleU3Ek__BackingField_13;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Vector3Smoothed Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<AltScale>k__BackingField
	Vector3Smoothed_t1555276329  ___U3CAltScaleU3Ek__BackingField_14;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::<DeltaTime>k__BackingField
	float ___U3CDeltaTimeU3Ek__BackingField_15;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.Solver> Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::solvers
	List_1_t4067997016 * ___solvers_16;
	// System.Single Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::lastUpdateTime
	float ___lastUpdateTime_17;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::transformWithOffset
	GameObject_t1113636619 * ___transformWithOffset_18;

public:
	inline static int32_t get_offset_of_trackedObjectToReference_6() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___trackedObjectToReference_6)); }
	inline int32_t get_trackedObjectToReference_6() const { return ___trackedObjectToReference_6; }
	inline int32_t* get_address_of_trackedObjectToReference_6() { return &___trackedObjectToReference_6; }
	inline void set_trackedObjectToReference_6(int32_t value)
	{
		___trackedObjectToReference_6 = value;
	}

	inline static int32_t get_offset_of_additionalOffset_7() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___additionalOffset_7)); }
	inline Vector3_t3722313464  get_additionalOffset_7() const { return ___additionalOffset_7; }
	inline Vector3_t3722313464 * get_address_of_additionalOffset_7() { return &___additionalOffset_7; }
	inline void set_additionalOffset_7(Vector3_t3722313464  value)
	{
		___additionalOffset_7 = value;
	}

	inline static int32_t get_offset_of_additionalRotation_8() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___additionalRotation_8)); }
	inline Vector3_t3722313464  get_additionalRotation_8() const { return ___additionalRotation_8; }
	inline Vector3_t3722313464 * get_address_of_additionalRotation_8() { return &___additionalRotation_8; }
	inline void set_additionalRotation_8(Vector3_t3722313464  value)
	{
		___additionalRotation_8 = value;
	}

	inline static int32_t get_offset_of_transformTarget_9() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___transformTarget_9)); }
	inline Transform_t3600365921 * get_transformTarget_9() const { return ___transformTarget_9; }
	inline Transform_t3600365921 ** get_address_of_transformTarget_9() { return &___transformTarget_9; }
	inline void set_transformTarget_9(Transform_t3600365921 * value)
	{
		___transformTarget_9 = value;
		Il2CppCodeGenWriteBarrier((&___transformTarget_9), value);
	}

	inline static int32_t get_offset_of_updateSolvers_10() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___updateSolvers_10)); }
	inline bool get_updateSolvers_10() const { return ___updateSolvers_10; }
	inline bool* get_address_of_updateSolvers_10() { return &___updateSolvers_10; }
	inline void set_updateSolvers_10(bool value)
	{
		___updateSolvers_10 = value;
	}

	inline static int32_t get_offset_of_U3CGoalPositionU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___U3CGoalPositionU3Ek__BackingField_11)); }
	inline Vector3_t3722313464  get_U3CGoalPositionU3Ek__BackingField_11() const { return ___U3CGoalPositionU3Ek__BackingField_11; }
	inline Vector3_t3722313464 * get_address_of_U3CGoalPositionU3Ek__BackingField_11() { return &___U3CGoalPositionU3Ek__BackingField_11; }
	inline void set_U3CGoalPositionU3Ek__BackingField_11(Vector3_t3722313464  value)
	{
		___U3CGoalPositionU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CGoalRotationU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___U3CGoalRotationU3Ek__BackingField_12)); }
	inline Quaternion_t2301928331  get_U3CGoalRotationU3Ek__BackingField_12() const { return ___U3CGoalRotationU3Ek__BackingField_12; }
	inline Quaternion_t2301928331 * get_address_of_U3CGoalRotationU3Ek__BackingField_12() { return &___U3CGoalRotationU3Ek__BackingField_12; }
	inline void set_U3CGoalRotationU3Ek__BackingField_12(Quaternion_t2301928331  value)
	{
		___U3CGoalRotationU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CGoalScaleU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___U3CGoalScaleU3Ek__BackingField_13)); }
	inline Vector3_t3722313464  get_U3CGoalScaleU3Ek__BackingField_13() const { return ___U3CGoalScaleU3Ek__BackingField_13; }
	inline Vector3_t3722313464 * get_address_of_U3CGoalScaleU3Ek__BackingField_13() { return &___U3CGoalScaleU3Ek__BackingField_13; }
	inline void set_U3CGoalScaleU3Ek__BackingField_13(Vector3_t3722313464  value)
	{
		___U3CGoalScaleU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CAltScaleU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___U3CAltScaleU3Ek__BackingField_14)); }
	inline Vector3Smoothed_t1555276329  get_U3CAltScaleU3Ek__BackingField_14() const { return ___U3CAltScaleU3Ek__BackingField_14; }
	inline Vector3Smoothed_t1555276329 * get_address_of_U3CAltScaleU3Ek__BackingField_14() { return &___U3CAltScaleU3Ek__BackingField_14; }
	inline void set_U3CAltScaleU3Ek__BackingField_14(Vector3Smoothed_t1555276329  value)
	{
		___U3CAltScaleU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaTimeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___U3CDeltaTimeU3Ek__BackingField_15)); }
	inline float get_U3CDeltaTimeU3Ek__BackingField_15() const { return ___U3CDeltaTimeU3Ek__BackingField_15; }
	inline float* get_address_of_U3CDeltaTimeU3Ek__BackingField_15() { return &___U3CDeltaTimeU3Ek__BackingField_15; }
	inline void set_U3CDeltaTimeU3Ek__BackingField_15(float value)
	{
		___U3CDeltaTimeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_solvers_16() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___solvers_16)); }
	inline List_1_t4067997016 * get_solvers_16() const { return ___solvers_16; }
	inline List_1_t4067997016 ** get_address_of_solvers_16() { return &___solvers_16; }
	inline void set_solvers_16(List_1_t4067997016 * value)
	{
		___solvers_16 = value;
		Il2CppCodeGenWriteBarrier((&___solvers_16), value);
	}

	inline static int32_t get_offset_of_lastUpdateTime_17() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___lastUpdateTime_17)); }
	inline float get_lastUpdateTime_17() const { return ___lastUpdateTime_17; }
	inline float* get_address_of_lastUpdateTime_17() { return &___lastUpdateTime_17; }
	inline void set_lastUpdateTime_17(float value)
	{
		___lastUpdateTime_17 = value;
	}

	inline static int32_t get_offset_of_transformWithOffset_18() { return static_cast<int32_t>(offsetof(SolverHandler_t2870684933, ___transformWithOffset_18)); }
	inline GameObject_t1113636619 * get_transformWithOffset_18() const { return ___transformWithOffset_18; }
	inline GameObject_t1113636619 ** get_address_of_transformWithOffset_18() { return &___transformWithOffset_18; }
	inline void set_transformWithOffset_18(GameObject_t1113636619 * value)
	{
		___transformWithOffset_18 = value;
		Il2CppCodeGenWriteBarrier((&___transformWithOffset_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOLVERHANDLER_T2870684933_H


// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, U3COnEnableU3Ed__10_t1612606443 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Func_1__ctor_m4025184632_gshared (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__10_t1612606443_m627872286_gshared (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject ** p0, U3COnEnableU3Ed__10_t1612606443 * p1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<System.Object>(System.Collections.IEnumerable)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Cast_TisRuntimeObject_m4015728326_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
extern "C" IL2CPP_METHOD_ATTR List_1_t257213610 * Enumerable_ToList_TisRuntimeObject_m1484080463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1257123189_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);

// System.Void UnityEngine.GameObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m3707688467 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
extern "C" IL2CPP_METHOD_ATTR void Object_set_name_m291480324 (Object_t631007953 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_Instance()
extern "C" IL2CPP_METHOD_ATTR MixedRealityToolkit_t1632592044 * MixedRealityToolkit_get_Instance_m618562593 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_MixedRealityPlayspace()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * MixedRealityToolkit_get_MixedRealityPlayspace_m2205649172 (MixedRealityToolkit_t1632592044 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m786917804 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_BoundarySystem()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MixedRealityToolkit_get_BoundarySystem_m1131069912 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m2812834599 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m3541291039 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t3819840891  AsyncVoidMethodBuilder_Create_m1976941025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&)
inline void AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395 (AsyncVoidMethodBuilder_t3819840891 * __this, U3COnEnableU3Ed__10_t1612606443 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, U3COnEnableU3Ed__10_t1612606443 *, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395_gshared)(__this, p0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile Microsoft.MixedReality.Toolkit.Core.Services.MixedRealityToolkit::get_ActiveProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityConfigurationProfile_t3030501312 * MixedRealityToolkit_get_ActiveProfile_m3560497000 (MixedRealityToolkit_t1632592044 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile Microsoft.MixedReality.Toolkit.Core.Definitions.MixedRealityConfigurationProfile::get_BoundaryVisualizationProfile()
extern "C" IL2CPP_METHOD_ATTR MixedRealityBoundaryVisualizationProfile_t915324864 * MixedRealityConfigurationProfile_get_BoundaryVisualizationProfile_m1377389070 (MixedRealityConfigurationProfile_t3030501312 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Addition_m779775034 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_PlayAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m3027729812 (MixedRealityBoundaryVisualizationProfile_t915324864 * __this, const RuntimeMethod* method);
// UnityEngine.Material Microsoft.MixedReality.Toolkit.Core.Definitions.BoundarySystem.MixedRealityBoundaryVisualizationProfile::get_TrackedAreaMaterial()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m912114873 (MixedRealityBoundaryVisualizationProfile_t915324864 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_CreatePrimitive_m2902598419 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_sharedMaterial_m2374163090 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m2765963565 (List_1_t2585711361 * __this, GameObject_t1113636619 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, GameObject_t1113636619 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m1424466557 (List_1_t2585711361 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2585711361 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2512151783 (U3CU3Ec_t3591545808 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m4025184632 (Func_1_t3822001908 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t3822001908 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m4025184632_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void WaitUntil__ctor_m4227046299 (WaitUntil_t3373419216 * __this, Func_1_t3822001908 * p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitUntil)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t1961245047 * AwaiterExtensions_GetAwaiter_m145521691 (RuntimeObject * __this /* static, unused */, WaitUntil_t3373419216 * p0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m1501874044 (SimpleCoroutineAwaiter_t1961245047 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10>(!!0&,!!1&)
inline void AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3COnEnableU3Ed__10_t1612606443_m2726740902 (AsyncVoidMethodBuilder_t3819840891 * __this, SimpleCoroutineAwaiter_t1961245047 ** p0, U3COnEnableU3Ed__10_t1612606443 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t3819840891 *, SimpleCoroutineAwaiter_t1961245047 **, U3COnEnableU3Ed__10_t1612606443 *, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitOnCompleted_TisRuntimeObject_TisU3COnEnableU3Ed__10_t1612606443_m627872286_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m2823840508 (SimpleCoroutineAwaiter_t1961245047 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_m1109381469 (AsyncVoidMethodBuilder_t3819840891 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m1991744790 (AsyncVoidMethodBuilder_t3819840891 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_MoveNext_m2312595140 (U3COnEnableU3Ed__10_t1612606443 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m2384003025 (AsyncVoidMethodBuilder_t3819840891 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_SetStateMachine_m3698782622 (U3COnEnableU3Ed__10_t1612606443 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect>()
inline AudioLoFiEffect_t3876553922 * GameObject_GetComponent_TisAudioLoFiEffect_t3876553922_m682209347 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  AudioLoFiEffect_t3876553922 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t2627027031 * GameObject_GetComponent_TisRenderer_t2627027031_m171735387 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Renderer_t2627027031 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::get_SourceQuality()
extern "C" IL2CPP_METHOD_ATTR int32_t AudioLoFiEffect_get_SourceQuality_m4065393204 (AudioLoFiEffect_t3876553922 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_m1742289396 (LoFiFilterSelection_t2077164845 * __this, int32_t ___sourceQuality0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiEffect::set_SourceQuality(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType)
extern "C" IL2CPP_METHOD_ATTR void AudioLoFiEffect_set_SourceQuality_m2929235787 (AudioLoFiEffect_t3876553922 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2579498062 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Cast<UnityEngine.Transform>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_Cast_TisTransform_t3600365921_m3857377578 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_Cast_TisRuntimeObject_m4015728326_gshared)(__this /* static, unused */, p0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.Transform>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t777473367 * Enumerable_ToList_TisTransform_t3600365921_m4208630033 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, const RuntimeMethod* method)
{
	return ((  List_1_t777473367 * (*) (RuntimeObject * /* static, unused */, RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m1484080463_gshared)(__this /* static, unused */, p0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_t3600365921 * List_1_get_Item_m3651111564 (List_1_t777473367 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Transform_t3600365921 * (*) (List_1_t777473367 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Boolean UnityEngine.Application::get_isPlaying()
extern "C" IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m100394690 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m3193525861 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m3249086042 (List_1_t777473367 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t777473367 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m1030499873 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m1688718093 (Material_t340375123 * __this, int32_t p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3572510816 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1257123189_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler>()
inline SolverHandler_t2870684933 * GameObject_GetComponent_TisSolverHandler_t2870684933_m470628409 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  SolverHandler_t2870684933 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C" IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.InputEventData::get_Handedness()
extern "C" IL2CPP_METHOD_ATTR uint8_t InputEventData_get_Handedness_m1384314441 (InputEventData_t1552512027 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.SDK.Utilities.Solvers.SolverHandler::set_TrackedObjectToReference(Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.TrackedObjectType)
extern "C" IL2CPP_METHOD_ATTR void SolverHandler_set_TrackedObjectToReference_m866810864 (SolverHandler_t2870684933 * __this, int32_t p0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Awake()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Awake_m3157749041 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Awake_m3157749041_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// markerParent = new GameObject();
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m3707688467(L_0, /*hidden argument*/NULL);
		__this->set_markerParent_4(L_0);
		// markerParent.name = "Boundary Demo Markers";
		GameObject_t1113636619 * L_1 = __this->get_markerParent_4();
		NullCheck(L_1);
		Object_set_name_m291480324(L_1, _stringLiteral474850886, /*hidden argument*/NULL);
		// markerParent.transform.parent = MixedRealityToolkit.Instance.MixedRealityPlayspace;
		GameObject_t1113636619 * L_2 = __this->get_markerParent_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t1632592044 * L_4 = MixedRealityToolkit_get_Instance_m618562593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = MixedRealityToolkit_get_MixedRealityPlayspace_m2205649172(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_parent_m786917804(L_3, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Start()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Start_m2813642153 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Start_m2813642153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MixedRealityToolkit.BoundarySystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// if (markers.Count == 0)
		List_1_t2585711361 * L_1 = __this->get_markers_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_m2812834599(L_1, /*hidden argument*/List_1_get_Count_m2812834599_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// AddMarkers();
		BoundaryVisualizationDemo_AddMarkers_m3541291039(__this, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::Update()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_Update_m2685918975 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_Update_m2685918975_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MixedRealityToolkit.BoundarySystem != null)
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0057;
		}
	}
	{
		// MixedRealityToolkit.BoundarySystem.ShowFloor = showFloor;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_2 = __this->get_showFloor_6();
		NullCheck(L_1);
		InterfaceActionInvoker1< bool >::Invoke(5 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowFloor(System.Boolean) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_1, L_2);
		// MixedRealityToolkit.BoundarySystem.ShowPlayArea = showPlayArea;
		RuntimeObject* L_3 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = __this->get_showPlayArea_7();
		NullCheck(L_3);
		InterfaceActionInvoker1< bool >::Invoke(7 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowPlayArea(System.Boolean) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_3, L_4);
		// MixedRealityToolkit.BoundarySystem.ShowTrackedArea = showTrackedArea;
		RuntimeObject* L_5 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_6 = __this->get_showTrackedArea_8();
		NullCheck(L_5);
		InterfaceActionInvoker1< bool >::Invoke(9 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowTrackedArea(System.Boolean) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_5, L_6);
		// MixedRealityToolkit.BoundarySystem.ShowBoundaryWalls = showBoundaryWalls;
		RuntimeObject* L_7 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_8 = __this->get_showBoundaryWalls_9();
		NullCheck(L_7);
		InterfaceActionInvoker1< bool >::Invoke(11 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryWalls(System.Boolean) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_7, L_8);
		// MixedRealityToolkit.BoundarySystem.ShowBoundaryCeiling = showBoundaryCeiling;
		RuntimeObject* L_9 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_10 = __this->get_showBoundaryCeiling_10();
		NullCheck(L_9);
		InterfaceActionInvoker1< bool >::Invoke(13 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::set_ShowBoundaryCeiling(System.Boolean) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_9, L_10);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnEnable_m2827179319 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnEnable_m2827179319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnEnableU3Ed__10_t1612606443  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncVoidMethodBuilder_t3819840891  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		AsyncVoidMethodBuilder_t3819840891  L_0 = AsyncVoidMethodBuilder_Create_m1976941025(NULL /*static, unused*/, /*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3COnEnableU3Ed__10_t1612606443  L_1 = V_0;
		AsyncVoidMethodBuilder_t3819840891  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395((AsyncVoidMethodBuilder_t3819840891 *)(&V_1), (U3COnEnableU3Ed__10_t1612606443 *)(&V_0), /*hidden argument*/AsyncVoidMethodBuilder_Start_TisU3COnEnableU3Ed__10_t1612606443_m1209890395_RuntimeMethod_var);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnDisable_m33221367 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnDisable_m33221367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// MixedRealityToolkit.BoundarySystem?.Unregister(gameObject);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(3 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Unregister(UnityEngine.GameObject) */, IMixedRealityEventSystem_t3431071463_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::OnBoundaryVisualizationChanged(Microsoft.MixedReality.Toolkit.Core.EventDatum.Boundary.BoundaryEventData)
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m2268900202 (BoundaryVisualizationDemo_t2326157821 * __this, BoundaryEventData_t2497240288 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_OnBoundaryVisualizationChanged_m2268900202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("[BoundaryVisualizationDemo] Boundary visualization changed.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral548396354, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::AddMarkers()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo_AddMarkers_m3541291039 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo_AddMarkers_m3541291039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	MixedRealityBoundaryVisualizationProfile_t915324864 * V_4 = NULL;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t3722313464  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_t3722313464  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Material_t340375123 * V_10 = NULL;
	GameObject_t1113636619 * V_11 = NULL;
	{
		// if (!MixedRealityToolkit.BoundarySystem.TryGetRectangularBoundsParams(out centerRect, out angleRect, out widthRect, out heightRect))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker4< bool, Vector2_t2156229523 *, float*, float*, float* >::Invoke(17 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::TryGetRectangularBoundsParams(UnityEngine.Vector2&,System.Single&,System.Single&,System.Single&) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_0, (Vector2_t2156229523 *)(&V_0), (float*)(&V_1), (float*)(&V_2), (float*)(&V_3));
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// MixedRealityBoundaryVisualizationProfile visualizationProfile = MixedRealityToolkit.Instance.ActiveProfile.BoundaryVisualizationProfile;
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		MixedRealityToolkit_t1632592044 * L_2 = MixedRealityToolkit_get_Instance_m618562593(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		MixedRealityConfigurationProfile_t3030501312 * L_3 = MixedRealityToolkit_get_ActiveProfile_m3560497000(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		MixedRealityBoundaryVisualizationProfile_t915324864 * L_4 = MixedRealityConfigurationProfile_get_BoundaryVisualizationProfile_m1377389070(L_3, /*hidden argument*/NULL);
		V_4 = L_4;
		// if (visualizationProfile == null)
		MixedRealityBoundaryVisualizationProfile_t915324864 * L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_5, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// return;
		return;
	}

IL_0031:
	{
		// Vector3 center = new Vector3(centerRect.x, 0f, centerRect.y);
		Vector2_t2156229523  L_7 = V_0;
		float L_8 = L_7.get_x_0();
		Vector2_t2156229523  L_9 = V_0;
		float L_10 = L_9.get_y_1();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_8, (0.0f), L_10, /*hidden argument*/NULL);
		// Vector3 corner = center - (new Vector3(dimension, 0.0f, dimension) * 0.5f);
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), (4.0f), (0.0f), (4.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_12, (0.5f), /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		// corner.y += 0.05f;
		float* L_15 = (&V_5)->get_address_of_y_3();
		float* L_16 = L_15;
		float L_17 = *((float*)L_16);
		*((float*)L_16) = (float)((float)il2cpp_codegen_add((float)L_17, (float)(0.05f)));
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		V_6 = 0;
		goto IL_0178;
	}

IL_0084:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		V_7 = 0;
		goto IL_0169;
	}

IL_008c:
	{
		// Vector3 offset = new Vector3(xIndex * indicatorDistance, 0.0f, yIndex * indicatorDistance);
		int32_t L_18 = V_6;
		int32_t L_19 = V_7;
		Vector3__ctor_m3353183577((Vector3_t3722313464 *)(&V_8), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_18))), (float)(0.2f))), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_19))), (float)(0.2f))), /*hidden argument*/NULL);
		// Vector3 position = corner + offset;
		Vector3_t3722313464  L_20 = V_5;
		Vector3_t3722313464  L_21 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_22 = Vector3_op_Addition_m779775034(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_9 = L_22;
		// Material material = null;
		V_10 = (Material_t340375123 *)NULL;
		// if (MixedRealityToolkit.BoundarySystem.Contains(position, Boundary.Type.PlayArea))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_23 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = V_9;
		NullCheck(L_23);
		bool L_25 = InterfaceFuncInvoker2< bool, Vector3_t3722313464 , int32_t >::Invoke(16 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_23, L_24, 0);
		if (!L_25)
		{
			goto IL_00d2;
		}
	}
	{
		// material = visualizationProfile.PlayAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_t915324864 * L_26 = V_4;
		NullCheck(L_26);
		Material_t340375123 * L_27 = MixedRealityBoundaryVisualizationProfile_get_PlayAreaMaterial_m3027729812(L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		// }
		goto IL_00ea;
	}

IL_00d2:
	{
		// else if (MixedRealityToolkit.BoundarySystem.Contains(position, Boundary.Type.TrackedArea))
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_29 = V_9;
		NullCheck(L_28);
		bool L_30 = InterfaceFuncInvoker2< bool, Vector3_t3722313464 , int32_t >::Invoke(16 /* System.Boolean Microsoft.MixedReality.Toolkit.Core.Interfaces.BoundarySystem.IMixedRealityBoundarySystem::Contains(UnityEngine.Vector3,UnityEngine.Experimental.XR.Boundary/Type) */, IMixedRealityBoundarySystem_t3781727551_il2cpp_TypeInfo_var, L_28, L_29, 1);
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// material = visualizationProfile.TrackedAreaMaterial;
		MixedRealityBoundaryVisualizationProfile_t915324864 * L_31 = V_4;
		NullCheck(L_31);
		Material_t340375123 * L_32 = MixedRealityBoundaryVisualizationProfile_get_TrackedAreaMaterial_m912114873(L_31, /*hidden argument*/NULL);
		V_10 = L_32;
	}

IL_00ea:
	{
		// if (material != null)
		Material_t340375123 * L_33 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_33, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_0163;
		}
	}
	{
		// GameObject marker = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t1113636619 * L_35 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_11 = L_35;
		// marker.name = "Boundary Demo Marker";
		GameObject_t1113636619 * L_36 = V_11;
		NullCheck(L_36);
		Object_set_name_m291480324(L_36, _stringLiteral730774742, /*hidden argument*/NULL);
		// marker.transform.parent = markerParent.transform;
		GameObject_t1113636619 * L_37 = V_11;
		NullCheck(L_37);
		Transform_t3600365921 * L_38 = GameObject_get_transform_m1369836730(L_37, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_39 = __this->get_markerParent_4();
		NullCheck(L_39);
		Transform_t3600365921 * L_40 = GameObject_get_transform_m1369836730(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_parent_m786917804(L_38, L_40, /*hidden argument*/NULL);
		// marker.transform.position = position;
		GameObject_t1113636619 * L_41 = V_11;
		NullCheck(L_41);
		Transform_t3600365921 * L_42 = GameObject_get_transform_m1369836730(L_41, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = V_9;
		NullCheck(L_42);
		Transform_set_position_m3387557959(L_42, L_43, /*hidden argument*/NULL);
		// marker.transform.localScale = Vector3.one * indicatorScale;
		GameObject_t1113636619 * L_44 = V_11;
		NullCheck(L_44);
		Transform_t3600365921 * L_45 = GameObject_get_transform_m1369836730(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_46 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_47 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_46, (0.1f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_set_localScale_m3053443106(L_45, L_47, /*hidden argument*/NULL);
		// marker.GetComponent<MeshRenderer>().sharedMaterial = material;
		GameObject_t1113636619 * L_48 = V_11;
		NullCheck(L_48);
		MeshRenderer_t587009260 * L_49 = GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712(L_48, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t587009260_m417518712_RuntimeMethod_var);
		Material_t340375123 * L_50 = V_10;
		NullCheck(L_49);
		Renderer_set_sharedMaterial_m2374163090(L_49, L_50, /*hidden argument*/NULL);
		// markers.Add(marker);
		List_1_t2585711361 * L_51 = __this->get_markers_5();
		GameObject_t1113636619 * L_52 = V_11;
		NullCheck(L_51);
		List_1_Add_m2765963565(L_51, L_52, /*hidden argument*/List_1_Add_m2765963565_RuntimeMethod_var);
	}

IL_0163:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
	}

IL_0169:
	{
		// for (int yIndex = 0; yIndex < indicatorCount; ++yIndex)
		int32_t L_54 = V_7;
		if ((((int32_t)L_54) < ((int32_t)((int32_t)20))))
		{
			goto IL_008c;
		}
	}
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_55, (int32_t)1));
	}

IL_0178:
	{
		// for (int xIndex = 0; xIndex < indicatorCount; ++xIndex)
		int32_t L_56 = V_6;
		if ((((int32_t)L_56) < ((int32_t)((int32_t)20))))
		{
			goto IL_0084;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoundaryVisualizationDemo__ctor_m1576285073 (BoundaryVisualizationDemo_t2326157821 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoundaryVisualizationDemo__ctor_m1576285073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<GameObject> markers = new List<GameObject>();
		List_1_t2585711361 * L_0 = (List_1_t2585711361 *)il2cpp_codegen_object_new(List_1_t2585711361_il2cpp_TypeInfo_var);
		List_1__ctor_m1424466557(L_0, /*hidden argument*/List_1__ctor_m1424466557_RuntimeMethod_var);
		__this->set_markers_5(L_0);
		// private bool showFloor = true;
		__this->set_showFloor_6((bool)1);
		// private bool showPlayArea = true;
		__this->set_showPlayArea_7((bool)1);
		// private bool showTrackedArea = true;
		__this->set_showTrackedArea_8((bool)1);
		// private bool showBoundaryWalls = true;
		__this->set_showBoundaryWalls_9((bool)1);
		// private bool showBoundaryCeiling = true;
		__this->set_showBoundaryCeiling_10((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::.cctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1374287669 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m1374287669_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3591545808 * L_0 = (U3CU3Ec_t3591545808 *)il2cpp_codegen_object_new(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2512151783(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3591545808_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2512151783 (U3CU3Ec_t3591545808 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<>c::<OnEnable>b__10_0()
extern "C" IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnEnableU3Eb__10_0_m1626971214 (U3CU3Ec_t3591545808 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3COnEnableU3Eb__10_0_m1626971214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// await new WaitUntil(() => MixedRealityToolkit.BoundarySystem != null);
		IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_MoveNext_m2312595140 (U3COnEnableU3Ed__10_t1612606443 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnEnableU3Ed__10_MoveNext_m2312595140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BoundaryVisualizationDemo_t2326157821 * V_1 = NULL;
	SimpleCoroutineAwaiter_t1961245047 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	Func_1_t3822001908 * G_B4_0 = NULL;
	Func_1_t3822001908 * G_B3_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		BoundaryVisualizationDemo_t2326157821 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0063;
			}
		}

IL_0011:
		{
			// await new WaitUntil(() => MixedRealityToolkit.BoundarySystem != null);
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var);
			Func_1_t3822001908 * L_3 = ((U3CU3Ec_t3591545808_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var))->get_U3CU3E9__10_0_1();
			Func_1_t3822001908 * L_4 = L_3;
			G_B3_0 = L_4;
			if (L_4)
			{
				G_B4_0 = L_4;
				goto IL_0030;
			}
		}

IL_0019:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var);
			U3CU3Ec_t3591545808 * L_5 = ((U3CU3Ec_t3591545808_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			intptr_t L_6 = (intptr_t)U3CU3Ec_U3COnEnableU3Eb__10_0_m1626971214_RuntimeMethod_var;
			Func_1_t3822001908 * L_7 = (Func_1_t3822001908 *)il2cpp_codegen_object_new(Func_1_t3822001908_il2cpp_TypeInfo_var);
			Func_1__ctor_m4025184632(L_7, L_5, (intptr_t)L_6, /*hidden argument*/Func_1__ctor_m4025184632_RuntimeMethod_var);
			Func_1_t3822001908 * L_8 = L_7;
			((U3CU3Ec_t3591545808_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3591545808_il2cpp_TypeInfo_var))->set_U3CU3E9__10_0_1(L_8);
			G_B4_0 = L_8;
		}

IL_0030:
		{
			WaitUntil_t3373419216 * L_9 = (WaitUntil_t3373419216 *)il2cpp_codegen_object_new(WaitUntil_t3373419216_il2cpp_TypeInfo_var);
			WaitUntil__ctor_m4227046299(L_9, G_B4_0, /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t1961245047 * L_10 = AwaiterExtensions_GetAwaiter_m145521691(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			SimpleCoroutineAwaiter_t1961245047 * L_11 = V_2;
			NullCheck(L_11);
			bool L_12 = SimpleCoroutineAwaiter_get_IsCompleted_m1501874044(L_11, /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_007f;
			}
		}

IL_0043:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			SimpleCoroutineAwaiter_t1961245047 * L_14 = V_2;
			__this->set_U3CU3Eu__1_3(L_14);
			AsyncVoidMethodBuilder_t3819840891 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3COnEnableU3Ed__10_t1612606443_m2726740902((AsyncVoidMethodBuilder_t3819840891 *)L_15, (SimpleCoroutineAwaiter_t1961245047 **)(&V_2), (U3COnEnableU3Ed__10_t1612606443 *)__this, /*hidden argument*/AsyncVoidMethodBuilder_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3COnEnableU3Ed__10_t1612606443_m2726740902_RuntimeMethod_var);
			goto IL_00c1;
		}

IL_0063:
		{
			RuntimeObject * L_16 = __this->get_U3CU3Eu__1_3();
			V_2 = ((SimpleCoroutineAwaiter_t1961245047 *)CastclassClass((RuntimeObject*)L_16, SimpleCoroutineAwaiter_t1961245047_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__1_3(NULL);
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_007f:
		{
			SimpleCoroutineAwaiter_t1961245047 * L_18 = V_2;
			NullCheck(L_18);
			SimpleCoroutineAwaiter_GetResult_m2823840508(L_18, /*hidden argument*/NULL);
			// MixedRealityToolkit.BoundarySystem.Register(gameObject);
			IL2CPP_RUNTIME_CLASS_INIT(MixedRealityToolkit_t1632592044_il2cpp_TypeInfo_var);
			RuntimeObject* L_19 = MixedRealityToolkit_get_BoundarySystem_m1131069912(NULL /*static, unused*/, /*hidden argument*/NULL);
			BoundaryVisualizationDemo_t2326157821 * L_20 = V_1;
			NullCheck(L_20);
			GameObject_t1113636619 * L_21 = Component_get_gameObject_m442555142(L_20, /*hidden argument*/NULL);
			NullCheck(L_19);
			InterfaceActionInvoker1< GameObject_t1113636619 * >::Invoke(2 /* System.Void Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSystem::Register(UnityEngine.GameObject) */, IMixedRealityEventSystem_t3431071463_il2cpp_TypeInfo_var, L_19, L_21);
			goto IL_00ae;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0097;
		throw e;
	}

CATCH_0097:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_22 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_23 = V_3;
		AsyncVoidMethodBuilder_SetException_m1109381469((AsyncVoidMethodBuilder_t3819840891 *)L_22, L_23, /*hidden argument*/NULL);
		goto IL_00c1;
	} // end catch (depth: 1)

IL_00ae:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncVoidMethodBuilder_t3819840891 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncVoidMethodBuilder_SetResult_m1991744790((AsyncVoidMethodBuilder_t3819840891 *)L_24, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__10_MoveNext_m2312595140_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__10_t1612606443 * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__10_t1612606443 *>(__this + 1);
	U3COnEnableU3Ed__10_MoveNext_m2312595140(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.BoundaryVisualizationDemo/<OnEnable>d__10::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3COnEnableU3Ed__10_SetStateMachine_m3698782622 (U3COnEnableU3Ed__10_t1612606443 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncVoidMethodBuilder_t3819840891 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncVoidMethodBuilder_SetStateMachine_m2384003025((AsyncVoidMethodBuilder_t3819840891 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3COnEnableU3Ed__10_SetStateMachine_m3698782622_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3COnEnableU3Ed__10_t1612606443 * _thisAdjusted = reinterpret_cast<U3COnEnableU3Ed__10_t1612606443 *>(__this + 1);
	U3COnEnableU3Ed__10_SetStateMachine_m3698782622(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::Start()
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_Start_m550672155 (LoFiFilterSelection_t2077164845 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_Start_m550672155_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loFiEffect = gameObject.GetComponent<AudioLoFiEffect>();
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioLoFiEffect_t3876553922 * L_1 = GameObject_GetComponent_TisAudioLoFiEffect_t3876553922_m682209347(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioLoFiEffect_t3876553922_m682209347_RuntimeMethod_var);
		__this->set_loFiEffect_8(L_1);
		// objectRenderer = gameObject.GetComponent<Renderer>();
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Renderer_t2627027031 * L_3 = GameObject_GetComponent_TisRenderer_t2627027031_m171735387(L_2, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m171735387_RuntimeMethod_var);
		__this->set_objectRenderer_9(L_3);
		// SetEmitterMaterial(loFiEffect.SourceQuality);
		AudioLoFiEffect_t3876553922 * L_4 = __this->get_loFiEffect_8();
		NullCheck(L_4);
		int32_t L_5 = AudioLoFiEffect_get_SourceQuality_m4065393204(L_4, /*hidden argument*/NULL);
		LoFiFilterSelection_SetEmitterMaterial_m1742289396(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerClicked(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerClicked_m2664884081 (LoFiFilterSelection_t2077164845 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoFiFilterSelection_OnPointerClicked_m2664884081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (loFiEffect == null) { return; }
		AudioLoFiEffect_t3876553922 * L_0 = __this->get_loFiEffect_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (loFiEffect == null) { return; }
		return;
	}

IL_000f:
	{
		// AudioLoFiSourceQualityType sourceQuality = loFiEffect.SourceQuality;
		AudioLoFiEffect_t3876553922 * L_2 = __this->get_loFiEffect_8();
		NullCheck(L_2);
		int32_t L_3 = AudioLoFiEffect_get_SourceQuality_m4065393204(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// switch (sourceQuality)
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_0041;
			}
			case 2:
			{
				goto IL_003b;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_003f;
			}
		}
	}
	{
		goto IL_0041;
	}

IL_0037:
	{
		// sourceQuality = AudioLoFiSourceQualityType.AmRadio;
		V_0 = 2;
		// break;
		goto IL_0041;
	}

IL_003b:
	{
		// sourceQuality = AudioLoFiSourceQualityType.FullRange;
		V_0 = 4;
		// break;
		goto IL_0041;
	}

IL_003f:
	{
		// sourceQuality = AudioLoFiSourceQualityType.NarrowBandTelephony;
		V_0 = 0;
	}

IL_0041:
	{
		// SetEmitterMaterial(sourceQuality);
		int32_t L_5 = V_0;
		LoFiFilterSelection_SetEmitterMaterial_m1742289396(__this, L_5, /*hidden argument*/NULL);
		// loFiEffect.SourceQuality = sourceQuality;
		AudioLoFiEffect_t3876553922 * L_6 = __this->get_loFiEffect_8();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		AudioLoFiEffect_set_SourceQuality_m2929235787(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerDown(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerDown_m2731153876 (LoFiFilterSelection_t2077164845 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::OnPointerUp(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_OnPointerUp_m3409434326 (LoFiFilterSelection_t2077164845 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	{
		// { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::SetEmitterMaterial(Microsoft.MixedReality.Toolkit.SDK.Audio.Influencers.AudioLoFiSourceQualityType)
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection_SetEmitterMaterial_m1742289396 (LoFiFilterSelection_t2077164845 * __this, int32_t ___sourceQuality0, const RuntimeMethod* method)
{
	Material_t340375123 * V_0 = NULL;
	{
		// Material emitterMaterial = UnknownQuality;
		Material_t340375123 * L_0 = __this->get_UnknownQuality_7();
		V_0 = L_0;
		// switch (sourceQuality)
		int32_t L_1 = ___sourceQuality0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0023;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_002c;
			}
			case 3:
			{
				goto IL_003c;
			}
			case 4:
			{
				goto IL_0035;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0023:
	{
		// emitterMaterial = NarrowBandTelephony;
		Material_t340375123 * L_2 = __this->get_NarrowBandTelephony_4();
		V_0 = L_2;
		// break;
		goto IL_003c;
	}

IL_002c:
	{
		// emitterMaterial = AmRadio;
		Material_t340375123 * L_3 = __this->get_AmRadio_5();
		V_0 = L_3;
		// break;
		goto IL_003c;
	}

IL_0035:
	{
		// emitterMaterial = FullRange;
		Material_t340375123 * L_4 = __this->get_FullRange_6();
		V_0 = L_4;
	}

IL_003c:
	{
		// objectRenderer.sharedMaterial = emitterMaterial;
		Renderer_t2627027031 * L_5 = __this->get_objectRenderer_9();
		Material_t340375123 * L_6 = V_0;
		NullCheck(L_5);
		Renderer_set_sharedMaterial_m2374163090(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.LoFiFilterSelection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LoFiFilterSelection__ctor_m3830843689 (LoFiFilterSelection_t2077164845 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::Awake()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_Awake_m444023687 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	{
		// BuildMatrix();
		MaterialMatrix_BuildMatrix_m2579498062(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::BuildMatrix()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix_BuildMatrix_m2579498062 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix_BuildMatrix_m2579498062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t777473367 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	int32_t V_6 = 0;
	Transform_t3600365921 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Material_t340375123 * V_10 = NULL;
	Renderer_t2627027031 * V_11 = NULL;
	{
		// List<Transform> children = transform.Cast<Transform>().ToList();
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = Enumerable_Cast_TisTransform_t3600365921_m3857377578(NULL /*static, unused*/, L_0, /*hidden argument*/Enumerable_Cast_TisTransform_t3600365921_m3857377578_RuntimeMethod_var);
		List_1_t777473367 * L_2 = Enumerable_ToList_TisTransform_t3600365921_m4208630033(NULL /*static, unused*/, L_1, /*hidden argument*/Enumerable_ToList_TisTransform_t3600365921_m4208630033_RuntimeMethod_var);
		V_0 = L_2;
		// for (int i = 0; i < children.Count; ++i)
		V_6 = 0;
		goto IL_0047;
	}

IL_0016:
	{
		// Transform child = children[i];
		List_1_t777473367 * L_3 = V_0;
		int32_t L_4 = V_6;
		NullCheck(L_3);
		Transform_t3600365921 * L_5 = List_1_get_Item_m3651111564(L_3, L_4, /*hidden argument*/List_1_get_Item_m3651111564_RuntimeMethod_var);
		V_7 = L_5;
		// if (Application.isPlaying)
		bool L_6 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// Destroy(child.gameObject);
		Transform_t3600365921 * L_7 = V_7;
		NullCheck(L_7);
		GameObject_t1113636619 * L_8 = Component_get_gameObject_m442555142(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		// }
		goto IL_0041;
	}

IL_0035:
	{
		// DestroyImmediate(child.gameObject);
		Transform_t3600365921 * L_9 = V_7;
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m3193525861(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_11 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < children.Count; ++i)
		int32_t L_12 = V_6;
		List_1_t777473367 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = List_1_get_Count_m3249086042(L_13, /*hidden argument*/List_1_get_Count_m3249086042_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0016;
		}
	}
	{
		// if (material == null)
		Material_t340375123 * L_15 = __this->get_material_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_15, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_006a;
		}
	}
	{
		// Debug.LogError("Failed to build material matrix due to missing material.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1243785301, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006a:
	{
		// Vector3 position = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_17;
		// int firstPropertyId = Shader.PropertyToID(firstPropertyName);
		String_t* L_18 = __this->get_firstPropertyName_7();
		int32_t L_19 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// int secondPropertyId = Shader.PropertyToID(secondPropertyName);
		String_t* L_20 = __this->get_secondPropertyName_8();
		int32_t L_21 = Shader_PropertyToID_m1030499873(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		// float firstProperty = 0.0f;
		V_4 = (0.0f);
		// float secondProperty = 0.0f;
		V_5 = (0.0f);
		// for (int i = 0; i < dimension; ++i)
		V_8 = 0;
		goto IL_01af;
	}

IL_009e:
	{
		// for (int j = 0; j < dimension; ++j)
		V_9 = 0;
		goto IL_015e;
	}

IL_00a6:
	{
		// GameObject sphere = GameObject.CreatePrimitive(PrimitiveType.Sphere);
		GameObject_t1113636619 * L_22 = GameObject_CreatePrimitive_m2902598419(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		// sphere.name = "Sphere" + (i * dimension + j);
		GameObject_t1113636619 * L_23 = L_22;
		int32_t L_24 = V_8;
		int32_t L_25 = __this->get_dimension_5();
		int32_t L_26 = V_9;
		int32_t L_27 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)L_25)), (int32_t)L_26));
		RuntimeObject * L_28 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2438763459, L_28, /*hidden argument*/NULL);
		NullCheck(L_23);
		Object_set_name_m291480324(L_23, L_29, /*hidden argument*/NULL);
		// sphere.transform.parent = transform;
		GameObject_t1113636619 * L_30 = L_23;
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = GameObject_get_transform_m1369836730(L_30, /*hidden argument*/NULL);
		Transform_t3600365921 * L_32 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_parent_m786917804(L_31, L_32, /*hidden argument*/NULL);
		// sphere.transform.localPosition = position;
		GameObject_t1113636619 * L_33 = L_30;
		NullCheck(L_33);
		Transform_t3600365921 * L_34 = GameObject_get_transform_m1369836730(L_33, /*hidden argument*/NULL);
		Vector3_t3722313464  L_35 = V_1;
		NullCheck(L_34);
		Transform_set_localPosition_m4128471975(L_34, L_35, /*hidden argument*/NULL);
		// position.x += 1.0f + positionOffset;
		float* L_36 = (&V_1)->get_address_of_x_2();
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		float L_39 = __this->get_positionOffset_6();
		*((float*)L_37) = (float)((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_39))));
		// Material newMaterial = new Material(material);
		Material_t340375123 * L_40 = __this->get_material_4();
		Material_t340375123 * L_41 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_41, L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		// newMaterial.SetFloat(firstPropertyId, firstProperty);
		Material_t340375123 * L_42 = V_10;
		int32_t L_43 = V_2;
		float L_44 = V_4;
		NullCheck(L_42);
		Material_SetFloat_m1688718093(L_42, L_43, L_44, /*hidden argument*/NULL);
		// newMaterial.SetFloat(secondPropertyId, secondProperty);
		Material_t340375123 * L_45 = V_10;
		int32_t L_46 = V_3;
		float L_47 = V_5;
		NullCheck(L_45);
		Material_SetFloat_m1688718093(L_45, L_46, L_47, /*hidden argument*/NULL);
		// Renderer renderer = sphere.GetComponent<Renderer>();
		NullCheck(L_33);
		Renderer_t2627027031 * L_48 = GameObject_GetComponent_TisRenderer_t2627027031_m171735387(L_33, /*hidden argument*/GameObject_GetComponent_TisRenderer_t2627027031_m171735387_RuntimeMethod_var);
		V_11 = L_48;
		// if (Application.isPlaying)
		bool L_49 = Application_get_isPlaying_m100394690(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_013b;
		}
	}
	{
		// renderer.material = newMaterial;
		Renderer_t2627027031 * L_50 = V_11;
		Material_t340375123 * L_51 = V_10;
		NullCheck(L_50);
		Renderer_set_material_m1157964140(L_50, L_51, /*hidden argument*/NULL);
		// }
		goto IL_0144;
	}

IL_013b:
	{
		// renderer.sharedMaterial = newMaterial;
		Renderer_t2627027031 * L_52 = V_11;
		Material_t340375123 * L_53 = V_10;
		NullCheck(L_52);
		Renderer_set_sharedMaterial_m2374163090(L_52, L_53, /*hidden argument*/NULL);
	}

IL_0144:
	{
		// firstProperty += 1.0f / (dimension - 1);
		float L_54 = V_4;
		int32_t L_55 = __this->get_dimension_5();
		V_4 = ((float)il2cpp_codegen_add((float)L_54, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_55, (int32_t)1)))))))));
		// for (int j = 0; j < dimension; ++j)
		int32_t L_56 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_015e:
	{
		// for (int j = 0; j < dimension; ++j)
		int32_t L_57 = V_9;
		int32_t L_58 = __this->get_dimension_5();
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00a6;
		}
	}
	{
		// position.x = 0.0f;
		(&V_1)->set_x_2((0.0f));
		// position.z += 1.0f + positionOffset;
		float* L_59 = (&V_1)->get_address_of_z_4();
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		float L_62 = __this->get_positionOffset_6();
		*((float*)L_60) = (float)((float)il2cpp_codegen_add((float)L_61, (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_62))));
		// firstProperty = 0.0f;
		V_4 = (0.0f);
		// secondProperty += 1.0f / (dimension - 1);
		float L_63 = V_5;
		int32_t L_64 = __this->get_dimension_5();
		V_5 = ((float)il2cpp_codegen_add((float)L_63, (float)((float)((float)(1.0f)/(float)(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_64, (int32_t)1)))))))));
		// for (int i = 0; i < dimension; ++i)
		int32_t L_65 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
	}

IL_01af:
	{
		// for (int i = 0; i < dimension; ++i)
		int32_t L_66 = V_8;
		int32_t L_67 = __this->get_dimension_5();
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_009e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.StandardShader.MaterialMatrix::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialMatrix__ctor_m3010007991 (MaterialMatrix_t2973875676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MaterialMatrix__ctor_m3010007991_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int dimension = 5;
		__this->set_dimension_5(5);
		// private float positionOffset = 0.1f;
		__this->set_positionOffset_6((0.1f));
		// private string firstPropertyName = "_Metallic";
		__this->set_firstPropertyName_7(_stringLiteral3258293634);
		// private string secondPropertyName = "_Glossiness";
		__this->set_secondPropertyName_8(_stringLiteral778727724);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::Awake()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_Awake_m712097455 (SwapVolume_t3528663124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_Awake_m712097455_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (hideThisObject == null || spawnThisPrefab == null)
		GameObject_t1113636619 * L_0 = __this->get_hideThisObject_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_spawnThisPrefab_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}

IL_001c:
	{
		// Destroy(gameObject);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::Start()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_Start_m3851863744 (SwapVolume_t3528663124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_Start_m3851863744_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnedObject = Instantiate(spawnThisPrefab, hideThisObject.transform.position, hideThisObject.transform.rotation);
		GameObject_t1113636619 * L_0 = __this->get_spawnThisPrefab_5();
		GameObject_t1113636619 * L_1 = __this->get_hideThisObject_4();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_4 = __this->get_hideThisObject_4();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t2301928331  L_6 = Transform_get_rotation_m3502953881(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_7 = Object_Instantiate_TisGameObject_t1113636619_m3572510816(NULL /*static, unused*/, L_0, L_3, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3572510816_RuntimeMethod_var);
		__this->set_spawnedObject_8(L_7);
		// spawnedObject.SetActive(false);
		GameObject_t1113636619 * L_8 = __this->get_spawnedObject_8();
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, (bool)0, /*hidden argument*/NULL);
		// solverHandler = spawnedObject.GetComponent<SolverHandler>();
		GameObject_t1113636619 * L_9 = __this->get_spawnedObject_8();
		NullCheck(L_9);
		SolverHandler_t2870684933 * L_10 = GameObject_GetComponent_TisSolverHandler_t2870684933_m470628409(L_9, /*hidden argument*/GameObject_GetComponent_TisSolverHandler_t2870684933_m470628409_RuntimeMethod_var);
		__this->set_solverHandler_7(L_10);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerUp(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerUp_m3658601243 (SwapVolume_t3528663124 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerUp(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerDown(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerDown_m1570903089 (SwapVolume_t3528663124 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	{
		// public void OnPointerDown(MixedRealityPointerEventData eventData) { }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnPointerClicked(Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.MixedRealityPointerEventData)
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnPointerClicked_m3841587597 (SwapVolume_t3528663124 * __this, MixedRealityPointerEventData_t420287197 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_OnPointerClicked_m3841587597_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawnedObject.activeSelf)
		GameObject_t1113636619 * L_0 = __this->get_spawnedObject_8();
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		// spawnedObject.SetActive(false);
		GameObject_t1113636619 * L_2 = __this->get_spawnedObject_8();
		NullCheck(L_2);
		GameObject_SetActive_m796801857(L_2, (bool)0, /*hidden argument*/NULL);
		// hideThisObject.SetActive(true);
		GameObject_t1113636619 * L_3 = __this->get_hideThisObject_4();
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0081;
	}

IL_0027:
	{
		// spawnedObject.SetActive(true);
		GameObject_t1113636619 * L_4 = __this->get_spawnedObject_8();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)1, /*hidden argument*/NULL);
		// if (updateSolverTargetToClickSource && solverHandler != null)
		bool L_5 = __this->get_updateSolverTargetToClickSource_6();
		if (!L_5)
		{
			goto IL_0075;
		}
	}
	{
		SolverHandler_t2870684933 * L_6 = __this->get_solverHandler_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0075;
		}
	}
	{
		// if (eventData.Handedness == Handedness.Right)
		MixedRealityPointerEventData_t420287197 * L_8 = ___eventData0;
		NullCheck(L_8);
		uint8_t L_9 = InputEventData_get_Handedness_m1384314441(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_0060;
		}
	}
	{
		// solverHandler.TrackedObjectToReference = TrackedObjectType.MotionControllerRight;
		SolverHandler_t2870684933 * L_10 = __this->get_solverHandler_7();
		NullCheck(L_10);
		SolverHandler_set_TrackedObjectToReference_m866810864(L_10, 2, /*hidden argument*/NULL);
		// }
		goto IL_0075;
	}

IL_0060:
	{
		// else if (eventData.Handedness == Handedness.Left)
		MixedRealityPointerEventData_t420287197 * L_11 = ___eventData0;
		NullCheck(L_11);
		uint8_t L_12 = InputEventData_get_Handedness_m1384314441(L_11, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0075;
		}
	}
	{
		// solverHandler.TrackedObjectToReference = TrackedObjectType.MotionControllerLeft;
		SolverHandler_t2870684933 * L_13 = __this->get_solverHandler_7();
		NullCheck(L_13);
		SolverHandler_set_TrackedObjectToReference_m866810864(L_13, 1, /*hidden argument*/NULL);
	}

IL_0075:
	{
		// hideThisObject.SetActive(false);
		GameObject_t1113636619 * L_14 = __this->get_hideThisObject_4();
		NullCheck(L_14);
		GameObject_SetActive_m796801857(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// eventData.Use(); // Mark the event as used, so it doesn't fall through to other handlers.
		MixedRealityPointerEventData_t420287197 * L_15 = ___eventData0;
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(5 /* System.Void UnityEngine.EventSystems.AbstractEventData::Use() */, L_15);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume_OnDestroy_m1497649539 (SwapVolume_t3528663124 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SwapVolume_OnDestroy_m1497649539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(spawnedObject);
		GameObject_t1113636619 * L_0 = __this->get_spawnedObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		// Destroy(hideThisObject);
		GameObject_t1113636619 * L_1 = __this->get_hideThisObject_4();
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Examples.Demos.SwapVolume::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SwapVolume__ctor_m3096368400 (SwapVolume_t3528663124 * __this, const RuntimeMethod* method)
{
	{
		// private bool updateSolverTargetToClickSource = true;
		__this->set_updateSolverTargetToClickSource_6((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
