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

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter
struct SimpleCoroutineAwaiter_t1961245047;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo
struct ApplicationInfo_t2068629202;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.BatteryInfo
struct BatteryInfo_t636561417;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo
struct DeviceInfo_t313565737;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.InterfaceInfo[]
struct InterfaceInfoU5BU5D_t2373663493;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName
struct MachineName_t1295863344;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces
struct NetworkInterfaces_t3455163626;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo
struct PowerStateInfo_t4025460968;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo
struct ProcessInfo_t1668061809;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo[]
struct ProcessInfoU5BU5D_t4127039660;
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessList
struct ProcessList_t1550074349;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t2755812594;
// System.Action
struct Action_t1264377477;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t885026589;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t1822382459;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t3348751306;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t2075988643;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1632706988;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t1293755103;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t1600215562;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>>
struct Func_2_t2005434166;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>>
struct Func_2_t3285599260;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>>
struct Func_2_t2512833402;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>>
struct Func_2_t377166388;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>>
struct Func_2_t947463730;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>>
struct Func_2_t2077410229;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t1314258023;
// System.IO.BinaryReader
struct BinaryReader_t2428077293;
// System.IO.DirectoryInfo
struct DirectoryInfo_t35957480;
// System.IO.FileInfo
struct FileInfo_t1169991790;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t2389029403;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Predicate`1<System.Object>
struct Predicate_1_t3905400288;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t4012569436;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t923100567;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Threading.ContextCallback
struct ContextCallback_t3823316192;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.StackGuard
struct StackGuard_t1472778820;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t2170468915;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t2660013028;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>
struct TaskFactory_1_t847892654;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>
struct TaskFactory_1_t2128057748;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>
struct TaskFactory_1_t1355291890;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>
struct TaskFactory_1_t3514592172;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>
struct TaskFactory_1_t4084889514;
// System.Threading.Tasks.TaskFactory`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct TaskFactory_1_t919868717;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t156716511;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t1196198384;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>
struct Task_1_t2194004283;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>
struct Task_1_t3474169377;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>
struct Task_1_t2701403519;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>
struct Task_1_t565736505;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>
struct Task_1_t1136033847;
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct Task_1_t2265980346;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1502828140;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// UnityEngine.WWWForm
struct WWWForm_t4064702195;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;

extern RuntimeClass* BinaryReader_t2428077293_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* DirectoryInfo_t35957480_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FileStream_t4292183065_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Rest_t389052526_il2cpp_TypeInfo_var;
extern RuntimeClass* SimpleCoroutineAwaiter_t1961245047_il2cpp_TypeInfo_var;
extern RuntimeClass* WWWForm_t4064702195_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral120995181;
extern String_t* _stringLiteral1735907784;
extern String_t* _stringLiteral1903542547;
extern String_t* _stringLiteral1924534141;
extern String_t* _stringLiteral1945222715;
extern String_t* _stringLiteral195864525;
extern String_t* _stringLiteral2018795562;
extern String_t* _stringLiteral2283179310;
extern String_t* _stringLiteral2398034983;
extern String_t* _stringLiteral2647770442;
extern String_t* _stringLiteral2921564007;
extern String_t* _stringLiteral3157244618;
extern String_t* _stringLiteral327304042;
extern String_t* _stringLiteral3382384620;
extern String_t* _stringLiteral3769660176;
extern String_t* _stringLiteral3862419723;
extern String_t* _stringLiteral3943316947;
extern String_t* _stringLiteral402580553;
extern String_t* _stringLiteral4139383724;
extern String_t* _stringLiteral618812026;
extern String_t* _stringLiteral628085470;
extern String_t* _stringLiteral756802359;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m178632677_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3708741209_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1954678761_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2269962225_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2524976103_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m231500414_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2812742169_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3157683791_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2819583121_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4090345775_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m240981383_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2621696278_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m306871977_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m4271167575_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3111658751_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m3243415541_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1417497042_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m156191284_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m886564337_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m1793936250_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m3492932024_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m983501450_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m2612820978_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3092076770_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m3978379298_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m3150074936_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3109428628_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisMachineName_t1295863344_m114331045_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisNetworkInterfaces_t3455163626_m361010356_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisPowerStateInfo_t4025460968_m1454032155_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisProcessList_t1550074349_m3608064058_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m1781345864_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m2327709505_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m3303095857_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m3957052770_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m2760376190_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m311690839_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m3612381370_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m4064141183_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m1353846373_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m1468115537_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m287228013_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m3398521935_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m3786675719_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m3993357899_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m671514874_RuntimeMethod_var;
extern const uint32_t U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368_MetadataUsageId;
extern const uint32_t U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187_MetadataUsageId;
extern const uint32_t U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908_MetadataUsageId;
extern const uint32_t U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724_MetadataUsageId;
extern const uint32_t U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545_MetadataUsageId;
extern const uint32_t U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543_MetadataUsageId;
extern const uint32_t U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306_MetadataUsageId;
extern const uint32_t U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239_MetadataUsageId;
extern const uint32_t U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805_MetadataUsageId;
extern const uint32_t U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814_MetadataUsageId;
extern const uint32_t U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829_MetadataUsageId;
extern const uint32_t U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579_MetadataUsageId;
extern const uint32_t U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980_MetadataUsageId;
extern const uint32_t U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113_MetadataUsageId;
extern const uint32_t U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428_MetadataUsageId;
extern const uint32_t U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923_MetadataUsageId;
extern const uint32_t U3CRestartAsyncU3Ed__20_MoveNext_m3879067228_MetadataUsageId;
extern const uint32_t U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277_MetadataUsageId;
extern const uint32_t U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039_MetadataUsageId;
extern const uint32_t U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348_MetadataUsageId;
extern const uint32_t U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905_MetadataUsageId;
extern const uint32_t U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666_MetadataUsageId;
extern const uint32_t U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937_MetadataUsageId;
extern const uint32_t U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ProcessInfoU5BU5D_t4127039660;
struct ByteU5BU5D_t4116647657;
struct FileInfoU5BU5D_t2389029403;
struct ObjectU5BU5D_t2843939325;


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
#ifndef APPLICATIONINFO_T2068629202_H
#define APPLICATIONINFO_T2068629202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo
struct  ApplicationInfo_t2068629202  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::Name
	String_t* ___Name_0;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::PackageFamilyName
	String_t* ___PackageFamilyName_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::PackageFullName
	String_t* ___PackageFullName_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::PackageOrigin
	int32_t ___PackageOrigin_3;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::PackageRelativeId
	String_t* ___PackageRelativeId_4;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo::Publisher
	String_t* ___Publisher_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_PackageFamilyName_1() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___PackageFamilyName_1)); }
	inline String_t* get_PackageFamilyName_1() const { return ___PackageFamilyName_1; }
	inline String_t** get_address_of_PackageFamilyName_1() { return &___PackageFamilyName_1; }
	inline void set_PackageFamilyName_1(String_t* value)
	{
		___PackageFamilyName_1 = value;
		Il2CppCodeGenWriteBarrier((&___PackageFamilyName_1), value);
	}

	inline static int32_t get_offset_of_PackageFullName_2() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___PackageFullName_2)); }
	inline String_t* get_PackageFullName_2() const { return ___PackageFullName_2; }
	inline String_t** get_address_of_PackageFullName_2() { return &___PackageFullName_2; }
	inline void set_PackageFullName_2(String_t* value)
	{
		___PackageFullName_2 = value;
		Il2CppCodeGenWriteBarrier((&___PackageFullName_2), value);
	}

	inline static int32_t get_offset_of_PackageOrigin_3() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___PackageOrigin_3)); }
	inline int32_t get_PackageOrigin_3() const { return ___PackageOrigin_3; }
	inline int32_t* get_address_of_PackageOrigin_3() { return &___PackageOrigin_3; }
	inline void set_PackageOrigin_3(int32_t value)
	{
		___PackageOrigin_3 = value;
	}

	inline static int32_t get_offset_of_PackageRelativeId_4() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___PackageRelativeId_4)); }
	inline String_t* get_PackageRelativeId_4() const { return ___PackageRelativeId_4; }
	inline String_t** get_address_of_PackageRelativeId_4() { return &___PackageRelativeId_4; }
	inline void set_PackageRelativeId_4(String_t* value)
	{
		___PackageRelativeId_4 = value;
		Il2CppCodeGenWriteBarrier((&___PackageRelativeId_4), value);
	}

	inline static int32_t get_offset_of_Publisher_5() { return static_cast<int32_t>(offsetof(ApplicationInfo_t2068629202, ___Publisher_5)); }
	inline String_t* get_Publisher_5() const { return ___Publisher_5; }
	inline String_t** get_address_of_Publisher_5() { return &___Publisher_5; }
	inline void set_Publisher_5(String_t* value)
	{
		___Publisher_5 = value;
		Il2CppCodeGenWriteBarrier((&___Publisher_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONINFO_T2068629202_H
#ifndef DEVICEINFO_T313565737_H
#define DEVICEINFO_T313565737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo
struct  DeviceInfo_t313565737  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::IP
	String_t* ___IP_0;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::User
	String_t* ___User_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::Password
	String_t* ___Password_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::MachineName
	String_t* ___MachineName_3;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::CsrfToken
	String_t* ___CsrfToken_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::authorization
	Dictionary_2_t1632706988 * ___authorization_5;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.BatteryInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::<BatteryInfo>k__BackingField
	BatteryInfo_t636561417 * ___U3CBatteryInfoU3Ek__BackingField_6;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::<PowerState>k__BackingField
	PowerStateInfo_t4025460968 * ___U3CPowerStateU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_IP_0() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___IP_0)); }
	inline String_t* get_IP_0() const { return ___IP_0; }
	inline String_t** get_address_of_IP_0() { return &___IP_0; }
	inline void set_IP_0(String_t* value)
	{
		___IP_0 = value;
		Il2CppCodeGenWriteBarrier((&___IP_0), value);
	}

	inline static int32_t get_offset_of_User_1() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___User_1)); }
	inline String_t* get_User_1() const { return ___User_1; }
	inline String_t** get_address_of_User_1() { return &___User_1; }
	inline void set_User_1(String_t* value)
	{
		___User_1 = value;
		Il2CppCodeGenWriteBarrier((&___User_1), value);
	}

	inline static int32_t get_offset_of_Password_2() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___Password_2)); }
	inline String_t* get_Password_2() const { return ___Password_2; }
	inline String_t** get_address_of_Password_2() { return &___Password_2; }
	inline void set_Password_2(String_t* value)
	{
		___Password_2 = value;
		Il2CppCodeGenWriteBarrier((&___Password_2), value);
	}

	inline static int32_t get_offset_of_MachineName_3() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___MachineName_3)); }
	inline String_t* get_MachineName_3() const { return ___MachineName_3; }
	inline String_t** get_address_of_MachineName_3() { return &___MachineName_3; }
	inline void set_MachineName_3(String_t* value)
	{
		___MachineName_3 = value;
		Il2CppCodeGenWriteBarrier((&___MachineName_3), value);
	}

	inline static int32_t get_offset_of_CsrfToken_4() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___CsrfToken_4)); }
	inline String_t* get_CsrfToken_4() const { return ___CsrfToken_4; }
	inline String_t** get_address_of_CsrfToken_4() { return &___CsrfToken_4; }
	inline void set_CsrfToken_4(String_t* value)
	{
		___CsrfToken_4 = value;
		Il2CppCodeGenWriteBarrier((&___CsrfToken_4), value);
	}

	inline static int32_t get_offset_of_authorization_5() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___authorization_5)); }
	inline Dictionary_2_t1632706988 * get_authorization_5() const { return ___authorization_5; }
	inline Dictionary_2_t1632706988 ** get_address_of_authorization_5() { return &___authorization_5; }
	inline void set_authorization_5(Dictionary_2_t1632706988 * value)
	{
		___authorization_5 = value;
		Il2CppCodeGenWriteBarrier((&___authorization_5), value);
	}

	inline static int32_t get_offset_of_U3CBatteryInfoU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___U3CBatteryInfoU3Ek__BackingField_6)); }
	inline BatteryInfo_t636561417 * get_U3CBatteryInfoU3Ek__BackingField_6() const { return ___U3CBatteryInfoU3Ek__BackingField_6; }
	inline BatteryInfo_t636561417 ** get_address_of_U3CBatteryInfoU3Ek__BackingField_6() { return &___U3CBatteryInfoU3Ek__BackingField_6; }
	inline void set_U3CBatteryInfoU3Ek__BackingField_6(BatteryInfo_t636561417 * value)
	{
		___U3CBatteryInfoU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBatteryInfoU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CPowerStateU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DeviceInfo_t313565737, ___U3CPowerStateU3Ek__BackingField_7)); }
	inline PowerStateInfo_t4025460968 * get_U3CPowerStateU3Ek__BackingField_7() const { return ___U3CPowerStateU3Ek__BackingField_7; }
	inline PowerStateInfo_t4025460968 ** get_address_of_U3CPowerStateU3Ek__BackingField_7() { return &___U3CPowerStateU3Ek__BackingField_7; }
	inline void set_U3CPowerStateU3Ek__BackingField_7(PowerStateInfo_t4025460968 * value)
	{
		___U3CPowerStateU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPowerStateU3Ek__BackingField_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEVICEINFO_T313565737_H
#ifndef MACHINENAME_T1295863344_H
#define MACHINENAME_T1295863344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName
struct  MachineName_t1295863344  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName::ComputerName
	String_t* ___ComputerName_0;

public:
	inline static int32_t get_offset_of_ComputerName_0() { return static_cast<int32_t>(offsetof(MachineName_t1295863344, ___ComputerName_0)); }
	inline String_t* get_ComputerName_0() const { return ___ComputerName_0; }
	inline String_t** get_address_of_ComputerName_0() { return &___ComputerName_0; }
	inline void set_ComputerName_0(String_t* value)
	{
		___ComputerName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ComputerName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACHINENAME_T1295863344_H
#ifndef NETWORKINTERFACES_T3455163626_H
#define NETWORKINTERFACES_T3455163626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces
struct  NetworkInterfaces_t3455163626  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.InterfaceInfo[] Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces::Interfaces
	InterfaceInfoU5BU5D_t2373663493* ___Interfaces_0;

public:
	inline static int32_t get_offset_of_Interfaces_0() { return static_cast<int32_t>(offsetof(NetworkInterfaces_t3455163626, ___Interfaces_0)); }
	inline InterfaceInfoU5BU5D_t2373663493* get_Interfaces_0() const { return ___Interfaces_0; }
	inline InterfaceInfoU5BU5D_t2373663493** get_address_of_Interfaces_0() { return &___Interfaces_0; }
	inline void set_Interfaces_0(InterfaceInfoU5BU5D_t2373663493* value)
	{
		___Interfaces_0 = value;
		Il2CppCodeGenWriteBarrier((&___Interfaces_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETWORKINTERFACES_T3455163626_H
#ifndef POWERSTATEINFO_T4025460968_H
#define POWERSTATEINFO_T4025460968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo
struct  PowerStateInfo_t4025460968  : public RuntimeObject
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo::LowPowerState
	bool ___LowPowerState_0;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo::LowPowerStateAvailable
	bool ___LowPowerStateAvailable_1;

public:
	inline static int32_t get_offset_of_LowPowerState_0() { return static_cast<int32_t>(offsetof(PowerStateInfo_t4025460968, ___LowPowerState_0)); }
	inline bool get_LowPowerState_0() const { return ___LowPowerState_0; }
	inline bool* get_address_of_LowPowerState_0() { return &___LowPowerState_0; }
	inline void set_LowPowerState_0(bool value)
	{
		___LowPowerState_0 = value;
	}

	inline static int32_t get_offset_of_LowPowerStateAvailable_1() { return static_cast<int32_t>(offsetof(PowerStateInfo_t4025460968, ___LowPowerStateAvailable_1)); }
	inline bool get_LowPowerStateAvailable_1() const { return ___LowPowerStateAvailable_1; }
	inline bool* get_address_of_LowPowerStateAvailable_1() { return &___LowPowerStateAvailable_1; }
	inline void set_LowPowerStateAvailable_1(bool value)
	{
		___LowPowerStateAvailable_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POWERSTATEINFO_T4025460968_H
#ifndef PROCESSINFO_T1668061809_H
#define PROCESSINFO_T1668061809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo
struct  ProcessInfo_t1668061809  : public RuntimeObject
{
public:
	// System.Single Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::CPUUsage
	float ___CPUUsage_0;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::ImageName
	String_t* ___ImageName_1;
	// System.Single Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::PageFileUsage
	float ___PageFileUsage_2;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::PrivateWorkingSet
	int32_t ___PrivateWorkingSet_3;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::ProcessId
	int32_t ___ProcessId_4;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::SessionId
	int32_t ___SessionId_5;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::UserName
	String_t* ___UserName_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::VirtualSize
	int32_t ___VirtualSize_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo::WorkingSetSize
	int32_t ___WorkingSetSize_8;

public:
	inline static int32_t get_offset_of_CPUUsage_0() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___CPUUsage_0)); }
	inline float get_CPUUsage_0() const { return ___CPUUsage_0; }
	inline float* get_address_of_CPUUsage_0() { return &___CPUUsage_0; }
	inline void set_CPUUsage_0(float value)
	{
		___CPUUsage_0 = value;
	}

	inline static int32_t get_offset_of_ImageName_1() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___ImageName_1)); }
	inline String_t* get_ImageName_1() const { return ___ImageName_1; }
	inline String_t** get_address_of_ImageName_1() { return &___ImageName_1; }
	inline void set_ImageName_1(String_t* value)
	{
		___ImageName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ImageName_1), value);
	}

	inline static int32_t get_offset_of_PageFileUsage_2() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___PageFileUsage_2)); }
	inline float get_PageFileUsage_2() const { return ___PageFileUsage_2; }
	inline float* get_address_of_PageFileUsage_2() { return &___PageFileUsage_2; }
	inline void set_PageFileUsage_2(float value)
	{
		___PageFileUsage_2 = value;
	}

	inline static int32_t get_offset_of_PrivateWorkingSet_3() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___PrivateWorkingSet_3)); }
	inline int32_t get_PrivateWorkingSet_3() const { return ___PrivateWorkingSet_3; }
	inline int32_t* get_address_of_PrivateWorkingSet_3() { return &___PrivateWorkingSet_3; }
	inline void set_PrivateWorkingSet_3(int32_t value)
	{
		___PrivateWorkingSet_3 = value;
	}

	inline static int32_t get_offset_of_ProcessId_4() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___ProcessId_4)); }
	inline int32_t get_ProcessId_4() const { return ___ProcessId_4; }
	inline int32_t* get_address_of_ProcessId_4() { return &___ProcessId_4; }
	inline void set_ProcessId_4(int32_t value)
	{
		___ProcessId_4 = value;
	}

	inline static int32_t get_offset_of_SessionId_5() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___SessionId_5)); }
	inline int32_t get_SessionId_5() const { return ___SessionId_5; }
	inline int32_t* get_address_of_SessionId_5() { return &___SessionId_5; }
	inline void set_SessionId_5(int32_t value)
	{
		___SessionId_5 = value;
	}

	inline static int32_t get_offset_of_UserName_6() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___UserName_6)); }
	inline String_t* get_UserName_6() const { return ___UserName_6; }
	inline String_t** get_address_of_UserName_6() { return &___UserName_6; }
	inline void set_UserName_6(String_t* value)
	{
		___UserName_6 = value;
		Il2CppCodeGenWriteBarrier((&___UserName_6), value);
	}

	inline static int32_t get_offset_of_VirtualSize_7() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___VirtualSize_7)); }
	inline int32_t get_VirtualSize_7() const { return ___VirtualSize_7; }
	inline int32_t* get_address_of_VirtualSize_7() { return &___VirtualSize_7; }
	inline void set_VirtualSize_7(int32_t value)
	{
		___VirtualSize_7 = value;
	}

	inline static int32_t get_offset_of_WorkingSetSize_8() { return static_cast<int32_t>(offsetof(ProcessInfo_t1668061809, ___WorkingSetSize_8)); }
	inline int32_t get_WorkingSetSize_8() const { return ___WorkingSetSize_8; }
	inline int32_t* get_address_of_WorkingSetSize_8() { return &___WorkingSetSize_8; }
	inline void set_WorkingSetSize_8(int32_t value)
	{
		___WorkingSetSize_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSINFO_T1668061809_H
#ifndef PROCESSLIST_T1550074349_H
#define PROCESSLIST_T1550074349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessList
struct  ProcessList_t1550074349  : public RuntimeObject
{
public:
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo[] Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessList::Processes
	ProcessInfoU5BU5D_t4127039660* ___Processes_0;

public:
	inline static int32_t get_offset_of_Processes_0() { return static_cast<int32_t>(offsetof(ProcessList_t1550074349, ___Processes_0)); }
	inline ProcessInfoU5BU5D_t4127039660* get_Processes_0() const { return ___Processes_0; }
	inline ProcessInfoU5BU5D_t4127039660** get_address_of_Processes_0() { return &___Processes_0; }
	inline void set_Processes_0(ProcessInfoU5BU5D_t4127039660* value)
	{
		___Processes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Processes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSLIST_T1550074349_H
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
#ifndef DICTIONARY_2_T1632706988_H
#define DICTIONARY_2_T1632706988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t1632706988  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t885026589* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t1822382459 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3348751306 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___entries_1)); }
	inline EntryU5BU5D_t885026589* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t885026589** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t885026589* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___keys_7)); }
	inline KeyCollection_t1822382459 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1822382459 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1822382459 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ___values_8)); }
	inline ValueCollection_t3348751306 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3348751306 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3348751306 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1632706988, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1632706988_H
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
#ifndef BINARYREADER_T2428077293_H
#define BINARYREADER_T2428077293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryReader
struct  BinaryReader_t2428077293  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryReader::m_stream
	Stream_t1273022909 * ___m_stream_0;
	// System.Byte[] System.IO.BinaryReader::m_buffer
	ByteU5BU5D_t4116647657* ___m_buffer_1;
	// System.Text.Decoder System.IO.BinaryReader::m_decoder
	Decoder_t2204182725 * ___m_decoder_2;
	// System.Byte[] System.IO.BinaryReader::m_charBytes
	ByteU5BU5D_t4116647657* ___m_charBytes_3;
	// System.Char[] System.IO.BinaryReader::m_singleChar
	CharU5BU5D_t3528271667* ___m_singleChar_4;
	// System.Char[] System.IO.BinaryReader::m_charBuffer
	CharU5BU5D_t3528271667* ___m_charBuffer_5;
	// System.Int32 System.IO.BinaryReader::m_maxCharsSize
	int32_t ___m_maxCharsSize_6;
	// System.Boolean System.IO.BinaryReader::m_2BytesPerChar
	bool ___m_2BytesPerChar_7;
	// System.Boolean System.IO.BinaryReader::m_isMemoryStream
	bool ___m_isMemoryStream_8;
	// System.Boolean System.IO.BinaryReader::m_leaveOpen
	bool ___m_leaveOpen_9;

public:
	inline static int32_t get_offset_of_m_stream_0() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_stream_0)); }
	inline Stream_t1273022909 * get_m_stream_0() const { return ___m_stream_0; }
	inline Stream_t1273022909 ** get_address_of_m_stream_0() { return &___m_stream_0; }
	inline void set_m_stream_0(Stream_t1273022909 * value)
	{
		___m_stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stream_0), value);
	}

	inline static int32_t get_offset_of_m_buffer_1() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_buffer_1)); }
	inline ByteU5BU5D_t4116647657* get_m_buffer_1() const { return ___m_buffer_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_buffer_1() { return &___m_buffer_1; }
	inline void set_m_buffer_1(ByteU5BU5D_t4116647657* value)
	{
		___m_buffer_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_buffer_1), value);
	}

	inline static int32_t get_offset_of_m_decoder_2() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_decoder_2)); }
	inline Decoder_t2204182725 * get_m_decoder_2() const { return ___m_decoder_2; }
	inline Decoder_t2204182725 ** get_address_of_m_decoder_2() { return &___m_decoder_2; }
	inline void set_m_decoder_2(Decoder_t2204182725 * value)
	{
		___m_decoder_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_decoder_2), value);
	}

	inline static int32_t get_offset_of_m_charBytes_3() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_charBytes_3)); }
	inline ByteU5BU5D_t4116647657* get_m_charBytes_3() const { return ___m_charBytes_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_charBytes_3() { return &___m_charBytes_3; }
	inline void set_m_charBytes_3(ByteU5BU5D_t4116647657* value)
	{
		___m_charBytes_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_charBytes_3), value);
	}

	inline static int32_t get_offset_of_m_singleChar_4() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_singleChar_4)); }
	inline CharU5BU5D_t3528271667* get_m_singleChar_4() const { return ___m_singleChar_4; }
	inline CharU5BU5D_t3528271667** get_address_of_m_singleChar_4() { return &___m_singleChar_4; }
	inline void set_m_singleChar_4(CharU5BU5D_t3528271667* value)
	{
		___m_singleChar_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_singleChar_4), value);
	}

	inline static int32_t get_offset_of_m_charBuffer_5() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_charBuffer_5)); }
	inline CharU5BU5D_t3528271667* get_m_charBuffer_5() const { return ___m_charBuffer_5; }
	inline CharU5BU5D_t3528271667** get_address_of_m_charBuffer_5() { return &___m_charBuffer_5; }
	inline void set_m_charBuffer_5(CharU5BU5D_t3528271667* value)
	{
		___m_charBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_charBuffer_5), value);
	}

	inline static int32_t get_offset_of_m_maxCharsSize_6() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_maxCharsSize_6)); }
	inline int32_t get_m_maxCharsSize_6() const { return ___m_maxCharsSize_6; }
	inline int32_t* get_address_of_m_maxCharsSize_6() { return &___m_maxCharsSize_6; }
	inline void set_m_maxCharsSize_6(int32_t value)
	{
		___m_maxCharsSize_6 = value;
	}

	inline static int32_t get_offset_of_m_2BytesPerChar_7() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_2BytesPerChar_7)); }
	inline bool get_m_2BytesPerChar_7() const { return ___m_2BytesPerChar_7; }
	inline bool* get_address_of_m_2BytesPerChar_7() { return &___m_2BytesPerChar_7; }
	inline void set_m_2BytesPerChar_7(bool value)
	{
		___m_2BytesPerChar_7 = value;
	}

	inline static int32_t get_offset_of_m_isMemoryStream_8() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_isMemoryStream_8)); }
	inline bool get_m_isMemoryStream_8() const { return ___m_isMemoryStream_8; }
	inline bool* get_address_of_m_isMemoryStream_8() { return &___m_isMemoryStream_8; }
	inline void set_m_isMemoryStream_8(bool value)
	{
		___m_isMemoryStream_8 = value;
	}

	inline static int32_t get_offset_of_m_leaveOpen_9() { return static_cast<int32_t>(offsetof(BinaryReader_t2428077293, ___m_leaveOpen_9)); }
	inline bool get_m_leaveOpen_9() const { return ___m_leaveOpen_9; }
	inline bool* get_address_of_m_leaveOpen_9() { return &___m_leaveOpen_9; }
	inline void set_m_leaveOpen_9(bool value)
	{
		___m_leaveOpen_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYREADER_T2428077293_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
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
#ifndef WWWFORM_T4064702195_H
#define WWWFORM_T4064702195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t4064702195  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t1293755103 * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t3319525431 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t3319525431 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t3319525431 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_t4116647657* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___formData_0)); }
	inline List_1_t1293755103 * get_formData_0() const { return ___formData_0; }
	inline List_1_t1293755103 ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t1293755103 * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((&___formData_0), value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fieldNames_1)); }
	inline List_1_t3319525431 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t3319525431 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t3319525431 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((&___fieldNames_1), value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___fileNames_2)); }
	inline List_1_t3319525431 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t3319525431 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t3319525431 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___fileNames_2), value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___types_3)); }
	inline List_1_t3319525431 * get_types_3() const { return ___types_3; }
	inline List_1_t3319525431 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t3319525431 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((&___types_3), value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___boundary_4)); }
	inline ByteU5BU5D_t4116647657* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_t4116647657* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t4064702195, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T4064702195_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef RESPONSE_T788464108_H
#define RESPONSE_T788464108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response
struct  Response_t788464108 
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::<Successful>k__BackingField
	bool ___U3CSuccessfulU3Ek__BackingField_0;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::<ResponseBody>k__BackingField
	String_t* ___U3CResponseBodyU3Ek__BackingField_1;
	// System.Byte[] Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::<ResponseData>k__BackingField
	ByteU5BU5D_t4116647657* ___U3CResponseDataU3Ek__BackingField_2;
	// System.Int64 Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Response_t788464108, ___U3CSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CSuccessfulU3Ek__BackingField_0() const { return ___U3CSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CSuccessfulU3Ek__BackingField_0() { return &___U3CSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CResponseBodyU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Response_t788464108, ___U3CResponseBodyU3Ek__BackingField_1)); }
	inline String_t* get_U3CResponseBodyU3Ek__BackingField_1() const { return ___U3CResponseBodyU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CResponseBodyU3Ek__BackingField_1() { return &___U3CResponseBodyU3Ek__BackingField_1; }
	inline void set_U3CResponseBodyU3Ek__BackingField_1(String_t* value)
	{
		___U3CResponseBodyU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResponseBodyU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CResponseDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Response_t788464108, ___U3CResponseDataU3Ek__BackingField_2)); }
	inline ByteU5BU5D_t4116647657* get_U3CResponseDataU3Ek__BackingField_2() const { return ___U3CResponseDataU3Ek__BackingField_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_U3CResponseDataU3Ek__BackingField_2() { return &___U3CResponseDataU3Ek__BackingField_2; }
	inline void set_U3CResponseDataU3Ek__BackingField_2(ByteU5BU5D_t4116647657* value)
	{
		___U3CResponseDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResponseDataU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CResponseCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Response_t788464108, ___U3CResponseCodeU3Ek__BackingField_3)); }
	inline int64_t get_U3CResponseCodeU3Ek__BackingField_3() const { return ___U3CResponseCodeU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3CResponseCodeU3Ek__BackingField_3() { return &___U3CResponseCodeU3Ek__BackingField_3; }
	inline void set_U3CResponseCodeU3Ek__BackingField_3(int64_t value)
	{
		___U3CResponseCodeU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response
struct Response_t788464108_marshaled_pinvoke
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	char* ___U3CResponseBodyU3Ek__BackingField_1;
	uint8_t* ___U3CResponseDataU3Ek__BackingField_2;
	int64_t ___U3CResponseCodeU3Ek__BackingField_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response
struct Response_t788464108_marshaled_com
{
	int32_t ___U3CSuccessfulU3Ek__BackingField_0;
	Il2CppChar* ___U3CResponseBodyU3Ek__BackingField_1;
	uint8_t* ___U3CResponseDataU3Ek__BackingField_2;
	int64_t ___U3CResponseCodeU3Ek__BackingField_3;
};
#endif // RESPONSE_T788464108_H
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
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
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
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_4;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_3)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_3() const { return ____activeReadWriteTask_3; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_3() { return &____activeReadWriteTask_3; }
	inline void set__activeReadWriteTask_3(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_3 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_3), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_4() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_4)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_4() const { return ____asyncActiveSemaphore_4; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_4() { return &____asyncActiveSemaphore_4; }
	inline void set__asyncActiveSemaphore_4(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_4 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_4), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
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
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
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
#ifndef TASKAWAITER_1_T3582946539_H
#define TASKAWAITER_1_T3582946539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>
struct  TaskAwaiter_1_t3582946539 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2194004283 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t3582946539, ___m_task_0)); }
	inline Task_1_t2194004283 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2194004283 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2194004283 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T3582946539_H
#ifndef TASKAWAITER_1_T568144337_H
#define TASKAWAITER_1_T568144337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>
struct  TaskAwaiter_1_t568144337 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3474169377 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t568144337, ___m_task_0)); }
	inline Task_1_t3474169377 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t3474169377 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t3474169377 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T568144337_H
#ifndef TASKAWAITER_1_T4090345775_H
#define TASKAWAITER_1_T4090345775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>
struct  TaskAwaiter_1_t4090345775 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2701403519 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t4090345775, ___m_task_0)); }
	inline Task_1_t2701403519 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2701403519 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2701403519 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T4090345775_H
#ifndef TASKAWAITER_1_T1954678761_H
#define TASKAWAITER_1_T1954678761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>
struct  TaskAwaiter_1_t1954678761 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t565736505 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1954678761, ___m_task_0)); }
	inline Task_1_t565736505 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t565736505 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t565736505 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1954678761_H
#ifndef TASKAWAITER_1_T2524976103_H
#define TASKAWAITER_1_T2524976103_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>
struct  TaskAwaiter_1_t2524976103 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1136033847 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2524976103, ___m_task_0)); }
	inline Task_1_t1136033847 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1136033847 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1136033847 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T2524976103_H
#ifndef TASKAWAITER_1_T3654922602_H
#define TASKAWAITER_1_T3654922602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct  TaskAwaiter_1_t3654922602 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t2265980346 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t3654922602, ___m_task_0)); }
	inline Task_1_t2265980346 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t2265980346 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t2265980346 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T3654922602_H
#ifndef TASKAWAITER_1_T2891770396_H
#define TASKAWAITER_1_T2891770396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>
struct  TaskAwaiter_1_t2891770396 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t1502828140 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2891770396, ___m_task_0)); }
	inline Task_1_t1502828140 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t1502828140 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t1502828140 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T2891770396_H
#ifndef TASKAWAITER_1_T1579621299_H
#define TASKAWAITER_1_T1579621299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t1579621299 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t190679043 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t1579621299, ___m_task_0)); }
	inline Task_1_t190679043 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t190679043 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t190679043 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T1579621299_H
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
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef APPINSTALLSTATUS_T860440171_H
#define APPINSTALLSTATUS_T860440171_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus
struct  AppInstallStatus_t860440171 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AppInstallStatus_t860440171, ___value___2)); }
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
#endif // APPINSTALLSTATUS_T860440171_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___2)); }
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
#endif // FILEACCESS_T1659085276_H
#ifndef FILEATTRIBUTES_T3417205536_H
#define FILEATTRIBUTES_T3417205536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAttributes
struct  FileAttributes_t3417205536 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t3417205536, ___value___2)); }
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
#endif // FILEATTRIBUTES_T3417205536_H
#ifndef FILEMODE_T1183438340_H
#define FILEMODE_T1183438340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileMode
struct  FileMode_t1183438340 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t1183438340, ___value___2)); }
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
#endif // FILEMODE_T1183438340_H
#ifndef FILESHARE_T3553318550_H
#define FILESHARE_T3553318550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileShare
struct  FileShare_t3553318550 
{
public:
	// System.Int32 System.IO.FileShare::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileShare_t3553318550, ___value___2)); }
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
#endif // FILESHARE_T3553318550_H
#ifndef ASYNCTASKMETHODBUILDER_1_T3616837854_H
#define ASYNCTASKMETHODBUILDER_1_T3616837854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>
struct  AsyncTaskMethodBuilder_1_t3616837854 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t2701403519 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3616837854, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3616837854, ___m_task_2)); }
	inline Task_1_t2701403519 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t2701403519 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t2701403519 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t3616837854_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t2701403519 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t3616837854_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t2701403519 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t2701403519 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t2701403519 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T3616837854_H
#ifndef ASYNCTASKMETHODBUILDER_1_T1481170840_H
#define ASYNCTASKMETHODBUILDER_1_T1481170840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>
struct  AsyncTaskMethodBuilder_1_t1481170840 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t565736505 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1481170840, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1481170840, ___m_task_2)); }
	inline Task_1_t565736505 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t565736505 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t565736505 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1481170840_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t565736505 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1481170840_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t565736505 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t565736505 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t565736505 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1481170840_H
#ifndef ASYNCTASKMETHODBUILDER_1_T2051468182_H
#define ASYNCTASKMETHODBUILDER_1_T2051468182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>
struct  AsyncTaskMethodBuilder_1_t2051468182 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1136033847 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2051468182, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2051468182, ___m_task_2)); }
	inline Task_1_t1136033847 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1136033847 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1136033847 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2051468182_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1136033847 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2051468182_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1136033847 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1136033847 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1136033847 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2051468182_H
#ifndef ASYNCTASKMETHODBUILDER_1_T2418262475_H
#define ASYNCTASKMETHODBUILDER_1_T2418262475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>
struct  AsyncTaskMethodBuilder_1_t2418262475 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1502828140 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475, ___m_task_2)); }
	inline Task_1_t1502828140 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1502828140 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1502828140 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t2418262475_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1502828140 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t2418262475_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1502828140 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1502828140 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1502828140 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T2418262475_H
#ifndef ASYNCTASKMETHODBUILDER_1_T1106113378_H
#define ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct  AsyncTaskMethodBuilder_1_t1106113378 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t2955600131  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t190679043 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t2955600131  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t2955600131 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t2955600131  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378, ___m_task_2)); }
	inline Task_1_t190679043 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t190679043 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t190679043 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t1106113378_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t190679043 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t1106113378_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t190679043 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t190679043 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t190679043 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T1106113378_H
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t1196198384 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t3187275312 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t2170468915 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_taskScheduler_7)); }
	inline TaskScheduler_t1196198384 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t1196198384 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t1196198384 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_parent_8)); }
	inline Task_t3187275312 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t3187275312 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t3187275312 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_28), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___m_contingentProperties_33)); }
	inline ContingentProperties_t2170468915 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t2170468915 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t2170468915 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_33), value);
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t2660013028 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t2075988643 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t3252573759 * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t1600215562 * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t3187275312 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t4012569436 * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t3823316192 * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t3905400288 * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t2660013028 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t2660013028 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t2660013028 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_29), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_t2075988643 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_t2075988643 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_t2075988643 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_31), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_32), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_t3252573759 * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_t3252573759 ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_t3252573759 * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_34), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_t1600215562 * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_t1600215562 ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_t1600215562 * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_35), value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_completedTask_36)); }
	inline Task_t3187275312 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t3187275312 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t3187275312 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_36), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_t4012569436 * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_t4012569436 ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_t4012569436 * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_37), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t3823316192 * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t3823316192 ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t3823316192 * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_38), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t3905400288 * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t3905400288 ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t3905400288 * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_39), value);
	}
};

struct Task_t3187275312_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t3187275312 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t1472778820 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t3187275312 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t3187275312 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t3187275312 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t1472778820 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t1472778820 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t1472778820 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef U3CGETMACHINENAMEASYNCU3ED__17_T1757619476_H
#define U3CGETMACHINENAMEASYNCU3ED__17_T1757619476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17
struct  U3CGetMachineNameAsyncU3Ed__17_t1757619476 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<>t__builder
	AsyncTaskMethodBuilder_1_t3616837854  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::<>u__3
	TaskAwaiter_1_t4090345775  ___U3CU3Eu__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t3616837854  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t3616837854 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t3616837854  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CresponseU3E5__2_3)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_6() { return static_cast<int32_t>(offsetof(U3CGetMachineNameAsyncU3Ed__17_t1757619476, ___U3CU3Eu__3_6)); }
	inline TaskAwaiter_1_t4090345775  get_U3CU3Eu__3_6() const { return ___U3CU3Eu__3_6; }
	inline TaskAwaiter_1_t4090345775 * get_address_of_U3CU3Eu__3_6() { return &___U3CU3Eu__3_6; }
	inline void set_U3CU3Eu__3_6(TaskAwaiter_1_t4090345775  value)
	{
		___U3CU3Eu__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETMACHINENAMEASYNCU3ED__17_T1757619476_H
#ifndef U3CGETPOWERSTATEASYNCU3ED__19_T4035957140_H
#define U3CGETPOWERSTATEASYNCU3ED__19_T4035957140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19
struct  U3CGetPowerStateAsyncU3Ed__19_t4035957140 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<>t__builder
	AsyncTaskMethodBuilder_1_t2051468182  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::<>u__3
	TaskAwaiter_1_t2524976103  ___U3CU3Eu__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2051468182  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2051468182 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2051468182  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CresponseU3E5__2_3)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_6() { return static_cast<int32_t>(offsetof(U3CGetPowerStateAsyncU3Ed__19_t4035957140, ___U3CU3Eu__3_6)); }
	inline TaskAwaiter_1_t2524976103  get_U3CU3Eu__3_6() const { return ___U3CU3Eu__3_6; }
	inline TaskAwaiter_1_t2524976103 * get_address_of_U3CU3Eu__3_6() { return &___U3CU3Eu__3_6; }
	inline void set_U3CU3Eu__3_6(TaskAwaiter_1_t2524976103  value)
	{
		___U3CU3Eu__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETPOWERSTATEASYNCU3ED__19_T4035957140_H
#ifndef U3CGETWIFINETWORKINTERFACESASYNCU3ED__35_T4183541639_H
#define U3CGETWIFINETWORKINTERFACESASYNCU3ED__35_T4183541639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35
struct  U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<>t__builder
	AsyncTaskMethodBuilder_1_t1481170840  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::<>u__3
	TaskAwaiter_1_t1954678761  ___U3CU3Eu__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t1481170840  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t1481170840 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t1481170840  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CresponseU3E5__2_3)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_6() { return static_cast<int32_t>(offsetof(U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639, ___U3CU3Eu__3_6)); }
	inline TaskAwaiter_1_t1954678761  get_U3CU3Eu__3_6() const { return ___U3CU3Eu__3_6; }
	inline TaskAwaiter_1_t1954678761 * get_address_of_U3CU3Eu__3_6() { return &___U3CU3Eu__3_6; }
	inline void set_U3CU3Eu__3_6(TaskAwaiter_1_t1954678761  value)
	{
		___U3CU3Eu__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETWIFINETWORKINTERFACESASYNCU3ED__35_T4183541639_H
#ifndef U3CINSTALLAPPASYNCU3ED__26_T170559867_H
#define U3CINSTALLAPPASYNCU3ED__26_T170559867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26
struct  U3CInstallAppAsyncU3Ed__26_t170559867 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::appFullPath
	String_t* ___appFullPath_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::waitForDone
	bool ___waitForDone_4;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<fileName>5__2
	String_t* ___U3CfileNameU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::<>u__3
	TaskAwaiter_1_t3654922602  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_appFullPath_3() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___appFullPath_3)); }
	inline String_t* get_appFullPath_3() const { return ___appFullPath_3; }
	inline String_t** get_address_of_appFullPath_3() { return &___appFullPath_3; }
	inline void set_appFullPath_3(String_t* value)
	{
		___appFullPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___appFullPath_3), value);
	}

	inline static int32_t get_offset_of_waitForDone_4() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___waitForDone_4)); }
	inline bool get_waitForDone_4() const { return ___waitForDone_4; }
	inline bool* get_address_of_waitForDone_4() { return &___waitForDone_4; }
	inline void set_waitForDone_4(bool value)
	{
		___waitForDone_4 = value;
	}

	inline static int32_t get_offset_of_U3CfileNameU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CfileNameU3E5__2_5)); }
	inline String_t* get_U3CfileNameU3E5__2_5() const { return ___U3CfileNameU3E5__2_5; }
	inline String_t** get_address_of_U3CfileNameU3E5__2_5() { return &___U3CfileNameU3E5__2_5; }
	inline void set_U3CfileNameU3E5__2_5(String_t* value)
	{
		___U3CfileNameU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CfileNameU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CInstallAppAsyncU3Ed__26_t170559867, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t3654922602  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t3654922602 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t3654922602  value)
	{
		___U3CU3Eu__3_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CINSTALLAPPASYNCU3ED__26_T170559867_H
#ifndef U3CISAPPINSTALLEDASYNCU3ED__22_T442704640_H
#define U3CISAPPINSTALLEDASYNCU3ED__22_T442704640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22
struct  U3CIsAppInstalledAsyncU3Ed__22_t442704640 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::packageName
	String_t* ___packageName_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::<>u__1
	TaskAwaiter_1_t568144337  ___U3CU3Eu__1_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__22_t442704640, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__22_t442704640, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_packageName_2() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__22_t442704640, ___packageName_2)); }
	inline String_t* get_packageName_2() const { return ___packageName_2; }
	inline String_t** get_address_of_packageName_2() { return &___packageName_2; }
	inline void set_packageName_2(String_t* value)
	{
		___packageName_2 = value;
		Il2CppCodeGenWriteBarrier((&___packageName_2), value);
	}

	inline static int32_t get_offset_of_targetDevice_3() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__22_t442704640, ___targetDevice_3)); }
	inline DeviceInfo_t313565737 * get_targetDevice_3() const { return ___targetDevice_3; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_3() { return &___targetDevice_3; }
	inline void set_targetDevice_3(DeviceInfo_t313565737 * value)
	{
		___targetDevice_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CIsAppInstalledAsyncU3Ed__22_t442704640, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t568144337  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t568144337 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t568144337  value)
	{
		___U3CU3Eu__1_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISAPPINSTALLEDASYNCU3ED__22_T442704640_H
#ifndef U3CISAPPRUNNINGASYNCU3ED__23_T3498844109_H
#define U3CISAPPRUNNINGASYNCU3ED__23_T3498844109_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23
struct  U3CIsAppRunningAsyncU3Ed__23_t3498844109 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::appInfo
	ApplicationInfo_t2068629202 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<>u__1
	TaskAwaiter_1_t568144337  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::<>u__3
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___appInfo_2)); }
	inline ApplicationInfo_t2068629202 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_t2068629202 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_t2068629202 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___appInfo_2), value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___packageName_3), value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___targetDevice_4)); }
	inline DeviceInfo_t313565737 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t313565737 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_4), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CresponseU3E5__2_5)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t568144337  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t568144337 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t568144337  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CIsAppRunningAsyncU3Ed__23_t3498844109, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__3_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISAPPRUNNINGASYNCU3ED__23_T3498844109_H
#ifndef U3CLAUNCHAPPASYNCU3ED__29_T40369088_H
#define U3CLAUNCHAPPASYNCU3ED__29_T40369088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29
struct  U3CLaunchAppAsyncU3Ed__29_t40369088 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::appInfo
	ApplicationInfo_t2068629202 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>u__1
	TaskAwaiter_1_t568144337  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>u__3
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__3_8;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::<>u__4
	RuntimeObject * ___U3CU3Eu__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___appInfo_2)); }
	inline ApplicationInfo_t2068629202 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_t2068629202 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_t2068629202 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___appInfo_2), value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___packageName_3), value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___targetDevice_4)); }
	inline DeviceInfo_t313565737 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t313565737 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_4), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CresponseU3E5__2_5)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t568144337  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t568144337 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t568144337  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__3_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__4_9() { return static_cast<int32_t>(offsetof(U3CLaunchAppAsyncU3Ed__29_t40369088, ___U3CU3Eu__4_9)); }
	inline RuntimeObject * get_U3CU3Eu__4_9() const { return ___U3CU3Eu__4_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__4_9() { return &___U3CU3Eu__4_9; }
	inline void set_U3CU3Eu__4_9(RuntimeObject * value)
	{
		___U3CU3Eu__4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLAUNCHAPPASYNCU3ED__29_T40369088_H
#ifndef U3CREFRESHCSRFTOKENASYNCU3ED__37_T1401225065_H
#define U3CREFRESHCSRFTOKENASYNCU3ED__37_T1401225065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37
struct  U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREFRESHCSRFTOKENASYNCU3ED__37_T1401225065_H
#ifndef U3CRESTARTASYNCU3ED__20_T131148061_H
#define U3CRESTARTASYNCU3ED__20_T131148061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20
struct  U3CRestartAsyncU3Ed__20_t131148061 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<hasRestarted>5__3
	bool ___U3ChasRestartedU3E5__3_6;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::<query>5__4
	String_t* ___U3CqueryU3E5__4_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CresponseU3E5__2_3)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_5 = value;
	}

	inline static int32_t get_offset_of_U3ChasRestartedU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3ChasRestartedU3E5__3_6)); }
	inline bool get_U3ChasRestartedU3E5__3_6() const { return ___U3ChasRestartedU3E5__3_6; }
	inline bool* get_address_of_U3ChasRestartedU3E5__3_6() { return &___U3ChasRestartedU3E5__3_6; }
	inline void set_U3ChasRestartedU3E5__3_6(bool value)
	{
		___U3ChasRestartedU3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CqueryU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CRestartAsyncU3Ed__20_t131148061, ___U3CqueryU3E5__4_7)); }
	inline String_t* get_U3CqueryU3E5__4_7() const { return ___U3CqueryU3E5__4_7; }
	inline String_t** get_address_of_U3CqueryU3E5__4_7() { return &___U3CqueryU3E5__4_7; }
	inline void set_U3CqueryU3E5__4_7(String_t* value)
	{
		___U3CqueryU3E5__4_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueryU3E5__4_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CRESTARTASYNCU3ED__20_T131148061_H
#ifndef U3CSHUTDOWNASYNCU3ED__21_T4073527714_H
#define U3CSHUTDOWNASYNCU3ED__21_T4073527714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21
struct  U3CShutdownAsyncU3Ed__21_t4073527714 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_2;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::<>u__1
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_targetDevice_2() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___targetDevice_2)); }
	inline DeviceInfo_t313565737 * get_targetDevice_2() const { return ___targetDevice_2; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_2() { return &___targetDevice_2; }
	inline void set_targetDevice_2(DeviceInfo_t313565737 * value)
	{
		___targetDevice_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_2), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___U3CresponseU3E5__2_3)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_3() const { return ___U3CresponseU3E5__2_3; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_3() { return &___U3CresponseU3E5__2_3; }
	inline void set_U3CresponseU3E5__2_3(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CShutdownAsyncU3Ed__21_t4073527714, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSHUTDOWNASYNCU3ED__21_T4073527714_H
#ifndef U3CSTOPAPPASYNCU3ED__30_T3766093556_H
#define U3CSTOPAPPASYNCU3ED__30_T3766093556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30
struct  U3CStopAppAsyncU3Ed__30_t3766093556 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::appInfo
	ApplicationInfo_t2068629202 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>u__1
	TaskAwaiter_1_t568144337  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>u__3
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__3_8;
	// System.Object Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::<>u__4
	RuntimeObject * ___U3CU3Eu__4_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___appInfo_2)); }
	inline ApplicationInfo_t2068629202 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_t2068629202 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_t2068629202 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___appInfo_2), value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___packageName_3), value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___targetDevice_4)); }
	inline DeviceInfo_t313565737 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t313565737 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_4), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CresponseU3E5__2_5)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t568144337  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t568144337 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t568144337  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__3_8 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__4_9() { return static_cast<int32_t>(offsetof(U3CStopAppAsyncU3Ed__30_t3766093556, ___U3CU3Eu__4_9)); }
	inline RuntimeObject * get_U3CU3Eu__4_9() const { return ___U3CU3Eu__4_9; }
	inline RuntimeObject ** get_address_of_U3CU3Eu__4_9() { return &___U3CU3Eu__4_9; }
	inline void set_U3CU3Eu__4_9(RuntimeObject * value)
	{
		___U3CU3Eu__4_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Eu__4_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTOPAPPASYNCU3ED__30_T3766093556_H
#ifndef U3CUNINSTALLAPPASYNCU3ED__28_T2000630058_H
#define U3CUNINSTALLAPPASYNCU3ED__28_T2000630058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28
struct  U3CUninstallAppAsyncU3Ed__28_t2000630058 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<>t__builder
	AsyncTaskMethodBuilder_1_t2418262475  ___U3CU3Et__builder_1;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::appInfo
	ApplicationInfo_t2068629202 * ___appInfo_2;
	// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::packageName
	String_t* ___packageName_3;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::targetDevice
	DeviceInfo_t313565737 * ___targetDevice_4;
	// Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<response>5__2
	Response_t788464108  ___U3CresponseU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<>u__1
	TaskAwaiter_1_t568144337  ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<>u__2
	TaskAwaiter_1_t3582946539  ___U3CU3Eu__2_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::<>u__3
	TaskAwaiter_1_t2891770396  ___U3CU3Eu__3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_1_t2418262475  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_1_t2418262475 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_1_t2418262475  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_appInfo_2() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___appInfo_2)); }
	inline ApplicationInfo_t2068629202 * get_appInfo_2() const { return ___appInfo_2; }
	inline ApplicationInfo_t2068629202 ** get_address_of_appInfo_2() { return &___appInfo_2; }
	inline void set_appInfo_2(ApplicationInfo_t2068629202 * value)
	{
		___appInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___appInfo_2), value);
	}

	inline static int32_t get_offset_of_packageName_3() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___packageName_3)); }
	inline String_t* get_packageName_3() const { return ___packageName_3; }
	inline String_t** get_address_of_packageName_3() { return &___packageName_3; }
	inline void set_packageName_3(String_t* value)
	{
		___packageName_3 = value;
		Il2CppCodeGenWriteBarrier((&___packageName_3), value);
	}

	inline static int32_t get_offset_of_targetDevice_4() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___targetDevice_4)); }
	inline DeviceInfo_t313565737 * get_targetDevice_4() const { return ___targetDevice_4; }
	inline DeviceInfo_t313565737 ** get_address_of_targetDevice_4() { return &___targetDevice_4; }
	inline void set_targetDevice_4(DeviceInfo_t313565737 * value)
	{
		___targetDevice_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetDevice_4), value);
	}

	inline static int32_t get_offset_of_U3CresponseU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CresponseU3E5__2_5)); }
	inline Response_t788464108  get_U3CresponseU3E5__2_5() const { return ___U3CresponseU3E5__2_5; }
	inline Response_t788464108 * get_address_of_U3CresponseU3E5__2_5() { return &___U3CresponseU3E5__2_5; }
	inline void set_U3CresponseU3E5__2_5(Response_t788464108  value)
	{
		___U3CresponseU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_6() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CU3Eu__1_6)); }
	inline TaskAwaiter_1_t568144337  get_U3CU3Eu__1_6() const { return ___U3CU3Eu__1_6; }
	inline TaskAwaiter_1_t568144337 * get_address_of_U3CU3Eu__1_6() { return &___U3CU3Eu__1_6; }
	inline void set_U3CU3Eu__1_6(TaskAwaiter_1_t568144337  value)
	{
		___U3CU3Eu__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_7() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CU3Eu__2_7)); }
	inline TaskAwaiter_1_t3582946539  get_U3CU3Eu__2_7() const { return ___U3CU3Eu__2_7; }
	inline TaskAwaiter_1_t3582946539 * get_address_of_U3CU3Eu__2_7() { return &___U3CU3Eu__2_7; }
	inline void set_U3CU3Eu__2_7(TaskAwaiter_1_t3582946539  value)
	{
		___U3CU3Eu__2_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__3_8() { return static_cast<int32_t>(offsetof(U3CUninstallAppAsyncU3Ed__28_t2000630058, ___U3CU3Eu__3_8)); }
	inline TaskAwaiter_1_t2891770396  get_U3CU3Eu__3_8() const { return ___U3CU3Eu__3_8; }
	inline TaskAwaiter_1_t2891770396 * get_address_of_U3CU3Eu__3_8() { return &___U3CU3Eu__3_8; }
	inline void set_U3CU3Eu__3_8(TaskAwaiter_1_t2891770396  value)
	{
		___U3CU3Eu__3_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNINSTALLAPPASYNCU3ED__28_T2000630058_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_7;
	// System.String System.IO.FileStream::name
	String_t* ___name_8;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t2755812594 * ___safeHandle_9;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_10;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_11;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_12;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_13;
	// System.Boolean System.IO.FileStream::async
	bool ___async_14;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_15;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_16;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_17;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_18;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_19;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_20;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_21;

public:
	inline static int32_t get_offset_of_buf_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_7)); }
	inline ByteU5BU5D_t4116647657* get_buf_7() const { return ___buf_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_7() { return &___buf_7; }
	inline void set_buf_7(ByteU5BU5D_t4116647657* value)
	{
		___buf_7 = value;
		Il2CppCodeGenWriteBarrier((&___buf_7), value);
	}

	inline static int32_t get_offset_of_name_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_8)); }
	inline String_t* get_name_8() const { return ___name_8; }
	inline String_t** get_address_of_name_8() { return &___name_8; }
	inline void set_name_8(String_t* value)
	{
		___name_8 = value;
		Il2CppCodeGenWriteBarrier((&___name_8), value);
	}

	inline static int32_t get_offset_of_safeHandle_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___safeHandle_9)); }
	inline SafeFileHandle_t2755812594 * get_safeHandle_9() const { return ___safeHandle_9; }
	inline SafeFileHandle_t2755812594 ** get_address_of_safeHandle_9() { return &___safeHandle_9; }
	inline void set_safeHandle_9(SafeFileHandle_t2755812594 * value)
	{
		___safeHandle_9 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_9), value);
	}

	inline static int32_t get_offset_of_isExposed_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___isExposed_10)); }
	inline bool get_isExposed_10() const { return ___isExposed_10; }
	inline bool* get_address_of_isExposed_10() { return &___isExposed_10; }
	inline void set_isExposed_10(bool value)
	{
		___isExposed_10 = value;
	}

	inline static int32_t get_offset_of_append_startpos_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_11)); }
	inline int64_t get_append_startpos_11() const { return ___append_startpos_11; }
	inline int64_t* get_address_of_append_startpos_11() { return &___append_startpos_11; }
	inline void set_append_startpos_11(int64_t value)
	{
		___append_startpos_11 = value;
	}

	inline static int32_t get_offset_of_access_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_12)); }
	inline int32_t get_access_12() const { return ___access_12; }
	inline int32_t* get_address_of_access_12() { return &___access_12; }
	inline void set_access_12(int32_t value)
	{
		___access_12 = value;
	}

	inline static int32_t get_offset_of_owner_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_13)); }
	inline bool get_owner_13() const { return ___owner_13; }
	inline bool* get_address_of_owner_13() { return &___owner_13; }
	inline void set_owner_13(bool value)
	{
		___owner_13 = value;
	}

	inline static int32_t get_offset_of_async_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_14)); }
	inline bool get_async_14() const { return ___async_14; }
	inline bool* get_address_of_async_14() { return &___async_14; }
	inline void set_async_14(bool value)
	{
		___async_14 = value;
	}

	inline static int32_t get_offset_of_canseek_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_15)); }
	inline bool get_canseek_15() const { return ___canseek_15; }
	inline bool* get_address_of_canseek_15() { return &___canseek_15; }
	inline void set_canseek_15(bool value)
	{
		___canseek_15 = value;
	}

	inline static int32_t get_offset_of_anonymous_16() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_16)); }
	inline bool get_anonymous_16() const { return ___anonymous_16; }
	inline bool* get_address_of_anonymous_16() { return &___anonymous_16; }
	inline void set_anonymous_16(bool value)
	{
		___anonymous_16 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_17() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_17)); }
	inline bool get_buf_dirty_17() const { return ___buf_dirty_17; }
	inline bool* get_address_of_buf_dirty_17() { return &___buf_dirty_17; }
	inline void set_buf_dirty_17(bool value)
	{
		___buf_dirty_17 = value;
	}

	inline static int32_t get_offset_of_buf_size_18() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_18)); }
	inline int32_t get_buf_size_18() const { return ___buf_size_18; }
	inline int32_t* get_address_of_buf_size_18() { return &___buf_size_18; }
	inline void set_buf_size_18(int32_t value)
	{
		___buf_size_18 = value;
	}

	inline static int32_t get_offset_of_buf_length_19() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_19)); }
	inline int32_t get_buf_length_19() const { return ___buf_length_19; }
	inline int32_t* get_address_of_buf_length_19() { return &___buf_length_19; }
	inline void set_buf_length_19(int32_t value)
	{
		___buf_length_19 = value;
	}

	inline static int32_t get_offset_of_buf_offset_20() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_20)); }
	inline int32_t get_buf_offset_20() const { return ___buf_offset_20; }
	inline int32_t* get_address_of_buf_offset_20() { return &___buf_offset_20; }
	inline void set_buf_offset_20(int32_t value)
	{
		___buf_offset_20 = value;
	}

	inline static int32_t get_offset_of_buf_start_21() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_21)); }
	inline int64_t get_buf_start_21() const { return ___buf_start_21; }
	inline int64_t* get_address_of_buf_start_21() { return &___buf_start_21; }
	inline void set_buf_start_21(int64_t value)
	{
		___buf_start_21 = value;
	}
};

struct FileStream_t4292183065_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_t4116647657* ___buf_recycle_5;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_6;

public:
	inline static int32_t get_offset_of_buf_recycle_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_5)); }
	inline ByteU5BU5D_t4116647657* get_buf_recycle_5() const { return ___buf_recycle_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_recycle_5() { return &___buf_recycle_5; }
	inline void set_buf_recycle_5(ByteU5BU5D_t4116647657* value)
	{
		___buf_recycle_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_5), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_lock_6)); }
	inline RuntimeObject * get_buf_recycle_lock_6() const { return ___buf_recycle_lock_6; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_6() { return &___buf_recycle_lock_6; }
	inline void set_buf_recycle_lock_6(RuntimeObject * value)
	{
		___buf_recycle_lock_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef MONOIOSTAT_T592533987_H
#define MONOIOSTAT_T592533987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MonoIOStat
struct  MonoIOStat_t592533987 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t592533987, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOIOSTAT_T592533987_H
#ifndef TASK_1_T2194004283_H
#define TASK_1_T2194004283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>
struct  Task_1_t2194004283  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Response_t788464108  ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2194004283, ___m_result_40)); }
	inline Response_t788464108  get_m_result_40() const { return ___m_result_40; }
	inline Response_t788464108 * get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Response_t788464108  value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t2194004283_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t847892654 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2005434166 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2194004283_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t847892654 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t847892654 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t847892654 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2194004283_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2005434166 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2005434166 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2005434166 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T2194004283_H
#ifndef TASK_1_T3474169377_H
#define TASK_1_T3474169377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>
struct  Task_1_t3474169377  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	ApplicationInfo_t2068629202 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t3474169377, ___m_result_40)); }
	inline ApplicationInfo_t2068629202 * get_m_result_40() const { return ___m_result_40; }
	inline ApplicationInfo_t2068629202 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(ApplicationInfo_t2068629202 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t3474169377_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t2128057748 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t3285599260 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t3474169377_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t2128057748 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t2128057748 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t2128057748 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t3474169377_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t3285599260 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t3285599260 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t3285599260 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T3474169377_H
#ifndef TASK_1_T2701403519_H
#define TASK_1_T2701403519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>
struct  Task_1_t2701403519  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	MachineName_t1295863344 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2701403519, ___m_result_40)); }
	inline MachineName_t1295863344 * get_m_result_40() const { return ___m_result_40; }
	inline MachineName_t1295863344 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(MachineName_t1295863344 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t2701403519_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t1355291890 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2512833402 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2701403519_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t1355291890 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t1355291890 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t1355291890 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2701403519_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2512833402 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2512833402 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2512833402 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T2701403519_H
#ifndef TASK_1_T565736505_H
#define TASK_1_T565736505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>
struct  Task_1_t565736505  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	NetworkInterfaces_t3455163626 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t565736505, ___m_result_40)); }
	inline NetworkInterfaces_t3455163626 * get_m_result_40() const { return ___m_result_40; }
	inline NetworkInterfaces_t3455163626 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(NetworkInterfaces_t3455163626 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t565736505_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t3514592172 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t377166388 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t565736505_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t3514592172 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t3514592172 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t3514592172 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t565736505_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t377166388 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t377166388 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t377166388 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T565736505_H
#ifndef TASK_1_T1136033847_H
#define TASK_1_T1136033847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>
struct  Task_1_t1136033847  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	PowerStateInfo_t4025460968 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1136033847, ___m_result_40)); }
	inline PowerStateInfo_t4025460968 * get_m_result_40() const { return ___m_result_40; }
	inline PowerStateInfo_t4025460968 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(PowerStateInfo_t4025460968 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_40), value);
	}
};

struct Task_1_t1136033847_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4084889514 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t947463730 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1136033847_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t4084889514 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t4084889514 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t4084889514 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1136033847_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t947463730 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t947463730 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t947463730 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1136033847_H
#ifndef TASK_1_T2265980346_H
#define TASK_1_T2265980346_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>
struct  Task_1_t2265980346  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t2265980346, ___m_result_40)); }
	inline int32_t get_m_result_40() const { return ___m_result_40; }
	inline int32_t* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(int32_t value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t2265980346_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t919868717 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2077410229 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t2265980346_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t919868717 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t919868717 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t919868717 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t2265980346_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t2077410229 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t2077410229 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t2077410229 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T2265980346_H
#ifndef TASK_1_T1502828140_H
#define TASK_1_T1502828140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_t1502828140  : public Task_t3187275312
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t1502828140, ___m_result_40)); }
	inline bool get_m_result_40() const { return ___m_result_40; }
	inline bool* get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(bool value)
	{
		___m_result_40 = value;
	}
};

struct Task_1_t1502828140_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t156716511 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t1314258023 * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t1502828140_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t156716511 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t156716511 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t156716511 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_41), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t1502828140_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t1314258023 * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t1314258023 ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t1314258023 * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T1502828140_H
#ifndef FILESYSTEMINFO_T3745885336_H
#define FILESYSTEMINFO_T3745885336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileSystemInfo
struct  FileSystemInfo_t3745885336  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t592533987  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ____data_1)); }
	inline MonoIOStat_t592533987  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t592533987 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t592533987  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((&___FullPath_3), value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalPath_4), value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t3745885336, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((&____displayPath_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESYSTEMINFO_T3745885336_H
#ifndef DIRECTORYINFO_T35957480_H
#define DIRECTORYINFO_T35957480_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.DirectoryInfo
struct  DirectoryInfo_t35957480  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((&___current_6), value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t35957480, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((&___parent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIRECTORYINFO_T35957480_H
#ifndef FILEINFO_T1169991790_H
#define FILEINFO_T1169991790_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileInfo
struct  FileInfo_t1169991790  : public FileSystemInfo_t3745885336
{
public:
	// System.String System.IO.FileInfo::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(FileInfo_t1169991790, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((&____name_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEINFO_T1169991790_H
// System.IO.FileInfo[]
struct FileInfoU5BU5D_t2389029403  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FileInfo_t1169991790 * m_Items[1];

public:
	inline FileInfo_t1169991790 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t1169991790 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t1169991790 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FileInfo_t1169991790 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t1169991790 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t1169991790 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessInfo[]
struct ProcessInfoU5BU5D_t4127039660  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ProcessInfo_t1668061809 * m_Items[1];

public:
	inline ProcessInfo_t1668061809 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ProcessInfo_t1668061809 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ProcessInfo_t1668061809 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ProcessInfo_t1668061809 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ProcessInfo_t1668061809 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ProcessInfo_t1668061809 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t2891770396  Task_1_GetAwaiter_m1353846373_gshared (Task_1_t1502828140 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m692154841_gshared (TaskAwaiter_1_t2891770396 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m3924021476_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_GetResult_m1801915560_gshared (TaskAwaiter_1_t2891770396 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t3582946539  Task_1_GetAwaiter_m1468115537_gshared (Task_1_t2194004283 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m2426772051_gshared (TaskAwaiter_1_t3582946539 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2814246253_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::GetResult()
extern "C" IL2CPP_METHOD_ATTR Response_t788464108  TaskAwaiter_1_GetResult_m3392144022_gshared (TaskAwaiter_1_t3582946539 * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t1579621299  Task_1_GetAwaiter_m95887362_gshared (Task_1_t190679043 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m3474976000_gshared (TaskAwaiter_1_t1579621299 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m3699927945_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t1579621299 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m323631113_gshared (TaskAwaiter_1_t1579621299 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1501290175_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m923635912_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m2658138191_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m1253966129_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m2991072374_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3993727631_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3058837326_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t1579621299 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m740833170_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m3495862231_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m3269871869_gshared (AsyncTaskMethodBuilder_1_t1106113378 * __this, TaskAwaiter_1_t1579621299 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t3654922602  Task_1_GetAwaiter_m3398521935_gshared (Task_1_t2265980346 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m2760376190_gshared (TaskAwaiter_1_t3654922602 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3654922602 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetResult()
extern "C" IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m3957052770_gshared (TaskAwaiter_1_t3654922602 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m3066925186_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m772896578_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2434806618_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t1579621299 * p0, U3CIsAppInstalledAsyncU3Ed__22_t442704640 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m3756872684_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t1579621299 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m239795845_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t1579621299 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m2598100373_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject ** p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3993293265_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m2051736387_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CRestartAsyncU3Ed__20_t131148061 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CRestartAsyncU3Ed__20_t131148061 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CShutdownAsyncU3Ed__21_t4073527714 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CShutdownAsyncU3Ed__21_t4073527714 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3938067941_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t1579621299 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<System.Object,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopAppAsyncU3Ed__30_t3766093556_m476117818_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject ** p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m863700715_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t1579621299 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207_gshared (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method);

// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::EnsureAuthenticationAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_EnsureAuthenticationAsync_m72585381 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Boolean>::GetAwaiter()
inline TaskAwaiter_1_t2891770396  Task_1_GetAwaiter_m1353846373 (Task_1_t1502828140 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2891770396  (*) (Task_1_t1502828140 *, const RuntimeMethod*))Task_1_GetAwaiter_m1353846373_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m692154841 (TaskAwaiter_1_t2891770396 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2891770396 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m692154841_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713 (AsyncTaskMethodBuilder_1_t3616837854 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, TaskAwaiter_1_t2891770396 *, U3CGetMachineNameAsyncU3Ed__17_t1757619476 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m3924021476_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>::GetResult()
inline bool TaskAwaiter_1_GetResult_m1801915560 (TaskAwaiter_1_t2891770396 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2891770396 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m1801915560_gshared)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::FinalizeUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* DevicePortal_FinalizeUrl_m2132004234 (RuntimeObject * __this /* static, unused */, String_t* ___targetUrl0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo::get_Authorization()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t1632706988 * DeviceInfo_get_Authorization_m3424419350 (DeviceInfo_t313565737 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Rest::GetAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2194004283 * Rest_GetAsync_m2018571585 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Dictionary_2_t1632706988 * ___headers1, int32_t ___timeout2, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::GetAwaiter()
inline TaskAwaiter_1_t3582946539  Task_1_GetAwaiter_m1468115537 (Task_1_t2194004283 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t3582946539  (*) (Task_1_t2194004283 *, const RuntimeMethod*))Task_1_GetAwaiter_m1468115537_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m2426772051 (TaskAwaiter_1_t3582946539 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t3582946539 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m2426772051_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2812742169 (AsyncTaskMethodBuilder_1_t3616837854 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, TaskAwaiter_1_t3582946539 *, U3CGetMachineNameAsyncU3Ed__17_t1757619476 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2814246253_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>::GetResult()
inline Response_t788464108  TaskAwaiter_1_GetResult_m3392144022 (TaskAwaiter_1_t3582946539 * __this, const RuntimeMethod* method)
{
	return ((  Response_t788464108  (*) (TaskAwaiter_1_t3582946539 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3392144022_gshared)(__this, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::get_Successful()
extern "C" IL2CPP_METHOD_ATTR bool Response_get_Successful_m3489788737 (Response_t788464108 * __this, const RuntimeMethod* method);
// System.Int64 Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::get_ResponseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t Response_get_ResponseCode_m32631037 (Response_t788464108 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::RefreshCsrfTokenAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_RefreshCsrfTokenAsync_m2683322697 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::GetMachineNameAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2701403519 * DevicePortal_GetMachineNameAsync_m3609229833 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::GetAwaiter()
inline TaskAwaiter_1_t4090345775  Task_1_GetAwaiter_m3786675719 (Task_1_t2701403519 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t4090345775  (*) (Task_1_t2701403519 *, const RuntimeMethod*))Task_1_GetAwaiter_m95887362_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m311690839 (TaskAwaiter_1_t4090345775 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t4090345775 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3474976000_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4090345775_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m240981383 (AsyncTaskMethodBuilder_1_t3616837854 * __this, TaskAwaiter_1_t4090345775 * p0, U3CGetMachineNameAsyncU3Ed__17_t1757619476 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, TaskAwaiter_1_t4090345775 *, U3CGetMachineNameAsyncU3Ed__17_t1757619476 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m3699927945_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::GetResult()
inline MachineName_t1295863344 * TaskAwaiter_1_GetResult_m3303095857 (TaskAwaiter_1_t4090345775 * __this, const RuntimeMethod* method)
{
	return ((  MachineName_t1295863344 * (*) (TaskAwaiter_1_t4090345775 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m323631113_gshared)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response::get_ResponseBody()
extern "C" IL2CPP_METHOD_ATTR String_t* Response_get_ResponseBody_m911791604 (Response_t788464108 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>(System.String)
inline MachineName_t1295863344 * JsonUtility_FromJson_TisMachineName_t1295863344_m114331045 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  MachineName_t1295863344 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1501290175_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m156191284 (AsyncTaskMethodBuilder_1_t3616837854 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m923635912_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m983501450 (AsyncTaskMethodBuilder_1_t3616837854 * __this, MachineName_t1295863344 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, MachineName_t1295863344 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m2658138191_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368 (U3CGetMachineNameAsyncU3Ed__17_t1757619476 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.MachineName>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m2612820978 (AsyncTaskMethodBuilder_1_t3616837854 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t3616837854 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m1253966129_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187 (U3CGetMachineNameAsyncU3Ed__17_t1757619476 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127 (AsyncTaskMethodBuilder_1_t2051468182 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, TaskAwaiter_1_t2891770396 *, U3CGetPowerStateAsyncU3Ed__19_t4035957140 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m2991072374_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3157683791 (AsyncTaskMethodBuilder_1_t2051468182 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, TaskAwaiter_1_t3582946539 *, U3CGetPowerStateAsyncU3Ed__19_t4035957140 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3993727631_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::GetPowerStateAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1136033847 * DevicePortal_GetPowerStateAsync_m4026587630 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::GetAwaiter()
inline TaskAwaiter_1_t2524976103  Task_1_GetAwaiter_m3993357899 (Task_1_t1136033847 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t2524976103  (*) (Task_1_t1136033847 *, const RuntimeMethod*))Task_1_GetAwaiter_m95887362_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m4064141183 (TaskAwaiter_1_t2524976103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t2524976103 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3474976000_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2524976103_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m231500414 (AsyncTaskMethodBuilder_1_t2051468182 * __this, TaskAwaiter_1_t2524976103 * p0, U3CGetPowerStateAsyncU3Ed__19_t4035957140 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, TaskAwaiter_1_t2524976103 *, U3CGetPowerStateAsyncU3Ed__19_t4035957140 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3058837326_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::GetResult()
inline PowerStateInfo_t4025460968 * TaskAwaiter_1_GetResult_m2327709505 (TaskAwaiter_1_t2524976103 * __this, const RuntimeMethod* method)
{
	return ((  PowerStateInfo_t4025460968 * (*) (TaskAwaiter_1_t2524976103 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m323631113_gshared)(__this, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>(System.String)
inline PowerStateInfo_t4025460968 * JsonUtility_FromJson_TisPowerStateInfo_t4025460968_m1454032155 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  PowerStateInfo_t4025460968 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1501290175_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m886564337 (AsyncTaskMethodBuilder_1_t2051468182 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m923635912_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m1793936250 (AsyncTaskMethodBuilder_1_t2051468182 * __this, PowerStateInfo_t4025460968 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, PowerStateInfo_t4025460968 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m2658138191_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908 (U3CGetPowerStateAsyncU3Ed__19_t4035957140 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.PowerStateInfo>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3978379298 (AsyncTaskMethodBuilder_1_t2051468182 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2051468182 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m1253966129_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724 (U3CGetPowerStateAsyncU3Ed__19_t4035957140 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073 (AsyncTaskMethodBuilder_1_t1481170840 * __this, TaskAwaiter_1_t2891770396 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, TaskAwaiter_1_t2891770396 *, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m740833170_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2819583121 (AsyncTaskMethodBuilder_1_t1481170840 * __this, TaskAwaiter_1_t3582946539 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, TaskAwaiter_1_t3582946539 *, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m3495862231_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::GetWiFiNetworkInterfacesAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t565736505 * DevicePortal_GetWiFiNetworkInterfacesAsync_m172635724 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::GetAwaiter()
inline TaskAwaiter_1_t1954678761  Task_1_GetAwaiter_m671514874 (Task_1_t565736505 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t1954678761  (*) (Task_1_t565736505 *, const RuntimeMethod*))Task_1_GetAwaiter_m95887362_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m3612381370 (TaskAwaiter_1_t1954678761 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t1954678761 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3474976000_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1954678761_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2269962225 (AsyncTaskMethodBuilder_1_t1481170840 * __this, TaskAwaiter_1_t1954678761 * p0, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, TaskAwaiter_1_t1954678761 *, U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m3269871869_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::GetResult()
inline NetworkInterfaces_t3455163626 * TaskAwaiter_1_GetResult_m1781345864 (TaskAwaiter_1_t1954678761 * __this, const RuntimeMethod* method)
{
	return ((  NetworkInterfaces_t3455163626 * (*) (TaskAwaiter_1_t1954678761 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m323631113_gshared)(__this, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>(System.String)
inline NetworkInterfaces_t3455163626 * JsonUtility_FromJson_TisNetworkInterfaces_t3455163626_m361010356 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  NetworkInterfaces_t3455163626 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1501290175_gshared)(__this /* static, unused */, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1417497042 (AsyncTaskMethodBuilder_1_t1481170840 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m923635912_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m3492932024 (AsyncTaskMethodBuilder_1_t1481170840 * __this, NetworkInterfaces_t3455163626 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, NetworkInterfaces_t3455163626 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m2658138191_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545 (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.NetworkInterfaces>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m3092076770 (AsyncTaskMethodBuilder_1_t1481170840 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t1481170840 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m1253966129_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543 (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CInstallAppAsyncU3Ed__26_t170559867 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_gshared)(__this, p0, p1, method);
}
// System.String System.IO.Path::GetFileName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m1354558116 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.IO.Path::ChangeExtension(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_ChangeExtension_m2296349858 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m3496866581 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WWWForm__ctor_m2465700452 (WWWForm_t4064702195 * __this, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" IL2CPP_METHOD_ATTR void FileStream__ctor_m2889718780 (FileStream_t4292183065 * __this, String_t* p0, int32_t p1, int32_t p2, int32_t p3, const RuntimeMethod* method);
// System.Void System.IO.BinaryReader::.ctor(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BinaryReader__ctor_m2602947653 (BinaryReader_t2428077293 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C" IL2CPP_METHOD_ATTR void WWWForm_AddBinaryData_m344280980 (WWWForm_t4064702195 * __this, String_t* p0, ByteU5BU5D_t4116647657* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.IO.DirectoryInfo::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void DirectoryInfo__ctor_m1000259829 (DirectoryInfo_t35957480 * __this, String_t* p0, const RuntimeMethod* method);
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
extern "C" IL2CPP_METHOD_ATTR FileInfoU5BU5D_t2389029403* DirectoryInfo_GetFiles_m220157888 (DirectoryInfo_t35957480 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogException_m2207318968 (RuntimeObject * __this /* static, unused */, Exception_t * p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::EscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_EscapeURL_m1544092040 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Rest::PostAsync(System.String,UnityEngine.WWWForm,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2194004283 * Rest_PostAsync_m3094615350 (RuntimeObject * __this /* static, unused */, String_t* ___query0, WWWForm_t4064702195 * ___formData1, Dictionary_2_t1632706988 * ___headers2, int32_t ___timeout3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CInstallAppAsyncU3Ed__26_t170559867 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::InstallAppAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_InstallAppAsync_m2258800417 (RuntimeObject * __this /* static, unused */, String_t* ___appFullPath0, DeviceInfo_t313565737 * ___targetDevice1, bool ___waitForDone2, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::GetInstallStatusAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2265980346 * DevicePortal_GetInstallStatusAsync_m2209080915 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetAwaiter()
inline TaskAwaiter_1_t3654922602  Task_1_GetAwaiter_m3398521935 (Task_1_t2265980346 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t3654922602  (*) (Task_1_t2265980346 *, const RuntimeMethod*))Task_1_GetAwaiter_m3398521935_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m2760376190 (TaskAwaiter_1_t3654922602 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t3654922602 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m2760376190_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3654922602 * p0, U3CInstallAppAsyncU3Ed__26_t170559867 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3654922602 *, U3CInstallAppAsyncU3Ed__26_t170559867 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/AppInstallStatus>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m3957052770 (TaskAwaiter_1_t3654922602 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t3654922602 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m3957052770_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3066925186 (AsyncTaskMethodBuilder_1_t2418262475 * __this, Exception_t * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, Exception_t *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m3066925186_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetResult(!0)
inline void AsyncTaskMethodBuilder_1_SetResult_m772896578 (AsyncTaskMethodBuilder_1_t2418262475 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, bool, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m772896578_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306 (U3CInstallAppAsyncU3Ed__26_t170559867 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554 (AsyncTaskMethodBuilder_1_t2418262475 * __this, RuntimeObject* p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_gshared)(__this, p0, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239 (U3CInstallAppAsyncU3Ed__26_t170559867 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::GetApplicationInfoAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t3474169377 * DevicePortal_GetApplicationInfoAsync_m500559243 (RuntimeObject * __this /* static, unused */, String_t* ___packageName0, DeviceInfo_t313565737 * ___targetDevice1, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>::GetAwaiter()
inline TaskAwaiter_1_t568144337  Task_1_GetAwaiter_m287228013 (Task_1_t3474169377 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t568144337  (*) (Task_1_t3474169377 *, const RuntimeMethod*))Task_1_GetAwaiter_m95887362_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m4224200197 (TaskAwaiter_1_t568144337 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t568144337 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m3474976000_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2621696278 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t568144337 * p0, U3CIsAppInstalledAsyncU3Ed__22_t442704640 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t568144337 *, U3CIsAppInstalledAsyncU3Ed__22_t442704640 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2434806618_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>::GetResult()
inline ApplicationInfo_t2068629202 * TaskAwaiter_1_GetResult_m652205427 (TaskAwaiter_1_t568144337 * __this, const RuntimeMethod* method)
{
	return ((  ApplicationInfo_t2068629202 * (*) (TaskAwaiter_1_t568144337 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m323631113_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805 (U3CIsAppInstalledAsyncU3Ed__22_t442704640 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814 (U3CIsAppInstalledAsyncU3Ed__22_t442704640 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m306871977 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t568144337 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t568144337 *, U3CIsAppRunningAsyncU3Ed__23_t3498844109 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m3756872684_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CIsAppRunningAsyncU3Ed__23_t3498844109 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542_gshared)(__this, p0, p1, method);
}
// !!0 UnityEngine.JsonUtility::FromJson<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ProcessList>(System.String)
inline ProcessList_t1550074349 * JsonUtility_FromJson_TisProcessList_t1550074349_m3608064058 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method)
{
	return ((  ProcessList_t1550074349 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1501290175_gshared)(__this /* static, unused */, p0, method);
}
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m1147431944 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CIsAppRunningAsyncU3Ed__23_t3498844109 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CIsAppRunningAsyncU3Ed__23_t3498844109 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::IsAppRunningAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_IsAppRunningAsync_m3654059161 (RuntimeObject * __this /* static, unused */, String_t* ___packageName0, DeviceInfo_t313565737 * ___targetDevice1, ApplicationInfo_t2068629202 * ___appInfo2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829 (U3CIsAppRunningAsyncU3Ed__23_t3498844109 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579 (U3CIsAppRunningAsyncU3Ed__23_t3498844109 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m4271167575 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t568144337 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t568144337 *, U3CLaunchAppAsyncU3Ed__29_t40369088 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m239795845_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Core.Extensions.StringExtensions::EncodeTo64(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* StringExtensions_EncodeTo64_m747039657 (RuntimeObject * __this /* static, unused */, String_t* ___toEncode0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m3339413201 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, RuntimeObject * p3, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Rest::PostAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2194004283 * Rest_PostAsync_m1199791566 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Dictionary_2_t1632706988 * ___headers1, int32_t ___timeout2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CLaunchAppAsyncU3Ed__29_t40369088 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CLaunchAppAsyncU3Ed__29_t40369088 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::LaunchAppAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_LaunchAppAsync_m1197552333 (RuntimeObject * __this /* static, unused */, String_t* ___packageName0, DeviceInfo_t313565737 * ___targetDevice1, ApplicationInfo_t2068629202 * ___appInfo2, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions::GetAwaiter(UnityEngine.WaitForSeconds)
extern "C" IL2CPP_METHOD_ATTR SimpleCoroutineAwaiter_t1961245047 * AwaiterExtensions_GetAwaiter_m2812080933 (RuntimeObject * __this /* static, unused */, WaitForSeconds_t1699091251 * ___instruction0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool SimpleCoroutineAwaiter_get_IsCompleted_m1501874044 (SimpleCoroutineAwaiter_t1961245047 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m178632677 (AsyncTaskMethodBuilder_1_t2418262475 * __this, SimpleCoroutineAwaiter_t1961245047 ** p0, U3CLaunchAppAsyncU3Ed__29_t40369088 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, SimpleCoroutineAwaiter_t1961245047 **, U3CLaunchAppAsyncU3Ed__29_t40369088 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m2598100373_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter::GetResult()
extern "C" IL2CPP_METHOD_ATTR void SimpleCoroutineAwaiter_GetResult_m2823840508 (SimpleCoroutineAwaiter_t1961245047 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980 (U3CLaunchAppAsyncU3Ed__29_t40369088 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113 (U3CLaunchAppAsyncU3Ed__29_t40369088 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m3150074936 (Dictionary_2_t1632706988 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::Remove(!0)
inline bool Dictionary_2_Remove_m3109428628 (Dictionary_2_t1632706988 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1632706988 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m2051736387_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428 (U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923 (U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CRestartAsyncU3Ed__20_t131148061 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CRestartAsyncU3Ed__20_t131148061 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CRestartAsyncU3Ed__20_t131148061 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CRestartAsyncU3Ed__20_t131148061 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::RestartAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_RestartAsync_m2883270561 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__20_MoveNext_m3879067228 (U3CRestartAsyncU3Ed__20_t131148061 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277 (U3CRestartAsyncU3Ed__20_t131148061 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CShutdownAsyncU3Ed__21_t4073527714 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CShutdownAsyncU3Ed__21_t4073527714 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CShutdownAsyncU3Ed__21_t4073527714 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CShutdownAsyncU3Ed__21_t4073527714 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::ShutdownAsync(Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_ShutdownAsync_m2351894614 (RuntimeObject * __this /* static, unused */, DeviceInfo_t313565737 * ___targetDevice0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039 (U3CShutdownAsyncU3Ed__21_t4073527714 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348 (U3CShutdownAsyncU3Ed__21_t4073527714 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3111658751 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t568144337 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t568144337 *, U3CStopAppAsyncU3Ed__30_t3766093556 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3938067941_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response> Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Rest::DeleteAsync(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Task_1_t2194004283 * Rest_DeleteAsync_m841233723 (RuntimeObject * __this /* static, unused */, String_t* ___query0, Dictionary_2_t1632706988 * ___headers1, int32_t ___timeout2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CStopAppAsyncU3Ed__30_t3766093556 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CStopAppAsyncU3Ed__30_t3766093556 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::StopAppAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_StopAppAsync_m466738910 (RuntimeObject * __this /* static, unused */, String_t* ___packageName0, DeviceInfo_t313565737 * ___targetDevice1, ApplicationInfo_t2068629202 * ___appInfo2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitOnCompleted<Microsoft.MixedReality.Toolkit.Core.Utilities.Async.AwaiterExtensions/SimpleCoroutineAwaiter,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3708741209 (AsyncTaskMethodBuilder_1_t2418262475 * __this, SimpleCoroutineAwaiter_t1961245047 ** p0, U3CStopAppAsyncU3Ed__30_t3766093556 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, SimpleCoroutineAwaiter_t1961245047 **, U3CStopAppAsyncU3Ed__30_t3766093556 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisRuntimeObject_TisU3CStopAppAsyncU3Ed__30_t3766093556_m476117818_gshared)(__this, p0, p1, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905 (U3CStopAppAsyncU3Ed__30_t3766093556 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666 (U3CStopAppAsyncU3Ed__30_t3766093556 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m3243415541 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t568144337 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t568144337 *, U3CUninstallAppAsyncU3Ed__28_t2000630058 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1579621299_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m863700715_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Microsoft.MixedReality.Toolkit.Core.Utilities.WebRequestRest.Response>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t3582946539 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t3582946539 *, U3CUninstallAppAsyncU3Ed__28_t2000630058 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean>,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207 (AsyncTaskMethodBuilder_1_t2418262475 * __this, TaskAwaiter_1_t2891770396 * p0, U3CUninstallAppAsyncU3Ed__28_t2000630058 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t2418262475 *, TaskAwaiter_1_t2891770396 *, U3CUninstallAppAsyncU3Ed__28_t2000630058 *, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207_gshared)(__this, p0, p1, method);
}
// System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal::UninstallAppAsync(System.String,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.DeviceInfo,Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DataStructures.ApplicationInfo)
extern "C" IL2CPP_METHOD_ATTR Task_1_t1502828140 * DevicePortal_UninstallAppAsync_m1641353108 (RuntimeObject * __this /* static, unused */, String_t* ___packageName0, DeviceInfo_t313565737 * ___targetDevice1, ApplicationInfo_t2068629202 * ___appInfo2, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937 (U3CUninstallAppAsyncU3Ed__28_t2000630058 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129 (U3CUninstallAppAsyncU3Ed__28_t2000630058 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368 (U3CGetMachineNameAsyncU3Ed__17_t1757619476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MachineName_t1295863344 * V_1 = NULL;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Response_t788464108  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t3582946539  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	TaskAwaiter_1_t4090345775  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_00e5;
				}
				case 2:
				{
					goto IL_0177;
				}
				case 3:
				{
					goto IL_01dc;
				}
			}
		}

IL_001d:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t3616837854 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713((AsyncTaskMethodBuilder_1_t3616837854 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetMachineNameAsyncU3Ed__17_t1757619476 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713_RuntimeMethod_var);
			goto IL_0257;
		}

IL_005a:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return null; }
			if (L_12)
			{
				goto IL_0086;
			}
		}

IL_007f:
		{
			// if (!isAuth) { return null; }
			V_1 = (MachineName_t1295863344 *)NULL;
			goto IL_0243;
		}

IL_0086:
		{
			// string query = string.Format(GetMachineNameQuery, FinalizeUrl(targetDevice.IP));
			DeviceInfo_t313565737 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_0();
			String_t* L_15 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3769660176, L_15, /*hidden argument*/NULL);
			// var response = await Rest.GetAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t1632706988 * L_18 = DeviceInfo_get_Authorization_m3424419350(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_19 = Rest_GetAsync_m2018571585(NULL /*static, unused*/, L_16, L_18, (-1), /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_t3582946539  L_20 = Task_1_GetAwaiter_m1468115537(L_19, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0102;
			}
		}

IL_00c1:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_t3582946539  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t3616837854 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2812742169((AsyncTaskMethodBuilder_1_t3616837854 *)L_24, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CGetMachineNameAsyncU3Ed__17_t1757619476 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m2812742169_RuntimeMethod_var);
			goto IL_0257;
		}

IL_00e5:
		{
			TaskAwaiter_1_t3582946539  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_t3582946539 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_0102:
		{
			Response_t788464108  L_28 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_28;
			Response_t788464108  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (!response.Successful)
			Response_t788464108 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m3489788737((Response_t788464108 *)L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_0217;
			}
		}

IL_0121:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_32 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_33 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_32, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_33) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_019c;
			}
		}

IL_013a:
		{
			DeviceInfo_t313565737 * L_35 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_36 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_t2891770396  L_37 = Task_1_GetAwaiter_m1353846373(L_36, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_37;
			bool L_38 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0193;
			}
		}

IL_0154:
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_t2891770396  L_40 = V_2;
			__this->set_U3CU3Eu__1_4(L_40);
			AsyncTaskMethodBuilder_1_t3616837854 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713((AsyncTaskMethodBuilder_1_t3616837854 *)L_41, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetMachineNameAsyncU3Ed__17_t1757619476 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m149470713_RuntimeMethod_var);
			goto IL_0257;
		}

IL_0177:
		{
			TaskAwaiter_1_t2891770396  L_42 = __this->get_U3CU3Eu__1_4();
			V_2 = L_42;
			TaskAwaiter_1_t2891770396 * L_43 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0193:
		{
			bool L_45 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_45;
		}

IL_019c:
		{
			bool L_46 = V_5;
			if (!L_46)
			{
				goto IL_0203;
			}
		}

IL_01a0:
		{
			// return await GetMachineNameAsync(targetDevice);
			DeviceInfo_t313565737 * L_47 = __this->get_targetDevice_2();
			Task_1_t2701403519 * L_48 = DevicePortal_GetMachineNameAsync_m3609229833(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			TaskAwaiter_1_t4090345775  L_49 = Task_1_GetAwaiter_m3786675719(L_48, /*hidden argument*/Task_1_GetAwaiter_m3786675719_RuntimeMethod_var);
			V_6 = L_49;
			bool L_50 = TaskAwaiter_1_get_IsCompleted_m311690839((TaskAwaiter_1_t4090345775 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m311690839_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_01f9;
			}
		}

IL_01bb:
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			TaskAwaiter_1_t4090345775  L_52 = V_6;
			__this->set_U3CU3Eu__3_6(L_52);
			AsyncTaskMethodBuilder_1_t3616837854 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4090345775_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m240981383((AsyncTaskMethodBuilder_1_t3616837854 *)L_53, (TaskAwaiter_1_t4090345775 *)(&V_6), (U3CGetMachineNameAsyncU3Ed__17_t1757619476 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t4090345775_TisU3CGetMachineNameAsyncU3Ed__17_t1757619476_m240981383_RuntimeMethod_var);
			goto IL_0257;
		}

IL_01dc:
		{
			TaskAwaiter_1_t4090345775  L_54 = __this->get_U3CU3Eu__3_6();
			V_6 = L_54;
			TaskAwaiter_1_t4090345775 * L_55 = __this->get_address_of_U3CU3Eu__3_6();
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_t4090345775 ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_01f9:
		{
			MachineName_t1295863344 * L_57 = TaskAwaiter_1_GetResult_m3303095857((TaskAwaiter_1_t4090345775 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m3303095857_RuntimeMethod_var);
			V_1 = L_57;
			goto IL_0243;
		}

IL_0203:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_58 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_59 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
			// return null;
			V_1 = (MachineName_t1295863344 *)NULL;
			goto IL_0243;
		}

IL_0217:
		{
			// return JsonUtility.FromJson<MachineName>(response.ResponseBody);
			Response_t788464108 * L_60 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_61 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_60, /*hidden argument*/NULL);
			MachineName_t1295863344 * L_62 = JsonUtility_FromJson_TisMachineName_t1295863344_m114331045(NULL /*static, unused*/, L_61, /*hidden argument*/JsonUtility_FromJson_TisMachineName_t1295863344_m114331045_RuntimeMethod_var);
			V_1 = L_62;
			goto IL_0243;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_022a;
		throw e;
	}

CATCH_022a:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t3616837854 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_64 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m156191284((AsyncTaskMethodBuilder_1_t3616837854 *)L_63, L_64, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m156191284_RuntimeMethod_var);
		goto IL_0257;
	} // end catch (depth: 1)

IL_0243:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t3616837854 * L_65 = __this->get_address_of_U3CU3Et__builder_1();
		MachineName_t1295863344 * L_66 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m983501450((AsyncTaskMethodBuilder_1_t3616837854 *)L_65, L_66, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m983501450_RuntimeMethod_var);
	}

IL_0257:
	{
		return;
	}
}
extern "C"  void U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CGetMachineNameAsyncU3Ed__17_t1757619476 * _thisAdjusted = reinterpret_cast<U3CGetMachineNameAsyncU3Ed__17_t1757619476 *>(__this + 1);
	U3CGetMachineNameAsyncU3Ed__17_MoveNext_m3264376368(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetMachineNameAsync>d__17::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187 (U3CGetMachineNameAsyncU3Ed__17_t1757619476 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t3616837854 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m2612820978((AsyncTaskMethodBuilder_1_t3616837854 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m2612820978_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetMachineNameAsyncU3Ed__17_t1757619476 * _thisAdjusted = reinterpret_cast<U3CGetMachineNameAsyncU3Ed__17_t1757619476 *>(__this + 1);
	U3CGetMachineNameAsyncU3Ed__17_SetStateMachine_m2252828187(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908 (U3CGetPowerStateAsyncU3Ed__19_t4035957140 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PowerStateInfo_t4025460968 * V_1 = NULL;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Response_t788464108  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t3582946539  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	TaskAwaiter_1_t2524976103  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_00e5;
				}
				case 2:
				{
					goto IL_0177;
				}
				case 3:
				{
					goto IL_01dc;
				}
			}
		}

IL_001d:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t2051468182 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127((AsyncTaskMethodBuilder_1_t2051468182 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetPowerStateAsyncU3Ed__19_t4035957140 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127_RuntimeMethod_var);
			goto IL_0245;
		}

IL_005a:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return null; }
			if (L_12)
			{
				goto IL_0086;
			}
		}

IL_007f:
		{
			// if (!isAuth) { return null; }
			V_1 = (PowerStateInfo_t4025460968 *)NULL;
			goto IL_0231;
		}

IL_0086:
		{
			// string query = string.Format(GetPowerStateQuery, FinalizeUrl(targetDevice.IP));
			DeviceInfo_t313565737 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_0();
			String_t* L_15 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2398034983, L_15, /*hidden argument*/NULL);
			// var response = await Rest.GetAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t1632706988 * L_18 = DeviceInfo_get_Authorization_m3424419350(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_19 = Rest_GetAsync_m2018571585(NULL /*static, unused*/, L_16, L_18, (-1), /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_t3582946539  L_20 = Task_1_GetAwaiter_m1468115537(L_19, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0102;
			}
		}

IL_00c1:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_t3582946539  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t2051468182 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3157683791((AsyncTaskMethodBuilder_1_t2051468182 *)L_24, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CGetPowerStateAsyncU3Ed__19_t4035957140 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3157683791_RuntimeMethod_var);
			goto IL_0245;
		}

IL_00e5:
		{
			TaskAwaiter_1_t3582946539  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_t3582946539 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_0102:
		{
			Response_t788464108  L_28 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_28;
			Response_t788464108  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (!response.Successful)
			Response_t788464108 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m3489788737((Response_t788464108 *)L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_0205;
			}
		}

IL_0121:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_32 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_33 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_32, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_33) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_019c;
			}
		}

IL_013a:
		{
			DeviceInfo_t313565737 * L_35 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_36 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_t2891770396  L_37 = Task_1_GetAwaiter_m1353846373(L_36, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_37;
			bool L_38 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0193;
			}
		}

IL_0154:
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_t2891770396  L_40 = V_2;
			__this->set_U3CU3Eu__1_4(L_40);
			AsyncTaskMethodBuilder_1_t2051468182 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127((AsyncTaskMethodBuilder_1_t2051468182 *)L_41, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetPowerStateAsyncU3Ed__19_t4035957140 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m3186163127_RuntimeMethod_var);
			goto IL_0245;
		}

IL_0177:
		{
			TaskAwaiter_1_t2891770396  L_42 = __this->get_U3CU3Eu__1_4();
			V_2 = L_42;
			TaskAwaiter_1_t2891770396 * L_43 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0193:
		{
			bool L_45 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_45;
		}

IL_019c:
		{
			bool L_46 = V_5;
			if (!L_46)
			{
				goto IL_0201;
			}
		}

IL_01a0:
		{
			// await GetPowerStateAsync(targetDevice);
			DeviceInfo_t313565737 * L_47 = __this->get_targetDevice_2();
			Task_1_t1136033847 * L_48 = DevicePortal_GetPowerStateAsync_m4026587630(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			TaskAwaiter_1_t2524976103  L_49 = Task_1_GetAwaiter_m3993357899(L_48, /*hidden argument*/Task_1_GetAwaiter_m3993357899_RuntimeMethod_var);
			V_6 = L_49;
			bool L_50 = TaskAwaiter_1_get_IsCompleted_m4064141183((TaskAwaiter_1_t2524976103 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4064141183_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_01f9;
			}
		}

IL_01bb:
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			TaskAwaiter_1_t2524976103  L_52 = V_6;
			__this->set_U3CU3Eu__3_6(L_52);
			AsyncTaskMethodBuilder_1_t2051468182 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2524976103_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m231500414((AsyncTaskMethodBuilder_1_t2051468182 *)L_53, (TaskAwaiter_1_t2524976103 *)(&V_6), (U3CGetPowerStateAsyncU3Ed__19_t4035957140 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2524976103_TisU3CGetPowerStateAsyncU3Ed__19_t4035957140_m231500414_RuntimeMethod_var);
			goto IL_0245;
		}

IL_01dc:
		{
			TaskAwaiter_1_t2524976103  L_54 = __this->get_U3CU3Eu__3_6();
			V_6 = L_54;
			TaskAwaiter_1_t2524976103 * L_55 = __this->get_address_of_U3CU3Eu__3_6();
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_t2524976103 ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_01f9:
		{
			TaskAwaiter_1_GetResult_m2327709505((TaskAwaiter_1_t2524976103 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m2327709505_RuntimeMethod_var);
		}

IL_0201:
		{
			// return null;
			V_1 = (PowerStateInfo_t4025460968 *)NULL;
			goto IL_0231;
		}

IL_0205:
		{
			// return JsonUtility.FromJson<PowerStateInfo>(response.ResponseBody);
			Response_t788464108 * L_57 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_58 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_57, /*hidden argument*/NULL);
			PowerStateInfo_t4025460968 * L_59 = JsonUtility_FromJson_TisPowerStateInfo_t4025460968_m1454032155(NULL /*static, unused*/, L_58, /*hidden argument*/JsonUtility_FromJson_TisPowerStateInfo_t4025460968_m1454032155_RuntimeMethod_var);
			V_1 = L_59;
			goto IL_0231;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0218;
		throw e;
	}

CATCH_0218:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2051468182 * L_60 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_61 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m886564337((AsyncTaskMethodBuilder_1_t2051468182 *)L_60, L_61, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m886564337_RuntimeMethod_var);
		goto IL_0245;
	} // end catch (depth: 1)

IL_0231:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2051468182 * L_62 = __this->get_address_of_U3CU3Et__builder_1();
		PowerStateInfo_t4025460968 * L_63 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m1793936250((AsyncTaskMethodBuilder_1_t2051468182 *)L_62, L_63, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m1793936250_RuntimeMethod_var);
	}

IL_0245:
	{
		return;
	}
}
extern "C"  void U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CGetPowerStateAsyncU3Ed__19_t4035957140 * _thisAdjusted = reinterpret_cast<U3CGetPowerStateAsyncU3Ed__19_t4035957140 *>(__this + 1);
	U3CGetPowerStateAsyncU3Ed__19_MoveNext_m3241969908(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetPowerStateAsync>d__19::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724 (U3CGetPowerStateAsyncU3Ed__19_t4035957140 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2051468182 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3978379298((AsyncTaskMethodBuilder_1_t2051468182 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3978379298_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetPowerStateAsyncU3Ed__19_t4035957140 * _thisAdjusted = reinterpret_cast<U3CGetPowerStateAsyncU3Ed__19_t4035957140 *>(__this + 1);
	U3CGetPowerStateAsyncU3Ed__19_SetStateMachine_m1186038724(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545 (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkInterfaces_t3455163626 * V_1 = NULL;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Response_t788464108  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t3582946539  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	TaskAwaiter_1_t1954678761  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Exception_t * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_00e5;
				}
				case 2:
				{
					goto IL_0177;
				}
				case 3:
				{
					goto IL_01dc;
				}
			}
		}

IL_001d:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t1481170840 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073((AsyncTaskMethodBuilder_1_t1481170840 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073_RuntimeMethod_var);
			goto IL_0257;
		}

IL_005a:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return null; }
			if (L_12)
			{
				goto IL_0086;
			}
		}

IL_007f:
		{
			// if (!isAuth) { return null; }
			V_1 = (NetworkInterfaces_t3455163626 *)NULL;
			goto IL_0243;
		}

IL_0086:
		{
			// string query = string.Format(WiFiInterfacesQuery, FinalizeUrl(targetDevice.IP));
			DeviceInfo_t313565737 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_0();
			String_t* L_15 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2283179310, L_15, /*hidden argument*/NULL);
			// var response = await Rest.GetAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t1632706988 * L_18 = DeviceInfo_get_Authorization_m3424419350(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_19 = Rest_GetAsync_m2018571585(NULL /*static, unused*/, L_16, L_18, (-1), /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_t3582946539  L_20 = Task_1_GetAwaiter_m1468115537(L_19, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0102;
			}
		}

IL_00c1:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_t3582946539  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t1481170840 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2819583121((AsyncTaskMethodBuilder_1_t1481170840 *)L_24, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2819583121_RuntimeMethod_var);
			goto IL_0257;
		}

IL_00e5:
		{
			TaskAwaiter_1_t3582946539  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_t3582946539 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_0102:
		{
			Response_t788464108  L_28 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_28;
			Response_t788464108  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (!response.Successful)
			Response_t788464108 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m3489788737((Response_t788464108 *)L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_0217;
			}
		}

IL_0121:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_32 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_33 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_32, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_33) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_019c;
			}
		}

IL_013a:
		{
			DeviceInfo_t313565737 * L_35 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_36 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_t2891770396  L_37 = Task_1_GetAwaiter_m1353846373(L_36, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_37;
			bool L_38 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0193;
			}
		}

IL_0154:
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_t2891770396  L_40 = V_2;
			__this->set_U3CU3Eu__1_4(L_40);
			AsyncTaskMethodBuilder_1_t1481170840 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073((AsyncTaskMethodBuilder_1_t1481170840 *)L_41, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m269861073_RuntimeMethod_var);
			goto IL_0257;
		}

IL_0177:
		{
			TaskAwaiter_1_t2891770396  L_42 = __this->get_U3CU3Eu__1_4();
			V_2 = L_42;
			TaskAwaiter_1_t2891770396 * L_43 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0193:
		{
			bool L_45 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_45;
		}

IL_019c:
		{
			bool L_46 = V_5;
			if (!L_46)
			{
				goto IL_0203;
			}
		}

IL_01a0:
		{
			// return await GetWiFiNetworkInterfacesAsync(targetDevice);
			DeviceInfo_t313565737 * L_47 = __this->get_targetDevice_2();
			Task_1_t565736505 * L_48 = DevicePortal_GetWiFiNetworkInterfacesAsync_m172635724(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			TaskAwaiter_1_t1954678761  L_49 = Task_1_GetAwaiter_m671514874(L_48, /*hidden argument*/Task_1_GetAwaiter_m671514874_RuntimeMethod_var);
			V_6 = L_49;
			bool L_50 = TaskAwaiter_1_get_IsCompleted_m3612381370((TaskAwaiter_1_t1954678761 *)(&V_6), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m3612381370_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_01f9;
			}
		}

IL_01bb:
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			TaskAwaiter_1_t1954678761  L_52 = V_6;
			__this->set_U3CU3Eu__3_6(L_52);
			AsyncTaskMethodBuilder_1_t1481170840 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1954678761_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2269962225((AsyncTaskMethodBuilder_1_t1481170840 *)L_53, (TaskAwaiter_1_t1954678761 *)(&V_6), (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1954678761_TisU3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639_m2269962225_RuntimeMethod_var);
			goto IL_0257;
		}

IL_01dc:
		{
			TaskAwaiter_1_t1954678761  L_54 = __this->get_U3CU3Eu__3_6();
			V_6 = L_54;
			TaskAwaiter_1_t1954678761 * L_55 = __this->get_address_of_U3CU3Eu__3_6();
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_t1954678761 ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_01f9:
		{
			NetworkInterfaces_t3455163626 * L_57 = TaskAwaiter_1_GetResult_m1781345864((TaskAwaiter_1_t1954678761 *)(&V_6), /*hidden argument*/TaskAwaiter_1_GetResult_m1781345864_RuntimeMethod_var);
			V_1 = L_57;
			goto IL_0243;
		}

IL_0203:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_58 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_59 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
			// return null;
			V_1 = (NetworkInterfaces_t3455163626 *)NULL;
			goto IL_0243;
		}

IL_0217:
		{
			// return JsonUtility.FromJson<NetworkInterfaces>(response.ResponseBody);
			Response_t788464108 * L_60 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_61 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_60, /*hidden argument*/NULL);
			NetworkInterfaces_t3455163626 * L_62 = JsonUtility_FromJson_TisNetworkInterfaces_t3455163626_m361010356(NULL /*static, unused*/, L_61, /*hidden argument*/JsonUtility_FromJson_TisNetworkInterfaces_t3455163626_m361010356_RuntimeMethod_var);
			V_1 = L_62;
			goto IL_0243;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_022a;
		throw e;
	}

CATCH_022a:
	{ // begin catch(System.Exception)
		V_7 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t1481170840 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_64 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m1417497042((AsyncTaskMethodBuilder_1_t1481170840 *)L_63, L_64, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m1417497042_RuntimeMethod_var);
		goto IL_0257;
	} // end catch (depth: 1)

IL_0243:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t1481170840 * L_65 = __this->get_address_of_U3CU3Et__builder_1();
		NetworkInterfaces_t3455163626 * L_66 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m3492932024((AsyncTaskMethodBuilder_1_t1481170840 *)L_65, L_66, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m3492932024_RuntimeMethod_var);
	}

IL_0257:
	{
		return;
	}
}
extern "C"  void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * _thisAdjusted = reinterpret_cast<U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *>(__this + 1);
	U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_MoveNext_m2732450545(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<GetWiFiNetworkInterfacesAsync>d__35::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543 (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t1481170840 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m3092076770((AsyncTaskMethodBuilder_1_t1481170840 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m3092076770_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 * _thisAdjusted = reinterpret_cast<U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_t4183541639 *>(__this + 1);
	U3CGetWiFiNetworkInterfacesAsyncU3Ed__35_SetStateMachine_m4161351543(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306 (U3CInstallAppAsyncU3Ed__26_t170559867 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	WWWForm_t4064702195 * V_5 = NULL;
	Response_t788464108  V_6;
	memset(&V_6, 0, sizeof(V_6));
	int32_t V_7 = 0;
	TaskAwaiter_1_t2891770396  V_8;
	memset(&V_8, 0, sizeof(V_8));
	FileStream_t4292183065 * V_9 = NULL;
	BinaryReader_t2428077293 * V_10 = NULL;
	FileStream_t4292183065 * V_11 = NULL;
	BinaryReader_t2428077293 * V_12 = NULL;
	FileInfoU5BU5D_t2389029403* V_13 = NULL;
	int32_t V_14 = 0;
	FileInfo_t1169991790 * V_15 = NULL;
	FileStream_t4292183065 * V_16 = NULL;
	BinaryReader_t2428077293 * V_17 = NULL;
	String_t* V_18 = NULL;
	TaskAwaiter_1_t3582946539  V_19;
	memset(&V_19, 0, sizeof(V_19));
	bool V_20 = false;
	TaskAwaiter_1_t3654922602  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Exception_t * V_22 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0060;
				}
				case 1:
				{
					goto IL_02a4;
				}
				case 2:
				{
					goto IL_032a;
				}
				case 3:
				{
					goto IL_039f;
				}
				case 4:
				{
					goto IL_0437;
				}
			}
		}

IL_0021:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_8 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_007d;
			}
		}

IL_003c:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_8;
			__this->set_U3CU3Eu__1_6(L_7);
			AsyncTaskMethodBuilder_1_t2418262475 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539((AsyncTaskMethodBuilder_1_t2418262475 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_8), (U3CInstallAppAsyncU3Ed__26_t170559867 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_RuntimeMethod_var);
			goto IL_04f2;
		}

IL_0060:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_6();
			V_8 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_007d:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return false; }
			if (L_12)
			{
				goto IL_008d;
			}
		}

IL_0086:
		{
			// if (!isAuth) { return false; }
			V_1 = (bool)0;
			goto IL_04de;
		}

IL_008d:
		{
			// string fileName = Path.GetFileName(appFullPath);
			String_t* L_13 = __this->get_appFullPath_3();
			IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
			String_t* L_14 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
			__this->set_U3CfileNameU3E5__2_5(L_14);
			// string certFullPath = Path.ChangeExtension(appFullPath, ".cer");
			String_t* L_15 = __this->get_appFullPath_3();
			String_t* L_16 = Path_ChangeExtension_m2296349858(NULL /*static, unused*/, L_15, _stringLiteral1903542547, /*hidden argument*/NULL);
			V_2 = L_16;
			// string certName = Path.GetFileName(certFullPath);
			String_t* L_17 = V_2;
			String_t* L_18 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
			V_3 = L_18;
			// string depPath = $@"{Path.GetDirectoryName(appFullPath)}\Dependencies\x86\";
			String_t* L_19 = __this->get_appFullPath_3();
			String_t* L_20 = Path_GetDirectoryName_m3496866581(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
			String_t* L_21 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral618812026, L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			// var form = new WWWForm();
			WWWForm_t4064702195 * L_22 = (WWWForm_t4064702195 *)il2cpp_codegen_object_new(WWWForm_t4064702195_il2cpp_TypeInfo_var);
			WWWForm__ctor_m2465700452(L_22, /*hidden argument*/NULL);
			V_5 = L_22;
		}

IL_00d4:
		try
		{ // begin try (depth: 2)
			{
				// using (var stream = new FileStream(appFullPath, FileMode.Open, FileAccess.Read, FileShare.Read))
				String_t* L_23 = __this->get_appFullPath_3();
				FileStream_t4292183065 * L_24 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
				FileStream__ctor_m2889718780(L_24, L_23, 3, 1, 1, /*hidden argument*/NULL);
				V_9 = L_24;
			}

IL_00e4:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_t4292183065 * L_25 = V_9;
					BinaryReader_t2428077293 * L_26 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
					BinaryReader__ctor_m2602947653(L_26, L_25, /*hidden argument*/NULL);
					V_10 = L_26;
				}

IL_00ed:
				try
				{ // begin try (depth: 4)
					// form.AddBinaryData(fileName, reader.ReadBytes((int)reader.BaseStream.Length), fileName);
					WWWForm_t4064702195 * L_27 = V_5;
					String_t* L_28 = __this->get_U3CfileNameU3E5__2_5();
					BinaryReader_t2428077293 * L_29 = V_10;
					BinaryReader_t2428077293 * L_30 = V_10;
					NullCheck(L_30);
					Stream_t1273022909 * L_31 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_30);
					NullCheck(L_31);
					int64_t L_32 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_31);
					NullCheck(L_29);
					ByteU5BU5D_t4116647657* L_33 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_29, (((int32_t)((int32_t)L_32))));
					String_t* L_34 = __this->get_U3CfileNameU3E5__2_5();
					NullCheck(L_27);
					WWWForm_AddBinaryData_m344280980(L_27, L_28, L_33, L_34, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x126, FINALLY_0116);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_0116;
				}

FINALLY_0116:
				{ // begin finally (depth: 4)
					{
						int32_t L_35 = V_0;
						if ((((int32_t)L_35) >= ((int32_t)0)))
						{
							goto IL_0125;
						}
					}

IL_011a:
					{
						BinaryReader_t2428077293 * L_36 = V_10;
						if (!L_36)
						{
							goto IL_0125;
						}
					}

IL_011e:
					{
						BinaryReader_t2428077293 * L_37 = V_10;
						NullCheck(L_37);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_37);
					}

IL_0125:
					{
						IL2CPP_END_FINALLY(278)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(278)
				{
					IL2CPP_JUMP_TBL(0x126, IL_0126)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0126:
				{
					// }
					IL2CPP_LEAVE(0x138, FINALLY_0128);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0128;
			}

FINALLY_0128:
			{ // begin finally (depth: 3)
				{
					int32_t L_38 = V_0;
					if ((((int32_t)L_38) >= ((int32_t)0)))
					{
						goto IL_0137;
					}
				}

IL_012c:
				{
					FileStream_t4292183065 * L_39 = V_9;
					if (!L_39)
					{
						goto IL_0137;
					}
				}

IL_0130:
				{
					FileStream_t4292183065 * L_40 = V_9;
					NullCheck(L_40);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_40);
				}

IL_0137:
				{
					IL2CPP_END_FINALLY(296)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(296)
			{
				IL2CPP_JUMP_TBL(0x138, IL_0138)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0138:
			{
				// using (var stream = new FileStream(certFullPath, FileMode.Open, FileAccess.Read, FileShare.Read))
				String_t* L_41 = V_2;
				FileStream_t4292183065 * L_42 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
				FileStream__ctor_m2889718780(L_42, L_41, 3, 1, 1, /*hidden argument*/NULL);
				V_11 = L_42;
			}

IL_0143:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_t4292183065 * L_43 = V_11;
					BinaryReader_t2428077293 * L_44 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
					BinaryReader__ctor_m2602947653(L_44, L_43, /*hidden argument*/NULL);
					V_12 = L_44;
				}

IL_014c:
				try
				{ // begin try (depth: 4)
					// form.AddBinaryData(certName, reader.ReadBytes((int)reader.BaseStream.Length), certName);
					WWWForm_t4064702195 * L_45 = V_5;
					String_t* L_46 = V_3;
					BinaryReader_t2428077293 * L_47 = V_12;
					BinaryReader_t2428077293 * L_48 = V_12;
					NullCheck(L_48);
					Stream_t1273022909 * L_49 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_48);
					NullCheck(L_49);
					int64_t L_50 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_49);
					NullCheck(L_47);
					ByteU5BU5D_t4116647657* L_51 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_47, (((int32_t)((int32_t)L_50))));
					String_t* L_52 = V_3;
					NullCheck(L_45);
					WWWForm_AddBinaryData_m344280980(L_45, L_46, L_51, L_52, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x17B, FINALLY_016b);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_016b;
				}

FINALLY_016b:
				{ // begin finally (depth: 4)
					{
						int32_t L_53 = V_0;
						if ((((int32_t)L_53) >= ((int32_t)0)))
						{
							goto IL_017a;
						}
					}

IL_016f:
					{
						BinaryReader_t2428077293 * L_54 = V_12;
						if (!L_54)
						{
							goto IL_017a;
						}
					}

IL_0173:
					{
						BinaryReader_t2428077293 * L_55 = V_12;
						NullCheck(L_55);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_55);
					}

IL_017a:
					{
						IL2CPP_END_FINALLY(363)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(363)
				{
					IL2CPP_JUMP_TBL(0x17B, IL_017b)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_017b:
				{
					// }
					IL2CPP_LEAVE(0x18D, FINALLY_017d);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_017d;
			}

FINALLY_017d:
			{ // begin finally (depth: 3)
				{
					int32_t L_56 = V_0;
					if ((((int32_t)L_56) >= ((int32_t)0)))
					{
						goto IL_018c;
					}
				}

IL_0181:
				{
					FileStream_t4292183065 * L_57 = V_11;
					if (!L_57)
					{
						goto IL_018c;
					}
				}

IL_0185:
				{
					FileStream_t4292183065 * L_58 = V_11;
					NullCheck(L_58);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_58);
				}

IL_018c:
				{
					IL2CPP_END_FINALLY(381)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(381)
			{
				IL2CPP_JUMP_TBL(0x18D, IL_018d)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_018d:
			{
				// FileInfo[] depFiles = new DirectoryInfo(depPath).GetFiles();
				String_t* L_59 = V_4;
				DirectoryInfo_t35957480 * L_60 = (DirectoryInfo_t35957480 *)il2cpp_codegen_object_new(DirectoryInfo_t35957480_il2cpp_TypeInfo_var);
				DirectoryInfo__ctor_m1000259829(L_60, L_59, /*hidden argument*/NULL);
				NullCheck(L_60);
				FileInfoU5BU5D_t2389029403* L_61 = DirectoryInfo_GetFiles_m220157888(L_60, /*hidden argument*/NULL);
				// foreach (FileInfo dep in depFiles)
				V_13 = L_61;
				V_14 = 0;
				goto IL_0218;
			}

IL_01a0:
			{
				// foreach (FileInfo dep in depFiles)
				FileInfoU5BU5D_t2389029403* L_62 = V_13;
				int32_t L_63 = V_14;
				NullCheck(L_62);
				int32_t L_64 = L_63;
				FileInfo_t1169991790 * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
				V_15 = L_65;
				// using (var stream = new FileStream(dep.FullName, FileMode.Open, FileAccess.Read, FileShare.Read))
				FileInfo_t1169991790 * L_66 = V_15;
				NullCheck(L_66);
				String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_66);
				FileStream_t4292183065 * L_68 = (FileStream_t4292183065 *)il2cpp_codegen_object_new(FileStream_t4292183065_il2cpp_TypeInfo_var);
				FileStream__ctor_m2889718780(L_68, L_67, 3, 1, 1, /*hidden argument*/NULL);
				V_16 = L_68;
			}

IL_01b8:
			try
			{ // begin try (depth: 3)
				{
					// using (var reader = new BinaryReader(stream))
					FileStream_t4292183065 * L_69 = V_16;
					BinaryReader_t2428077293 * L_70 = (BinaryReader_t2428077293 *)il2cpp_codegen_object_new(BinaryReader_t2428077293_il2cpp_TypeInfo_var);
					BinaryReader__ctor_m2602947653(L_70, L_69, /*hidden argument*/NULL);
					V_17 = L_70;
				}

IL_01c1:
				try
				{ // begin try (depth: 4)
					// string depFilename = Path.GetFileName(dep.FullName);
					FileInfo_t1169991790 * L_71 = V_15;
					NullCheck(L_71);
					String_t* L_72 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.IO.FileSystemInfo::get_FullName() */, L_71);
					IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
					String_t* L_73 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
					V_18 = L_73;
					// form.AddBinaryData(depFilename, reader.ReadBytes((int)reader.BaseStream.Length), depFilename);
					WWWForm_t4064702195 * L_74 = V_5;
					String_t* L_75 = V_18;
					BinaryReader_t2428077293 * L_76 = V_17;
					BinaryReader_t2428077293 * L_77 = V_17;
					NullCheck(L_77);
					Stream_t1273022909 * L_78 = VirtFuncInvoker0< Stream_t1273022909 * >::Invoke(5 /* System.IO.Stream System.IO.BinaryReader::get_BaseStream() */, L_77);
					NullCheck(L_78);
					int64_t L_79 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_78);
					NullCheck(L_76);
					ByteU5BU5D_t4116647657* L_80 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, int32_t >::Invoke(25 /* System.Byte[] System.IO.BinaryReader::ReadBytes(System.Int32) */, L_76, (((int32_t)((int32_t)L_79))));
					String_t* L_81 = V_18;
					NullCheck(L_74);
					WWWForm_AddBinaryData_m344280980(L_74, L_75, L_80, L_81, /*hidden argument*/NULL);
					// }
					IL2CPP_LEAVE(0x200, FINALLY_01f0);
				} // end try (depth: 4)
				catch(Il2CppExceptionWrapper& e)
				{
					__last_unhandled_exception = (Exception_t *)e.ex;
					goto FINALLY_01f0;
				}

FINALLY_01f0:
				{ // begin finally (depth: 4)
					{
						int32_t L_82 = V_0;
						if ((((int32_t)L_82) >= ((int32_t)0)))
						{
							goto IL_01ff;
						}
					}

IL_01f4:
					{
						BinaryReader_t2428077293 * L_83 = V_17;
						if (!L_83)
						{
							goto IL_01ff;
						}
					}

IL_01f8:
					{
						BinaryReader_t2428077293 * L_84 = V_17;
						NullCheck(L_84);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_84);
					}

IL_01ff:
					{
						IL2CPP_END_FINALLY(496)
					}
				} // end finally (depth: 4)
				IL2CPP_CLEANUP(496)
				{
					IL2CPP_JUMP_TBL(0x200, IL_0200)
					IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
				}

IL_0200:
				{
					// }
					IL2CPP_LEAVE(0x212, FINALLY_0202);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0202;
			}

FINALLY_0202:
			{ // begin finally (depth: 3)
				{
					int32_t L_85 = V_0;
					if ((((int32_t)L_85) >= ((int32_t)0)))
					{
						goto IL_0211;
					}
				}

IL_0206:
				{
					FileStream_t4292183065 * L_86 = V_16;
					if (!L_86)
					{
						goto IL_0211;
					}
				}

IL_020a:
				{
					FileStream_t4292183065 * L_87 = V_16;
					NullCheck(L_87);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_87);
				}

IL_0211:
				{
					IL2CPP_END_FINALLY(514)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(514)
			{
				IL2CPP_JUMP_TBL(0x212, IL_0212)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0212:
			{
				int32_t L_88 = V_14;
				V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_88, (int32_t)1));
			}

IL_0218:
			{
				// foreach (FileInfo dep in depFiles)
				int32_t L_89 = V_14;
				FileInfoU5BU5D_t2389029403* L_90 = V_13;
				NullCheck(L_90);
				if ((((int32_t)L_89) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_90)->max_length)))))))
				{
					goto IL_01a0;
				}
			}

IL_0220:
			{
				// }
				goto IL_022e;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0222;
			throw e;
		}

CATCH_0222:
		{ // begin catch(System.Exception)
			// Debug.LogException(e);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogException_m2207318968(NULL /*static, unused*/, ((Exception_t *)__exception_local), /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_04de;
		} // end catch (depth: 2)

IL_022e:
		{
			// string query = $"{string.Format(InstallQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(fileName)}";
			DeviceInfo_t313565737 * L_91 = __this->get_targetDevice_2();
			NullCheck(L_91);
			String_t* L_92 = L_91->get_IP_0();
			String_t* L_93 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_92, /*hidden argument*/NULL);
			String_t* L_94 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral756802359, L_93, /*hidden argument*/NULL);
			String_t* L_95 = __this->get_U3CfileNameU3E5__2_5();
			String_t* L_96 = UnityWebRequest_EscapeURL_m1544092040(NULL /*static, unused*/, L_95, /*hidden argument*/NULL);
			String_t* L_97 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral195864525, L_94, L_96, /*hidden argument*/NULL);
			// var response = await Rest.PostAsync(query, form, targetDevice.Authorization);
			WWWForm_t4064702195 * L_98 = V_5;
			DeviceInfo_t313565737 * L_99 = __this->get_targetDevice_2();
			NullCheck(L_99);
			Dictionary_2_t1632706988 * L_100 = DeviceInfo_get_Authorization_m3424419350(L_99, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_101 = Rest_PostAsync_m3094615350(NULL /*static, unused*/, L_97, L_98, L_100, (-1), /*hidden argument*/NULL);
			NullCheck(L_101);
			TaskAwaiter_1_t3582946539  L_102 = Task_1_GetAwaiter_m1468115537(L_101, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_19 = L_102;
			bool L_103 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_19), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_103)
			{
				goto IL_02c1;
			}
		}

IL_0280:
		{
			int32_t L_104 = 1;
			V_0 = L_104;
			__this->set_U3CU3E1__state_0(L_104);
			TaskAwaiter_1_t3582946539  L_105 = V_19;
			__this->set_U3CU3Eu__2_7(L_105);
			AsyncTaskMethodBuilder_1_t2418262475 * L_106 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766((AsyncTaskMethodBuilder_1_t2418262475 *)L_106, (TaskAwaiter_1_t3582946539 *)(&V_19), (U3CInstallAppAsyncU3Ed__26_t170559867 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2569874766_RuntimeMethod_var);
			goto IL_04f2;
		}

IL_02a4:
		{
			TaskAwaiter_1_t3582946539  L_107 = __this->get_U3CU3Eu__2_7();
			V_19 = L_107;
			TaskAwaiter_1_t3582946539 * L_108 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_108, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_109 = (-1);
			V_0 = L_109;
			__this->set_U3CU3E1__state_0(L_109);
		}

IL_02c1:
		{
			Response_t788464108  L_110 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_19), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_6 = L_110;
			// if (!response.Successful)
			bool L_111 = Response_get_Successful_m3489788737((Response_t788464108 *)(&V_6), /*hidden argument*/NULL);
			if (L_111)
			{
				goto IL_03f0;
			}
		}

IL_02d6:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			int64_t L_112 = Response_get_ResponseCode_m32631037((Response_t788464108 *)(&V_6), /*hidden argument*/NULL);
			V_20 = (bool)((((int64_t)L_112) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_113 = V_20;
			if (!L_113)
			{
				goto IL_0350;
			}
		}

IL_02eb:
		{
			DeviceInfo_t313565737 * L_114 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_115 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_114, /*hidden argument*/NULL);
			NullCheck(L_115);
			TaskAwaiter_1_t2891770396  L_116 = Task_1_GetAwaiter_m1353846373(L_115, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_8 = L_116;
			bool L_117 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_117)
			{
				goto IL_0347;
			}
		}

IL_0306:
		{
			int32_t L_118 = 2;
			V_0 = L_118;
			__this->set_U3CU3E1__state_0(L_118);
			TaskAwaiter_1_t2891770396  L_119 = V_8;
			__this->set_U3CU3Eu__1_6(L_119);
			AsyncTaskMethodBuilder_1_t2418262475 * L_120 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539((AsyncTaskMethodBuilder_1_t2418262475 *)L_120, (TaskAwaiter_1_t2891770396 *)(&V_8), (U3CInstallAppAsyncU3Ed__26_t170559867 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_RuntimeMethod_var);
			goto IL_04f2;
		}

IL_032a:
		{
			TaskAwaiter_1_t2891770396  L_121 = __this->get_U3CU3Eu__1_6();
			V_8 = L_121;
			TaskAwaiter_1_t2891770396 * L_122 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_122, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_123 = (-1);
			V_0 = L_123;
			__this->set_U3CU3E1__state_0(L_123);
		}

IL_0347:
		{
			bool L_124 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_20 = L_124;
		}

IL_0350:
		{
			bool L_125 = V_20;
			if (!L_125)
			{
				goto IL_03c9;
			}
		}

IL_0354:
		{
			// return await InstallAppAsync(appFullPath, targetDevice, waitForDone);
			String_t* L_126 = __this->get_appFullPath_3();
			DeviceInfo_t313565737 * L_127 = __this->get_targetDevice_2();
			bool L_128 = __this->get_waitForDone_4();
			Task_1_t1502828140 * L_129 = DevicePortal_InstallAppAsync_m2258800417(NULL /*static, unused*/, L_126, L_127, L_128, /*hidden argument*/NULL);
			NullCheck(L_129);
			TaskAwaiter_1_t2891770396  L_130 = Task_1_GetAwaiter_m1353846373(L_129, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_8 = L_130;
			bool L_131 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_131)
			{
				goto IL_03bc;
			}
		}

IL_037b:
		{
			int32_t L_132 = 3;
			V_0 = L_132;
			__this->set_U3CU3E1__state_0(L_132);
			TaskAwaiter_1_t2891770396  L_133 = V_8;
			__this->set_U3CU3Eu__1_6(L_133);
			AsyncTaskMethodBuilder_1_t2418262475 * L_134 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539((AsyncTaskMethodBuilder_1_t2418262475 *)L_134, (TaskAwaiter_1_t2891770396 *)(&V_8), (U3CInstallAppAsyncU3Ed__26_t170559867 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CInstallAppAsyncU3Ed__26_t170559867_m2656407539_RuntimeMethod_var);
			goto IL_04f2;
		}

IL_039f:
		{
			TaskAwaiter_1_t2891770396  L_135 = __this->get_U3CU3Eu__1_6();
			V_8 = L_135;
			TaskAwaiter_1_t2891770396 * L_136 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_136, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_137 = (-1);
			V_0 = L_137;
			__this->set_U3CU3E1__state_0(L_137);
		}

IL_03bc:
		{
			bool L_138 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_8), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_138;
			goto IL_04de;
		}

IL_03c9:
		{
			// Debug.LogError($"Failed to install {fileName} on {targetDevice.MachineName}.");
			String_t* L_139 = __this->get_U3CfileNameU3E5__2_5();
			DeviceInfo_t313565737 * L_140 = __this->get_targetDevice_2();
			NullCheck(L_140);
			String_t* L_141 = L_140->get_MachineName_3();
			String_t* L_142 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3862419723, L_139, L_141, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_142, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_04de;
		}

IL_03f0:
		{
			// var status = AppInstallStatus.Installing;
			V_7 = 1;
			goto IL_04b1;
		}

IL_03f8:
		{
			// status = await GetInstallStatusAsync(targetDevice);
			DeviceInfo_t313565737 * L_143 = __this->get_targetDevice_2();
			Task_1_t2265980346 * L_144 = DevicePortal_GetInstallStatusAsync_m2209080915(NULL /*static, unused*/, L_143, /*hidden argument*/NULL);
			NullCheck(L_144);
			TaskAwaiter_1_t3654922602  L_145 = Task_1_GetAwaiter_m3398521935(L_144, /*hidden argument*/Task_1_GetAwaiter_m3398521935_RuntimeMethod_var);
			V_21 = L_145;
			bool L_146 = TaskAwaiter_1_get_IsCompleted_m2760376190((TaskAwaiter_1_t3654922602 *)(&V_21), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2760376190_RuntimeMethod_var);
			if (L_146)
			{
				goto IL_0454;
			}
		}

IL_0413:
		{
			int32_t L_147 = 4;
			V_0 = L_147;
			__this->set_U3CU3E1__state_0(L_147);
			TaskAwaiter_1_t3654922602  L_148 = V_21;
			__this->set_U3CU3Eu__3_8(L_148);
			AsyncTaskMethodBuilder_1_t2418262475 * L_149 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961((AsyncTaskMethodBuilder_1_t2418262475 *)L_149, (TaskAwaiter_1_t3654922602 *)(&V_21), (U3CInstallAppAsyncU3Ed__26_t170559867 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3654922602_TisU3CInstallAppAsyncU3Ed__26_t170559867_m4081030961_RuntimeMethod_var);
			goto IL_04f2;
		}

IL_0437:
		{
			TaskAwaiter_1_t3654922602  L_150 = __this->get_U3CU3Eu__3_8();
			V_21 = L_150;
			TaskAwaiter_1_t3654922602 * L_151 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_151, sizeof(TaskAwaiter_1_t3654922602 ));
			int32_t L_152 = (-1);
			V_0 = L_152;
			__this->set_U3CU3E1__state_0(L_152);
		}

IL_0454:
		{
			int32_t L_153 = TaskAwaiter_1_GetResult_m3957052770((TaskAwaiter_1_t3654922602 *)(&V_21), /*hidden argument*/TaskAwaiter_1_GetResult_m3957052770_RuntimeMethod_var);
			V_7 = L_153;
			// switch (status)
			int32_t L_154 = V_7;
			if ((((int32_t)L_154) == ((int32_t)2)))
			{
				goto IL_0469;
			}
		}

IL_0462:
		{
			int32_t L_155 = V_7;
			if ((((int32_t)L_155) == ((int32_t)3)))
			{
				goto IL_048d;
			}
		}

IL_0467:
		{
			goto IL_04b1;
		}

IL_0469:
		{
			// Debug.Log($"Successfully installed {fileName} on {targetDevice.MachineName}.");
			String_t* L_156 = __this->get_U3CfileNameU3E5__2_5();
			DeviceInfo_t313565737 * L_157 = __this->get_targetDevice_2();
			NullCheck(L_157);
			String_t* L_158 = L_157->get_MachineName_3();
			String_t* L_159 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2647770442, L_156, L_158, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_Log_m4051431634(NULL /*static, unused*/, L_159, /*hidden argument*/NULL);
			// return true;
			V_1 = (bool)1;
			goto IL_04de;
		}

IL_048d:
		{
			// Debug.LogError($"Failed to install {fileName} on {targetDevice.MachineName}.");
			String_t* L_160 = __this->get_U3CfileNameU3E5__2_5();
			DeviceInfo_t313565737 * L_161 = __this->get_targetDevice_2();
			NullCheck(L_161);
			String_t* L_162 = L_161->get_MachineName_3();
			String_t* L_163 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3862419723, L_160, L_162, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_163, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_04de;
		}

IL_04b1:
		{
			// while (waitForDone && status == AppInstallStatus.Installing)
			bool L_164 = __this->get_waitForDone_4();
			if (!L_164)
			{
				goto IL_04c1;
			}
		}

IL_04b9:
		{
			int32_t L_165 = V_7;
			if ((((int32_t)L_165) == ((int32_t)1)))
			{
				goto IL_03f8;
			}
		}

IL_04c1:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_04de;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_04c5;
		throw e;
	}

CATCH_04c5:
	{ // begin catch(System.Exception)
		V_22 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_166 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_167 = V_22;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_166, L_167, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_04f2;
	} // end catch (depth: 1)

IL_04de:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_168 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_169 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_168, L_169, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_04f2:
	{
		return;
	}
}
extern "C"  void U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CInstallAppAsyncU3Ed__26_t170559867 * _thisAdjusted = reinterpret_cast<U3CInstallAppAsyncU3Ed__26_t170559867 *>(__this + 1);
	U3CInstallAppAsyncU3Ed__26_MoveNext_m2567753306(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<InstallAppAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239 (U3CInstallAppAsyncU3Ed__26_t170559867 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CInstallAppAsyncU3Ed__26_t170559867 * _thisAdjusted = reinterpret_cast<U3CInstallAppAsyncU3Ed__26_t170559867 *>(__this + 1);
	U3CInstallAppAsyncU3Ed__26_SetStateMachine_m3464603239(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805 (U3CIsAppInstalledAsyncU3Ed__22_t442704640 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t568144337  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_004a;
			}
		}

IL_000a:
		{
			// return await GetApplicationInfoAsync(packageName, targetDevice) != null;
			String_t* L_2 = __this->get_packageName_2();
			DeviceInfo_t313565737 * L_3 = __this->get_targetDevice_3();
			Task_1_t3474169377 * L_4 = DevicePortal_GetApplicationInfoAsync_m500559243(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			TaskAwaiter_1_t568144337  L_5 = Task_1_GetAwaiter_m287228013(L_4, /*hidden argument*/Task_1_GetAwaiter_m287228013_RuntimeMethod_var);
			V_2 = L_5;
			bool L_6 = TaskAwaiter_1_get_IsCompleted_m4224200197((TaskAwaiter_1_t568144337 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0066;
			}
		}

IL_002a:
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->set_U3CU3E1__state_0(L_7);
			TaskAwaiter_1_t568144337  L_8 = V_2;
			__this->set_U3CU3Eu__1_4(L_8);
			AsyncTaskMethodBuilder_1_t2418262475 * L_9 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2621696278((AsyncTaskMethodBuilder_1_t2418262475 *)L_9, (TaskAwaiter_1_t568144337 *)(&V_2), (U3CIsAppInstalledAsyncU3Ed__22_t442704640 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppInstalledAsyncU3Ed__22_t442704640_m2621696278_RuntimeMethod_var);
			goto IL_009e;
		}

IL_004a:
		{
			TaskAwaiter_1_t568144337  L_10 = __this->get_U3CU3Eu__1_4();
			V_2 = L_10;
			TaskAwaiter_1_t568144337 * L_11 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_1_t568144337 ));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
		}

IL_0066:
		{
			ApplicationInfo_t2068629202 * L_13 = TaskAwaiter_1_GetResult_m652205427((TaskAwaiter_1_t568144337 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var);
			V_1 = (bool)((!(((RuntimeObject*)(ApplicationInfo_t2068629202 *)L_13) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
			goto IL_008a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0073;
		throw e;
	}

CATCH_0073:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_15 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_14, L_15, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_009e;
	} // end catch (depth: 1)

IL_008a:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_16 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_17 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_16, L_17, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_009e:
	{
		return;
	}
}
extern "C"  void U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CIsAppInstalledAsyncU3Ed__22_t442704640 * _thisAdjusted = reinterpret_cast<U3CIsAppInstalledAsyncU3Ed__22_t442704640 *>(__this + 1);
	U3CIsAppInstalledAsyncU3Ed__22_MoveNext_m1980027805(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppInstalledAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814 (U3CIsAppInstalledAsyncU3Ed__22_t442704640 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CIsAppInstalledAsyncU3Ed__22_t442704640 * _thisAdjusted = reinterpret_cast<U3CIsAppInstalledAsyncU3Ed__22_t442704640 *>(__this + 1);
	U3CIsAppInstalledAsyncU3Ed__22_SetStateMachine_m1186223814(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829 (U3CIsAppRunningAsyncU3Ed__23_t3498844109 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_t2068629202 * V_2 = NULL;
	TaskAwaiter_1_t568144337  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Response_t788464108  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TaskAwaiter_1_t3582946539  V_5;
	memset(&V_5, 0, sizeof(V_5));
	ProcessList_t1550074349 * V_6 = NULL;
	int32_t V_7 = 0;
	bool V_8 = false;
	TaskAwaiter_1_t2891770396  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Exception_t * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0068;
				}
				case 1:
				{
					goto IL_0116;
				}
				case 2:
				{
					goto IL_0202;
				}
				case 3:
				{
					goto IL_0274;
				}
			}
		}

IL_001d:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_0093;
			}
		}

IL_0025:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_4 = __this->get_targetDevice_4();
			Task_1_t3474169377 * L_5 = DevicePortal_GetApplicationInfoAsync_m500559243(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t568144337  L_6 = Task_1_GetAwaiter_m287228013(L_5, /*hidden argument*/Task_1_GetAwaiter_m287228013_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m4224200197((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0084;
			}
		}

IL_0045:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t568144337  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t2418262475 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m306871977((AsyncTaskMethodBuilder_1_t2418262475 *)L_10, (TaskAwaiter_1_t568144337 *)(&V_3), (U3CIsAppRunningAsyncU3Ed__23_t3498844109 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m306871977_RuntimeMethod_var);
			goto IL_02e6;
		}

IL_0068:
		{
			TaskAwaiter_1_t568144337  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t568144337 * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t568144337 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0084:
		{
			ApplicationInfo_t2068629202 * L_14 = TaskAwaiter_1_GetResult_m652205427((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_t2068629202 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_0093:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00b7;
			}
		}

IL_009b:
		{
			// Debug.LogError($"{packageName} not installed.");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3382384620, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02d2;
		}

IL_00b7:
		{
			// var response = await Rest.GetAsync(string.Format(ProcessQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization);
			DeviceInfo_t313565737 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_0();
			String_t* L_21 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral4139383724, L_21, /*hidden argument*/NULL);
			DeviceInfo_t313565737 * L_23 = __this->get_targetDevice_4();
			NullCheck(L_23);
			Dictionary_2_t1632706988 * L_24 = DeviceInfo_get_Authorization_m3424419350(L_23, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_25 = Rest_GetAsync_m2018571585(NULL /*static, unused*/, L_22, L_24, (-1), /*hidden argument*/NULL);
			NullCheck(L_25);
			TaskAwaiter_1_t3582946539  L_26 = Task_1_GetAwaiter_m1468115537(L_25, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_5 = L_26;
			bool L_27 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_27)
			{
				goto IL_0133;
			}
		}

IL_00f2:
		{
			int32_t L_28 = 1;
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
			TaskAwaiter_1_t3582946539  L_29 = V_5;
			__this->set_U3CU3Eu__2_7(L_29);
			AsyncTaskMethodBuilder_1_t2418262475 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542((AsyncTaskMethodBuilder_1_t2418262475 *)L_30, (TaskAwaiter_1_t3582946539 *)(&V_5), (U3CIsAppRunningAsyncU3Ed__23_t3498844109 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m2805615542_RuntimeMethod_var);
			goto IL_02e6;
		}

IL_0116:
		{
			TaskAwaiter_1_t3582946539  L_31 = __this->get_U3CU3Eu__2_7();
			V_5 = L_31;
			TaskAwaiter_1_t3582946539 * L_32 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_32, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_33 = (-1);
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
		}

IL_0133:
		{
			Response_t788464108  L_34 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_4 = L_34;
			Response_t788464108  L_35 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_35);
			// if (response.Successful)
			Response_t788464108 * L_36 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_37 = Response_get_Successful_m3489788737((Response_t788464108 *)L_36, /*hidden argument*/NULL);
			if (!L_37)
			{
				goto IL_01aa;
			}
		}

IL_0151:
		{
			// var processList = JsonUtility.FromJson<ProcessList>(response.ResponseBody);
			Response_t788464108 * L_38 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_39 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_38, /*hidden argument*/NULL);
			ProcessList_t1550074349 * L_40 = JsonUtility_FromJson_TisProcessList_t1550074349_m3608064058(NULL /*static, unused*/, L_39, /*hidden argument*/JsonUtility_FromJson_TisProcessList_t1550074349_m3608064058_RuntimeMethod_var);
			V_6 = L_40;
			// for (int i = 0; i < processList.Processes.Length; ++i)
			V_7 = 0;
			goto IL_0196;
		}

IL_0168:
		{
			// if (processList.Processes[i].ImageName.Contains(appInfo.Name))
			ProcessList_t1550074349 * L_41 = V_6;
			NullCheck(L_41);
			ProcessInfoU5BU5D_t4127039660* L_42 = L_41->get_Processes_0();
			int32_t L_43 = V_7;
			NullCheck(L_42);
			int32_t L_44 = L_43;
			ProcessInfo_t1668061809 * L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
			NullCheck(L_45);
			String_t* L_46 = L_45->get_ImageName_1();
			ApplicationInfo_t2068629202 * L_47 = __this->get_appInfo_2();
			NullCheck(L_47);
			String_t* L_48 = L_47->get_Name_0();
			NullCheck(L_46);
			bool L_49 = String_Contains_m1147431944(L_46, L_48, /*hidden argument*/NULL);
			if (!L_49)
			{
				goto IL_0190;
			}
		}

IL_0189:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_02d2;
		}

IL_0190:
		{
			// for (int i = 0; i < processList.Processes.Length; ++i)
			int32_t L_50 = V_7;
			V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		}

IL_0196:
		{
			// for (int i = 0; i < processList.Processes.Length; ++i)
			int32_t L_51 = V_7;
			ProcessList_t1550074349 * L_52 = V_6;
			NullCheck(L_52);
			ProcessInfoU5BU5D_t4127039660* L_53 = L_52->get_Processes_0();
			NullCheck(L_53);
			if ((((int32_t)L_51) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_53)->max_length)))))))
			{
				goto IL_0168;
			}
		}

IL_01a3:
		{
			// return false;
			V_1 = (bool)0;
			goto IL_02d2;
		}

IL_01aa:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_54 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_55 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_54, /*hidden argument*/NULL);
			V_8 = (bool)((((int64_t)L_55) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_56 = V_8;
			if (!L_56)
			{
				goto IL_0228;
			}
		}

IL_01c3:
		{
			DeviceInfo_t313565737 * L_57 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_58 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
			NullCheck(L_58);
			TaskAwaiter_1_t2891770396  L_59 = Task_1_GetAwaiter_m1353846373(L_58, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_9 = L_59;
			bool L_60 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_60)
			{
				goto IL_021f;
			}
		}

IL_01de:
		{
			int32_t L_61 = 2;
			V_0 = L_61;
			__this->set_U3CU3E1__state_0(L_61);
			TaskAwaiter_1_t2891770396  L_62 = V_9;
			__this->set_U3CU3Eu__3_8(L_62);
			AsyncTaskMethodBuilder_1_t2418262475 * L_63 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775((AsyncTaskMethodBuilder_1_t2418262475 *)L_63, (TaskAwaiter_1_t2891770396 *)(&V_9), (U3CIsAppRunningAsyncU3Ed__23_t3498844109 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775_RuntimeMethod_var);
			goto IL_02e6;
		}

IL_0202:
		{
			TaskAwaiter_1_t2891770396  L_64 = __this->get_U3CU3Eu__3_8();
			V_9 = L_64;
			TaskAwaiter_1_t2891770396 * L_65 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_65, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_66 = (-1);
			V_0 = L_66;
			__this->set_U3CU3E1__state_0(L_66);
		}

IL_021f:
		{
			bool L_67 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_8 = L_67;
		}

IL_0228:
		{
			bool L_68 = V_8;
			if (!L_68)
			{
				goto IL_029b;
			}
		}

IL_022c:
		{
			// return await IsAppRunningAsync(packageName, targetDevice, appInfo);
			String_t* L_69 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_70 = __this->get_targetDevice_4();
			ApplicationInfo_t2068629202 * L_71 = __this->get_appInfo_2();
			Task_1_t1502828140 * L_72 = DevicePortal_IsAppRunningAsync_m3654059161(NULL /*static, unused*/, L_69, L_70, L_71, /*hidden argument*/NULL);
			NullCheck(L_72);
			TaskAwaiter_1_t2891770396  L_73 = Task_1_GetAwaiter_m1353846373(L_72, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_9 = L_73;
			bool L_74 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_9), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_74)
			{
				goto IL_0291;
			}
		}

IL_0253:
		{
			int32_t L_75 = 3;
			V_0 = L_75;
			__this->set_U3CU3E1__state_0(L_75);
			TaskAwaiter_1_t2891770396  L_76 = V_9;
			__this->set_U3CU3Eu__3_8(L_76);
			AsyncTaskMethodBuilder_1_t2418262475 * L_77 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775((AsyncTaskMethodBuilder_1_t2418262475 *)L_77, (TaskAwaiter_1_t2891770396 *)(&V_9), (U3CIsAppRunningAsyncU3Ed__23_t3498844109 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CIsAppRunningAsyncU3Ed__23_t3498844109_m1315047775_RuntimeMethod_var);
			goto IL_02e6;
		}

IL_0274:
		{
			TaskAwaiter_1_t2891770396  L_78 = __this->get_U3CU3Eu__3_8();
			V_9 = L_78;
			TaskAwaiter_1_t2891770396 * L_79 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_79, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->set_U3CU3E1__state_0(L_80);
		}

IL_0291:
		{
			bool L_81 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_9), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_81;
			goto IL_02d2;
		}

IL_029b:
		{
			// Debug.LogError($"{response.ResponseBody}");
			Response_t788464108 * L_82 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_83 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_82, /*hidden argument*/NULL);
			String_t* L_84 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral628085470, L_83, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_84, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02d2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02b9;
		throw e;
	}

CATCH_02b9:
	{ // begin catch(System.Exception)
		V_10 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_85 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_86 = V_10;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_85, L_86, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_02e6;
	} // end catch (depth: 1)

IL_02d2:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_87 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_88 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_87, L_88, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_02e6:
	{
		return;
	}
}
extern "C"  void U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CIsAppRunningAsyncU3Ed__23_t3498844109 * _thisAdjusted = reinterpret_cast<U3CIsAppRunningAsyncU3Ed__23_t3498844109 *>(__this + 1);
	U3CIsAppRunningAsyncU3Ed__23_MoveNext_m392295829(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<IsAppRunningAsync>d__23::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579 (U3CIsAppRunningAsyncU3Ed__23_t3498844109 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CIsAppRunningAsyncU3Ed__23_t3498844109 * _thisAdjusted = reinterpret_cast<U3CIsAppRunningAsyncU3Ed__23_t3498844109 *>(__this + 1);
	U3CIsAppRunningAsyncU3Ed__23_SetStateMachine_m3026067579(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980 (U3CLaunchAppAsyncU3Ed__29_t40369088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_t2068629202 * V_2 = NULL;
	TaskAwaiter_1_t568144337  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Response_t788464108  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TaskAwaiter_1_t3582946539  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_t2891770396  V_7;
	memset(&V_7, 0, sizeof(V_7));
	SimpleCoroutineAwaiter_t1961245047 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0070;
				}
				case 1:
				{
					goto IL_014d;
				}
				case 2:
				{
					goto IL_01e3;
				}
				case 3:
				{
					goto IL_0253;
				}
				case 4:
				{
					goto IL_02ec;
				}
				case 5:
				{
					goto IL_0358;
				}
			}
		}

IL_0025:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_009b;
			}
		}

IL_002d:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_4 = __this->get_targetDevice_4();
			Task_1_t3474169377 * L_5 = DevicePortal_GetApplicationInfoAsync_m500559243(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t568144337  L_6 = Task_1_GetAwaiter_m287228013(L_5, /*hidden argument*/Task_1_GetAwaiter_m287228013_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m4224200197((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_008c;
			}
		}

IL_004d:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t568144337  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t2418262475 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m4271167575((AsyncTaskMethodBuilder_1_t2418262475 *)L_10, (TaskAwaiter_1_t568144337 *)(&V_3), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m4271167575_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_0070:
		{
			TaskAwaiter_1_t568144337  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t568144337 * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t568144337 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_008c:
		{
			ApplicationInfo_t2068629202 * L_14 = TaskAwaiter_1_GetResult_m652205427((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_t2068629202 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_009b:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00bf;
			}
		}

IL_00a3:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral327304042, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_039e;
		}

IL_00bf:
		{
			// string query = $"{string.Format(AppQuery, FinalizeUrl(targetDevice.IP))}?appid={UnityWebRequest.EscapeURL(appInfo.PackageRelativeId.EncodeTo64())}&package={UnityWebRequest.EscapeURL(appInfo.PackageFullName)}";
			DeviceInfo_t313565737 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_0();
			String_t* L_21 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3943316947, L_21, /*hidden argument*/NULL);
			ApplicationInfo_t2068629202 * L_23 = __this->get_appInfo_2();
			NullCheck(L_23);
			String_t* L_24 = L_23->get_PackageRelativeId_4();
			String_t* L_25 = StringExtensions_EncodeTo64_m747039657(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			String_t* L_26 = UnityWebRequest_EscapeURL_m1544092040(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
			ApplicationInfo_t2068629202 * L_27 = __this->get_appInfo_2();
			NullCheck(L_27);
			String_t* L_28 = L_27->get_PackageFullName_2();
			String_t* L_29 = UnityWebRequest_EscapeURL_m1544092040(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
			String_t* L_30 = String_Format_m3339413201(NULL /*static, unused*/, _stringLiteral120995181, L_22, L_26, L_29, /*hidden argument*/NULL);
			// var response = await Rest.PostAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_31 = __this->get_targetDevice_4();
			NullCheck(L_31);
			Dictionary_2_t1632706988 * L_32 = DeviceInfo_get_Authorization_m3424419350(L_31, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_33 = Rest_PostAsync_m1199791566(NULL /*static, unused*/, L_30, L_32, (-1), /*hidden argument*/NULL);
			NullCheck(L_33);
			TaskAwaiter_1_t3582946539  L_34 = Task_1_GetAwaiter_m1468115537(L_33, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_5 = L_34;
			bool L_35 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_35)
			{
				goto IL_016a;
			}
		}

IL_0129:
		{
			int32_t L_36 = 1;
			V_0 = L_36;
			__this->set_U3CU3E1__state_0(L_36);
			TaskAwaiter_1_t3582946539  L_37 = V_5;
			__this->set_U3CU3Eu__2_7(L_37);
			AsyncTaskMethodBuilder_1_t2418262475 * L_38 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303((AsyncTaskMethodBuilder_1_t2418262475 *)L_38, (TaskAwaiter_1_t3582946539 *)(&V_5), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3458259303_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_014d:
		{
			TaskAwaiter_1_t3582946539  L_39 = __this->get_U3CU3Eu__2_7();
			V_5 = L_39;
			TaskAwaiter_1_t3582946539 * L_40 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_40, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_41 = (-1);
			V_0 = L_41;
			__this->set_U3CU3E1__state_0(L_41);
		}

IL_016a:
		{
			Response_t788464108  L_42 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_4 = L_42;
			Response_t788464108  L_43 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_43);
			// if (!response.Successful)
			Response_t788464108 * L_44 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_45 = Response_get_Successful_m3489788737((Response_t788464108 *)L_44, /*hidden argument*/NULL);
			if (L_45)
			{
				goto IL_0310;
			}
		}

IL_018b:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_46 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_47 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_46, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_47) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_48 = V_6;
			if (!L_48)
			{
				goto IL_0209;
			}
		}

IL_01a4:
		{
			DeviceInfo_t313565737 * L_49 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_50 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			TaskAwaiter_1_t2891770396  L_51 = Task_1_GetAwaiter_m1353846373(L_50, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_51;
			bool L_52 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_52)
			{
				goto IL_0200;
			}
		}

IL_01bf:
		{
			int32_t L_53 = 2;
			V_0 = L_53;
			__this->set_U3CU3E1__state_0(L_53);
			TaskAwaiter_1_t2891770396  L_54 = V_7;
			__this->set_U3CU3Eu__3_8(L_54);
			AsyncTaskMethodBuilder_1_t2418262475 * L_55 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218((AsyncTaskMethodBuilder_1_t2418262475 *)L_55, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_01e3:
		{
			TaskAwaiter_1_t2891770396  L_56 = __this->get_U3CU3Eu__3_8();
			V_7 = L_56;
			TaskAwaiter_1_t2891770396 * L_57 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_57, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_58 = (-1);
			V_0 = L_58;
			__this->set_U3CU3E1__state_0(L_58);
		}

IL_0200:
		{
			bool L_59 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_6 = L_59;
		}

IL_0209:
		{
			bool L_60 = V_6;
			if (!L_60)
			{
				goto IL_027d;
			}
		}

IL_020d:
		{
			// return await LaunchAppAsync(packageName, targetDevice);
			String_t* L_61 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_62 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_63 = DevicePortal_LaunchAppAsync_m1197552333(NULL /*static, unused*/, L_61, L_62, (ApplicationInfo_t2068629202 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_63);
			TaskAwaiter_1_t2891770396  L_64 = Task_1_GetAwaiter_m1353846373(L_63, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_64;
			bool L_65 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_65)
			{
				goto IL_0270;
			}
		}

IL_022f:
		{
			int32_t L_66 = 3;
			V_0 = L_66;
			__this->set_U3CU3E1__state_0(L_66);
			TaskAwaiter_1_t2891770396  L_67 = V_7;
			__this->set_U3CU3Eu__3_8(L_67);
			AsyncTaskMethodBuilder_1_t2418262475 * L_68 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218((AsyncTaskMethodBuilder_1_t2418262475 *)L_68, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_0253:
		{
			TaskAwaiter_1_t2891770396  L_69 = __this->get_U3CU3Eu__3_8();
			V_7 = L_69;
			TaskAwaiter_1_t2891770396 * L_70 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_70, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_71 = (-1);
			V_0 = L_71;
			__this->set_U3CU3E1__state_0(L_71);
		}

IL_0270:
		{
			bool L_72 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_72;
			goto IL_039e;
		}

IL_027d:
		{
			// Debug.LogError($"{response.ResponseCode}|{response.ResponseBody}");
			Response_t788464108 * L_73 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_74 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_73, /*hidden argument*/NULL);
			int64_t L_75 = L_74;
			RuntimeObject * L_76 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_75);
			Response_t788464108 * L_77 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_78 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_77, /*hidden argument*/NULL);
			String_t* L_79 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral2018795562, L_76, L_78, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_79, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_039e;
		}

IL_02ae:
		{
			// await new WaitForSeconds(1f);
			WaitForSeconds_t1699091251 * L_80 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_m2199082655(L_80, (1.0f), /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t1961245047 * L_81 = AwaiterExtensions_GetAwaiter_m2812080933(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
			V_8 = L_81;
			SimpleCoroutineAwaiter_t1961245047 * L_82 = V_8;
			NullCheck(L_82);
			bool L_83 = SimpleCoroutineAwaiter_get_IsCompleted_m1501874044(L_82, /*hidden argument*/NULL);
			if (L_83)
			{
				goto IL_0309;
			}
		}

IL_02c8:
		{
			int32_t L_84 = 4;
			V_0 = L_84;
			__this->set_U3CU3E1__state_0(L_84);
			SimpleCoroutineAwaiter_t1961245047 * L_85 = V_8;
			__this->set_U3CU3Eu__4_9(L_85);
			AsyncTaskMethodBuilder_1_t2418262475 * L_86 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m178632677((AsyncTaskMethodBuilder_1_t2418262475 *)L_86, (SimpleCoroutineAwaiter_t1961245047 **)(&V_8), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m178632677_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_02ec:
		{
			RuntimeObject * L_87 = __this->get_U3CU3Eu__4_9();
			V_8 = ((SimpleCoroutineAwaiter_t1961245047 *)CastclassClass((RuntimeObject*)L_87, SimpleCoroutineAwaiter_t1961245047_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__4_9(NULL);
			int32_t L_88 = (-1);
			V_0 = L_88;
			__this->set_U3CU3E1__state_0(L_88);
		}

IL_0309:
		{
			SimpleCoroutineAwaiter_t1961245047 * L_89 = V_8;
			NullCheck(L_89);
			SimpleCoroutineAwaiter_GetResult_m2823840508(L_89, /*hidden argument*/NULL);
		}

IL_0310:
		{
			// while (!await IsAppRunningAsync(packageName, targetDevice, appInfo))
			String_t* L_90 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_91 = __this->get_targetDevice_4();
			ApplicationInfo_t2068629202 * L_92 = __this->get_appInfo_2();
			Task_1_t1502828140 * L_93 = DevicePortal_IsAppRunningAsync_m3654059161(NULL /*static, unused*/, L_90, L_91, L_92, /*hidden argument*/NULL);
			NullCheck(L_93);
			TaskAwaiter_1_t2891770396  L_94 = Task_1_GetAwaiter_m1353846373(L_93, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_94;
			bool L_95 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_95)
			{
				goto IL_0375;
			}
		}

IL_0337:
		{
			int32_t L_96 = 5;
			V_0 = L_96;
			__this->set_U3CU3E1__state_0(L_96);
			TaskAwaiter_1_t2891770396  L_97 = V_7;
			__this->set_U3CU3Eu__3_8(L_97);
			AsyncTaskMethodBuilder_1_t2418262475 * L_98 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218((AsyncTaskMethodBuilder_1_t2418262475 *)L_98, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CLaunchAppAsyncU3Ed__29_t40369088 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CLaunchAppAsyncU3Ed__29_t40369088_m3455852218_RuntimeMethod_var);
			goto IL_03b2;
		}

IL_0358:
		{
			TaskAwaiter_1_t2891770396  L_99 = __this->get_U3CU3Eu__3_8();
			V_7 = L_99;
			TaskAwaiter_1_t2891770396 * L_100 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_100, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_101 = (-1);
			V_0 = L_101;
			__this->set_U3CU3E1__state_0(L_101);
		}

IL_0375:
		{
			bool L_102 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			if (!L_102)
			{
				goto IL_02ae;
			}
		}

IL_0381:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_039e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0385;
		throw e;
	}

CATCH_0385:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_103 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_104 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_103, L_104, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_03b2;
	} // end catch (depth: 1)

IL_039e:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_105 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_106 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_105, L_106, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_03b2:
	{
		return;
	}
}
extern "C"  void U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CLaunchAppAsyncU3Ed__29_t40369088 * _thisAdjusted = reinterpret_cast<U3CLaunchAppAsyncU3Ed__29_t40369088 *>(__this + 1);
	U3CLaunchAppAsyncU3Ed__29_MoveNext_m2110958980(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<LaunchAppAsync>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113 (U3CLaunchAppAsyncU3Ed__29_t40369088 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CLaunchAppAsyncU3Ed__29_t40369088 * _thisAdjusted = reinterpret_cast<U3CLaunchAppAsyncU3Ed__29_t40369088 *>(__this + 1);
	U3CLaunchAppAsyncU3Ed__29_SetStateMachine_m4039942113(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428 (U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0082;
			}
		}

IL_000a:
		{
			// if (!targetDevice.Authorization.ContainsKey("cookie"))
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			NullCheck(L_2);
			Dictionary_2_t1632706988 * L_3 = DeviceInfo_get_Authorization_m3424419350(L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			bool L_4 = Dictionary_2_ContainsKey_m3150074936(L_3, _stringLiteral1945222715, /*hidden argument*/Dictionary_2_ContainsKey_m3150074936_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0032;
			}
		}

IL_0021:
		{
			// Debug.LogError("Resetting Auth failed!");
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral1924534141, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_00bf;
		}

IL_0032:
		{
			// targetDevice.Authorization.Remove("cookie");
			DeviceInfo_t313565737 * L_5 = __this->get_targetDevice_2();
			NullCheck(L_5);
			Dictionary_2_t1632706988 * L_6 = DeviceInfo_get_Authorization_m3424419350(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Dictionary_2_Remove_m3109428628(L_6, _stringLiteral1945222715, /*hidden argument*/Dictionary_2_Remove_m3109428628_RuntimeMethod_var);
			// return await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_7 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_8 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			NullCheck(L_8);
			TaskAwaiter_1_t2891770396  L_9 = Task_1_GetAwaiter_m1353846373(L_8, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_9;
			bool L_10 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_10)
			{
				goto IL_009e;
			}
		}

IL_0062:
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
			TaskAwaiter_1_t2891770396  L_12 = V_2;
			__this->set_U3CU3Eu__1_3(L_12);
			AsyncTaskMethodBuilder_1_t2418262475 * L_13 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158((AsyncTaskMethodBuilder_1_t2418262475 *)L_13, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065_m1846366158_RuntimeMethod_var);
			goto IL_00d3;
		}

IL_0082:
		{
			TaskAwaiter_1_t2891770396  L_14 = __this->get_U3CU3Eu__1_3();
			V_2 = L_14;
			TaskAwaiter_1_t2891770396 * L_15 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_15, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->set_U3CU3E1__state_0(L_16);
		}

IL_009e:
		{
			bool L_17 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_17;
			goto IL_00bf;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a8;
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_18 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_19 = V_3;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_18, L_19, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_00d3;
	} // end catch (depth: 1)

IL_00bf:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_20 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_21 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_20, L_21, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_00d3:
	{
		return;
	}
}
extern "C"  void U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * _thisAdjusted = reinterpret_cast<U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 *>(__this + 1);
	U3CRefreshCsrfTokenAsyncU3Ed__37_MoveNext_m1960293428(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RefreshCsrfTokenAsync>d__37::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923 (U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 * _thisAdjusted = reinterpret_cast<U3CRefreshCsrfTokenAsyncU3Ed__37_t1401225065 *>(__this + 1);
	U3CRefreshCsrfTokenAsyncU3Ed__37_SetStateMachine_m4179007923(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__20_MoveNext_m3879067228 (U3CRestartAsyncU3Ed__20_t131148061 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartAsyncU3Ed__20_MoveNext_m3879067228_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Response_t788464108  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t3582946539  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0062;
				}
				case 1:
				{
					goto IL_00ed;
				}
				case 2:
				{
					goto IL_01a0;
				}
				case 3:
				{
					goto IL_0232;
				}
				case 4:
				{
					goto IL_02eb;
				}
				case 5:
				{
					goto IL_034e;
				}
			}
		}

IL_0025:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_007e;
			}
		}

IL_003f:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t2418262475 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218((AsyncTaskMethodBuilder_1_t2418262475 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_0062:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_007e:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return false; }
			if (L_12)
			{
				goto IL_008e;
			}
		}

IL_0087:
		{
			// if (!isAuth) { return false; }
			V_1 = (bool)0;
			goto IL_039f;
		}

IL_008e:
		{
			// var response = await Rest.PostAsync(string.Format(RestartDeviceQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization);
			DeviceInfo_t313565737 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_0();
			String_t* L_15 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2921564007, L_15, /*hidden argument*/NULL);
			DeviceInfo_t313565737 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t1632706988 * L_18 = DeviceInfo_get_Authorization_m3424419350(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_19 = Rest_PostAsync_m1199791566(NULL /*static, unused*/, L_16, L_18, (-1), /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_t3582946539  L_20 = Task_1_GetAwaiter_m1468115537(L_19, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_010a;
			}
		}

IL_00c9:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_t3582946539  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t2418262475 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700((AsyncTaskMethodBuilder_1_t2418262475 *)L_24, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_00ed:
		{
			TaskAwaiter_1_t3582946539  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_t3582946539 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_010a:
		{
			Response_t788464108  L_28 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_28;
			Response_t788464108  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (response.Successful)
			Response_t788464108 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m3489788737((Response_t788464108 *)L_30, /*hidden argument*/NULL);
			if (!L_31)
			{
				goto IL_0295;
			}
		}

IL_0129:
		{
			// bool hasRestarted = false;
			__this->set_U3ChasRestartedU3E5__3_6((bool)0);
			// string query = string.Format(GetPowerStateQuery, FinalizeUrl(targetDevice.IP));
			DeviceInfo_t313565737 * L_32 = __this->get_targetDevice_2();
			NullCheck(L_32);
			String_t* L_33 = L_32->get_IP_0();
			String_t* L_34 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
			String_t* L_35 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral2398034983, L_34, /*hidden argument*/NULL);
			__this->set_U3CqueryU3E5__4_7(L_35);
			goto IL_0283;
		}

IL_0155:
		{
			// response = await Rest.GetAsync(query, targetDevice.Authorization);
			String_t* L_36 = __this->get_U3CqueryU3E5__4_7();
			DeviceInfo_t313565737 * L_37 = __this->get_targetDevice_2();
			NullCheck(L_37);
			Dictionary_2_t1632706988 * L_38 = DeviceInfo_get_Authorization_m3424419350(L_37, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_39 = Rest_GetAsync_m2018571585(NULL /*static, unused*/, L_36, L_38, (-1), /*hidden argument*/NULL);
			NullCheck(L_39);
			TaskAwaiter_1_t3582946539  L_40 = Task_1_GetAwaiter_m1468115537(L_39, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_40;
			bool L_41 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_41)
			{
				goto IL_01bd;
			}
		}

IL_017c:
		{
			int32_t L_42 = 2;
			V_0 = L_42;
			__this->set_U3CU3E1__state_0(L_42);
			TaskAwaiter_1_t3582946539  L_43 = V_4;
			__this->set_U3CU3Eu__2_5(L_43);
			AsyncTaskMethodBuilder_1_t2418262475 * L_44 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700((AsyncTaskMethodBuilder_1_t2418262475 *)L_44, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CRestartAsyncU3Ed__20_t131148061_m3584004700_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_01a0:
		{
			TaskAwaiter_1_t3582946539  L_45 = __this->get_U3CU3Eu__2_5();
			V_4 = L_45;
			TaskAwaiter_1_t3582946539 * L_46 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_46, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_47 = (-1);
			V_0 = L_47;
			__this->set_U3CU3E1__state_0(L_47);
		}

IL_01bd:
		{
			Response_t788464108  L_48 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_48;
			Response_t788464108  L_49 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_49);
			// if (!response.Successful)
			Response_t788464108 * L_50 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_51 = Response_get_Successful_m3489788737((Response_t788464108 *)L_50, /*hidden argument*/NULL);
			if (L_51)
			{
				goto IL_0272;
			}
		}

IL_01dc:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_52 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_53 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_52, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_53) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_54 = V_5;
			if (!L_54)
			{
				goto IL_0257;
			}
		}

IL_01f5:
		{
			DeviceInfo_t313565737 * L_55 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_56 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			TaskAwaiter_1_t2891770396  L_57 = Task_1_GetAwaiter_m1353846373(L_56, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_57;
			bool L_58 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_024e;
			}
		}

IL_020f:
		{
			int32_t L_59 = 3;
			V_0 = L_59;
			__this->set_U3CU3E1__state_0(L_59);
			TaskAwaiter_1_t2891770396  L_60 = V_2;
			__this->set_U3CU3Eu__1_4(L_60);
			AsyncTaskMethodBuilder_1_t2418262475 * L_61 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218((AsyncTaskMethodBuilder_1_t2418262475 *)L_61, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_0232:
		{
			TaskAwaiter_1_t2891770396  L_62 = __this->get_U3CU3Eu__1_4();
			V_2 = L_62;
			TaskAwaiter_1_t2891770396 * L_63 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_63, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_64 = (-1);
			V_0 = L_64;
			__this->set_U3CU3E1__state_0(L_64);
		}

IL_024e:
		{
			bool L_65 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_65;
		}

IL_0257:
		{
			bool L_66 = V_5;
			if (L_66)
			{
				goto IL_0283;
			}
		}

IL_025b:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_67 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_68 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_67, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_68, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_039f;
		}

IL_0272:
		{
			// hasRestarted = response.Successful;
			Response_t788464108 * L_69 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_70 = Response_get_Successful_m3489788737((Response_t788464108 *)L_69, /*hidden argument*/NULL);
			__this->set_U3ChasRestartedU3E5__3_6(L_70);
		}

IL_0283:
		{
			// while (!hasRestarted)
			bool L_71 = __this->get_U3ChasRestartedU3E5__3_6();
			if (!L_71)
			{
				goto IL_0155;
			}
		}

IL_028e:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_039f;
		}

IL_0295:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_72 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_73 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_72, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_73) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_74 = V_5;
			if (!L_74)
			{
				goto IL_0310;
			}
		}

IL_02ae:
		{
			DeviceInfo_t313565737 * L_75 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_76 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_75, /*hidden argument*/NULL);
			NullCheck(L_76);
			TaskAwaiter_1_t2891770396  L_77 = Task_1_GetAwaiter_m1353846373(L_76, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_77;
			bool L_78 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_78)
			{
				goto IL_0307;
			}
		}

IL_02c8:
		{
			int32_t L_79 = 4;
			V_0 = L_79;
			__this->set_U3CU3E1__state_0(L_79);
			TaskAwaiter_1_t2891770396  L_80 = V_2;
			__this->set_U3CU3Eu__1_4(L_80);
			AsyncTaskMethodBuilder_1_t2418262475 * L_81 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218((AsyncTaskMethodBuilder_1_t2418262475 *)L_81, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_02eb:
		{
			TaskAwaiter_1_t2891770396  L_82 = __this->get_U3CU3Eu__1_4();
			V_2 = L_82;
			TaskAwaiter_1_t2891770396 * L_83 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_83, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_84 = (-1);
			V_0 = L_84;
			__this->set_U3CU3E1__state_0(L_84);
		}

IL_0307:
		{
			bool L_85 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_85;
		}

IL_0310:
		{
			bool L_86 = V_5;
			if (!L_86)
			{
				goto IL_0372;
			}
		}

IL_0314:
		{
			// await RestartAsync(targetDevice);
			DeviceInfo_t313565737 * L_87 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_88 = DevicePortal_RestartAsync_m2883270561(NULL /*static, unused*/, L_87, /*hidden argument*/NULL);
			NullCheck(L_88);
			TaskAwaiter_1_t2891770396  L_89 = Task_1_GetAwaiter_m1353846373(L_88, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_89;
			bool L_90 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_90)
			{
				goto IL_036a;
			}
		}

IL_032e:
		{
			int32_t L_91 = 5;
			V_0 = L_91;
			__this->set_U3CU3E1__state_0(L_91);
			TaskAwaiter_1_t2891770396  L_92 = V_2;
			__this->set_U3CU3Eu__1_4(L_92);
			AsyncTaskMethodBuilder_1_t2418262475 * L_93 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218((AsyncTaskMethodBuilder_1_t2418262475 *)L_93, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CRestartAsyncU3Ed__20_t131148061 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CRestartAsyncU3Ed__20_t131148061_m1036086218_RuntimeMethod_var);
			goto IL_03b3;
		}

IL_034e:
		{
			TaskAwaiter_1_t2891770396  L_94 = __this->get_U3CU3Eu__1_4();
			V_2 = L_94;
			TaskAwaiter_1_t2891770396 * L_95 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_95, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_96 = (-1);
			V_0 = L_96;
			__this->set_U3CU3E1__state_0(L_96);
		}

IL_036a:
		{
			TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
		}

IL_0372:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_97 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_98 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_97, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_98, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_039f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0386;
		throw e;
	}

CATCH_0386:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_99 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_100 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_99, L_100, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_03b3;
	} // end catch (depth: 1)

IL_039f:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_101 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_102 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_101, L_102, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_03b3:
	{
		return;
	}
}
extern "C"  void U3CRestartAsyncU3Ed__20_MoveNext_m3879067228_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CRestartAsyncU3Ed__20_t131148061 * _thisAdjusted = reinterpret_cast<U3CRestartAsyncU3Ed__20_t131148061 *>(__this + 1);
	U3CRestartAsyncU3Ed__20_MoveNext_m3879067228(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<RestartAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277 (U3CRestartAsyncU3Ed__20_t131148061 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CRestartAsyncU3Ed__20_t131148061 * _thisAdjusted = reinterpret_cast<U3CRestartAsyncU3Ed__20_t131148061 *>(__this + 1);
	U3CRestartAsyncU3Ed__20_SetStateMachine_m4274490277(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039 (U3CShutdownAsyncU3Ed__21_t4073527714 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t2891770396  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Response_t788464108  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t3582946539  V_4;
	memset(&V_4, 0, sizeof(V_4));
	bool V_5 = false;
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_005a;
				}
				case 1:
				{
					goto IL_00e5;
				}
				case 2:
				{
					goto IL_0177;
				}
				case 3:
				{
					goto IL_01da;
				}
			}
		}

IL_001d:
		{
			// var isAuth = await EnsureAuthenticationAsync(targetDevice);
			DeviceInfo_t313565737 * L_2 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_3 = DevicePortal_EnsureAuthenticationAsync_m72585381(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t2891770396  L_4 = Task_1_GetAwaiter_m1353846373(L_3, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_4;
			bool L_5 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0076;
			}
		}

IL_0037:
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->set_U3CU3E1__state_0(L_6);
			TaskAwaiter_1_t2891770396  L_7 = V_2;
			__this->set_U3CU3Eu__1_4(L_7);
			AsyncTaskMethodBuilder_1_t2418262475 * L_8 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434((AsyncTaskMethodBuilder_1_t2418262475 *)L_8, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CShutdownAsyncU3Ed__21_t4073527714 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_RuntimeMethod_var);
			goto IL_0245;
		}

IL_005a:
		{
			TaskAwaiter_1_t2891770396  L_9 = __this->get_U3CU3Eu__1_4();
			V_2 = L_9;
			TaskAwaiter_1_t2891770396 * L_10 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->set_U3CU3E1__state_0(L_11);
		}

IL_0076:
		{
			bool L_12 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			// if (!isAuth) { return false; }
			if (L_12)
			{
				goto IL_0086;
			}
		}

IL_007f:
		{
			// if (!isAuth) { return false; }
			V_1 = (bool)0;
			goto IL_0231;
		}

IL_0086:
		{
			// var response = await Rest.PostAsync(string.Format(ShutdownDeviceQuery, FinalizeUrl(targetDevice.IP)), targetDevice.Authorization);
			DeviceInfo_t313565737 * L_13 = __this->get_targetDevice_2();
			NullCheck(L_13);
			String_t* L_14 = L_13->get_IP_0();
			String_t* L_15 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
			String_t* L_16 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3157244618, L_15, /*hidden argument*/NULL);
			DeviceInfo_t313565737 * L_17 = __this->get_targetDevice_2();
			NullCheck(L_17);
			Dictionary_2_t1632706988 * L_18 = DeviceInfo_get_Authorization_m3424419350(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_19 = Rest_PostAsync_m1199791566(NULL /*static, unused*/, L_16, L_18, (-1), /*hidden argument*/NULL);
			NullCheck(L_19);
			TaskAwaiter_1_t3582946539  L_20 = Task_1_GetAwaiter_m1468115537(L_19, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_4 = L_20;
			bool L_21 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_0102;
			}
		}

IL_00c1:
		{
			int32_t L_22 = 1;
			V_0 = L_22;
			__this->set_U3CU3E1__state_0(L_22);
			TaskAwaiter_1_t3582946539  L_23 = V_4;
			__this->set_U3CU3Eu__2_5(L_23);
			AsyncTaskMethodBuilder_1_t2418262475 * L_24 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336((AsyncTaskMethodBuilder_1_t2418262475 *)L_24, (TaskAwaiter_1_t3582946539 *)(&V_4), (U3CShutdownAsyncU3Ed__21_t4073527714 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CShutdownAsyncU3Ed__21_t4073527714_m3366555336_RuntimeMethod_var);
			goto IL_0245;
		}

IL_00e5:
		{
			TaskAwaiter_1_t3582946539  L_25 = __this->get_U3CU3Eu__2_5();
			V_4 = L_25;
			TaskAwaiter_1_t3582946539 * L_26 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->set_U3CU3E1__state_0(L_27);
		}

IL_0102:
		{
			Response_t788464108  L_28 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_3 = L_28;
			Response_t788464108  L_29 = V_3;
			__this->set_U3CresponseU3E5__2_3(L_29);
			// if (!response.Successful)
			Response_t788464108 * L_30 = __this->get_address_of_U3CresponseU3E5__2_3();
			bool L_31 = Response_get_Successful_m3489788737((Response_t788464108 *)L_30, /*hidden argument*/NULL);
			if (L_31)
			{
				goto IL_0214;
			}
		}

IL_0121:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_32 = __this->get_address_of_U3CresponseU3E5__2_3();
			int64_t L_33 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_32, /*hidden argument*/NULL);
			V_5 = (bool)((((int64_t)L_33) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_34 = V_5;
			if (!L_34)
			{
				goto IL_019c;
			}
		}

IL_013a:
		{
			DeviceInfo_t313565737 * L_35 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_36 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			NullCheck(L_36);
			TaskAwaiter_1_t2891770396  L_37 = Task_1_GetAwaiter_m1353846373(L_36, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_37;
			bool L_38 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0193;
			}
		}

IL_0154:
		{
			int32_t L_39 = 2;
			V_0 = L_39;
			__this->set_U3CU3E1__state_0(L_39);
			TaskAwaiter_1_t2891770396  L_40 = V_2;
			__this->set_U3CU3Eu__1_4(L_40);
			AsyncTaskMethodBuilder_1_t2418262475 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434((AsyncTaskMethodBuilder_1_t2418262475 *)L_41, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CShutdownAsyncU3Ed__21_t4073527714 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_RuntimeMethod_var);
			goto IL_0245;
		}

IL_0177:
		{
			TaskAwaiter_1_t2891770396  L_42 = __this->get_U3CU3Eu__1_4();
			V_2 = L_42;
			TaskAwaiter_1_t2891770396 * L_43 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_43, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_44 = (-1);
			V_0 = L_44;
			__this->set_U3CU3E1__state_0(L_44);
		}

IL_0193:
		{
			bool L_45 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_5 = L_45;
		}

IL_019c:
		{
			bool L_46 = V_5;
			if (!L_46)
			{
				goto IL_0200;
			}
		}

IL_01a0:
		{
			// return await ShutdownAsync(targetDevice);
			DeviceInfo_t313565737 * L_47 = __this->get_targetDevice_2();
			Task_1_t1502828140 * L_48 = DevicePortal_ShutdownAsync_m2351894614(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
			NullCheck(L_48);
			TaskAwaiter_1_t2891770396  L_49 = Task_1_GetAwaiter_m1353846373(L_48, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_2 = L_49;
			bool L_50 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_50)
			{
				goto IL_01f6;
			}
		}

IL_01ba:
		{
			int32_t L_51 = 3;
			V_0 = L_51;
			__this->set_U3CU3E1__state_0(L_51);
			TaskAwaiter_1_t2891770396  L_52 = V_2;
			__this->set_U3CU3Eu__1_4(L_52);
			AsyncTaskMethodBuilder_1_t2418262475 * L_53 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434((AsyncTaskMethodBuilder_1_t2418262475 *)L_53, (TaskAwaiter_1_t2891770396 *)(&V_2), (U3CShutdownAsyncU3Ed__21_t4073527714 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CShutdownAsyncU3Ed__21_t4073527714_m1846426434_RuntimeMethod_var);
			goto IL_0245;
		}

IL_01da:
		{
			TaskAwaiter_1_t2891770396  L_54 = __this->get_U3CU3Eu__1_4();
			V_2 = L_54;
			TaskAwaiter_1_t2891770396 * L_55 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_55, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_56 = (-1);
			V_0 = L_56;
			__this->set_U3CU3E1__state_0(L_56);
		}

IL_01f6:
		{
			bool L_57 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_2), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_57;
			goto IL_0231;
		}

IL_0200:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_58 = __this->get_address_of_U3CresponseU3E5__2_3();
			String_t* L_59 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_58, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_59, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0231;
		}

IL_0214:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0231;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0218;
		throw e;
	}

CATCH_0218:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_60 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_61 = V_6;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_60, L_61, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_0245;
	} // end catch (depth: 1)

IL_0231:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_62 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_63 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_62, L_63, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_0245:
	{
		return;
	}
}
extern "C"  void U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CShutdownAsyncU3Ed__21_t4073527714 * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncU3Ed__21_t4073527714 *>(__this + 1);
	U3CShutdownAsyncU3Ed__21_MoveNext_m3178529039(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<ShutdownAsync>d__21::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348 (U3CShutdownAsyncU3Ed__21_t4073527714 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CShutdownAsyncU3Ed__21_t4073527714 * _thisAdjusted = reinterpret_cast<U3CShutdownAsyncU3Ed__21_t4073527714 *>(__this + 1);
	U3CShutdownAsyncU3Ed__21_SetStateMachine_m1030567348(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905 (U3CStopAppAsyncU3Ed__30_t3766093556 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_t2068629202 * V_2 = NULL;
	TaskAwaiter_1_t568144337  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Response_t788464108  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TaskAwaiter_1_t3582946539  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_t2891770396  V_7;
	memset(&V_7, 0, sizeof(V_7));
	SimpleCoroutineAwaiter_t1961245047 * V_8 = NULL;
	Exception_t * V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0070;
				}
				case 1:
				{
					goto IL_013d;
				}
				case 2:
				{
					goto IL_01d3;
				}
				case 3:
				{
					goto IL_0243;
				}
				case 4:
				{
					goto IL_02c2;
				}
				case 5:
				{
					goto IL_032e;
				}
			}
		}

IL_0025:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_009b;
			}
		}

IL_002d:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_4 = __this->get_targetDevice_4();
			Task_1_t3474169377 * L_5 = DevicePortal_GetApplicationInfoAsync_m500559243(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t568144337  L_6 = Task_1_GetAwaiter_m287228013(L_5, /*hidden argument*/Task_1_GetAwaiter_m287228013_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m4224200197((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_008c;
			}
		}

IL_004d:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t568144337  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t2418262475 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3111658751((AsyncTaskMethodBuilder_1_t2418262475 *)L_10, (TaskAwaiter_1_t568144337 *)(&V_3), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3111658751_RuntimeMethod_var);
			goto IL_0388;
		}

IL_0070:
		{
			TaskAwaiter_1_t568144337  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t568144337 * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t568144337 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_008c:
		{
			ApplicationInfo_t2068629202 * L_14 = TaskAwaiter_1_GetResult_m652205427((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_t2068629202 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_009b:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00bf;
			}
		}

IL_00a3:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral327304042, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0374;
		}

IL_00bf:
		{
			// string query = $"{string.Format(AppQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(appInfo.PackageFullName.EncodeTo64())}";
			DeviceInfo_t313565737 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_0();
			String_t* L_21 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3943316947, L_21, /*hidden argument*/NULL);
			ApplicationInfo_t2068629202 * L_23 = __this->get_appInfo_2();
			NullCheck(L_23);
			String_t* L_24 = L_23->get_PackageFullName_2();
			String_t* L_25 = StringExtensions_EncodeTo64_m747039657(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			String_t* L_26 = UnityWebRequest_EscapeURL_m1544092040(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
			String_t* L_27 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral195864525, L_22, L_26, /*hidden argument*/NULL);
			// Response response = await Rest.DeleteAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_28 = __this->get_targetDevice_4();
			NullCheck(L_28);
			Dictionary_2_t1632706988 * L_29 = DeviceInfo_get_Authorization_m3424419350(L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_30 = Rest_DeleteAsync_m841233723(NULL /*static, unused*/, L_27, L_29, (-1), /*hidden argument*/NULL);
			NullCheck(L_30);
			TaskAwaiter_1_t3582946539  L_31 = Task_1_GetAwaiter_m1468115537(L_30, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_5 = L_31;
			bool L_32 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_32)
			{
				goto IL_015a;
			}
		}

IL_0119:
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->set_U3CU3E1__state_0(L_33);
			TaskAwaiter_1_t3582946539  L_34 = V_5;
			__this->set_U3CU3Eu__2_7(L_34);
			AsyncTaskMethodBuilder_1_t2418262475 * L_35 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116((AsyncTaskMethodBuilder_1_t2418262475 *)L_35, (TaskAwaiter_1_t3582946539 *)(&V_5), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CStopAppAsyncU3Ed__30_t3766093556_m1065640116_RuntimeMethod_var);
			goto IL_0388;
		}

IL_013d:
		{
			TaskAwaiter_1_t3582946539  L_36 = __this->get_U3CU3Eu__2_7();
			V_5 = L_36;
			TaskAwaiter_1_t3582946539 * L_37 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->set_U3CU3E1__state_0(L_38);
		}

IL_015a:
		{
			Response_t788464108  L_39 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_4 = L_39;
			Response_t788464108  L_40 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_40);
			// if (!response.Successful)
			Response_t788464108 * L_41 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_42 = Response_get_Successful_m3489788737((Response_t788464108 *)L_41, /*hidden argument*/NULL);
			if (L_42)
			{
				goto IL_02e6;
			}
		}

IL_017b:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_43 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_44 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_43, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_44) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_45 = V_6;
			if (!L_45)
			{
				goto IL_01f9;
			}
		}

IL_0194:
		{
			DeviceInfo_t313565737 * L_46 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_47 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
			NullCheck(L_47);
			TaskAwaiter_1_t2891770396  L_48 = Task_1_GetAwaiter_m1353846373(L_47, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_48;
			bool L_49 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_49)
			{
				goto IL_01f0;
			}
		}

IL_01af:
		{
			int32_t L_50 = 2;
			V_0 = L_50;
			__this->set_U3CU3E1__state_0(L_50);
			TaskAwaiter_1_t2891770396  L_51 = V_7;
			__this->set_U3CU3Eu__3_8(L_51);
			AsyncTaskMethodBuilder_1_t2418262475 * L_52 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634((AsyncTaskMethodBuilder_1_t2418262475 *)L_52, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_RuntimeMethod_var);
			goto IL_0388;
		}

IL_01d3:
		{
			TaskAwaiter_1_t2891770396  L_53 = __this->get_U3CU3Eu__3_8();
			V_7 = L_53;
			TaskAwaiter_1_t2891770396 * L_54 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_54, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_55 = (-1);
			V_0 = L_55;
			__this->set_U3CU3E1__state_0(L_55);
		}

IL_01f0:
		{
			bool L_56 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_6 = L_56;
		}

IL_01f9:
		{
			bool L_57 = V_6;
			if (!L_57)
			{
				goto IL_026d;
			}
		}

IL_01fd:
		{
			// return await StopAppAsync(packageName, targetDevice);
			String_t* L_58 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_59 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_60 = DevicePortal_StopAppAsync_m466738910(NULL /*static, unused*/, L_58, L_59, (ApplicationInfo_t2068629202 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_60);
			TaskAwaiter_1_t2891770396  L_61 = Task_1_GetAwaiter_m1353846373(L_60, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_61;
			bool L_62 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_62)
			{
				goto IL_0260;
			}
		}

IL_021f:
		{
			int32_t L_63 = 3;
			V_0 = L_63;
			__this->set_U3CU3E1__state_0(L_63);
			TaskAwaiter_1_t2891770396  L_64 = V_7;
			__this->set_U3CU3Eu__3_8(L_64);
			AsyncTaskMethodBuilder_1_t2418262475 * L_65 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634((AsyncTaskMethodBuilder_1_t2418262475 *)L_65, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_RuntimeMethod_var);
			goto IL_0388;
		}

IL_0243:
		{
			TaskAwaiter_1_t2891770396  L_66 = __this->get_U3CU3Eu__3_8();
			V_7 = L_66;
			TaskAwaiter_1_t2891770396 * L_67 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_67, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_68 = (-1);
			V_0 = L_68;
			__this->set_U3CU3E1__state_0(L_68);
		}

IL_0260:
		{
			bool L_69 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_69;
			goto IL_0374;
		}

IL_026d:
		{
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_70 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_71 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_0374;
		}

IL_0284:
		{
			// await new WaitForSeconds(1f);
			WaitForSeconds_t1699091251 * L_72 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
			WaitForSeconds__ctor_m2199082655(L_72, (1.0f), /*hidden argument*/NULL);
			SimpleCoroutineAwaiter_t1961245047 * L_73 = AwaiterExtensions_GetAwaiter_m2812080933(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
			V_8 = L_73;
			SimpleCoroutineAwaiter_t1961245047 * L_74 = V_8;
			NullCheck(L_74);
			bool L_75 = SimpleCoroutineAwaiter_get_IsCompleted_m1501874044(L_74, /*hidden argument*/NULL);
			if (L_75)
			{
				goto IL_02df;
			}
		}

IL_029e:
		{
			int32_t L_76 = 4;
			V_0 = L_76;
			__this->set_U3CU3E1__state_0(L_76);
			SimpleCoroutineAwaiter_t1961245047 * L_77 = V_8;
			__this->set_U3CU3Eu__4_9(L_77);
			AsyncTaskMethodBuilder_1_t2418262475 * L_78 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3708741209((AsyncTaskMethodBuilder_1_t2418262475 *)L_78, (SimpleCoroutineAwaiter_t1961245047 **)(&V_8), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitOnCompleted_TisSimpleCoroutineAwaiter_t1961245047_TisU3CStopAppAsyncU3Ed__30_t3766093556_m3708741209_RuntimeMethod_var);
			goto IL_0388;
		}

IL_02c2:
		{
			RuntimeObject * L_79 = __this->get_U3CU3Eu__4_9();
			V_8 = ((SimpleCoroutineAwaiter_t1961245047 *)CastclassClass((RuntimeObject*)L_79, SimpleCoroutineAwaiter_t1961245047_il2cpp_TypeInfo_var));
			__this->set_U3CU3Eu__4_9(NULL);
			int32_t L_80 = (-1);
			V_0 = L_80;
			__this->set_U3CU3E1__state_0(L_80);
		}

IL_02df:
		{
			SimpleCoroutineAwaiter_t1961245047 * L_81 = V_8;
			NullCheck(L_81);
			SimpleCoroutineAwaiter_GetResult_m2823840508(L_81, /*hidden argument*/NULL);
		}

IL_02e6:
		{
			// while (!await IsAppRunningAsync(packageName, targetDevice, appInfo))
			String_t* L_82 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_83 = __this->get_targetDevice_4();
			ApplicationInfo_t2068629202 * L_84 = __this->get_appInfo_2();
			Task_1_t1502828140 * L_85 = DevicePortal_IsAppRunningAsync_m3654059161(NULL /*static, unused*/, L_82, L_83, L_84, /*hidden argument*/NULL);
			NullCheck(L_85);
			TaskAwaiter_1_t2891770396  L_86 = Task_1_GetAwaiter_m1353846373(L_85, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_86;
			bool L_87 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_87)
			{
				goto IL_034b;
			}
		}

IL_030d:
		{
			int32_t L_88 = 5;
			V_0 = L_88;
			__this->set_U3CU3E1__state_0(L_88);
			TaskAwaiter_1_t2891770396  L_89 = V_7;
			__this->set_U3CU3Eu__3_8(L_89);
			AsyncTaskMethodBuilder_1_t2418262475 * L_90 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634((AsyncTaskMethodBuilder_1_t2418262475 *)L_90, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CStopAppAsyncU3Ed__30_t3766093556 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CStopAppAsyncU3Ed__30_t3766093556_m403331634_RuntimeMethod_var);
			goto IL_0388;
		}

IL_032e:
		{
			TaskAwaiter_1_t2891770396  L_91 = __this->get_U3CU3Eu__3_8();
			V_7 = L_91;
			TaskAwaiter_1_t2891770396 * L_92 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_92, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_93 = (-1);
			V_0 = L_93;
			__this->set_U3CU3E1__state_0(L_93);
		}

IL_034b:
		{
			bool L_94 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			if (!L_94)
			{
				goto IL_0284;
			}
		}

IL_0357:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_0374;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_035b;
		throw e;
	}

CATCH_035b:
	{ // begin catch(System.Exception)
		V_9 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_95 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_96 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_95, L_96, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_0388;
	} // end catch (depth: 1)

IL_0374:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_97 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_98 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_97, L_98, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_0388:
	{
		return;
	}
}
extern "C"  void U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CStopAppAsyncU3Ed__30_t3766093556 * _thisAdjusted = reinterpret_cast<U3CStopAppAsyncU3Ed__30_t3766093556 *>(__this + 1);
	U3CStopAppAsyncU3Ed__30_MoveNext_m1460534905(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<StopAppAsync>d__30::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666 (U3CStopAppAsyncU3Ed__30_t3766093556 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CStopAppAsyncU3Ed__30_t3766093556 * _thisAdjusted = reinterpret_cast<U3CStopAppAsyncU3Ed__30_t3766093556 *>(__this + 1);
	U3CStopAppAsyncU3Ed__30_SetStateMachine_m3910726666(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937 (U3CUninstallAppAsyncU3Ed__28_t2000630058 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ApplicationInfo_t2068629202 * V_2 = NULL;
	TaskAwaiter_1_t568144337  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Response_t788464108  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TaskAwaiter_1_t3582946539  V_5;
	memset(&V_5, 0, sizeof(V_5));
	bool V_6 = false;
	TaskAwaiter_1_t2891770396  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Exception_t * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			switch (L_1)
			{
				case 0:
				{
					goto IL_0068;
				}
				case 1:
				{
					goto IL_0130;
				}
				case 2:
				{
					goto IL_01ff;
				}
				case 3:
				{
					goto IL_026f;
				}
			}
		}

IL_001d:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_2 = __this->get_appInfo_2();
			if (L_2)
			{
				goto IL_0093;
			}
		}

IL_0025:
		{
			// appInfo = await GetApplicationInfoAsync(packageName, targetDevice);
			String_t* L_3 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_4 = __this->get_targetDevice_4();
			Task_1_t3474169377 * L_5 = DevicePortal_GetApplicationInfoAsync_m500559243(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			TaskAwaiter_1_t568144337  L_6 = Task_1_GetAwaiter_m287228013(L_5, /*hidden argument*/Task_1_GetAwaiter_m287228013_RuntimeMethod_var);
			V_3 = L_6;
			bool L_7 = TaskAwaiter_1_get_IsCompleted_m4224200197((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m4224200197_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_0084;
			}
		}

IL_0045:
		{
			int32_t L_8 = 0;
			V_0 = L_8;
			__this->set_U3CU3E1__state_0(L_8);
			TaskAwaiter_1_t568144337  L_9 = V_3;
			__this->set_U3CU3Eu__1_6(L_9);
			AsyncTaskMethodBuilder_1_t2418262475 * L_10 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m3243415541((AsyncTaskMethodBuilder_1_t2418262475 *)L_10, (TaskAwaiter_1_t568144337 *)(&V_3), (U3CUninstallAppAsyncU3Ed__28_t2000630058 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t568144337_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m3243415541_RuntimeMethod_var);
			goto IL_02fb;
		}

IL_0068:
		{
			TaskAwaiter_1_t568144337  L_11 = __this->get_U3CU3Eu__1_6();
			V_3 = L_11;
			TaskAwaiter_1_t568144337 * L_12 = __this->get_address_of_U3CU3Eu__1_6();
			il2cpp_codegen_initobj(L_12, sizeof(TaskAwaiter_1_t568144337 ));
			int32_t L_13 = (-1);
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
		}

IL_0084:
		{
			ApplicationInfo_t2068629202 * L_14 = TaskAwaiter_1_GetResult_m652205427((TaskAwaiter_1_t568144337 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m652205427_RuntimeMethod_var);
			V_2 = L_14;
			ApplicationInfo_t2068629202 * L_15 = V_2;
			__this->set_appInfo_2(L_15);
		}

IL_0093:
		{
			// if (appInfo == null)
			ApplicationInfo_t2068629202 * L_16 = __this->get_appInfo_2();
			if (L_16)
			{
				goto IL_00b7;
			}
		}

IL_009b:
		{
			// Debug.LogWarning($"Application '{packageName}' not found");
			String_t* L_17 = __this->get_packageName_3();
			String_t* L_18 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral327304042, L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02e7;
		}

IL_00b7:
		{
			// string query = $"{string.Format(InstallQuery, FinalizeUrl(targetDevice.IP))}?package={UnityWebRequest.EscapeURL(appInfo.PackageFullName)}";
			DeviceInfo_t313565737 * L_19 = __this->get_targetDevice_4();
			NullCheck(L_19);
			String_t* L_20 = L_19->get_IP_0();
			String_t* L_21 = DevicePortal_FinalizeUrl_m2132004234(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
			String_t* L_22 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral756802359, L_21, /*hidden argument*/NULL);
			ApplicationInfo_t2068629202 * L_23 = __this->get_appInfo_2();
			NullCheck(L_23);
			String_t* L_24 = L_23->get_PackageFullName_2();
			String_t* L_25 = UnityWebRequest_EscapeURL_m1544092040(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
			String_t* L_26 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral195864525, L_22, L_25, /*hidden argument*/NULL);
			// var response = await Rest.DeleteAsync(query, targetDevice.Authorization);
			DeviceInfo_t313565737 * L_27 = __this->get_targetDevice_4();
			NullCheck(L_27);
			Dictionary_2_t1632706988 * L_28 = DeviceInfo_get_Authorization_m3424419350(L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Rest_t389052526_il2cpp_TypeInfo_var);
			Task_1_t2194004283 * L_29 = Rest_DeleteAsync_m841233723(NULL /*static, unused*/, L_26, L_28, (-1), /*hidden argument*/NULL);
			NullCheck(L_29);
			TaskAwaiter_1_t3582946539  L_30 = Task_1_GetAwaiter_m1468115537(L_29, /*hidden argument*/Task_1_GetAwaiter_m1468115537_RuntimeMethod_var);
			V_5 = L_30;
			bool L_31 = TaskAwaiter_1_get_IsCompleted_m2426772051((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m2426772051_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_014d;
			}
		}

IL_010c:
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->set_U3CU3E1__state_0(L_32);
			TaskAwaiter_1_t3582946539  L_33 = V_5;
			__this->set_U3CU3Eu__2_7(L_33);
			AsyncTaskMethodBuilder_1_t2418262475 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406((AsyncTaskMethodBuilder_1_t2418262475 *)L_34, (TaskAwaiter_1_t3582946539 *)(&V_5), (U3CUninstallAppAsyncU3Ed__28_t2000630058 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3582946539_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m468620406_RuntimeMethod_var);
			goto IL_02fb;
		}

IL_0130:
		{
			TaskAwaiter_1_t3582946539  L_35 = __this->get_U3CU3Eu__2_7();
			V_5 = L_35;
			TaskAwaiter_1_t3582946539 * L_36 = __this->get_address_of_U3CU3Eu__2_7();
			il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_t3582946539 ));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->set_U3CU3E1__state_0(L_37);
		}

IL_014d:
		{
			Response_t788464108  L_38 = TaskAwaiter_1_GetResult_m3392144022((TaskAwaiter_1_t3582946539 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m3392144022_RuntimeMethod_var);
			V_4 = L_38;
			Response_t788464108  L_39 = V_4;
			__this->set_U3CresponseU3E5__2_5(L_39);
			// if (response.Successful)
			Response_t788464108 * L_40 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_41 = Response_get_Successful_m3489788737((Response_t788464108 *)L_40, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0197;
			}
		}

IL_016b:
		{
			// Debug.LogFormat("Successfully uninstalled {0} on {1}.", packageName, targetDevice.MachineName);
			ObjectU5BU5D_t2843939325* L_42 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
			ObjectU5BU5D_t2843939325* L_43 = L_42;
			String_t* L_44 = __this->get_packageName_3();
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, L_44);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_44);
			ObjectU5BU5D_t2843939325* L_45 = L_43;
			DeviceInfo_t313565737 * L_46 = __this->get_targetDevice_4();
			NullCheck(L_46);
			String_t* L_47 = L_46->get_MachineName_3();
			NullCheck(L_45);
			ArrayElementTypeCheck (L_45, L_47);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_47);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral1735907784, L_45, /*hidden argument*/NULL);
			// }
			goto IL_02ca;
		}

IL_0197:
		{
			// if (!response.Successful)
			Response_t788464108 * L_48 = __this->get_address_of_U3CresponseU3E5__2_5();
			bool L_49 = Response_get_Successful_m3489788737((Response_t788464108 *)L_48, /*hidden argument*/NULL);
			if (L_49)
			{
				goto IL_02ca;
			}
		}

IL_01a7:
		{
			// if (response.ResponseCode == 403 && await RefreshCsrfTokenAsync(targetDevice))
			Response_t788464108 * L_50 = __this->get_address_of_U3CresponseU3E5__2_5();
			int64_t L_51 = Response_get_ResponseCode_m32631037((Response_t788464108 *)L_50, /*hidden argument*/NULL);
			V_6 = (bool)((((int64_t)L_51) == ((int64_t)(((int64_t)((int64_t)((int32_t)403))))))? 1 : 0);
			bool L_52 = V_6;
			if (!L_52)
			{
				goto IL_0225;
			}
		}

IL_01c0:
		{
			DeviceInfo_t313565737 * L_53 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_54 = DevicePortal_RefreshCsrfTokenAsync_m2683322697(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
			NullCheck(L_54);
			TaskAwaiter_1_t2891770396  L_55 = Task_1_GetAwaiter_m1353846373(L_54, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_55;
			bool L_56 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_56)
			{
				goto IL_021c;
			}
		}

IL_01db:
		{
			int32_t L_57 = 2;
			V_0 = L_57;
			__this->set_U3CU3E1__state_0(L_57);
			TaskAwaiter_1_t2891770396  L_58 = V_7;
			__this->set_U3CU3Eu__3_8(L_58);
			AsyncTaskMethodBuilder_1_t2418262475 * L_59 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207((AsyncTaskMethodBuilder_1_t2418262475 *)L_59, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CUninstallAppAsyncU3Ed__28_t2000630058 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207_RuntimeMethod_var);
			goto IL_02fb;
		}

IL_01ff:
		{
			TaskAwaiter_1_t2891770396  L_60 = __this->get_U3CU3Eu__3_8();
			V_7 = L_60;
			TaskAwaiter_1_t2891770396 * L_61 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_61, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_62 = (-1);
			V_0 = L_62;
			__this->set_U3CU3E1__state_0(L_62);
		}

IL_021c:
		{
			bool L_63 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_6 = L_63;
		}

IL_0225:
		{
			bool L_64 = V_6;
			if (!L_64)
			{
				goto IL_0296;
			}
		}

IL_0229:
		{
			// return await UninstallAppAsync(packageName, targetDevice);
			String_t* L_65 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_66 = __this->get_targetDevice_4();
			Task_1_t1502828140 * L_67 = DevicePortal_UninstallAppAsync_m1641353108(NULL /*static, unused*/, L_65, L_66, (ApplicationInfo_t2068629202 *)NULL, /*hidden argument*/NULL);
			NullCheck(L_67);
			TaskAwaiter_1_t2891770396  L_68 = Task_1_GetAwaiter_m1353846373(L_67, /*hidden argument*/Task_1_GetAwaiter_m1353846373_RuntimeMethod_var);
			V_7 = L_68;
			bool L_69 = TaskAwaiter_1_get_IsCompleted_m692154841((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m692154841_RuntimeMethod_var);
			if (L_69)
			{
				goto IL_028c;
			}
		}

IL_024b:
		{
			int32_t L_70 = 3;
			V_0 = L_70;
			__this->set_U3CU3E1__state_0(L_70);
			TaskAwaiter_1_t2891770396  L_71 = V_7;
			__this->set_U3CU3Eu__3_8(L_71);
			AsyncTaskMethodBuilder_1_t2418262475 * L_72 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207((AsyncTaskMethodBuilder_1_t2418262475 *)L_72, (TaskAwaiter_1_t2891770396 *)(&V_7), (U3CUninstallAppAsyncU3Ed__28_t2000630058 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t2891770396_TisU3CUninstallAppAsyncU3Ed__28_t2000630058_m4224692207_RuntimeMethod_var);
			goto IL_02fb;
		}

IL_026f:
		{
			TaskAwaiter_1_t2891770396  L_73 = __this->get_U3CU3Eu__3_8();
			V_7 = L_73;
			TaskAwaiter_1_t2891770396 * L_74 = __this->get_address_of_U3CU3Eu__3_8();
			il2cpp_codegen_initobj(L_74, sizeof(TaskAwaiter_1_t2891770396 ));
			int32_t L_75 = (-1);
			V_0 = L_75;
			__this->set_U3CU3E1__state_0(L_75);
		}

IL_028c:
		{
			bool L_76 = TaskAwaiter_1_GetResult_m1801915560((TaskAwaiter_1_t2891770396 *)(&V_7), /*hidden argument*/TaskAwaiter_1_GetResult_m1801915560_RuntimeMethod_var);
			V_1 = L_76;
			goto IL_02e7;
		}

IL_0296:
		{
			// Debug.LogError($"Failed to uninstall {packageName} on {targetDevice.MachineName}");
			String_t* L_77 = __this->get_packageName_3();
			DeviceInfo_t313565737 * L_78 = __this->get_targetDevice_4();
			NullCheck(L_78);
			String_t* L_79 = L_78->get_MachineName_3();
			String_t* L_80 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral402580553, L_77, L_79, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
			// Debug.LogError(response.ResponseBody);
			Response_t788464108 * L_81 = __this->get_address_of_U3CresponseU3E5__2_5();
			String_t* L_82 = Response_get_ResponseBody_m911791604((Response_t788464108 *)L_81, /*hidden argument*/NULL);
			Debug_LogError_m2850623458(NULL /*static, unused*/, L_82, /*hidden argument*/NULL);
			// return false;
			V_1 = (bool)0;
			goto IL_02e7;
		}

IL_02ca:
		{
			// return true;
			V_1 = (bool)1;
			goto IL_02e7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_02ce;
		throw e;
	}

CATCH_02ce:
	{ // begin catch(System.Exception)
		V_8 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_83 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_84 = V_8;
		AsyncTaskMethodBuilder_1_SetException_m3066925186((AsyncTaskMethodBuilder_1_t2418262475 *)L_83, L_84, /*hidden argument*/AsyncTaskMethodBuilder_1_SetException_m3066925186_RuntimeMethod_var);
		goto IL_02fb;
	} // end catch (depth: 1)

IL_02e7:
	{
		// }
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_1_t2418262475 * L_85 = __this->get_address_of_U3CU3Et__builder_1();
		bool L_86 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m772896578((AsyncTaskMethodBuilder_1_t2418262475 *)L_85, L_86, /*hidden argument*/AsyncTaskMethodBuilder_1_SetResult_m772896578_RuntimeMethod_var);
	}

IL_02fb:
	{
		return;
	}
}
extern "C"  void U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CUninstallAppAsyncU3Ed__28_t2000630058 * _thisAdjusted = reinterpret_cast<U3CUninstallAppAsyncU3Ed__28_t2000630058 *>(__this + 1);
	U3CUninstallAppAsyncU3Ed__28_MoveNext_m2764939937(_thisAdjusted, method);
}
// System.Void Microsoft.MixedReality.Toolkit.Core.Utilities.WindowsDevicePortal.DevicePortal/<UninstallAppAsync>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129 (U3CUninstallAppAsyncU3Ed__28_t2000630058 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t2418262475 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554((AsyncTaskMethodBuilder_1_t2418262475 *)L_0, L_1, /*hidden argument*/AsyncTaskMethodBuilder_1_SetStateMachine_m1306928554_RuntimeMethod_var);
		return;
	}
}
extern "C"  void U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CUninstallAppAsyncU3Ed__28_t2000630058 * _thisAdjusted = reinterpret_cast<U3CUninstallAppAsyncU3Ed__28_t2000630058 *>(__this + 1);
	U3CUninstallAppAsyncU3Ed__28_SetStateMachine_m1333262129(_thisAdjusted, ___stateMachine0, method);
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
