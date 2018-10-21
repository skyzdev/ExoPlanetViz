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


// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t1165089545;
// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager
struct WindowsDictationInputDeviceManager_t3966259019;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController
struct IMixedRealityController_t849956740;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityControllerVisualizer
struct IMixedRealityControllerVisualizer_t307987831;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.Events.IMixedRealityEventSource
struct IMixedRealityEventSource_t3753294479;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource
struct IMixedRealityInputSource_t86469781;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer
struct IMixedRealityPointer_t3090763169;
// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot
struct IMixedRealityTeleportHotSpot_t1408459405;
// Microsoft.MixedReality.Toolkit.Core.Utilities.Physics.RaycastResultComparer
struct RaycastResultComparer_t2820336946;
// System.Action
struct Action_t1264377477;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.ICollection`1<UnityEngine.Transform>
struct ICollection_1_t2133550859;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t537414295;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t2585711361;
// System.Collections.Generic.Queue`1<UnityEngine.Transform>
struct Queue_1_t3446625415;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`2<UnityEngine.Vector2,System.Single>
struct Func_2_t3672504941;
// System.Func`2<UnityEngine.Vector3,System.Single>
struct Func_2_t3934069716;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_t2326897723;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t4022128754;
// System.Threading.Tasks.Task`1<UnityEngine.AudioClip>
struct Task_1_t791462544;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t4150874583;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.WaitUntil
struct WaitUntil_t3373419216;
// UnityEngine.Windows.Speech.DictationRecognizer
struct DictationRecognizer_t838322161;
// UnityEngine.Windows.Speech.KeywordRecognizer
struct KeywordRecognizer_t2141680640;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_t1918115372;




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
#ifndef BASEDEVICEMANAGER_T1510416362_H
#define BASEDEVICEMANAGER_T1510416362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.BaseDeviceManager
struct  BaseDeviceManager_t1510416362  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Devices.BaseDeviceManager::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.UInt32 Microsoft.MixedReality.Toolkit.Core.Devices.BaseDeviceManager::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseDeviceManager_t1510416362, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseDeviceManager_t1510416362, ___U3CPriorityU3Ek__BackingField_1)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_1() const { return ___U3CPriorityU3Ek__BackingField_1; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_1() { return &___U3CPriorityU3Ek__BackingField_1; }
	inline void set_U3CPriorityU3Ek__BackingField_1(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEDEVICEMANAGER_T1510416362_H
#ifndef U3CU3EC_T1829886567_H
#define U3CU3EC_T1829886567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c
struct  U3CU3Ec_t1829886567  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1829886567_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c::<>9
	U3CU3Ec_t1829886567 * ___U3CU3E9_0;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c::<>9__0_0
	Func_1_t3822001908 * ___U3CU3E9__0_0_1;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c::<>9__0_1
	Func_1_t3822001908 * ___U3CU3E9__0_1_2;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c::<>9__0_2
	Func_1_t3822001908 * ___U3CU3E9__0_2_3;
	// System.Func`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<>c::<>9__0_3
	Func_1_t3822001908 * ___U3CU3E9__0_3_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1829886567_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1829886567 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1829886567 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1829886567 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1829886567_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t3822001908 * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t3822001908 * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1829886567_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_1_t3822001908 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_1_t3822001908 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_1_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1829886567_StaticFields, ___U3CU3E9__0_2_3)); }
	inline Func_1_t3822001908 * get_U3CU3E9__0_2_3() const { return ___U3CU3E9__0_2_3; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__0_2_3() { return &___U3CU3E9__0_2_3; }
	inline void set_U3CU3E9__0_2_3(Func_1_t3822001908 * value)
	{
		___U3CU3E9__0_2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1829886567_StaticFields, ___U3CU3E9__0_3_4)); }
	inline Func_1_t3822001908 * get_U3CU3E9__0_3_4() const { return ___U3CU3E9__0_3_4; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3E9__0_3_4() { return &___U3CU3E9__0_3_4; }
	inline void set_U3CU3E9__0_3_4(Func_1_t3822001908 * value)
	{
		___U3CU3E9__0_3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__0_3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1829886567_H
#ifndef ANIMATIONCURVEEXTENSIONS_T3529361807_H
#define ANIMATIONCURVEEXTENSIONS_T3529361807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.AnimationCurveExtensions
struct  AnimationCurveExtensions_t3529361807  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATIONCURVEEXTENSIONS_T3529361807_H
#ifndef ARRAYEXTENSIONS_T2478473446_H
#define ARRAYEXTENSIONS_T2478473446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.ArrayExtensions
struct  ArrayExtensions_t2478473446  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYEXTENSIONS_T2478473446_H
#ifndef BOUNDSEXTENSIONS_T1258715425_H
#define BOUNDSEXTENSIONS_T1258715425_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.BoundsExtensions
struct  BoundsExtensions_t1258715425  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDSEXTENSIONS_T1258715425_H
#ifndef CAMERAEXTENSIONS_T4283437890_H
#define CAMERAEXTENSIONS_T4283437890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.CameraExtensions
struct  CameraExtensions_t4283437890  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERAEXTENSIONS_T4283437890_H
#ifndef COLLECTIONSEXTENSIONS_T3832715001_H
#define COLLECTIONSEXTENSIONS_T3832715001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.CollectionsExtensions
struct  CollectionsExtensions_t3832715001  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONSEXTENSIONS_T3832715001_H
#ifndef COLOR32EXTENSIONS_T2296763354_H
#define COLOR32EXTENSIONS_T2296763354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.Color32Extensions
struct  Color32Extensions_t2296763354  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32EXTENSIONS_T2296763354_H
#ifndef COMPAREREXTENSIONS_T4116699950_H
#define COMPAREREXTENSIONS_T4116699950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.ComparerExtensions
struct  ComparerExtensions_t4116699950  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREREXTENSIONS_T4116699950_H
#ifndef COMPONENTEXTENSIONS_T2213797013_H
#define COMPONENTEXTENSIONS_T2213797013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.ComponentExtensions
struct  ComponentExtensions_t2213797013  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTEXTENSIONS_T2213797013_H
#ifndef DOUBLEEXTENSIONS_T1212427671_H
#define DOUBLEEXTENSIONS_T1212427671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.DoubleExtensions
struct  DoubleExtensions_t1212427671  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLEEXTENSIONS_T1212427671_H
#ifndef ENUMERABLEEXTENSIONS_T1007490696_H
#define ENUMERABLEEXTENSIONS_T1007490696_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.EnumerableExtensions
struct  EnumerableExtensions_t1007490696  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERABLEEXTENSIONS_T1007490696_H
#ifndef EVENTSYSTEMEXTENSIONS_T25409484_H
#define EVENTSYSTEMEXTENSIONS_T25409484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.EventSystemExtensions
struct  EventSystemExtensions_t25409484  : public RuntimeObject
{
public:

public:
};

struct EventSystemExtensions_t25409484_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> Microsoft.MixedReality.Toolkit.Core.Extensions.EventSystemExtensions::RaycastResults
	List_1_t537414295 * ___RaycastResults_0;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.Physics.RaycastResultComparer Microsoft.MixedReality.Toolkit.Core.Extensions.EventSystemExtensions::RaycastResultComparer
	RaycastResultComparer_t2820336946 * ___RaycastResultComparer_1;

public:
	inline static int32_t get_offset_of_RaycastResults_0() { return static_cast<int32_t>(offsetof(EventSystemExtensions_t25409484_StaticFields, ___RaycastResults_0)); }
	inline List_1_t537414295 * get_RaycastResults_0() const { return ___RaycastResults_0; }
	inline List_1_t537414295 ** get_address_of_RaycastResults_0() { return &___RaycastResults_0; }
	inline void set_RaycastResults_0(List_1_t537414295 * value)
	{
		___RaycastResults_0 = value;
		Il2CppCodeGenWriteBarrier((&___RaycastResults_0), value);
	}

	inline static int32_t get_offset_of_RaycastResultComparer_1() { return static_cast<int32_t>(offsetof(EventSystemExtensions_t25409484_StaticFields, ___RaycastResultComparer_1)); }
	inline RaycastResultComparer_t2820336946 * get_RaycastResultComparer_1() const { return ___RaycastResultComparer_1; }
	inline RaycastResultComparer_t2820336946 ** get_address_of_RaycastResultComparer_1() { return &___RaycastResultComparer_1; }
	inline void set_RaycastResultComparer_1(RaycastResultComparer_t2820336946 * value)
	{
		___RaycastResultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___RaycastResultComparer_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTSYSTEMEXTENSIONS_T25409484_H
#ifndef FLOATEXTENSIONS_T1942405394_H
#define FLOATEXTENSIONS_T1942405394_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.FloatExtensions
struct  FloatExtensions_t1942405394  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLOATEXTENSIONS_T1942405394_H
#ifndef GAMEOBJECTEXTENSIONS_T3779083126_H
#define GAMEOBJECTEXTENSIONS_T3779083126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.GameObjectExtensions
struct  GameObjectExtensions_t3779083126  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTEXTENSIONS_T3779083126_H
#ifndef GESTURERECOGNIZEREXTENSIONS_T2880337444_H
#define GESTURERECOGNIZEREXTENSIONS_T2880337444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.GestureRecognizerExtensions
struct  GestureRecognizerExtensions_t2880337444  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GESTURERECOGNIZEREXTENSIONS_T2880337444_H
#ifndef INTERACTIONSOURCEEXTENSIONS_T3958107018_H
#define INTERACTIONSOURCEEXTENSIONS_T3958107018_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions
struct  InteractionSourceExtensions_t3958107018  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCEEXTENSIONS_T3958107018_H
#ifndef LAYEREXTENSIONS_T1006611091_H
#define LAYEREXTENSIONS_T1006611091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.LayerExtensions
struct  LayerExtensions_t1006611091  : public RuntimeObject
{
public:

public:
};

struct LayerExtensions_t1006611091_StaticFields
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.LayerExtensions::defaultLayer
	int32_t ___defaultLayer_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.LayerExtensions::surfaceLayer
	int32_t ___surfaceLayer_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.LayerExtensions::interactionLayer
	int32_t ___interactionLayer_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.LayerExtensions::activationLayer
	int32_t ___activationLayer_4;

public:
	inline static int32_t get_offset_of_defaultLayer_1() { return static_cast<int32_t>(offsetof(LayerExtensions_t1006611091_StaticFields, ___defaultLayer_1)); }
	inline int32_t get_defaultLayer_1() const { return ___defaultLayer_1; }
	inline int32_t* get_address_of_defaultLayer_1() { return &___defaultLayer_1; }
	inline void set_defaultLayer_1(int32_t value)
	{
		___defaultLayer_1 = value;
	}

	inline static int32_t get_offset_of_surfaceLayer_2() { return static_cast<int32_t>(offsetof(LayerExtensions_t1006611091_StaticFields, ___surfaceLayer_2)); }
	inline int32_t get_surfaceLayer_2() const { return ___surfaceLayer_2; }
	inline int32_t* get_address_of_surfaceLayer_2() { return &___surfaceLayer_2; }
	inline void set_surfaceLayer_2(int32_t value)
	{
		___surfaceLayer_2 = value;
	}

	inline static int32_t get_offset_of_interactionLayer_3() { return static_cast<int32_t>(offsetof(LayerExtensions_t1006611091_StaticFields, ___interactionLayer_3)); }
	inline int32_t get_interactionLayer_3() const { return ___interactionLayer_3; }
	inline int32_t* get_address_of_interactionLayer_3() { return &___interactionLayer_3; }
	inline void set_interactionLayer_3(int32_t value)
	{
		___interactionLayer_3 = value;
	}

	inline static int32_t get_offset_of_activationLayer_4() { return static_cast<int32_t>(offsetof(LayerExtensions_t1006611091_StaticFields, ___activationLayer_4)); }
	inline int32_t get_activationLayer_4() const { return ___activationLayer_4; }
	inline int32_t* get_address_of_activationLayer_4() { return &___activationLayer_4; }
	inline void set_activationLayer_4(int32_t value)
	{
		___activationLayer_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYEREXTENSIONS_T1006611091_H
#ifndef MATHEXTENSIONS_T2088275029_H
#define MATHEXTENSIONS_T2088275029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.MathExtensions
struct  MathExtensions_t2088275029  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHEXTENSIONS_T2088275029_H
#ifndef QUATERNIONEXTENSIONS_T1464199316_H
#define QUATERNIONEXTENSIONS_T1464199316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.QuaternionExtensions
struct  QuaternionExtensions_t1464199316  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNIONEXTENSIONS_T1464199316_H
#ifndef RAYEXTENSIONS_T3219403024_H
#define RAYEXTENSIONS_T3219403024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.RayExtensions
struct  RayExtensions_t3219403024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYEXTENSIONS_T3219403024_H
#ifndef STRINGEXTENSIONS_T2942039378_H
#define STRINGEXTENSIONS_T2942039378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.StringExtensions
struct  StringExtensions_t2942039378  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGEXTENSIONS_T2942039378_H
#ifndef TRANSFORMEXTENSIONS_T4234824430_H
#define TRANSFORMEXTENSIONS_T4234824430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions
struct  TransformExtensions_t4234824430  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMEXTENSIONS_T4234824430_H
#ifndef U3CENUMERATEANCESTORSU3ED__8_T2194500854_H
#define U3CENUMERATEANCESTORSU3ED__8_T2194500854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8
struct  U3CEnumerateAncestorsU3Ed__8_t2194500854  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>2__current
	Transform_t3600365921 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::includeSelf
	bool ___includeSelf_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_4;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::startTransform
	Transform_t3600365921 * ___startTransform_5;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<>3__startTransform
	Transform_t3600365921 * ___U3CU3E3__startTransform_6;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateAncestors>d__8::<transform>5__2
	Transform_t3600365921 * ___U3CtransformU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CU3E2__current_1)); }
	inline Transform_t3600365921 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_t3600365921 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_includeSelf_3() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___includeSelf_3)); }
	inline bool get_includeSelf_3() const { return ___includeSelf_3; }
	inline bool* get_address_of_includeSelf_3() { return &___includeSelf_3; }
	inline void set_includeSelf_3(bool value)
	{
		___includeSelf_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__includeSelf_4() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CU3E3__includeSelf_4)); }
	inline bool get_U3CU3E3__includeSelf_4() const { return ___U3CU3E3__includeSelf_4; }
	inline bool* get_address_of_U3CU3E3__includeSelf_4() { return &___U3CU3E3__includeSelf_4; }
	inline void set_U3CU3E3__includeSelf_4(bool value)
	{
		___U3CU3E3__includeSelf_4 = value;
	}

	inline static int32_t get_offset_of_startTransform_5() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___startTransform_5)); }
	inline Transform_t3600365921 * get_startTransform_5() const { return ___startTransform_5; }
	inline Transform_t3600365921 ** get_address_of_startTransform_5() { return &___startTransform_5; }
	inline void set_startTransform_5(Transform_t3600365921 * value)
	{
		___startTransform_5 = value;
		Il2CppCodeGenWriteBarrier((&___startTransform_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__startTransform_6() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CU3E3__startTransform_6)); }
	inline Transform_t3600365921 * get_U3CU3E3__startTransform_6() const { return ___U3CU3E3__startTransform_6; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E3__startTransform_6() { return &___U3CU3E3__startTransform_6; }
	inline void set_U3CU3E3__startTransform_6(Transform_t3600365921 * value)
	{
		___U3CU3E3__startTransform_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__startTransform_6), value);
	}

	inline static int32_t get_offset_of_U3CtransformU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateAncestorsU3Ed__8_t2194500854, ___U3CtransformU3E5__2_7)); }
	inline Transform_t3600365921 * get_U3CtransformU3E5__2_7() const { return ___U3CtransformU3E5__2_7; }
	inline Transform_t3600365921 ** get_address_of_U3CtransformU3E5__2_7() { return &___U3CtransformU3E5__2_7; }
	inline void set_U3CtransformU3E5__2_7(Transform_t3600365921 * value)
	{
		___U3CtransformU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransformU3E5__2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATEANCESTORSU3ED__8_T2194500854_H
#ifndef U3CENUMERATEHIERARCHYCOREU3ED__4_T1512208872_H
#define U3CENUMERATEHIERARCHYCOREU3ED__4_T1512208872_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4
struct  U3CEnumerateHierarchyCoreU3Ed__4_t1512208872  : public RuntimeObject
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>2__current
	Transform_t3600365921 * ___U3CU3E2__current_1;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::root
	Transform_t3600365921 * ___root_3;
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__root
	Transform_t3600365921 * ___U3CU3E3__root_4;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::ignore
	RuntimeObject* ___ignore_5;
	// System.Collections.Generic.ICollection`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<>3__ignore
	RuntimeObject* ___U3CU3E3__ignore_6;
	// System.Collections.Generic.Queue`1<UnityEngine.Transform> Microsoft.MixedReality.Toolkit.Core.Extensions.TransformExtensions/<EnumerateHierarchyCore>d__4::<transformQueue>5__2
	Queue_1_t3446625415 * ___U3CtransformQueueU3E5__2_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CU3E2__current_1)); }
	inline Transform_t3600365921 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Transform_t3600365921 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_root_3() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___root_3)); }
	inline Transform_t3600365921 * get_root_3() const { return ___root_3; }
	inline Transform_t3600365921 ** get_address_of_root_3() { return &___root_3; }
	inline void set_root_3(Transform_t3600365921 * value)
	{
		___root_3 = value;
		Il2CppCodeGenWriteBarrier((&___root_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_4() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CU3E3__root_4)); }
	inline Transform_t3600365921 * get_U3CU3E3__root_4() const { return ___U3CU3E3__root_4; }
	inline Transform_t3600365921 ** get_address_of_U3CU3E3__root_4() { return &___U3CU3E3__root_4; }
	inline void set_U3CU3E3__root_4(Transform_t3600365921 * value)
	{
		___U3CU3E3__root_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__root_4), value);
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___ignore_5)); }
	inline RuntimeObject* get_ignore_5() const { return ___ignore_5; }
	inline RuntimeObject** get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(RuntimeObject* value)
	{
		___ignore_5 = value;
		Il2CppCodeGenWriteBarrier((&___ignore_5), value);
	}

	inline static int32_t get_offset_of_U3CU3E3__ignore_6() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CU3E3__ignore_6)); }
	inline RuntimeObject* get_U3CU3E3__ignore_6() const { return ___U3CU3E3__ignore_6; }
	inline RuntimeObject** get_address_of_U3CU3E3__ignore_6() { return &___U3CU3E3__ignore_6; }
	inline void set_U3CU3E3__ignore_6(RuntimeObject* value)
	{
		___U3CU3E3__ignore_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E3__ignore_6), value);
	}

	inline static int32_t get_offset_of_U3CtransformQueueU3E5__2_7() { return static_cast<int32_t>(offsetof(U3CEnumerateHierarchyCoreU3Ed__4_t1512208872, ___U3CtransformQueueU3E5__2_7)); }
	inline Queue_1_t3446625415 * get_U3CtransformQueueU3E5__2_7() const { return ___U3CtransformQueueU3E5__2_7; }
	inline Queue_1_t3446625415 ** get_address_of_U3CtransformQueueU3E5__2_7() { return &___U3CtransformQueueU3E5__2_7; }
	inline void set_U3CtransformQueueU3E5__2_7(Queue_1_t3446625415 * value)
	{
		___U3CtransformQueueU3E5__2_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransformQueueU3E5__2_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CENUMERATEHIERARCHYCOREU3ED__4_T1512208872_H
#ifndef UNITYOBJECTEXTENSIONS_T2879565763_H
#define UNITYOBJECTEXTENSIONS_T2879565763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.UnityObjectExtensions
struct  UnityObjectExtensions_t2879565763  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYOBJECTEXTENSIONS_T2879565763_H
#ifndef VECTOREXTENSIONS_T440900541_H
#define VECTOREXTENSIONS_T440900541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions
struct  VectorExtensions_t440900541  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOREXTENSIONS_T440900541_H
#ifndef U3CU3EC_T1243506689_H
#define U3CU3EC_T1243506689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c
struct  U3CU3Ec_t1243506689  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1243506689_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c::<>9
	U3CU3Ec_t1243506689 * ___U3CU3E9_0;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c::<>9__12_0
	Func_2_t3672504941 * ___U3CU3E9__12_0_1;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c::<>9__13_0
	Func_2_t3934069716 * ___U3CU3E9__13_0_2;
	// System.Func`2<UnityEngine.Vector2,System.Single> Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c::<>9__14_0
	Func_2_t3672504941 * ___U3CU3E9__14_0_3;
	// System.Func`2<UnityEngine.Vector3,System.Single> Microsoft.MixedReality.Toolkit.Core.Extensions.VectorExtensions/<>c::<>9__15_0
	Func_2_t3934069716 * ___U3CU3E9__15_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1243506689_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1243506689 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1243506689 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1243506689 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9_0), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1243506689_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t3672504941 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t3672504941 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t3672504941 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__12_0_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__13_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1243506689_StaticFields, ___U3CU3E9__13_0_2)); }
	inline Func_2_t3934069716 * get_U3CU3E9__13_0_2() const { return ___U3CU3E9__13_0_2; }
	inline Func_2_t3934069716 ** get_address_of_U3CU3E9__13_0_2() { return &___U3CU3E9__13_0_2; }
	inline void set_U3CU3E9__13_0_2(Func_2_t3934069716 * value)
	{
		___U3CU3E9__13_0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__13_0_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1243506689_StaticFields, ___U3CU3E9__14_0_3)); }
	inline Func_2_t3672504941 * get_U3CU3E9__14_0_3() const { return ___U3CU3E9__14_0_3; }
	inline Func_2_t3672504941 ** get_address_of_U3CU3E9__14_0_3() { return &___U3CU3E9__14_0_3; }
	inline void set_U3CU3E9__14_0_3(Func_2_t3672504941 * value)
	{
		___U3CU3E9__14_0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__14_0_3), value);
	}

	inline static int32_t get_offset_of_U3CU3E9__15_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1243506689_StaticFields, ___U3CU3E9__15_0_4)); }
	inline Func_2_t3934069716 * get_U3CU3E9__15_0_4() const { return ___U3CU3E9__15_0_4; }
	inline Func_2_t3934069716 ** get_address_of_U3CU3E9__15_0_4() { return &___U3CU3E9__15_0_4; }
	inline void set_U3CU3E9__15_0_4(Func_2_t3934069716 * value)
	{
		___U3CU3E9__15_0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E9__15_0_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC_T1243506689_H
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
#ifndef WINDOWSDICTATIONINPUTDEVICEMANAGER_T3966259019_H
#define WINDOWSDICTATIONINPUTDEVICEMANAGER_T3966259019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager
struct  WindowsDictationInputDeviceManager_t3966259019  : public BaseDeviceManager_t1510416362
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::hasFailed
	bool ___hasFailed_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::hasListener
	bool ___hasListener_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::isTransitioning
	bool ___isTransitioning_5;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::inputSource
	RuntimeObject* ___inputSource_6;
	// System.Text.StringBuilder Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::textSoFar
	StringBuilder_t * ___textSoFar_7;
	// System.String Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::deviceName
	String_t* ___deviceName_8;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::samplingRate
	int32_t ___samplingRate_9;
	// System.String Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::dictationResult
	String_t* ___dictationResult_10;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::dictationAudioClip
	AudioClip_t3680889665 * ___dictationAudioClip_11;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::waitUntilPhraseRecognitionSystemHasStarted
	WaitUntil_t3373419216 * ___waitUntilPhraseRecognitionSystemHasStarted_13;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::waitUntilPhraseRecognitionSystemHasStopped
	WaitUntil_t3373419216 * ___waitUntilPhraseRecognitionSystemHasStopped_14;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::waitUntilDictationRecognizerHasStarted
	WaitUntil_t3373419216 * ___waitUntilDictationRecognizerHasStarted_15;
	// UnityEngine.WaitUntil Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::waitUntilDictationRecognizerHasStopped
	WaitUntil_t3373419216 * ___waitUntilDictationRecognizerHasStopped_16;

public:
	inline static int32_t get_offset_of_U3CIsListeningU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___U3CIsListeningU3Ek__BackingField_2)); }
	inline bool get_U3CIsListeningU3Ek__BackingField_2() const { return ___U3CIsListeningU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsListeningU3Ek__BackingField_2() { return &___U3CIsListeningU3Ek__BackingField_2; }
	inline void set_U3CIsListeningU3Ek__BackingField_2(bool value)
	{
		___U3CIsListeningU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_hasFailed_3() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___hasFailed_3)); }
	inline bool get_hasFailed_3() const { return ___hasFailed_3; }
	inline bool* get_address_of_hasFailed_3() { return &___hasFailed_3; }
	inline void set_hasFailed_3(bool value)
	{
		___hasFailed_3 = value;
	}

	inline static int32_t get_offset_of_hasListener_4() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___hasListener_4)); }
	inline bool get_hasListener_4() const { return ___hasListener_4; }
	inline bool* get_address_of_hasListener_4() { return &___hasListener_4; }
	inline void set_hasListener_4(bool value)
	{
		___hasListener_4 = value;
	}

	inline static int32_t get_offset_of_isTransitioning_5() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___isTransitioning_5)); }
	inline bool get_isTransitioning_5() const { return ___isTransitioning_5; }
	inline bool* get_address_of_isTransitioning_5() { return &___isTransitioning_5; }
	inline void set_isTransitioning_5(bool value)
	{
		___isTransitioning_5 = value;
	}

	inline static int32_t get_offset_of_inputSource_6() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___inputSource_6)); }
	inline RuntimeObject* get_inputSource_6() const { return ___inputSource_6; }
	inline RuntimeObject** get_address_of_inputSource_6() { return &___inputSource_6; }
	inline void set_inputSource_6(RuntimeObject* value)
	{
		___inputSource_6 = value;
		Il2CppCodeGenWriteBarrier((&___inputSource_6), value);
	}

	inline static int32_t get_offset_of_textSoFar_7() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___textSoFar_7)); }
	inline StringBuilder_t * get_textSoFar_7() const { return ___textSoFar_7; }
	inline StringBuilder_t ** get_address_of_textSoFar_7() { return &___textSoFar_7; }
	inline void set_textSoFar_7(StringBuilder_t * value)
	{
		___textSoFar_7 = value;
		Il2CppCodeGenWriteBarrier((&___textSoFar_7), value);
	}

	inline static int32_t get_offset_of_deviceName_8() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___deviceName_8)); }
	inline String_t* get_deviceName_8() const { return ___deviceName_8; }
	inline String_t** get_address_of_deviceName_8() { return &___deviceName_8; }
	inline void set_deviceName_8(String_t* value)
	{
		___deviceName_8 = value;
		Il2CppCodeGenWriteBarrier((&___deviceName_8), value);
	}

	inline static int32_t get_offset_of_samplingRate_9() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___samplingRate_9)); }
	inline int32_t get_samplingRate_9() const { return ___samplingRate_9; }
	inline int32_t* get_address_of_samplingRate_9() { return &___samplingRate_9; }
	inline void set_samplingRate_9(int32_t value)
	{
		___samplingRate_9 = value;
	}

	inline static int32_t get_offset_of_dictationResult_10() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___dictationResult_10)); }
	inline String_t* get_dictationResult_10() const { return ___dictationResult_10; }
	inline String_t** get_address_of_dictationResult_10() { return &___dictationResult_10; }
	inline void set_dictationResult_10(String_t* value)
	{
		___dictationResult_10 = value;
		Il2CppCodeGenWriteBarrier((&___dictationResult_10), value);
	}

	inline static int32_t get_offset_of_dictationAudioClip_11() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___dictationAudioClip_11)); }
	inline AudioClip_t3680889665 * get_dictationAudioClip_11() const { return ___dictationAudioClip_11; }
	inline AudioClip_t3680889665 ** get_address_of_dictationAudioClip_11() { return &___dictationAudioClip_11; }
	inline void set_dictationAudioClip_11(AudioClip_t3680889665 * value)
	{
		___dictationAudioClip_11 = value;
		Il2CppCodeGenWriteBarrier((&___dictationAudioClip_11), value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_13() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___waitUntilPhraseRecognitionSystemHasStarted_13)); }
	inline WaitUntil_t3373419216 * get_waitUntilPhraseRecognitionSystemHasStarted_13() const { return ___waitUntilPhraseRecognitionSystemHasStarted_13; }
	inline WaitUntil_t3373419216 ** get_address_of_waitUntilPhraseRecognitionSystemHasStarted_13() { return &___waitUntilPhraseRecognitionSystemHasStarted_13; }
	inline void set_waitUntilPhraseRecognitionSystemHasStarted_13(WaitUntil_t3373419216 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStarted_13 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilPhraseRecognitionSystemHasStarted_13), value);
	}

	inline static int32_t get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_14() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___waitUntilPhraseRecognitionSystemHasStopped_14)); }
	inline WaitUntil_t3373419216 * get_waitUntilPhraseRecognitionSystemHasStopped_14() const { return ___waitUntilPhraseRecognitionSystemHasStopped_14; }
	inline WaitUntil_t3373419216 ** get_address_of_waitUntilPhraseRecognitionSystemHasStopped_14() { return &___waitUntilPhraseRecognitionSystemHasStopped_14; }
	inline void set_waitUntilPhraseRecognitionSystemHasStopped_14(WaitUntil_t3373419216 * value)
	{
		___waitUntilPhraseRecognitionSystemHasStopped_14 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilPhraseRecognitionSystemHasStopped_14), value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStarted_15() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___waitUntilDictationRecognizerHasStarted_15)); }
	inline WaitUntil_t3373419216 * get_waitUntilDictationRecognizerHasStarted_15() const { return ___waitUntilDictationRecognizerHasStarted_15; }
	inline WaitUntil_t3373419216 ** get_address_of_waitUntilDictationRecognizerHasStarted_15() { return &___waitUntilDictationRecognizerHasStarted_15; }
	inline void set_waitUntilDictationRecognizerHasStarted_15(WaitUntil_t3373419216 * value)
	{
		___waitUntilDictationRecognizerHasStarted_15 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilDictationRecognizerHasStarted_15), value);
	}

	inline static int32_t get_offset_of_waitUntilDictationRecognizerHasStopped_16() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019, ___waitUntilDictationRecognizerHasStopped_16)); }
	inline WaitUntil_t3373419216 * get_waitUntilDictationRecognizerHasStopped_16() const { return ___waitUntilDictationRecognizerHasStopped_16; }
	inline WaitUntil_t3373419216 ** get_address_of_waitUntilDictationRecognizerHasStopped_16() { return &___waitUntilDictationRecognizerHasStopped_16; }
	inline void set_waitUntilDictationRecognizerHasStopped_16(WaitUntil_t3373419216 * value)
	{
		___waitUntilDictationRecognizerHasStopped_16 = value;
		Il2CppCodeGenWriteBarrier((&___waitUntilDictationRecognizerHasStopped_16), value);
	}
};

struct WindowsDictationInputDeviceManager_t3966259019_StaticFields
{
public:
	// UnityEngine.Windows.Speech.DictationRecognizer Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager::dictationRecognizer
	DictationRecognizer_t838322161 * ___dictationRecognizer_12;

public:
	inline static int32_t get_offset_of_dictationRecognizer_12() { return static_cast<int32_t>(offsetof(WindowsDictationInputDeviceManager_t3966259019_StaticFields, ___dictationRecognizer_12)); }
	inline DictationRecognizer_t838322161 * get_dictationRecognizer_12() const { return ___dictationRecognizer_12; }
	inline DictationRecognizer_t838322161 ** get_address_of_dictationRecognizer_12() { return &___dictationRecognizer_12; }
	inline void set_dictationRecognizer_12(DictationRecognizer_t838322161 * value)
	{
		___dictationRecognizer_12 = value;
		Il2CppCodeGenWriteBarrier((&___dictationRecognizer_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSDICTATIONINPUTDEVICEMANAGER_T3966259019_H
#ifndef WINDOWSGAMINGDEVICEMANAGER_T1533322293_H
#define WINDOWSGAMINGDEVICEMANAGER_T1533322293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.WindowsGaming.WindowsGamingDeviceManager
struct  WindowsGamingDeviceManager_t1533322293  : public BaseDeviceManager_t1510416362
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSGAMINGDEVICEMANAGER_T1533322293_H
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
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef TASKAWAITER_T919683548_H
#define TASKAWAITER_T919683548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter
struct  TaskAwaiter_t919683548 
{
public:
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t3187275312 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_t919683548, ___m_task_0)); }
	inline Task_t3187275312 * get_m_task_0() const { return ___m_task_0; }
	inline Task_t3187275312 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_t3187275312 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_pinvoke
{
	Task_t3187275312 * ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t919683548_marshaled_com
{
	Task_t3187275312 * ___m_task_0;
};
#endif // TASKAWAITER_T919683548_H
#ifndef TASKAWAITER_1_T2180404800_H
#define TASKAWAITER_1_T2180404800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip>
struct  TaskAwaiter_1_t2180404800 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t791462544 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2180404800, ___m_task_0)); }
	inline Task_1_t791462544 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t791462544 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t791462544 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T2180404800_H
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
#ifndef TRACKINGSTATE_T2310194215_H
#define TRACKINGSTATE_T2310194215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.TrackingState
struct  TrackingState_t2310194215 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t2310194215, ___value___2)); }
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
#endif // TRACKINGSTATE_T2310194215_H
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
#ifndef RECOGNITIONCONFIDENCELEVEL_T2950847278_H
#define RECOGNITIONCONFIDENCELEVEL_T2950847278_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel
struct  RecognitionConfidenceLevel_t2950847278 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RecognitionConfidenceLevel_t2950847278, ___value___2)); }
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
#endif // RECOGNITIONCONFIDENCELEVEL_T2950847278_H
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
#ifndef FOCUSEVENTDATA_T604226783_H
#define FOCUSEVENTDATA_T604226783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.FocusEventData
struct  FocusEventData_t604226783  : public BaseEventData_t3903027533
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.FocusEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.FocusEventData::<OldFocusedObject>k__BackingField
	GameObject_t1113636619 * ___U3COldFocusedObjectU3Ek__BackingField_3;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.FocusEventData::<NewFocusedObject>k__BackingField
	GameObject_t1113636619 * ___U3CNewFocusedObjectU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(FocusEventData_t604226783, ___U3CPointerU3Ek__BackingField_2)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_2() const { return ___U3CPointerU3Ek__BackingField_2; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_2() { return &___U3CPointerU3Ek__BackingField_2; }
	inline void set_U3CPointerU3Ek__BackingField_2(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(FocusEventData_t604226783, ___U3COldFocusedObjectU3Ek__BackingField_3)); }
	inline GameObject_t1113636619 * get_U3COldFocusedObjectU3Ek__BackingField_3() const { return ___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline GameObject_t1113636619 ** get_address_of_U3COldFocusedObjectU3Ek__BackingField_3() { return &___U3COldFocusedObjectU3Ek__BackingField_3; }
	inline void set_U3COldFocusedObjectU3Ek__BackingField_3(GameObject_t1113636619 * value)
	{
		___U3COldFocusedObjectU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COldFocusedObjectU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FocusEventData_t604226783, ___U3CNewFocusedObjectU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3CNewFocusedObjectU3Ek__BackingField_4() const { return ___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3CNewFocusedObjectU3Ek__BackingField_4() { return &___U3CNewFocusedObjectU3Ek__BackingField_4; }
	inline void set_U3CNewFocusedObjectU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3CNewFocusedObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNewFocusedObjectU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOCUSEVENTDATA_T604226783_H
#ifndef AXIS_T3396369050_H
#define AXIS_T3396369050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.BoundsExtensions/Axis
struct  Axis_t3396369050 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Extensions.BoundsExtensions/Axis::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Axis_t3396369050, ___value___2)); }
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
#endif // AXIS_T3396369050_H
#ifndef ASYNCTASKMETHODBUILDER_1_T642595793_H
#define ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t642595793 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t4022128754 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793, ___m_task_2)); }
	inline Task_1_t4022128754 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t4022128754 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t4022128754 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t642595793_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t4022128754 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t642595793_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t4022128754 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t4022128754 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t4022128754 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T642595793_H
#ifndef ASYNCTASKMETHODBUILDER_1_T1706896879_H
#define ASYNCTASKMETHODBUILDER_1_T1706896879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip>
struct  AsyncTaskMethodBuilder_1_t1706896879 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t791462544 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1706896879, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1706896879, ___m_task_2)); }
	inline Task_1_t791462544 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t791462544 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t791462544 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1706896879_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t791462544 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1706896879_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t791462544 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t791462544 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t791462544 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1706896879_H
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
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef INPUTBUTTON_T3704011348_H
#define INPUTBUTTON_T3704011348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData/InputButton
struct  InputButton_t3704011348 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_t3704011348, ___value___2)); }
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
#endif // INPUTBUTTON_T3704011348_H
#ifndef RAYCASTRESULT_T3360306849_H
#define RAYCASTRESULT_T3360306849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t3360306849 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t1113636619 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t4150874583 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t3722313464  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t3722313464  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t2156229523  ___screenPosition_9;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___m_GameObject_0)); }
	inline GameObject_t1113636619 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_t1113636619 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_t1113636619 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_GameObject_0), value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___module_1)); }
	inline BaseRaycaster_t4150874583 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_t4150874583 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_t4150874583 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((&___module_1), value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldPosition_7)); }
	inline Vector3_t3722313464  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t3722313464 * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t3722313464  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___worldNormal_8)); }
	inline Vector3_t3722313464  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t3722313464 * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t3722313464  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t3360306849, ___screenPosition_9)); }
	inline Vector2_t2156229523  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_t2156229523 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_t2156229523  value)
	{
		___screenPosition_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_pinvoke
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t3360306849_marshaled_com
{
	GameObject_t1113636619 * ___m_GameObject_0;
	BaseRaycaster_t4150874583 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t3722313464  ___worldPosition_7;
	Vector3_t3722313464  ___worldNormal_8;
	Vector2_t2156229523  ___screenPosition_9;
};
#endif // RAYCASTRESULT_T3360306849_H
#ifndef INTERACTIONSOURCEFLAGS_T1798650303_H
#define INTERACTIONSOURCEFLAGS_T1798650303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_t1798650303 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_t1798650303, ___value___2)); }
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
#endif // INTERACTIONSOURCEFLAGS_T1798650303_H
#ifndef INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#define INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t3096408347 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t3096408347, ___value___2)); }
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
#endif // INTERACTIONSOURCEHANDEDNESS_T3096408347_H
#ifndef INTERACTIONSOURCEKIND_T3005082353_H
#define INTERACTIONSOURCEKIND_T3005082353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t3005082353 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t3005082353, ___value___2)); }
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
#endif // INTERACTIONSOURCEKIND_T3005082353_H
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
#ifndef BASECONTROLLER_T2198099621_H
#define BASECONTROLLER_T2198099621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.BaseController
struct  BaseController_t2198099621  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<DefaultInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1165089545* ___U3CDefaultInteractionsU3Ek__BackingField_0;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<DefaultLeftHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1165089545* ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<DefaultRightHandedInteractions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1165089545* ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.TrackingState Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<TrackingState>k__BackingField
	int32_t ___U3CTrackingStateU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.Handedness Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<ControllerHandedness>k__BackingField
	uint8_t ___U3CControllerHandednessU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityControllerVisualizer Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<Visualizer>k__BackingField
	RuntimeObject* ___U3CVisualizerU3Ek__BackingField_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<IsPositionAvailable>k__BackingField
	bool ___U3CIsPositionAvailableU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<IsPositionApproximate>k__BackingField
	bool ___U3CIsPositionApproximateU3Ek__BackingField_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<IsRotationAvailable>k__BackingField
	bool ___U3CIsRotationAvailableU3Ek__BackingField_10;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Devices.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Core.Devices.BaseController::<Interactions>k__BackingField
	MixedRealityInteractionMappingU5BU5D_t1165089545* ___U3CInteractionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CDefaultInteractionsU3Ek__BackingField_0)); }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545* get_U3CDefaultInteractionsU3Ek__BackingField_0() const { return ___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545** get_address_of_U3CDefaultInteractionsU3Ek__BackingField_0() { return &___U3CDefaultInteractionsU3Ek__BackingField_0; }
	inline void set_U3CDefaultInteractionsU3Ek__BackingField_0(MixedRealityInteractionMappingU5BU5D_t1165089545* value)
	{
		___U3CDefaultInteractionsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultInteractionsU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1)); }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545* get_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() const { return ___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545** get_address_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1() { return &___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1; }
	inline void set_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(MixedRealityInteractionMappingU5BU5D_t1165089545* value)
	{
		___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2)); }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545* get_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() const { return ___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545** get_address_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2() { return &___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2; }
	inline void set_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(MixedRealityInteractionMappingU5BU5D_t1165089545* value)
	{
		___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultRightHandedInteractionsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CEnabledU3Ek__BackingField_3)); }
	inline bool get_U3CEnabledU3Ek__BackingField_3() const { return ___U3CEnabledU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_3() { return &___U3CEnabledU3Ek__BackingField_3; }
	inline void set_U3CEnabledU3Ek__BackingField_3(bool value)
	{
		___U3CEnabledU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CTrackingStateU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CTrackingStateU3Ek__BackingField_4)); }
	inline int32_t get_U3CTrackingStateU3Ek__BackingField_4() const { return ___U3CTrackingStateU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CTrackingStateU3Ek__BackingField_4() { return &___U3CTrackingStateU3Ek__BackingField_4; }
	inline void set_U3CTrackingStateU3Ek__BackingField_4(int32_t value)
	{
		___U3CTrackingStateU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CControllerHandednessU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CControllerHandednessU3Ek__BackingField_5)); }
	inline uint8_t get_U3CControllerHandednessU3Ek__BackingField_5() const { return ___U3CControllerHandednessU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CControllerHandednessU3Ek__BackingField_5() { return &___U3CControllerHandednessU3Ek__BackingField_5; }
	inline void set_U3CControllerHandednessU3Ek__BackingField_5(uint8_t value)
	{
		___U3CControllerHandednessU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CInputSourceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CInputSourceU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CInputSourceU3Ek__BackingField_6() const { return ___U3CInputSourceU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CInputSourceU3Ek__BackingField_6() { return &___U3CInputSourceU3Ek__BackingField_6; }
	inline void set_U3CInputSourceU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CInputSourceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputSourceU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CVisualizerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CVisualizerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CVisualizerU3Ek__BackingField_7() const { return ___U3CVisualizerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CVisualizerU3Ek__BackingField_7() { return &___U3CVisualizerU3Ek__BackingField_7; }
	inline void set_U3CVisualizerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CVisualizerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CVisualizerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CIsPositionAvailableU3Ek__BackingField_8)); }
	inline bool get_U3CIsPositionAvailableU3Ek__BackingField_8() const { return ___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsPositionAvailableU3Ek__BackingField_8() { return &___U3CIsPositionAvailableU3Ek__BackingField_8; }
	inline void set_U3CIsPositionAvailableU3Ek__BackingField_8(bool value)
	{
		___U3CIsPositionAvailableU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CIsPositionApproximateU3Ek__BackingField_9)); }
	inline bool get_U3CIsPositionApproximateU3Ek__BackingField_9() const { return ___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsPositionApproximateU3Ek__BackingField_9() { return &___U3CIsPositionApproximateU3Ek__BackingField_9; }
	inline void set_U3CIsPositionApproximateU3Ek__BackingField_9(bool value)
	{
		___U3CIsPositionApproximateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CIsRotationAvailableU3Ek__BackingField_10)); }
	inline bool get_U3CIsRotationAvailableU3Ek__BackingField_10() const { return ___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsRotationAvailableU3Ek__BackingField_10() { return &___U3CIsRotationAvailableU3Ek__BackingField_10; }
	inline void set_U3CIsRotationAvailableU3Ek__BackingField_10(bool value)
	{
		___U3CIsRotationAvailableU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CInteractionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(BaseController_t2198099621, ___U3CInteractionsU3Ek__BackingField_11)); }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545* get_U3CInteractionsU3Ek__BackingField_11() const { return ___U3CInteractionsU3Ek__BackingField_11; }
	inline MixedRealityInteractionMappingU5BU5D_t1165089545** get_address_of_U3CInteractionsU3Ek__BackingField_11() { return &___U3CInteractionsU3Ek__BackingField_11; }
	inline void set_U3CInteractionsU3Ek__BackingField_11(MixedRealityInteractionMappingU5BU5D_t1165089545* value)
	{
		___U3CInteractionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInteractionsU3Ek__BackingField_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASECONTROLLER_T2198099621_H
#ifndef U3CDISABLEU3ED__21_T3016939862_H
#define U3CDISABLEU3ED__21_T3016939862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<Disable>d__21
struct  U3CDisableU3Ed__21_t3016939862 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<Disable>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<Disable>d__21::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<Disable>d__21::<>4__this
	WindowsDictationInputDeviceManager_t3966259019 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<Disable>d__21::<>u__1
	TaskAwaiter_1_t2180404800  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t3016939862, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t3016939862, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t3016939862, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputDeviceManager_t3966259019 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputDeviceManager_t3966259019 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputDeviceManager_t3966259019 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__21_t3016939862, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t2180404800  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t2180404800 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t2180404800  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDISABLEU3ED__21_T3016939862_H
#ifndef U3CSTARTRECORDINGU3ED__23_T3740819785_H
#define U3CSTARTRECORDINGU3ED__23_T3740819785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23
struct  U3CStartRecordingU3Ed__23_t3740819785 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::<>4__this
	WindowsDictationInputDeviceManager_t3966259019 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::listener
	GameObject_t1113636619 * ___listener_3;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::initialSilenceTimeout
	float ___initialSilenceTimeout_4;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::autoSilenceTimeout
	float ___autoSilenceTimeout_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::recordingTime
	int32_t ___recordingTime_6;
	// System.String Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::micDeviceName
	String_t* ___micDeviceName_7;
	// System.Runtime.CompilerServices.TaskAwaiter Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecording>d__23::<>u__1
	TaskAwaiter_t919683548  ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputDeviceManager_t3966259019 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputDeviceManager_t3966259019 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputDeviceManager_t3966259019 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___listener_3)); }
	inline GameObject_t1113636619 * get_listener_3() const { return ___listener_3; }
	inline GameObject_t1113636619 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_t1113636619 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((&___listener_3), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___initialSilenceTimeout_4)); }
	inline float get_initialSilenceTimeout_4() const { return ___initialSilenceTimeout_4; }
	inline float* get_address_of_initialSilenceTimeout_4() { return &___initialSilenceTimeout_4; }
	inline void set_initialSilenceTimeout_4(float value)
	{
		___initialSilenceTimeout_4 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___autoSilenceTimeout_5)); }
	inline float get_autoSilenceTimeout_5() const { return ___autoSilenceTimeout_5; }
	inline float* get_address_of_autoSilenceTimeout_5() { return &___autoSilenceTimeout_5; }
	inline void set_autoSilenceTimeout_5(float value)
	{
		___autoSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_recordingTime_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___recordingTime_6)); }
	inline int32_t get_recordingTime_6() const { return ___recordingTime_6; }
	inline int32_t* get_address_of_recordingTime_6() { return &___recordingTime_6; }
	inline void set_recordingTime_6(int32_t value)
	{
		___recordingTime_6 = value;
	}

	inline static int32_t get_offset_of_micDeviceName_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___micDeviceName_7)); }
	inline String_t* get_micDeviceName_7() const { return ___micDeviceName_7; }
	inline String_t** get_address_of_micDeviceName_7() { return &___micDeviceName_7; }
	inline void set_micDeviceName_7(String_t* value)
	{
		___micDeviceName_7 = value;
		Il2CppCodeGenWriteBarrier((&___micDeviceName_7), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingU3Ed__23_t3740819785, ___U3CU3Eu__1_8)); }
	inline TaskAwaiter_t919683548  get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline TaskAwaiter_t919683548 * get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(TaskAwaiter_t919683548  value)
	{
		___U3CU3Eu__1_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGU3ED__23_T3740819785_H
#ifndef U3CSTOPRECORDINGU3ED__25_T3859623549_H
#define U3CSTOPRECORDINGU3ED__25_T3859623549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecording>d__25
struct  U3CStopRecordingU3Ed__25_t3859623549 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecording>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecording>d__25::<>t__builder
	AsyncVoidMethodBuilder_t3819840891  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecording>d__25::<>4__this
	WindowsDictationInputDeviceManager_t3966259019 * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecording>d__25::<>u__1
	TaskAwaiter_1_t2180404800  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t3859623549, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t3859623549, ___U3CU3Et__builder_1)); }
	inline AsyncVoidMethodBuilder_t3819840891  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncVoidMethodBuilder_t3819840891 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncVoidMethodBuilder_t3819840891  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t3859623549, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputDeviceManager_t3966259019 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputDeviceManager_t3966259019 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputDeviceManager_t3966259019 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingU3Ed__25_t3859623549, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t2180404800  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t2180404800 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t2180404800  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPRECORDINGU3ED__25_T3859623549_H
#ifndef U3CSTOPRECORDINGASYNCU3ED__26_T2026345609_H
#define U3CSTOPRECORDINGASYNCU3ED__26_T2026345609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecordingAsync>d__26
struct  U3CStopRecordingAsyncU3Ed__26_t2026345609 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecordingAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<UnityEngine.AudioClip> Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecordingAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_t1706896879  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecordingAsync>d__26::<>4__this
	WindowsDictationInputDeviceManager_t3966259019 * ___U3CU3E4__this_2;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StopRecordingAsync>d__26::<>u__1
	RuntimeObject * ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t2026345609, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t2026345609, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t1706896879  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t1706896879 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t1706896879  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t2026345609, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputDeviceManager_t3966259019 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputDeviceManager_t3966259019 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputDeviceManager_t3966259019 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CStopRecordingAsyncU3Ed__26_t2026345609, ___U3CU3Eu__1_3)); }
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
#endif // U3CSTOPRECORDINGASYNCU3ED__26_T2026345609_H
#ifndef WINDOWSSPEECHINPUTDEVICEMANAGER_T2667327777_H
#define WINDOWSSPEECHINPUTDEVICEMANAGER_T2667327777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsSpeechInputDeviceManager
struct  WindowsSpeechInputDeviceManager_t2667327777  : public BaseDeviceManager_t1510416362
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsSpeechInputDeviceManager::InputSource
	RuntimeObject* ___InputSource_2;
	// UnityEngine.Windows.Speech.KeywordRecognizer Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsSpeechInputDeviceManager::keywordRecognizer
	KeywordRecognizer_t2141680640 * ___keywordRecognizer_3;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsSpeechInputDeviceManager::<RecognitionConfidenceLevel>k__BackingField
	int32_t ___U3CRecognitionConfidenceLevelU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_InputSource_2() { return static_cast<int32_t>(offsetof(WindowsSpeechInputDeviceManager_t2667327777, ___InputSource_2)); }
	inline RuntimeObject* get_InputSource_2() const { return ___InputSource_2; }
	inline RuntimeObject** get_address_of_InputSource_2() { return &___InputSource_2; }
	inline void set_InputSource_2(RuntimeObject* value)
	{
		___InputSource_2 = value;
		Il2CppCodeGenWriteBarrier((&___InputSource_2), value);
	}

	inline static int32_t get_offset_of_keywordRecognizer_3() { return static_cast<int32_t>(offsetof(WindowsSpeechInputDeviceManager_t2667327777, ___keywordRecognizer_3)); }
	inline KeywordRecognizer_t2141680640 * get_keywordRecognizer_3() const { return ___keywordRecognizer_3; }
	inline KeywordRecognizer_t2141680640 ** get_address_of_keywordRecognizer_3() { return &___keywordRecognizer_3; }
	inline void set_keywordRecognizer_3(KeywordRecognizer_t2141680640 * value)
	{
		___keywordRecognizer_3 = value;
		Il2CppCodeGenWriteBarrier((&___keywordRecognizer_3), value);
	}

	inline static int32_t get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(WindowsSpeechInputDeviceManager_t2667327777, ___U3CRecognitionConfidenceLevelU3Ek__BackingField_4)); }
	inline int32_t get_U3CRecognitionConfidenceLevelU3Ek__BackingField_4() const { return ___U3CRecognitionConfidenceLevelU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_4() { return &___U3CRecognitionConfidenceLevelU3Ek__BackingField_4; }
	inline void set_U3CRecognitionConfidenceLevelU3Ek__BackingField_4(int32_t value)
	{
		___U3CRecognitionConfidenceLevelU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSSPEECHINPUTDEVICEMANAGER_T2667327777_H
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
#ifndef DIAGNOSTICSEVENTDATA_T2702439762_H
#define DIAGNOSTICSEVENTDATA_T2702439762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData
struct  DiagnosticsEventData_t2702439762  : public GenericBaseEventData_t2446438405
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::<Visible>k__BackingField
	bool ___U3CVisibleU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::<ShowCpu>k__BackingField
	bool ___U3CShowCpuU3Ek__BackingField_4;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::<ShowFps>k__BackingField
	bool ___U3CShowFpsU3Ek__BackingField_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.EventDatum.Diagnostics.DiagnosticsEventData::<ShowMemory>k__BackingField
	bool ___U3CShowMemoryU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CVisibleU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DiagnosticsEventData_t2702439762, ___U3CVisibleU3Ek__BackingField_3)); }
	inline bool get_U3CVisibleU3Ek__BackingField_3() const { return ___U3CVisibleU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CVisibleU3Ek__BackingField_3() { return &___U3CVisibleU3Ek__BackingField_3; }
	inline void set_U3CVisibleU3Ek__BackingField_3(bool value)
	{
		___U3CVisibleU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CShowCpuU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(DiagnosticsEventData_t2702439762, ___U3CShowCpuU3Ek__BackingField_4)); }
	inline bool get_U3CShowCpuU3Ek__BackingField_4() const { return ___U3CShowCpuU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CShowCpuU3Ek__BackingField_4() { return &___U3CShowCpuU3Ek__BackingField_4; }
	inline void set_U3CShowCpuU3Ek__BackingField_4(bool value)
	{
		___U3CShowCpuU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CShowFpsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DiagnosticsEventData_t2702439762, ___U3CShowFpsU3Ek__BackingField_5)); }
	inline bool get_U3CShowFpsU3Ek__BackingField_5() const { return ___U3CShowFpsU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CShowFpsU3Ek__BackingField_5() { return &___U3CShowFpsU3Ek__BackingField_5; }
	inline void set_U3CShowFpsU3Ek__BackingField_5(bool value)
	{
		___U3CShowFpsU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CShowMemoryU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DiagnosticsEventData_t2702439762, ___U3CShowMemoryU3Ek__BackingField_6)); }
	inline bool get_U3CShowMemoryU3Ek__BackingField_6() const { return ___U3CShowMemoryU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CShowMemoryU3Ek__BackingField_6() { return &___U3CShowMemoryU3Ek__BackingField_6; }
	inline void set_U3CShowMemoryU3Ek__BackingField_6(bool value)
	{
		___U3CShowMemoryU3Ek__BackingField_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSEVENTDATA_T2702439762_H
#ifndef PLACEMENTEVENTDATA_T3535532855_H
#define PLACEMENTEVENTDATA_T3535532855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.PlacementEventData
struct  PlacementEventData_t3535532855  : public GenericBaseEventData_t2446438405
{
public:
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.EventDatum.PlacementEventData::<ObjectBeingPlaced>k__BackingField
	GameObject_t1113636619 * ___U3CObjectBeingPlacedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CObjectBeingPlacedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlacementEventData_t3535532855, ___U3CObjectBeingPlacedU3Ek__BackingField_3)); }
	inline GameObject_t1113636619 * get_U3CObjectBeingPlacedU3Ek__BackingField_3() const { return ___U3CObjectBeingPlacedU3Ek__BackingField_3; }
	inline GameObject_t1113636619 ** get_address_of_U3CObjectBeingPlacedU3Ek__BackingField_3() { return &___U3CObjectBeingPlacedU3Ek__BackingField_3; }
	inline void set_U3CObjectBeingPlacedU3Ek__BackingField_3(GameObject_t1113636619 * value)
	{
		___U3CObjectBeingPlacedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CObjectBeingPlacedU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLACEMENTEVENTDATA_T3535532855_H
#ifndef TELEPORTEVENTDATA_T1170489626_H
#define TELEPORTEVENTDATA_T1170489626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData
struct  TeleportEventData_t1170489626  : public GenericBaseEventData_t2446438405
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.InputSystem.IMixedRealityPointer Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_3;
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.TeleportSystem.IMixedRealityTeleportHotSpot Microsoft.MixedReality.Toolkit.Core.EventDatum.Teleport.TeleportEventData::<HotSpot>k__BackingField
	RuntimeObject* ___U3CHotSpotU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CPointerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TeleportEventData_t1170489626, ___U3CPointerU3Ek__BackingField_3)); }
	inline RuntimeObject* get_U3CPointerU3Ek__BackingField_3() const { return ___U3CPointerU3Ek__BackingField_3; }
	inline RuntimeObject** get_address_of_U3CPointerU3Ek__BackingField_3() { return &___U3CPointerU3Ek__BackingField_3; }
	inline void set_U3CPointerU3Ek__BackingField_3(RuntimeObject* value)
	{
		___U3CPointerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPointerU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CHotSpotU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TeleportEventData_t1170489626, ___U3CHotSpotU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CHotSpotU3Ek__BackingField_4() const { return ___U3CHotSpotU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CHotSpotU3Ek__BackingField_4() { return &___U3CHotSpotU3Ek__BackingField_4; }
	inline void set_U3CHotSpotU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CHotSpotU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHotSpotU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TELEPORTEVENTDATA_T1170489626_H
#ifndef ASYNCTASKMETHODBUILDER_T3536885450_H
#define ASYNCTASKMETHODBUILDER_T3536885450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t3536885450 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t642595793  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t642595793 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t642595793  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t3536885450_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t4022128754 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t3536885450_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t4022128754 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t4022128754 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t4022128754 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t3536885450_marshaled_com
{
	AsyncTaskMethodBuilder_1_t642595793  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T3536885450_H
#ifndef POINTEREVENTDATA_T3807901092_H
#define POINTEREVENTDATA_T3807901092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerEventData
struct  PointerEventData_t3807901092  : public BaseEventData_t3903027533
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t1113636619 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t1113636619 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t1113636619 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t1113636619 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t1113636619 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerCurrentRaycastU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t3360306849  ___U3CpointerPressRaycastU3Ek__BackingField_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t2585711361 * ___hovered_9;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_10;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_11;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t2156229523  ___U3CpositionU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t2156229523  ___U3CdeltaU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t2156229523  ___U3CpressPositionU3Ek__BackingField_14;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t3722313464  ___U3CworldPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t3722313464  ___U3CworldNormalU3Ek__BackingField_16;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_17;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t2156229523  ___U3CscrollDeltaU3Ek__BackingField_19;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_21;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_22;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_t1113636619 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_t1113636619 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerEnterU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___m_PointerPress_3)); }
	inline GameObject_t1113636619 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_t1113636619 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_t1113636619 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PointerPress_3), value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_t1113636619 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_t1113636619 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_t1113636619 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClastPressU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_t1113636619 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_t1113636619 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_t1113636619 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrawPointerPressU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_t1113636619 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_t1113636619 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_t1113636619 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpointerDragU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerCurrentRaycastU3Ek__BackingField_7)); }
	inline RaycastResult_t3360306849  get_U3CpointerCurrentRaycastU3Ek__BackingField_7() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_7() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_7; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_7(RaycastResult_t3360306849  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerPressRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t3360306849  get_U3CpointerPressRaycastU3Ek__BackingField_8() const { return ___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t3360306849 * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_8() { return &___U3CpointerPressRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_8(RaycastResult_t3360306849  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_hovered_9() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___hovered_9)); }
	inline List_1_t2585711361 * get_hovered_9() const { return ___hovered_9; }
	inline List_1_t2585711361 ** get_address_of_hovered_9() { return &___hovered_9; }
	inline void set_hovered_9(List_1_t2585711361 * value)
	{
		___hovered_9 = value;
		Il2CppCodeGenWriteBarrier((&___hovered_9), value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CeligibleForClickU3Ek__BackingField_10)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_10() const { return ___U3CeligibleForClickU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_10() { return &___U3CeligibleForClickU3Ek__BackingField_10; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_10(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpointerIdU3Ek__BackingField_11)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_11() const { return ___U3CpointerIdU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_11() { return &___U3CpointerIdU3Ek__BackingField_11; }
	inline void set_U3CpointerIdU3Ek__BackingField_11(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpositionU3Ek__BackingField_12)); }
	inline Vector2_t2156229523  get_U3CpositionU3Ek__BackingField_12() const { return ___U3CpositionU3Ek__BackingField_12; }
	inline Vector2_t2156229523 * get_address_of_U3CpositionU3Ek__BackingField_12() { return &___U3CpositionU3Ek__BackingField_12; }
	inline void set_U3CpositionU3Ek__BackingField_12(Vector2_t2156229523  value)
	{
		___U3CpositionU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdeltaU3Ek__BackingField_13)); }
	inline Vector2_t2156229523  get_U3CdeltaU3Ek__BackingField_13() const { return ___U3CdeltaU3Ek__BackingField_13; }
	inline Vector2_t2156229523 * get_address_of_U3CdeltaU3Ek__BackingField_13() { return &___U3CdeltaU3Ek__BackingField_13; }
	inline void set_U3CdeltaU3Ek__BackingField_13(Vector2_t2156229523  value)
	{
		___U3CdeltaU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CpressPositionU3Ek__BackingField_14)); }
	inline Vector2_t2156229523  get_U3CpressPositionU3Ek__BackingField_14() const { return ___U3CpressPositionU3Ek__BackingField_14; }
	inline Vector2_t2156229523 * get_address_of_U3CpressPositionU3Ek__BackingField_14() { return &___U3CpressPositionU3Ek__BackingField_14; }
	inline void set_U3CpressPositionU3Ek__BackingField_14(Vector2_t2156229523  value)
	{
		___U3CpressPositionU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldPositionU3Ek__BackingField_15)); }
	inline Vector3_t3722313464  get_U3CworldPositionU3Ek__BackingField_15() const { return ___U3CworldPositionU3Ek__BackingField_15; }
	inline Vector3_t3722313464 * get_address_of_U3CworldPositionU3Ek__BackingField_15() { return &___U3CworldPositionU3Ek__BackingField_15; }
	inline void set_U3CworldPositionU3Ek__BackingField_15(Vector3_t3722313464  value)
	{
		___U3CworldPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CworldNormalU3Ek__BackingField_16)); }
	inline Vector3_t3722313464  get_U3CworldNormalU3Ek__BackingField_16() const { return ___U3CworldNormalU3Ek__BackingField_16; }
	inline Vector3_t3722313464 * get_address_of_U3CworldNormalU3Ek__BackingField_16() { return &___U3CworldNormalU3Ek__BackingField_16; }
	inline void set_U3CworldNormalU3Ek__BackingField_16(Vector3_t3722313464  value)
	{
		___U3CworldNormalU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickTimeU3Ek__BackingField_17)); }
	inline float get_U3CclickTimeU3Ek__BackingField_17() const { return ___U3CclickTimeU3Ek__BackingField_17; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_17() { return &___U3CclickTimeU3Ek__BackingField_17; }
	inline void set_U3CclickTimeU3Ek__BackingField_17(float value)
	{
		___U3CclickTimeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CclickCountU3Ek__BackingField_18)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_18() const { return ___U3CclickCountU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_18() { return &___U3CclickCountU3Ek__BackingField_18; }
	inline void set_U3CclickCountU3Ek__BackingField_18(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CscrollDeltaU3Ek__BackingField_19)); }
	inline Vector2_t2156229523  get_U3CscrollDeltaU3Ek__BackingField_19() const { return ___U3CscrollDeltaU3Ek__BackingField_19; }
	inline Vector2_t2156229523 * get_address_of_U3CscrollDeltaU3Ek__BackingField_19() { return &___U3CscrollDeltaU3Ek__BackingField_19; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_19(Vector2_t2156229523  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CuseDragThresholdU3Ek__BackingField_20)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_20() const { return ___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_20() { return &___U3CuseDragThresholdU3Ek__BackingField_20; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_20(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CdraggingU3Ek__BackingField_21)); }
	inline bool get_U3CdraggingU3Ek__BackingField_21() const { return ___U3CdraggingU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_21() { return &___U3CdraggingU3Ek__BackingField_21; }
	inline void set_U3CdraggingU3Ek__BackingField_21(bool value)
	{
		___U3CdraggingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_t3807901092, ___U3CbuttonU3Ek__BackingField_22)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_22() const { return ___U3CbuttonU3Ek__BackingField_22; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_22() { return &___U3CbuttonU3Ek__BackingField_22; }
	inline void set_U3CbuttonU3Ek__BackingField_22(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTEREVENTDATA_T3807901092_H
#ifndef INTERACTIONSOURCE_T872619030_H
#define INTERACTIONSOURCE_T872619030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t872619030 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t872619030, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERACTIONSOURCE_T872619030_H
#ifndef U3CSTARTRECORDINGASYNCU3ED__24_T3906491654_H
#define U3CSTARTRECORDINGASYNCU3ED__24_T3906491654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24
struct  U3CStartRecordingAsyncU3Ed__24_t3906491654 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t3536885450  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::<>4__this
	WindowsDictationInputDeviceManager_t3966259019 * ___U3CU3E4__this_2;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::listener
	GameObject_t1113636619 * ___listener_3;
	// System.String Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::micDeviceName
	String_t* ___micDeviceName_4;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::initialSilenceTimeout
	float ___initialSilenceTimeout_5;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::autoSilenceTimeout
	float ___autoSilenceTimeout_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::recordingTime
	int32_t ___recordingTime_7;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Devices.VoiceInput.WindowsDictationInputDeviceManager/<StartRecordingAsync>d__24::<>u__1
	RuntimeObject * ___U3CU3Eu__1_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t3536885450  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t3536885450 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t3536885450  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___U3CU3E4__this_2)); }
	inline WindowsDictationInputDeviceManager_t3966259019 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline WindowsDictationInputDeviceManager_t3966259019 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(WindowsDictationInputDeviceManager_t3966259019 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_listener_3() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___listener_3)); }
	inline GameObject_t1113636619 * get_listener_3() const { return ___listener_3; }
	inline GameObject_t1113636619 ** get_address_of_listener_3() { return &___listener_3; }
	inline void set_listener_3(GameObject_t1113636619 * value)
	{
		___listener_3 = value;
		Il2CppCodeGenWriteBarrier((&___listener_3), value);
	}

	inline static int32_t get_offset_of_micDeviceName_4() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___micDeviceName_4)); }
	inline String_t* get_micDeviceName_4() const { return ___micDeviceName_4; }
	inline String_t** get_address_of_micDeviceName_4() { return &___micDeviceName_4; }
	inline void set_micDeviceName_4(String_t* value)
	{
		___micDeviceName_4 = value;
		Il2CppCodeGenWriteBarrier((&___micDeviceName_4), value);
	}

	inline static int32_t get_offset_of_initialSilenceTimeout_5() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___initialSilenceTimeout_5)); }
	inline float get_initialSilenceTimeout_5() const { return ___initialSilenceTimeout_5; }
	inline float* get_address_of_initialSilenceTimeout_5() { return &___initialSilenceTimeout_5; }
	inline void set_initialSilenceTimeout_5(float value)
	{
		___initialSilenceTimeout_5 = value;
	}

	inline static int32_t get_offset_of_autoSilenceTimeout_6() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___autoSilenceTimeout_6)); }
	inline float get_autoSilenceTimeout_6() const { return ___autoSilenceTimeout_6; }
	inline float* get_address_of_autoSilenceTimeout_6() { return &___autoSilenceTimeout_6; }
	inline void set_autoSilenceTimeout_6(float value)
	{
		___autoSilenceTimeout_6 = value;
	}

	inline static int32_t get_offset_of_recordingTime_7() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___recordingTime_7)); }
	inline int32_t get_recordingTime_7() const { return ___recordingTime_7; }
	inline int32_t* get_address_of_recordingTime_7() { return &___recordingTime_7; }
	inline void set_recordingTime_7(int32_t value)
	{
		___recordingTime_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_8() { return static_cast<int32_t>(offsetof(U3CStartRecordingAsyncU3Ed__24_t3906491654, ___U3CU3Eu__1_8)); }
	inline RuntimeObject * get_U3CU3Eu__1_8() const { return ___U3CU3Eu__1_8; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__1_8() { return &___U3CU3Eu__1_8; }
	inline void set_U3CU3Eu__1_8(RuntimeObject * value)
	{
		___U3CU3Eu__1_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__1_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTRECORDINGASYNCU3ED__24_T3906491654_H
#ifndef ARCADESTICKCONTROLLER_T190453050_H
#define ARCADESTICKCONTROLLER_T190453050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.WindowsGaming.ArcadeStickController
struct  ArcadeStickController_t190453050  : public BaseController_t2198099621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARCADESTICKCONTROLLER_T190453050_H
#ifndef GAMEPADCONTROLLER_T1883054643_H
#define GAMEPADCONTROLLER_T1883054643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.WindowsGaming.GamepadController
struct  GamepadController_t1883054643  : public BaseController_t2198099621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPADCONTROLLER_T1883054643_H
#ifndef JOYSTICKCONTROLLER_T1525524471_H
#define JOYSTICKCONTROLLER_T1525524471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.WindowsGaming.JoystickController
struct  JoystickController_t1525524471  : public BaseController_t2198099621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JOYSTICKCONTROLLER_T1525524471_H
#ifndef RACINGWHEELCONTROLLER_T3483340611_H
#define RACINGWHEELCONTROLLER_T3483340611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Devices.WindowsGaming.RacingWheelController
struct  RacingWheelController_t3483340611  : public BaseController_t2198099621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RACINGWHEELCONTROLLER_T3483340611_H
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
#ifndef GRAPHICINPUTEVENTDATA_T1191668652_H
#define GRAPHICINPUTEVENTDATA_T1191668652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.GraphicInputEventData
struct  GraphicInputEventData_t1191668652  : public PointerEventData_t3807901092
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHICINPUTEVENTDATA_T1191668652_H
#ifndef U3CU3EC__DISPLAYCLASS2_0_T4016568756_H
#define U3CU3EC__DISPLAYCLASS2_0_T4016568756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0
struct  U3CU3Ec__DisplayClass2_0_t4016568756  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::durationInSeconds
	float ___durationInSeconds_1;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass2_0::intensity
	float ___intensity_2;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t4016568756, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}

	inline static int32_t get_offset_of_durationInSeconds_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t4016568756, ___durationInSeconds_1)); }
	inline float get_durationInSeconds_1() const { return ___durationInSeconds_1; }
	inline float* get_address_of_durationInSeconds_1() { return &___durationInSeconds_1; }
	inline void set_durationInSeconds_1(float value)
	{
		___durationInSeconds_1 = value;
	}

	inline static int32_t get_offset_of_intensity_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t4016568756, ___intensity_2)); }
	inline float get_intensity_2() const { return ___intensity_2; }
	inline float* get_address_of_intensity_2() { return &___intensity_2; }
	inline void set_intensity_2(float value)
	{
		___intensity_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS2_0_T4016568756_H
#ifndef U3CU3EC__DISPLAYCLASS3_0_T4016568757_H
#define U3CU3EC__DISPLAYCLASS3_0_T4016568757_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t4016568757  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass3_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t4016568757, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS3_0_T4016568757_H
#ifndef U3CU3EC__DISPLAYCLASS4_0_T4016568750_H
#define U3CU3EC__DISPLAYCLASS4_0_T4016568750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0
struct  U3CU3Ec__DisplayClass4_0_t4016568750  : public RuntimeObject
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0::interactionSource
	InteractionSource_t872619030  ___interactionSource_0;
	// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType> Microsoft.MixedReality.Toolkit.Core.Extensions.InteractionSourceExtensions/<>c__DisplayClass4_0::returnValue
	RuntimeObject* ___returnValue_1;

public:
	inline static int32_t get_offset_of_interactionSource_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t4016568750, ___interactionSource_0)); }
	inline InteractionSource_t872619030  get_interactionSource_0() const { return ___interactionSource_0; }
	inline InteractionSource_t872619030 * get_address_of_interactionSource_0() { return &___interactionSource_0; }
	inline void set_interactionSource_0(InteractionSource_t872619030  value)
	{
		___interactionSource_0 = value;
	}

	inline static int32_t get_offset_of_returnValue_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass4_0_t4016568750, ___returnValue_1)); }
	inline RuntimeObject* get_returnValue_1() const { return ___returnValue_1; }
	inline RuntimeObject** get_address_of_returnValue_1() { return &___returnValue_1; }
	inline void set_returnValue_1(RuntimeObject* value)
	{
		___returnValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___returnValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS4_0_T4016568750_H
#ifndef DICTATIONEVENTDATA_T1232668333_H
#define DICTATIONEVENTDATA_T1232668333_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.DictationEventData
struct  DictationEventData_t1232668333  : public BaseInputEventData_t1701052491
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.DictationEventData::<DictationResult>k__BackingField
	String_t* ___U3CDictationResultU3Ek__BackingField_5;
	// UnityEngine.AudioClip Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.DictationEventData::<DictationAudioClip>k__BackingField
	AudioClip_t3680889665 * ___U3CDictationAudioClipU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDictationResultU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DictationEventData_t1232668333, ___U3CDictationResultU3Ek__BackingField_5)); }
	inline String_t* get_U3CDictationResultU3Ek__BackingField_5() const { return ___U3CDictationResultU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CDictationResultU3Ek__BackingField_5() { return &___U3CDictationResultU3Ek__BackingField_5; }
	inline void set_U3CDictationResultU3Ek__BackingField_5(String_t* value)
	{
		___U3CDictationResultU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationResultU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DictationEventData_t1232668333, ___U3CDictationAudioClipU3Ek__BackingField_6)); }
	inline AudioClip_t3680889665 * get_U3CDictationAudioClipU3Ek__BackingField_6() const { return ___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline AudioClip_t3680889665 ** get_address_of_U3CDictationAudioClipU3Ek__BackingField_6() { return &___U3CDictationAudioClipU3Ek__BackingField_6; }
	inline void set_U3CDictationAudioClipU3Ek__BackingField_6(AudioClip_t3680889665 * value)
	{
		___U3CDictationAudioClipU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDictationAudioClipU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTATIONEVENTDATA_T1232668333_H
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
#ifndef SOURCESTATEEVENTDATA_T2321330286_H
#define SOURCESTATEEVENTDATA_T2321330286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SourceStateEventData
struct  SourceStateEventData_t2321330286  : public BaseInputEventData_t1701052491
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Interfaces.Devices.IMixedRealityController Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SourceStateEventData::<Controller>k__BackingField
	RuntimeObject* ___U3CControllerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SourceStateEventData_t2321330286, ___U3CControllerU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CControllerU3Ek__BackingField_5() const { return ___U3CControllerU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CControllerU3Ek__BackingField_5() { return &___U3CControllerU3Ek__BackingField_5; }
	inline void set_U3CControllerU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CControllerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CControllerU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCESTATEEVENTDATA_T2321330286_H
#ifndef SPEECHEVENTDATA_T3587125423_H
#define SPEECHEVENTDATA_T3587125423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SpeechEventData
struct  SpeechEventData_t3587125423  : public BaseInputEventData_t1701052491
{
public:
	// System.TimeSpan Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SpeechEventData::<PhraseDuration>k__BackingField
	TimeSpan_t881159249  ___U3CPhraseDurationU3Ek__BackingField_5;
	// System.DateTime Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SpeechEventData::<PhraseStartTime>k__BackingField
	DateTime_t3738529785  ___U3CPhraseStartTimeU3Ek__BackingField_6;
	// System.String Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SpeechEventData::<RecognizedText>k__BackingField
	String_t* ___U3CRecognizedTextU3Ek__BackingField_7;
	// Microsoft.MixedReality.Toolkit.Core.Definitions.Utilities.RecognitionConfidenceLevel Microsoft.MixedReality.Toolkit.Core.EventDatum.Input.SpeechEventData::<Confidence>k__BackingField
	int32_t ___U3CConfidenceU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CPhraseDurationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SpeechEventData_t3587125423, ___U3CPhraseDurationU3Ek__BackingField_5)); }
	inline TimeSpan_t881159249  get_U3CPhraseDurationU3Ek__BackingField_5() const { return ___U3CPhraseDurationU3Ek__BackingField_5; }
	inline TimeSpan_t881159249 * get_address_of_U3CPhraseDurationU3Ek__BackingField_5() { return &___U3CPhraseDurationU3Ek__BackingField_5; }
	inline void set_U3CPhraseDurationU3Ek__BackingField_5(TimeSpan_t881159249  value)
	{
		___U3CPhraseDurationU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SpeechEventData_t3587125423, ___U3CPhraseStartTimeU3Ek__BackingField_6)); }
	inline DateTime_t3738529785  get_U3CPhraseStartTimeU3Ek__BackingField_6() const { return ___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline DateTime_t3738529785 * get_address_of_U3CPhraseStartTimeU3Ek__BackingField_6() { return &___U3CPhraseStartTimeU3Ek__BackingField_6; }
	inline void set_U3CPhraseStartTimeU3Ek__BackingField_6(DateTime_t3738529785  value)
	{
		___U3CPhraseStartTimeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CRecognizedTextU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SpeechEventData_t3587125423, ___U3CRecognizedTextU3Ek__BackingField_7)); }
	inline String_t* get_U3CRecognizedTextU3Ek__BackingField_7() const { return ___U3CRecognizedTextU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CRecognizedTextU3Ek__BackingField_7() { return &___U3CRecognizedTextU3Ek__BackingField_7; }
	inline void set_U3CRecognizedTextU3Ek__BackingField_7(String_t* value)
	{
		___U3CRecognizedTextU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRecognizedTextU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CConfidenceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(SpeechEventData_t3587125423, ___U3CConfidenceU3Ek__BackingField_8)); }
	inline int32_t get_U3CConfidenceU3Ek__BackingField_8() const { return ___U3CConfidenceU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CConfidenceU3Ek__BackingField_8() { return &___U3CConfidenceU3Ek__BackingField_8; }
	inline void set_U3CConfidenceU3Ek__BackingField_8(int32_t value)
	{
		___U3CConfidenceU3Ek__BackingField_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHEVENTDATA_T3587125423_H
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





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4600 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4601 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4602 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4603 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4604 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4605 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4606 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4607 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4608 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4609 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4610 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4611 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4612 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4613 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4614 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4615 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4616 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4617 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4618 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4619 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4620 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4621 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4622 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4623 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4624 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4625 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4626 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4627 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4628 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4629 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4630 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4631 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4632 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4633 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4634 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4635 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4636 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4637 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4638 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4639 = { sizeof (AnimationCurveExtensions_t3529361807), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4640 = { sizeof (ArrayExtensions_t2478473446), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4641 = { sizeof (BoundsExtensions_t1258715425), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4641[34] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4642 = { sizeof (Axis_t3396369050)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable4642[4] = 
{
	Axis_t3396369050::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4643 = { sizeof (CameraExtensions_t4283437890), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4644 = { sizeof (CollectionsExtensions_t3832715001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4645 = { sizeof (Color32Extensions_t2296763354), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4646 = { sizeof (ComparerExtensions_t4116699950), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4647 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4647[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4648 = { sizeof (ComponentExtensions_t2213797013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4649 = { sizeof (DoubleExtensions_t1212427671), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4650 = { sizeof (EnumerableExtensions_t1007490696), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4651 = { sizeof (EventSystemExtensions_t25409484), -1, sizeof(EventSystemExtensions_t25409484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4651[2] = 
{
	EventSystemExtensions_t25409484_StaticFields::get_offset_of_RaycastResults_0(),
	EventSystemExtensions_t25409484_StaticFields::get_offset_of_RaycastResultComparer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4652 = { sizeof (FloatExtensions_t1942405394), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4653 = { sizeof (GameObjectExtensions_t3779083126), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4654 = { sizeof (GestureRecognizerExtensions_t2880337444), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4655 = { sizeof (InteractionSourceExtensions_t3958107018), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4655[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4656 = { sizeof (U3CU3Ec__DisplayClass2_0_t4016568756), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4656[3] = 
{
	U3CU3Ec__DisplayClass2_0_t4016568756::get_offset_of_interactionSource_0(),
	U3CU3Ec__DisplayClass2_0_t4016568756::get_offset_of_durationInSeconds_1(),
	U3CU3Ec__DisplayClass2_0_t4016568756::get_offset_of_intensity_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4657 = { sizeof (U3CU3Ec__DisplayClass3_0_t4016568757), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4657[1] = 
{
	U3CU3Ec__DisplayClass3_0_t4016568757::get_offset_of_interactionSource_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4658 = { sizeof (U3CU3Ec__DisplayClass4_0_t4016568750), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4658[2] = 
{
	U3CU3Ec__DisplayClass4_0_t4016568750::get_offset_of_interactionSource_0(),
	U3CU3Ec__DisplayClass4_0_t4016568750::get_offset_of_returnValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4659 = { sizeof (LayerExtensions_t1006611091), -1, sizeof(LayerExtensions_t1006611091_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4659[5] = 
{
	0,
	LayerExtensions_t1006611091_StaticFields::get_offset_of_defaultLayer_1(),
	LayerExtensions_t1006611091_StaticFields::get_offset_of_surfaceLayer_2(),
	LayerExtensions_t1006611091_StaticFields::get_offset_of_interactionLayer_3(),
	LayerExtensions_t1006611091_StaticFields::get_offset_of_activationLayer_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4660 = { sizeof (MathExtensions_t2088275029), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4661 = { sizeof (QuaternionExtensions_t1464199316), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4662 = { sizeof (RayExtensions_t3219403024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4663 = { sizeof (StringExtensions_t2942039378), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4664 = { sizeof (TransformExtensions_t4234824430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4665 = { sizeof (U3CEnumerateHierarchyCoreU3Ed__4_t1512208872), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4665[8] = 
{
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CU3E1__state_0(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CU3E2__current_1(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CU3El__initialThreadId_2(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_root_3(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CU3E3__root_4(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_ignore_5(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CU3E3__ignore_6(),
	U3CEnumerateHierarchyCoreU3Ed__4_t1512208872::get_offset_of_U3CtransformQueueU3E5__2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4666 = { sizeof (U3CEnumerateAncestorsU3Ed__8_t2194500854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4666[8] = 
{
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CU3E1__state_0(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CU3E2__current_1(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CU3El__initialThreadId_2(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_includeSelf_3(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CU3E3__includeSelf_4(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_startTransform_5(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CU3E3__startTransform_6(),
	U3CEnumerateAncestorsU3Ed__8_t2194500854::get_offset_of_U3CtransformU3E5__2_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4667 = { sizeof (UnityObjectExtensions_t2879565763), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4668 = { sizeof (VectorExtensions_t440900541), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4669 = { sizeof (U3CU3Ec_t1243506689), -1, sizeof(U3CU3Ec_t1243506689_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4669[5] = 
{
	U3CU3Ec_t1243506689_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1243506689_StaticFields::get_offset_of_U3CU3E9__12_0_1(),
	U3CU3Ec_t1243506689_StaticFields::get_offset_of_U3CU3E9__13_0_2(),
	U3CU3Ec_t1243506689_StaticFields::get_offset_of_U3CU3E9__14_0_3(),
	U3CU3Ec_t1243506689_StaticFields::get_offset_of_U3CU3E9__15_0_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4670 = { sizeof (GenericBaseEventData_t2446438405), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4670[1] = 
{
	GenericBaseEventData_t2446438405::get_offset_of_U3CEventSourceU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4671 = { sizeof (PlacementEventData_t3535532855), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4671[1] = 
{
	PlacementEventData_t3535532855::get_offset_of_U3CObjectBeingPlacedU3Ek__BackingField_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4672 = { sizeof (TeleportEventData_t1170489626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4672[2] = 
{
	TeleportEventData_t1170489626::get_offset_of_U3CPointerU3Ek__BackingField_3(),
	TeleportEventData_t1170489626::get_offset_of_U3CHotSpotU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4673 = { sizeof (BaseInputEventData_t1701052491), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4673[3] = 
{
	BaseInputEventData_t1701052491::get_offset_of_U3CInputSourceU3Ek__BackingField_2(),
	BaseInputEventData_t1701052491::get_offset_of_U3CSourceIdU3Ek__BackingField_3(),
	BaseInputEventData_t1701052491::get_offset_of_U3CMixedRealityInputActionU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4674 = { sizeof (DictationEventData_t1232668333), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4674[2] = 
{
	DictationEventData_t1232668333::get_offset_of_U3CDictationResultU3Ek__BackingField_5(),
	DictationEventData_t1232668333::get_offset_of_U3CDictationAudioClipU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4675 = { sizeof (FocusEventData_t604226783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4675[3] = 
{
	FocusEventData_t604226783::get_offset_of_U3CPointerU3Ek__BackingField_2(),
	FocusEventData_t604226783::get_offset_of_U3COldFocusedObjectU3Ek__BackingField_3(),
	FocusEventData_t604226783::get_offset_of_U3CNewFocusedObjectU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4676 = { sizeof (GraphicInputEventData_t1191668652), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4677 = { sizeof (InputEventData_t1552512027), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4677[1] = 
{
	InputEventData_t1552512027::get_offset_of_U3CHandednessU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4678 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4678[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4679 = { sizeof (MixedRealityPointerEventData_t420287197), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4679[2] = 
{
	MixedRealityPointerEventData_t420287197::get_offset_of_U3CPointerU3Ek__BackingField_6(),
	MixedRealityPointerEventData_t420287197::get_offset_of_U3CCountU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4680 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable4680[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4681 = { sizeof (SourceStateEventData_t2321330286), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4681[1] = 
{
	SourceStateEventData_t2321330286::get_offset_of_U3CControllerU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4682 = { sizeof (SpeechEventData_t3587125423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4682[4] = 
{
	SpeechEventData_t3587125423::get_offset_of_U3CPhraseDurationU3Ek__BackingField_5(),
	SpeechEventData_t3587125423::get_offset_of_U3CPhraseStartTimeU3Ek__BackingField_6(),
	SpeechEventData_t3587125423::get_offset_of_U3CRecognizedTextU3Ek__BackingField_7(),
	SpeechEventData_t3587125423::get_offset_of_U3CConfidenceU3Ek__BackingField_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4683 = { sizeof (DiagnosticsEventData_t2702439762), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4683[4] = 
{
	DiagnosticsEventData_t2702439762::get_offset_of_U3CVisibleU3Ek__BackingField_3(),
	DiagnosticsEventData_t2702439762::get_offset_of_U3CShowCpuU3Ek__BackingField_4(),
	DiagnosticsEventData_t2702439762::get_offset_of_U3CShowFpsU3Ek__BackingField_5(),
	DiagnosticsEventData_t2702439762::get_offset_of_U3CShowMemoryU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4684 = { sizeof (BoundaryEventData_t2497240288), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4684[5] = 
{
	BoundaryEventData_t2497240288::get_offset_of_U3CIsFloorVisualizedU3Ek__BackingField_3(),
	BoundaryEventData_t2497240288::get_offset_of_U3CIsPlayAreaVisualizedU3Ek__BackingField_4(),
	BoundaryEventData_t2497240288::get_offset_of_U3CIsTrackedAreaVisualizedU3Ek__BackingField_5(),
	BoundaryEventData_t2497240288::get_offset_of_U3CAreBoundaryWallsVisualizedU3Ek__BackingField_6(),
	BoundaryEventData_t2497240288::get_offset_of_U3CIsCeilingVisualizedU3Ek__BackingField_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4685 = { sizeof (BaseController_t2198099621), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4685[12] = 
{
	BaseController_t2198099621::get_offset_of_U3CDefaultInteractionsU3Ek__BackingField_0(),
	BaseController_t2198099621::get_offset_of_U3CDefaultLeftHandedInteractionsU3Ek__BackingField_1(),
	BaseController_t2198099621::get_offset_of_U3CDefaultRightHandedInteractionsU3Ek__BackingField_2(),
	BaseController_t2198099621::get_offset_of_U3CEnabledU3Ek__BackingField_3(),
	BaseController_t2198099621::get_offset_of_U3CTrackingStateU3Ek__BackingField_4(),
	BaseController_t2198099621::get_offset_of_U3CControllerHandednessU3Ek__BackingField_5(),
	BaseController_t2198099621::get_offset_of_U3CInputSourceU3Ek__BackingField_6(),
	BaseController_t2198099621::get_offset_of_U3CVisualizerU3Ek__BackingField_7(),
	BaseController_t2198099621::get_offset_of_U3CIsPositionAvailableU3Ek__BackingField_8(),
	BaseController_t2198099621::get_offset_of_U3CIsPositionApproximateU3Ek__BackingField_9(),
	BaseController_t2198099621::get_offset_of_U3CIsRotationAvailableU3Ek__BackingField_10(),
	BaseController_t2198099621::get_offset_of_U3CInteractionsU3Ek__BackingField_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4686 = { sizeof (BaseDeviceManager_t1510416362), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4686[2] = 
{
	BaseDeviceManager_t1510416362::get_offset_of_U3CNameU3Ek__BackingField_0(),
	BaseDeviceManager_t1510416362::get_offset_of_U3CPriorityU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4687 = { sizeof (ArcadeStickController_t190453050), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4688 = { sizeof (GamepadController_t1883054643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4689 = { sizeof (JoystickController_t1525524471), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4690 = { sizeof (RacingWheelController_t3483340611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4691 = { sizeof (WindowsGamingDeviceManager_t1533322293), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4692 = { sizeof (WindowsDictationInputDeviceManager_t3966259019), -1, sizeof(WindowsDictationInputDeviceManager_t3966259019_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4692[15] = 
{
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_U3CIsListeningU3Ek__BackingField_2(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_hasFailed_3(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_hasListener_4(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_isTransitioning_5(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_inputSource_6(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_textSoFar_7(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_deviceName_8(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_samplingRate_9(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_dictationResult_10(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_dictationAudioClip_11(),
	WindowsDictationInputDeviceManager_t3966259019_StaticFields::get_offset_of_dictationRecognizer_12(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_waitUntilPhraseRecognitionSystemHasStarted_13(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_waitUntilPhraseRecognitionSystemHasStopped_14(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_waitUntilDictationRecognizerHasStarted_15(),
	WindowsDictationInputDeviceManager_t3966259019::get_offset_of_waitUntilDictationRecognizerHasStopped_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4693 = { sizeof (U3CU3Ec_t1829886567), -1, sizeof(U3CU3Ec_t1829886567_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable4693[5] = 
{
	U3CU3Ec_t1829886567_StaticFields::get_offset_of_U3CU3E9_0(),
	U3CU3Ec_t1829886567_StaticFields::get_offset_of_U3CU3E9__0_0_1(),
	U3CU3Ec_t1829886567_StaticFields::get_offset_of_U3CU3E9__0_1_2(),
	U3CU3Ec_t1829886567_StaticFields::get_offset_of_U3CU3E9__0_2_3(),
	U3CU3Ec_t1829886567_StaticFields::get_offset_of_U3CU3E9__0_3_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4694 = { sizeof (U3CDisableU3Ed__21_t3016939862)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4694[4] = 
{
	U3CDisableU3Ed__21_t3016939862::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CDisableU3Ed__21_t3016939862::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CDisableU3Ed__21_t3016939862::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CDisableU3Ed__21_t3016939862::get_offset_of_U3CU3Eu__1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4695 = { sizeof (U3CStartRecordingU3Ed__23_t3740819785)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4695[9] = 
{
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_listener_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_initialSilenceTimeout_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_autoSilenceTimeout_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_recordingTime_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_micDeviceName_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingU3Ed__23_t3740819785::get_offset_of_U3CU3Eu__1_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4696 = { sizeof (U3CStartRecordingAsyncU3Ed__24_t3906491654)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4696[9] = 
{
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_listener_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_micDeviceName_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_initialSilenceTimeout_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_autoSilenceTimeout_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_recordingTime_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStartRecordingAsyncU3Ed__24_t3906491654::get_offset_of_U3CU3Eu__1_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4697 = { sizeof (U3CStopRecordingU3Ed__25_t3859623549)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4697[4] = 
{
	U3CStopRecordingU3Ed__25_t3859623549::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingU3Ed__25_t3859623549::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingU3Ed__25_t3859623549::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingU3Ed__25_t3859623549::get_offset_of_U3CU3Eu__1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4698 = { sizeof (U3CStopRecordingAsyncU3Ed__26_t2026345609)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4698[4] = 
{
	U3CStopRecordingAsyncU3Ed__26_t2026345609::get_offset_of_U3CU3E1__state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingAsyncU3Ed__26_t2026345609::get_offset_of_U3CU3Et__builder_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingAsyncU3Ed__26_t2026345609::get_offset_of_U3CU3E4__this_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	U3CStopRecordingAsyncU3Ed__26_t2026345609::get_offset_of_U3CU3Eu__1_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize4699 = { sizeof (WindowsSpeechInputDeviceManager_t2667327777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable4699[3] = 
{
	WindowsSpeechInputDeviceManager_t2667327777::get_offset_of_InputSource_2(),
	WindowsSpeechInputDeviceManager_t2667327777::get_offset_of_keywordRecognizer_3(),
	WindowsSpeechInputDeviceManager_t2667327777::get_offset_of_U3CRecognitionConfidenceLevelU3Ek__BackingField_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
