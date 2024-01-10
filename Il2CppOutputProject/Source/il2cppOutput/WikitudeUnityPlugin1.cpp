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

template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action[]
struct ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3;
// System.Action`1<System.Int32>
struct Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.RuntimePlatform,System.String>[]
struct EntryU5BU5D_t5BB8B4A7CD6B59E9795E9563BBE2E515A9F41350;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.RuntimePlatform,System.String>
struct KeyCollection_t1EFF9783F6042D1CD35B03B243FC6A31E306F509;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.RuntimePlatform,System.String>
struct ValueCollection_t67211F52AA36F29C353D603256FC14D97F9372AB;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060;
// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.CloudRecognitionService>
struct Dictionary_2_t91CEB5E535A2E94F0A63AF14BF389D742AB9CFFA;
// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.TargetCollectionResource>
struct Dictionary_2_t3D6D03831DB29A84C527AC32736662B1C1BFF79F;
// System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String>
struct Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA;
// System.Collections.Generic.Dictionary`2<Wikitude.Trackable,System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget>>
struct Dictionary_2_tA58F088EE750331AA0DDFDA4D7B75DDF2A536199;
// System.Collections.Generic.HashSet`1/Slot<Wikitude.Plugin>[]
struct SlotU5BU5D_t77D49E4E74B2FAA3CC15A13FB0341176C190B0E3;
// System.Collections.Generic.HashSet`1/Slot<Wikitude.TrackerBehaviour>[]
struct SlotU5BU5D_t3E751410464E83F17A498083A61497BC13381CCB;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.HashSet`1<Wikitude.Plane>
struct HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6;
// System.Collections.Generic.HashSet`1<Wikitude.Plugin>
struct HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C;
// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget>
struct HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE;
// System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>
struct HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RuntimePlatform>
struct IEqualityComparer_1_t3F15327498E420B5E2145B30176FE6C62AC976F1;
// System.Collections.Generic.IEqualityComparer`1<Wikitude.Plugin>
struct IEqualityComparer_1_t73FEBBDAA2A631E9A42A9FC2A83EDA2D65FE5C9D;
// System.Collections.Generic.IEqualityComparer`1<Wikitude.TrackerBehaviour>
struct IEqualityComparer_1_tC1A33842B871580AE4303F9E98130A8842E2A0E1;
// System.Collections.Generic.List`1<System.Action>
struct List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>
struct List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70;
// System.Collections.Generic.List`1<Wikitude.Plugin>
struct List_1_t56EF75346EA6855E31B79592F1C1986C06AD76C5;
// System.Collections.Generic.List`1<Wikitude.RingBuffer/WrappedTexture>
struct List_1_t80AF240AAE985011356FC4B0C0E0C5B55F27EE18;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<Wikitude.Error>
struct UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Gyroscope
struct Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Video.VideoClip
struct VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;
// UnityEngine.WebCamTexture
struct WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73;
// Wikitude.BackgroundCamera
struct BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E;
// Wikitude.BridgeFactory/PlatformBridgeConstructor
struct PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824;
// Wikitude.BridgeFactory/WikitudeBridgeConstructor
struct WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81;
// Wikitude.CameraFrame
struct CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D;
// Wikitude.CameraFramePlane[]
struct CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8;
// Wikitude.Error
struct Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C;
// Wikitude.IPlatformBridge
struct IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B;
// Wikitude.IWikitudeBridge
struct IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E;
// Wikitude.PlatformBase
struct PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC;
// Wikitude.Plugin
struct Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201;
// Wikitude.Plugin/OnCameraFrameAvailableEvent
struct OnCameraFrameAvailableEvent_t524601D62BC34781CA60B7730AEF7673C6D38921;
// Wikitude.Plugin/OnCameraReleaseFailedEvent
struct OnCameraReleaseFailedEvent_t77ADCA744342CEF1B21586422B5AD6D1691F4E1A;
// Wikitude.Plugin/OnCameraReleasedEvent
struct OnCameraReleasedEvent_t85D57391C51FA5553A2C18588A83CF886B6A5B5D;
// Wikitude.Plugin/OnPluginErrorEvent
struct OnPluginErrorEvent_t0AA14AF9EB7422E944CC995FA064473274D75260;
// Wikitude.PluginManager
struct PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D;
// Wikitude.RecognizedTarget
struct RecognizedTarget_t5C6408C405095914A960081CC86AAAE0742E084C;
// Wikitude.RingBuffer
struct RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C;
// Wikitude.SDKBuildInformation
struct SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3;
// Wikitude.TrackerBehaviour
struct TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048;
// Wikitude.TrackerBehaviour/OnErrorLoadingTargetsEvent
struct OnErrorLoadingTargetsEvent_t5BF8D7CC626102559DA2D7FA6FF0BCB63C689684;
// Wikitude.TrackerBehaviour/OnInitializationErrorEvent
struct OnInitializationErrorEvent_t0704E68E6CC2F5AC005B32B3C30C6DB8C8F7E324;
// Wikitude.TrackerBehaviour/OnTargetsLoadedEvent
struct OnTargetsLoadedEvent_tB42CCE818F682216D10344100D75CABD1FA05A54;
// Wikitude.TrackerManager
struct TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400;
// Wikitude.TrackerManager/TargetCollectionResourceFailedCallback
struct TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5;
// Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback
struct TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13;
// Wikitude.TrackerManager/TrackerInitializationErrorCallback
struct TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61;
// Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback
struct UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715;
// Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback
struct UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57;
// Wikitude.TrackerManagerQueue
struct TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E;
// Wikitude.UnityWikitudeBridge
struct UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981;
// Wikitude.UnityWikitudeBridge/<>c
struct U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C;
// Wikitude.WikitudeBridge
struct WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74;
// Wikitude.WikitudeCamera
struct WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D;
// Wikitude.WikitudeCamera/OnCameraErrorEvent
struct OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF;
// Wikitude.WikitudeCamera/OnCameraOpenedEvent
struct OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34;
// Wikitude.WikitudeCamera/OnSDKInitializedEvent
struct OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8;

IL2CPP_EXTERN_C RuntimeClass* BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01F561AC4AB15D6A23A57976BBA4DBCC423B9CBB;
IL2CPP_EXTERN_C String_t* _stringLiteral15767D33734CE260420070D40220821F5DD860D8;
IL2CPP_EXTERN_C String_t* _stringLiteral17EA174361919AE3C1BB2B3DB5335E670ACB6137;
IL2CPP_EXTERN_C String_t* _stringLiteral1839643A66C112ED63ADE84A69D45D0C29884738;
IL2CPP_EXTERN_C String_t* _stringLiteral1892ABBB1DCB56D4C13BA6EFC79A119EB546E54F;
IL2CPP_EXTERN_C String_t* _stringLiteral1928F95C598B9E69462FCB512625CF8E28923044;
IL2CPP_EXTERN_C String_t* _stringLiteral1D497467BEBBAFED950FE6EC47284E264A79F869;
IL2CPP_EXTERN_C String_t* _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC;
IL2CPP_EXTERN_C String_t* _stringLiteral27795028E1033B253A64D2169C1C1453A2461695;
IL2CPP_EXTERN_C String_t* _stringLiteral2811A025BCC523D531947F0A725A386EDA530A41;
IL2CPP_EXTERN_C String_t* _stringLiteral2F23458F001CA406EA38A057A13BCDF5E7C723FC;
IL2CPP_EXTERN_C String_t* _stringLiteral2FE798DD527B8534AB0BD45E1032A9CF066E2384;
IL2CPP_EXTERN_C String_t* _stringLiteral35D14E2CE68F391ABD622DD4CD40683B17D45517;
IL2CPP_EXTERN_C String_t* _stringLiteral363455E58D7BDB85CFF382C83C52772BF2268083;
IL2CPP_EXTERN_C String_t* _stringLiteral390D4E277925A411247D87FF466662D7F7E39A91;
IL2CPP_EXTERN_C String_t* _stringLiteral3C1C1D26AE09795A551572D99580D9135C350F2E;
IL2CPP_EXTERN_C String_t* _stringLiteral3DADDB7014BD24B553A46A5D33AC53799C999E47;
IL2CPP_EXTERN_C String_t* _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4B1F0CD2B131C67AE1ADFE947E2C291DFA1AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral4F87779B05F32751CFB37C7DBE66E4BF77BCDC71;
IL2CPP_EXTERN_C String_t* _stringLiteral522E6924D67715544A0B0CE5868C01FD7D8B6B69;
IL2CPP_EXTERN_C String_t* _stringLiteral57325206D0020D725B95D7BFE28CEFF055C34C44;
IL2CPP_EXTERN_C String_t* _stringLiteral5F15B7672B931BB4B0663E942D3D7887F2C0DEA2;
IL2CPP_EXTERN_C String_t* _stringLiteral621CCC1F4554EC41DC37B1E2D27C4593D2E21D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral6413E837D316AAFCF260786CD21A849F88AE3069;
IL2CPP_EXTERN_C String_t* _stringLiteral66395D710EDA4325D6BE904032C88BD086AB0FA0;
IL2CPP_EXTERN_C String_t* _stringLiteral67ED8E83A2FC8158F744B30284DB7FBC21E3B38A;
IL2CPP_EXTERN_C String_t* _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477;
IL2CPP_EXTERN_C String_t* _stringLiteral6B7E4DDB1EF95E854F28AA9B25F02DF36DB1374B;
IL2CPP_EXTERN_C String_t* _stringLiteral6CBB2264141ECB3EED7F85966FE2318FE974E754;
IL2CPP_EXTERN_C String_t* _stringLiteral71F79BCDD35D537FBB16530D224C83EAD4CB5586;
IL2CPP_EXTERN_C String_t* _stringLiteral73C774F3077BCDA69B947EE284A1C7E56CE644F6;
IL2CPP_EXTERN_C String_t* _stringLiteral75C679CDF99AAD03E58DCC6BA9A1BDDF782B6F04;
IL2CPP_EXTERN_C String_t* _stringLiteral7907256910E477CE90D69E72480005AB4616D325;
IL2CPP_EXTERN_C String_t* _stringLiteral8209BE90721101AFCAE297A024725C674F253ED0;
IL2CPP_EXTERN_C String_t* _stringLiteral86A7E4306FD41B3393D3F4E9E196F0C7E9437EC5;
IL2CPP_EXTERN_C String_t* _stringLiteral87643D5C3B6C7BEE3DD6370984A500C11CC567FB;
IL2CPP_EXTERN_C String_t* _stringLiteral87961C7F57F185CA188A23ED62231DA528D5DF90;
IL2CPP_EXTERN_C String_t* _stringLiteral884D32F601A0E6410EE384ED5C39074FA3D4B2C1;
IL2CPP_EXTERN_C String_t* _stringLiteral897B5AF198D0DE178A65A27CA63ECB118CE3EDD2;
IL2CPP_EXTERN_C String_t* _stringLiteral8BB5FFE3E9929A8E30C8679F011CD16FDB6C0A3B;
IL2CPP_EXTERN_C String_t* _stringLiteral939BB46A04C3640C8C427E92B1B557E882E2D2A0;
IL2CPP_EXTERN_C String_t* _stringLiteral93EFE2C6DF3430E6B3E9310D71E8347EFAF61BDF;
IL2CPP_EXTERN_C String_t* _stringLiteral980DA9AE60DC366DFDEC5DC08C2BB608C33B8319;
IL2CPP_EXTERN_C String_t* _stringLiteral9C76258C195A52DB46177269E8965072E8E46C75;
IL2CPP_EXTERN_C String_t* _stringLiteral9EE3DE22BD7B2709B82DAB6AEFE5E4481C34B743;
IL2CPP_EXTERN_C String_t* _stringLiteral9F349427459EA3944F5BCA57AA2157ABD06B9FD6;
IL2CPP_EXTERN_C String_t* _stringLiteralA2BCE7E66A25DCA5CDFCA800AC96276D6CA065F7;
IL2CPP_EXTERN_C String_t* _stringLiteralA448F44B3EB0132A68244BF74AB1824D0101C1E8;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A702D8EF582E2B9218E9DA772DADEEF2F9AE7F;
IL2CPP_EXTERN_C String_t* _stringLiteralA9BDB64370ACDF598E95E44233DB2C401A0B50F9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFF863E42279CD6192C376DE4E40CCCCBA575E11;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralB91EAEC77177BAF667D1ACE1A1719144BA820290;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF8C6F9FBB9C23293A045E0EFBA5A106429FCE3;
IL2CPP_EXTERN_C String_t* _stringLiteralC02192A329A2BF5F9DC93E68289296895AD7F3FB;
IL2CPP_EXTERN_C String_t* _stringLiteralC06EA3EED5E9A8D7D337BEA7838838B861013AF4;
IL2CPP_EXTERN_C String_t* _stringLiteralC10BF79E3205C2C7816B8A56E7FD8941073B8A82;
IL2CPP_EXTERN_C String_t* _stringLiteralC5466045C8D8263521FA5BB4AE3EDF0B44F93BAF;
IL2CPP_EXTERN_C String_t* _stringLiteralC813FA902B04A30624977C2363D478DDAF51135D;
IL2CPP_EXTERN_C String_t* _stringLiteralC93F6536DCFBEEEE0B339ACC7D769BF64450E761;
IL2CPP_EXTERN_C String_t* _stringLiteralCE6A8213CD20805B16473A9A66D5EC7E49080CDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E;
IL2CPP_EXTERN_C String_t* _stringLiteralD6F1923E1B5508C7017A1CDA544B81E392455842;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE22AB18EC834EFAB1C07EC57BE8A8C0F25B080B;
IL2CPP_EXTERN_C String_t* _stringLiteralDF653120A68CFC6CF1833BF22A6129D6A40FE04A;
IL2CPP_EXTERN_C String_t* _stringLiteralE06AAB5BB3707BE5B8789942E1DBA803422E7713;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B4955E94AC0FB3B4768BD4DCD9607D6BF5E8B5;
IL2CPP_EXTERN_C String_t* _stringLiteralE9624B87B5157E1FA334AC61B8705E78E8DF2B49;
IL2CPP_EXTERN_C String_t* _stringLiteralE97EBA623435E72AB81F2814A9A394A880C1D7F8;
IL2CPP_EXTERN_C String_t* _stringLiteralEA27DB5BEAB4EEF8784A01F0B6E3A39F7171A22F;
IL2CPP_EXTERN_C String_t* _stringLiteralEF1D7CABDF71F053743391521F61A997E52734F7;
IL2CPP_EXTERN_C String_t* _stringLiteralF183E24B4440DCA88350EB78DD415D4F6E6FC6EE;
IL2CPP_EXTERN_C String_t* _stringLiteralF38B4EC29B2654870076A9862CB5F4258C110257;
IL2CPP_EXTERN_C String_t* _stringLiteralFE50CA181576AF9F7D2EF01F311629C8797ACA69;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m390220902A4292B43AF4BB672C2591965A89E17B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEB8DD50334D2B8AA1733694B07D55B5FAD191AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B4863788741AD9FF45E08C1812DCE18C971B3E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFACF9D60A0BD61283E35984A59EF668A33AE03AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C970A52969C613F62BBF07B74B3350594996FEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA45A02FEE4CE736671FAD1192782E8FB7EE5D479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m14CB2EF048AA92E6CC5F5C6DA75752C08300B269_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6DEEBCD07F29116402AE4A4C17B816F298C79AB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m7DF3B4DB4CA60855860B6760DBA2B1AE5883D20F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_mDE58DE006D5AC351EDD533A795B42AAB52ECC437_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m0FC58A141D1F8863C8F68F94BC76190C53AA5032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB6D35F4347319EF7CB3309E19B5B407565F087B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mC2E2E8F393C540A59ADE3639F3E747DBD556C94B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mD203323B0CF5F16ECA5C6351B10F900844405A22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mDB430F258B0B0E42C5BF2B69553A1B4A8106C1D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m4F69AD65B260CE86E8493222A4B04E36C1671131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_mF9D739E7085205B81CEC5EBAE3CE68104FE258AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mFCD5DF1888EB22E31D1DEE68971BF8DADE683B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m999F302DDAC594C47CBD9F2D2D22031D2717BFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9BCFF60E57E5FD526DB75586B3BD2DDDEA763DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m0979087A4465BFDEA3F25EF7C5C9EC1A7DDCE774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m80DDF5520E31CEF50256AA39B549A66A44873E87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__0_0_mB72972816794D6848F042E4FD0917D865C1D1098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__0_1_m37C4560DCB8BD5DC9C48C1B8A53E4E1D3C59193D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m1F9F77404BF472FCB65911F74EBB3B0A8EC05BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WikitudeCamera_UpdateVideoTexture_m844EA240BD4CBEA4B486335CA609F98A6DC4DCED_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t OnCameraErrorEvent__ctor_m340ED43D22FFF1AF489D4A2E2C6BE5920F55D989_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694WikitudeUnityPlugin1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743WikitudeUnityPlugin1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TargetCollectionResourceFailedCallback_BeginInvoke_m997179AC8295A53B68DE9E0D96178261B2E9A91A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TargetCollectionResourceInitializedCallback_BeginInvoke_mA5D7A16B483BB99C4BBFD8FE1E88CD7BCAADEC39_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackerInitializationErrorCallback_BeginInvoke_m4BFD55CF5973F3DF85C16EC838379FCFFD17F9F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackerManagerQueue_Add_m33B59248DC5C3A672E489FCB62FAD137BE6624E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackerManagerQueue_Execute_m2AC863505918BCE24E24CF28198A08992420FCB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackerManagerQueue__ctor_mA28A91FAFE59569AD801DCE25907AF79CB0AF217_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__0_0_mB72972816794D6848F042E4FD0917D865C1D1098_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3C_cctorU3Eb__0_1_m37C4560DCB8BD5DC9C48C1B8A53E4E1D3C59193D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC6E2F4C4D9C6AC4D086A1F1E26CC45411CC9CB2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCameraName_mAEB1D0218823CA3CE4B1B5382E685013CCB83339_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetSDKMutex_m51A4A2D2A2CEBF9B9E0448423700D0192C8D1826_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_InstantiatePlatform_m154738688068FA63045E4793A65D12D6B48E6454_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_ConvertScreenCoordinate_m8567A61741B6E4B0F0A5D0C0FC005FCB90EAC9AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneConvexHull_mBDF14B4CB46B2BFC1DC9F9744145C490E61E013D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneIDs_m05B857C97868398C0E1D81F3866EF66298F5FDC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildConfiguration_m35026E956EA7D64B7D21D772F510B7D169A287C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildDate_m2766581198A55E48360759E79F03ABC14E5545B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildNumber_mA9BFD708BCCED5AA0BC095C068D34EA2F6C10C18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildVersion_mDAE2D9989113A0D8DB121A09FC2FCC3191084ACE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_RequestPointCloud_m070B1C17480EB9F78A7A3358EED003BBB0A7A3B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_TransferPointCloud_mFE279E19987EFC4F87813F477CCA391E784E0C6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge__cctor_mB4159AE4D6FE2188EB83244920F86C34036153DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateExtendedImageTrackingQualityCallback_BeginInvoke_m3821096F68F1EC02C8A7687172DEB1087CDDA41D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UpdateExtendedObjectTrackingQualityCallback_BeginInvoke_m48EE44162FC9F17599317578AB7016502D53DF49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeBridge_InternalUpdate_m009D78360169BB3ED52DD4F9236F5EDA2628AFC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeBridge_OnDestroy_m74E15F3ED269CB9CE131DEED5702E5DBD9D2A798_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeBridge_Setup_m8FB8E8AC6872A0CEDC3F9E1E91B0DEEA9001533B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_Awake_mABB3E95408F35A6CED85F711EC37C7186B69DD6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_DeregisterPlugin_m73BD75CFA23AC3B34D423462DD558D0AE0B3C724_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_DestroyLivePreview_m34CF4D531DAB5BDA677BAF20464FE8D04BE12B18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_ExposeAtPointOfInterest_m965D94AD1D61679EF33DDD9514FB774618C9911F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_FocusAtPointOfInterest_m77A9554387BD18E408BCF9ABE793546CFE0F4CEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_GetActiveCameraIndex_m798737ABFA3F0B7C97302CAA4280D1E1524D1E5F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_GetCameraList_m3F84ECEDD27BE0E478E1FB372ECF2BAB02BE0C56_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_GetCameraName_m89328023A409D59AC6E16257CCEC2984F4C9DD35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_InitializePlatformCameraIfNeeded_m19D4B823A22B606A611B6551E6AC3FED328C3C6A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_IsCameraListSupported_m2431D835305F686FCC7F8495E066B03BF6174671_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_IsExposureModeSupported_m6D68A873E99B31B43364235E61DD7D750BBEA8A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_IsFlashModeSupported_m0274A24670F1E35CC683C51EEEDDE93289C38804_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_IsFocusModeSupported_mDEA2280EC70FAED2F8F326B9D30CB699B4DB60B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_IsZoomLevelSupported_m5B4E9A5327D2BF03B19DAA522E0394D5FDC8996F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_NotifyNewCameraFrame_mD1D616589F08BD78885E79EC089C6C026A1E5A79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_OnApplicationPause_mA4F36369B2F58B087657B1EF490D58EA2C66C972_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_OnCameraListSucessful_mDE86EAFE20EE954198C37E5AF02B4772218482E1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_OnDestroy_m90E801D4A6E4352A5EFD8391E72B89087E158493_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_OnDisable_m28A89AFBA073D5485C24F42161BC518D0D29D76B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_OnEnable_mB75F426F3B56C7E3E4B2F9F5BF6C7BEB6111F32D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_RegisterPlugin_mFAD1AB165B550F22BA5761F2414A1AD89A9D82C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_RegisterTracker_m9330BAEE75C95AE51E2145490D431DDA71F11A1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_SetGL_mE56E10F242495D061AA2A292816494C96B3F53D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_Start_mFBA612900287C5995065B10CC234077033F4DEC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_UpdateLivePreview_m41F452BBDD4524769CF488A7431CF0C3EAF38960_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_UpdateRenderTexture_mA1F6E539983306DF6CCA634AEAC1EE4932EFEFE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_UpdateVideoTexture_m844EA240BD4CBEA4B486335CA609F98A6DC4DCED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_Update_mE7B41CF0C5E40990829FCBA7D881DE9E3D4F6E23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_VideoIsPlaying_m58C9C231A5ACB69B09F44350A4E5D7188D24CF22_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_VideoPlayOrPause_m8CEC3D379ECB86E728D05B81CC4794CBC38F0CA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_VideoReset_m7BC3882A9E6AFC02F2D0579E57C6BF1CB1C448FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_VideoStep_m46A0FA9E99A5A7409CA4561E1F82F88B019EEBA2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera__ctor_mBFB26150D8ED7D5C668A7DF71D2975E9EAB1BC3D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_AutoFocusRestriction_m7BA0DADD108B7B55008757CE45C5D788DFB14420_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_ExposureMode_mEBACEED55AAD24CA5BB0346120ABABB3B462B165_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_FlashMode_m3744038799BE23A90935A658C6ECD757D6654EE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_FocusMode_m8A75F2EB81EDA1E5BA3913EB3AAC48383AC1FD97_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_IsAutoFocusRestrictionSupported_m4EB052980F42E1E8789375A3A1EEDF2BA37716BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_IsExposeAtPointOfInterstSupported_m30F3E388D662CC8FBE666F1E4507EA8FF4A86112_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_IsFocusAtPointOfInterestSupported_m5EAE37134BEC931F7045C250BA0E0D1C6387C3E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_IsManualFocusAvailable_m36FC69DAE7271641DDC0DFDBC8A223A6D12F6AD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_MaxZoomLevel_mB745E598BEC96877F734F8C2428DA090D0F3C5BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_get_ZoomLevel_m3B56A1B1B073BE3F9E975A5E7A2DDD8C60C6F7A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_AutoFocusRestriction_mC13C6D60888F535BD8BB805FEB4B92334652116F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_Camera2SupportLevel_m315DD51D696861D14C781421A017162594D02BB2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_DesiredCameraFramerate_mC97A94DB016E99307B90E8C83900A1D8D45CAC66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_DesiredCameraResolution_mD5DE9623FD44D2FF0C5BBA2113447AB02B70C935_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_EnableCamera2_m6EE043FEA9EDB023DE156A219E773883D962A03B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_ExposureMode_mB3E481FC10E31EB9983FA852F60EBB23124C8121_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_FlashMode_mF18103B72F3404D36910E1D0822E01421F83AF19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_FocusMode_mF2EFCEA5763593B3028442143E48AE67998A2E4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_ManualFocusDistance_m20C1D26656001BC5CF579DF0C15F4CFFBF7F5532_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_RemoteCameraPosition_m0407012A7726EF1A6997E50BB420962D47A5ABD9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_StaticImage_mEEBAD286327963D0B32BF8B6395264EE1AD9995E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_VideoClip_m481A22FD9B99CB5C7EACCCC3D7B76C078A4B8B03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_VideoLoop_mABD4B12F08E97F58CD9E79AF3B01205E6F4F3707_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_VideoSpeed_mAFCABC32ECCA5A844189E733C634A081C23A86B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_WebCamIsMirrored_m11DFA3BB4C85CD6CDED0882147E00D579BAE13C1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_WebCamName_mD71C21A43705D8FD93312D1A949326D439EB3C13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_WikitudeLicenseKey_m0E6C41078F3E0CDCB97570504189CC04F8CBED98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeCamera_set_ZoomLevel_mB7C85CE14027E2D70C511AD797EEA82C2B91654D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_CreatePlatformBridge_mA950B0C3F83BB9628077CBD0F2006DA1DAD34A62_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_CreateWikitudeBridge_m56A5C6C354D4BB974CFE9F493327777AC9A3CE66_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_Destroy_m967AE0AA637FAF6069EA90FBF9003A07B9A40BEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_ForceUnityBridge_m26F67BA31B2DF237E48BEBF7A230B7D312520E16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK__cctor_mBF2C6CF8D6DF5BB635D6AA0EF79A1CFB9559D48E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_get_BuildInformation_m8C7FAF58057D338CF9A8EE6D7F87FF6138C066B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 ;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;
struct CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8;

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


// System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String>
struct Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t5BB8B4A7CD6B59E9795E9563BBE2E515A9F41350* ___entries_1;
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
	KeyCollection_t1EFF9783F6042D1CD35B03B243FC6A31E306F509 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t67211F52AA36F29C353D603256FC14D97F9372AB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___entries_1)); }
	inline EntryU5BU5D_t5BB8B4A7CD6B59E9795E9563BBE2E515A9F41350* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t5BB8B4A7CD6B59E9795E9563BBE2E515A9F41350** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t5BB8B4A7CD6B59E9795E9563BBE2E515A9F41350* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___keys_7)); }
	inline KeyCollection_t1EFF9783F6042D1CD35B03B243FC6A31E306F509 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1EFF9783F6042D1CD35B03B243FC6A31E306F509 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1EFF9783F6042D1CD35B03B243FC6A31E306F509 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ___values_8)); }
	inline ValueCollection_t67211F52AA36F29C353D603256FC14D97F9372AB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t67211F52AA36F29C353D603256FC14D97F9372AB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t67211F52AA36F29C353D603256FC14D97F9372AB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Wikitude.Plugin>
struct HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t77D49E4E74B2FAA3CC15A13FB0341176C190B0E3* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____slots_8)); }
	inline SlotU5BU5D_t77D49E4E74B2FAA3CC15A13FB0341176C190B0E3* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t77D49E4E74B2FAA3CC15A13FB0341176C190B0E3** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t77D49E4E74B2FAA3CC15A13FB0341176C190B0E3* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>
struct HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t3E751410464E83F17A498083A61497BC13381CCB* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____buckets_7)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____slots_8)); }
	inline SlotU5BU5D_t3E751410464E83F17A498083A61497BC13381CCB* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t3E751410464E83F17A498083A61497BC13381CCB** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t3E751410464E83F17A498083A61497BC13381CCB* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B, ____siInfo_14)); }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t1BB80E9C9DEA52DBF464487234B045E2930ADA26 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Action>
struct List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____items_1)); }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* get__items_1() const { return ____items_1; }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_StaticFields, ____emptyArray_5)); }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ActionU5BU5D_t7BDDAD9C74678DD3A8A0D9C109E1D5AD65392DE3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Wikitude.CameraFramePlane>
struct List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70, ____items_1)); }
	inline CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* get__items_1() const { return ____items_1; }
	inline CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70_StaticFields, ____emptyArray_5)); }
	inline CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.Gyroscope
struct Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Gyroscope::m_GyroIndex
	int32_t ___m_GyroIndex_0;

public:
	inline static int32_t get_offset_of_m_GyroIndex_0() { return static_cast<int32_t>(offsetof(Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1, ___m_GyroIndex_0)); }
	inline int32_t get_m_GyroIndex_0() const { return ___m_GyroIndex_0; }
	inline int32_t* get_address_of_m_GyroIndex_0() { return &___m_GyroIndex_0; }
	inline void set_m_GyroIndex_0(int32_t value)
	{
		___m_GyroIndex_0 = value;
	}
};


// Wikitude.Error
struct Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C  : public RuntimeObject
{
public:
	// System.Int32 Wikitude.Error::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_2;
	// System.String Wikitude.Error::<Domain>k__BackingField
	String_t* ___U3CDomainU3Ek__BackingField_3;
	// System.String Wikitude.Error::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_4;
	// Wikitude.Error Wikitude.Error::<UnderlyingError>k__BackingField
	Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * ___U3CUnderlyingErrorU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C, ___U3CCodeU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_2() const { return ___U3CCodeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_2() { return &___U3CCodeU3Ek__BackingField_2; }
	inline void set_U3CCodeU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CDomainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C, ___U3CDomainU3Ek__BackingField_3)); }
	inline String_t* get_U3CDomainU3Ek__BackingField_3() const { return ___U3CDomainU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CDomainU3Ek__BackingField_3() { return &___U3CDomainU3Ek__BackingField_3; }
	inline void set_U3CDomainU3Ek__BackingField_3(String_t* value)
	{
		___U3CDomainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDomainU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C, ___U3CMessageU3Ek__BackingField_4)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_4() const { return ___U3CMessageU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_4() { return &___U3CMessageU3Ek__BackingField_4; }
	inline void set_U3CMessageU3Ek__BackingField_4(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUnderlyingErrorU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C, ___U3CUnderlyingErrorU3Ek__BackingField_5)); }
	inline Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * get_U3CUnderlyingErrorU3Ek__BackingField_5() const { return ___U3CUnderlyingErrorU3Ek__BackingField_5; }
	inline Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C ** get_address_of_U3CUnderlyingErrorU3Ek__BackingField_5() { return &___U3CUnderlyingErrorU3Ek__BackingField_5; }
	inline void set_U3CUnderlyingErrorU3Ek__BackingField_5(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * value)
	{
		___U3CUnderlyingErrorU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingErrorU3Ek__BackingField_5), (void*)value);
	}
};


// Wikitude.PlatformBase
struct PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC  : public RuntimeObject
{
public:

public:
};

struct PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC_StaticFields
{
public:
	// Wikitude.PlatformBase Wikitude.PlatformBase::_instance
	PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * ____instance_0;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC_StaticFields, ____instance_0)); }
	inline PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * get__instance_0() const { return ____instance_0; }
	inline PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC ** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}
};


// Wikitude.RingBuffer
struct RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Wikitude.RingBuffer/WrappedTexture> Wikitude.RingBuffer::_ringBuffer
	List_1_t80AF240AAE985011356FC4B0C0E0C5B55F27EE18 * ____ringBuffer_0;
	// System.Int32 Wikitude.RingBuffer::_current
	int32_t ____current_1;

public:
	inline static int32_t get_offset_of__ringBuffer_0() { return static_cast<int32_t>(offsetof(RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C, ____ringBuffer_0)); }
	inline List_1_t80AF240AAE985011356FC4B0C0E0C5B55F27EE18 * get__ringBuffer_0() const { return ____ringBuffer_0; }
	inline List_1_t80AF240AAE985011356FC4B0C0E0C5B55F27EE18 ** get_address_of__ringBuffer_0() { return &____ringBuffer_0; }
	inline void set__ringBuffer_0(List_1_t80AF240AAE985011356FC4B0C0E0C5B55F27EE18 * value)
	{
		____ringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ringBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C, ____current_1)); }
	inline int32_t get__current_1() const { return ____current_1; }
	inline int32_t* get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(int32_t value)
	{
		____current_1 = value;
	}
};

struct RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C_StaticFields
{
public:
	// System.Int32 Wikitude.RingBuffer::TEXTURE_COUNT
	int32_t ___TEXTURE_COUNT_2;

public:
	inline static int32_t get_offset_of_TEXTURE_COUNT_2() { return static_cast<int32_t>(offsetof(RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C_StaticFields, ___TEXTURE_COUNT_2)); }
	inline int32_t get_TEXTURE_COUNT_2() const { return ___TEXTURE_COUNT_2; }
	inline int32_t* get_address_of_TEXTURE_COUNT_2() { return &___TEXTURE_COUNT_2; }
	inline void set_TEXTURE_COUNT_2(int32_t value)
	{
		___TEXTURE_COUNT_2 = value;
	}
};


// Wikitude.SDKBuildInformation
struct SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3  : public RuntimeObject
{
public:
	// System.String Wikitude.SDKBuildInformation::BuildConfiguration
	String_t* ___BuildConfiguration_0;
	// System.String Wikitude.SDKBuildInformation::BuildNumber
	String_t* ___BuildNumber_1;
	// System.String Wikitude.SDKBuildInformation::BuildDate
	String_t* ___BuildDate_2;
	// System.String Wikitude.SDKBuildInformation::SDKVersion
	String_t* ___SDKVersion_3;

public:
	inline static int32_t get_offset_of_BuildConfiguration_0() { return static_cast<int32_t>(offsetof(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3, ___BuildConfiguration_0)); }
	inline String_t* get_BuildConfiguration_0() const { return ___BuildConfiguration_0; }
	inline String_t** get_address_of_BuildConfiguration_0() { return &___BuildConfiguration_0; }
	inline void set_BuildConfiguration_0(String_t* value)
	{
		___BuildConfiguration_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildConfiguration_0), (void*)value);
	}

	inline static int32_t get_offset_of_BuildNumber_1() { return static_cast<int32_t>(offsetof(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3, ___BuildNumber_1)); }
	inline String_t* get_BuildNumber_1() const { return ___BuildNumber_1; }
	inline String_t** get_address_of_BuildNumber_1() { return &___BuildNumber_1; }
	inline void set_BuildNumber_1(String_t* value)
	{
		___BuildNumber_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildNumber_1), (void*)value);
	}

	inline static int32_t get_offset_of_BuildDate_2() { return static_cast<int32_t>(offsetof(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3, ___BuildDate_2)); }
	inline String_t* get_BuildDate_2() const { return ___BuildDate_2; }
	inline String_t** get_address_of_BuildDate_2() { return &___BuildDate_2; }
	inline void set_BuildDate_2(String_t* value)
	{
		___BuildDate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildDate_2), (void*)value);
	}

	inline static int32_t get_offset_of_SDKVersion_3() { return static_cast<int32_t>(offsetof(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3, ___SDKVersion_3)); }
	inline String_t* get_SDKVersion_3() const { return ___SDKVersion_3; }
	inline String_t** get_address_of_SDKVersion_3() { return &___SDKVersion_3; }
	inline void set_SDKVersion_3(String_t* value)
	{
		___SDKVersion_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SDKVersion_3), (void*)value);
	}
};


// Wikitude.TrackerManagerQueue
struct TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Action> Wikitude.TrackerManagerQueue::_jobs
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * ____jobs_0;
	// System.Collections.Generic.List`1<System.Action> Wikitude.TrackerManagerQueue::_jobsCopy
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * ____jobsCopy_1;
	// System.Object Wikitude.TrackerManagerQueue::_thisLock
	RuntimeObject * ____thisLock_2;

public:
	inline static int32_t get_offset_of__jobs_0() { return static_cast<int32_t>(offsetof(TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E, ____jobs_0)); }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * get__jobs_0() const { return ____jobs_0; }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 ** get_address_of__jobs_0() { return &____jobs_0; }
	inline void set__jobs_0(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * value)
	{
		____jobs_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jobs_0), (void*)value);
	}

	inline static int32_t get_offset_of__jobsCopy_1() { return static_cast<int32_t>(offsetof(TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E, ____jobsCopy_1)); }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * get__jobsCopy_1() const { return ____jobsCopy_1; }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 ** get_address_of__jobsCopy_1() { return &____jobsCopy_1; }
	inline void set__jobsCopy_1(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * value)
	{
		____jobsCopy_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____jobsCopy_1), (void*)value);
	}

	inline static int32_t get_offset_of__thisLock_2() { return static_cast<int32_t>(offsetof(TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E, ____thisLock_2)); }
	inline RuntimeObject * get__thisLock_2() const { return ____thisLock_2; }
	inline RuntimeObject ** get_address_of__thisLock_2() { return &____thisLock_2; }
	inline void set__thisLock_2(RuntimeObject * value)
	{
		____thisLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____thisLock_2), (void*)value);
	}
};


// Wikitude.UnityWikitudeBridge
struct UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981  : public RuntimeObject
{
public:
	// System.Single[] Wikitude.UnityWikitudeBridge::GenericTrackingMatrices
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___GenericTrackingMatrices_0;
	// System.Single[] Wikitude.UnityWikitudeBridge::ObjectTrackingMatrix
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___ObjectTrackingMatrix_1;
	// System.Single[] Wikitude.UnityWikitudeBridge::ViewMatrix
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___ViewMatrix_2;
	// System.Single[] Wikitude.UnityWikitudeBridge::PhysicalTargetHeights
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___PhysicalTargetHeights_3;
	// System.Int64[] Wikitude.UnityWikitudeBridge::TargetIDs
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___TargetIDs_4;
	// System.String Wikitude.UnityWikitudeBridge::TrackedTargets
	String_t* ___TrackedTargets_5;
	// System.Int32 Wikitude.UnityWikitudeBridge::TargetCount
	int32_t ___TargetCount_6;
	// System.Boolean Wikitude.UnityWikitudeBridge::_isObjectTrackingRunning
	bool ____isObjectTrackingRunning_7;
	// System.String Wikitude.UnityWikitudeBridge::_trackerManagerName
	String_t* ____trackerManagerName_8;

public:
	inline static int32_t get_offset_of_GenericTrackingMatrices_0() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___GenericTrackingMatrices_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_GenericTrackingMatrices_0() const { return ___GenericTrackingMatrices_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_GenericTrackingMatrices_0() { return &___GenericTrackingMatrices_0; }
	inline void set_GenericTrackingMatrices_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___GenericTrackingMatrices_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericTrackingMatrices_0), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectTrackingMatrix_1() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___ObjectTrackingMatrix_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_ObjectTrackingMatrix_1() const { return ___ObjectTrackingMatrix_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_ObjectTrackingMatrix_1() { return &___ObjectTrackingMatrix_1; }
	inline void set_ObjectTrackingMatrix_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___ObjectTrackingMatrix_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectTrackingMatrix_1), (void*)value);
	}

	inline static int32_t get_offset_of_ViewMatrix_2() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___ViewMatrix_2)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_ViewMatrix_2() const { return ___ViewMatrix_2; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_ViewMatrix_2() { return &___ViewMatrix_2; }
	inline void set_ViewMatrix_2(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___ViewMatrix_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ViewMatrix_2), (void*)value);
	}

	inline static int32_t get_offset_of_PhysicalTargetHeights_3() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___PhysicalTargetHeights_3)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_PhysicalTargetHeights_3() const { return ___PhysicalTargetHeights_3; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_PhysicalTargetHeights_3() { return &___PhysicalTargetHeights_3; }
	inline void set_PhysicalTargetHeights_3(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___PhysicalTargetHeights_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PhysicalTargetHeights_3), (void*)value);
	}

	inline static int32_t get_offset_of_TargetIDs_4() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___TargetIDs_4)); }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* get_TargetIDs_4() const { return ___TargetIDs_4; }
	inline Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F** get_address_of_TargetIDs_4() { return &___TargetIDs_4; }
	inline void set_TargetIDs_4(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* value)
	{
		___TargetIDs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetIDs_4), (void*)value);
	}

	inline static int32_t get_offset_of_TrackedTargets_5() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___TrackedTargets_5)); }
	inline String_t* get_TrackedTargets_5() const { return ___TrackedTargets_5; }
	inline String_t** get_address_of_TrackedTargets_5() { return &___TrackedTargets_5; }
	inline void set_TrackedTargets_5(String_t* value)
	{
		___TrackedTargets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrackedTargets_5), (void*)value);
	}

	inline static int32_t get_offset_of_TargetCount_6() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ___TargetCount_6)); }
	inline int32_t get_TargetCount_6() const { return ___TargetCount_6; }
	inline int32_t* get_address_of_TargetCount_6() { return &___TargetCount_6; }
	inline void set_TargetCount_6(int32_t value)
	{
		___TargetCount_6 = value;
	}

	inline static int32_t get_offset_of__isObjectTrackingRunning_7() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ____isObjectTrackingRunning_7)); }
	inline bool get__isObjectTrackingRunning_7() const { return ____isObjectTrackingRunning_7; }
	inline bool* get_address_of__isObjectTrackingRunning_7() { return &____isObjectTrackingRunning_7; }
	inline void set__isObjectTrackingRunning_7(bool value)
	{
		____isObjectTrackingRunning_7 = value;
	}

	inline static int32_t get_offset_of__trackerManagerName_8() { return static_cast<int32_t>(offsetof(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981, ____trackerManagerName_8)); }
	inline String_t* get__trackerManagerName_8() const { return ____trackerManagerName_8; }
	inline String_t** get_address_of__trackerManagerName_8() { return &____trackerManagerName_8; }
	inline void set__trackerManagerName_8(String_t* value)
	{
		____trackerManagerName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trackerManagerName_8), (void*)value);
	}
};


// Wikitude.UnityWikitudeBridge/<>c
struct U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_StaticFields
{
public:
	// Wikitude.UnityWikitudeBridge/<>c Wikitude.UnityWikitudeBridge/<>c::<>9
	U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Wikitude.WikitudeBridge
struct WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74  : public RuntimeObject
{
public:
	// Wikitude.TrackerManager Wikitude.WikitudeBridge::_trackerManager
	TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * ____trackerManager_0;

public:
	inline static int32_t get_offset_of__trackerManager_0() { return static_cast<int32_t>(offsetof(WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74, ____trackerManager_0)); }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * get__trackerManager_0() const { return ____trackerManager_0; }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 ** get_address_of__trackerManager_0() { return &____trackerManager_0; }
	inline void set__trackerManager_0(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * value)
	{
		____trackerManager_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____trackerManager_0), (void*)value);
	}
};


// Wikitude.WikitudeSDK
struct WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313  : public RuntimeObject
{
public:

public:
};

struct WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields
{
public:
	// Wikitude.IWikitudeBridge Wikitude.WikitudeSDK::_wikitudeBridge
	RuntimeObject* ____wikitudeBridge_0;
	// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::_platformBridge
	RuntimeObject* ____platformBridge_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String> Wikitude.WikitudeSDK::_platforms
	Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * ____platforms_2;
	// Wikitude.SDKBuildInformation Wikitude.WikitudeSDK::_cachedBuildInformation
	SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * ____cachedBuildInformation_3;

public:
	inline static int32_t get_offset_of__wikitudeBridge_0() { return static_cast<int32_t>(offsetof(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields, ____wikitudeBridge_0)); }
	inline RuntimeObject* get__wikitudeBridge_0() const { return ____wikitudeBridge_0; }
	inline RuntimeObject** get_address_of__wikitudeBridge_0() { return &____wikitudeBridge_0; }
	inline void set__wikitudeBridge_0(RuntimeObject* value)
	{
		____wikitudeBridge_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wikitudeBridge_0), (void*)value);
	}

	inline static int32_t get_offset_of__platformBridge_1() { return static_cast<int32_t>(offsetof(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields, ____platformBridge_1)); }
	inline RuntimeObject* get__platformBridge_1() const { return ____platformBridge_1; }
	inline RuntimeObject** get_address_of__platformBridge_1() { return &____platformBridge_1; }
	inline void set__platformBridge_1(RuntimeObject* value)
	{
		____platformBridge_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____platformBridge_1), (void*)value);
	}

	inline static int32_t get_offset_of__platforms_2() { return static_cast<int32_t>(offsetof(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields, ____platforms_2)); }
	inline Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * get__platforms_2() const { return ____platforms_2; }
	inline Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA ** get_address_of__platforms_2() { return &____platforms_2; }
	inline void set__platforms_2(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * value)
	{
		____platforms_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____platforms_2), (void*)value);
	}

	inline static int32_t get_offset_of__cachedBuildInformation_3() { return static_cast<int32_t>(offsetof(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields, ____cachedBuildInformation_3)); }
	inline SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * get__cachedBuildInformation_3() const { return ____cachedBuildInformation_3; }
	inline SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 ** get_address_of__cachedBuildInformation_3() { return &____cachedBuildInformation_3; }
	inline void set__cachedBuildInformation_3(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * value)
	{
		____cachedBuildInformation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedBuildInformation_3), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E__padding[48];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F__padding[64];
	};

public:
};


// System.Boolean
struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
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


// System.Byte
struct Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____set_0)); }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * get__set_0() const { return ____set_0; }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Wikitude.Plugin>
struct Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6, ____set_0)); }
	inline HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * get__set_0() const { return ____set_0; }
	inline HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6, ____current_3)); }
	inline Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * get__current_3() const { return ____current_3; }
	inline Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<Wikitude.TrackerBehaviour>
struct Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8, ____set_0)); }
	inline HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8, ____current_3)); }
	inline TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * get__current_3() const { return ____current_3; }
	inline TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Action>
struct Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16, ___list_0)); }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * get_list_0() const { return ___list_0; }
	inline List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16, ___current_3)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_current_3() const { return ___current_3; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
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

// System.Int32
struct Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Runtime.InteropServices.GCHandle
struct GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Single
struct Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
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


// System.UInt32
struct UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
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


// UnityEngine.Color
struct Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<Wikitude.Error>
struct UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Matrix4x4
struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// Wikitude.Matrix
struct Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6 
{
public:
	// System.Single Wikitude.Matrix::m00
	float ___m00_0;
	// System.Single Wikitude.Matrix::m01
	float ___m01_1;
	// System.Single Wikitude.Matrix::m02
	float ___m02_2;
	// System.Single Wikitude.Matrix::m03
	float ___m03_3;
	// System.Single Wikitude.Matrix::m10
	float ___m10_4;
	// System.Single Wikitude.Matrix::m11
	float ___m11_5;
	// System.Single Wikitude.Matrix::m12
	float ___m12_6;
	// System.Single Wikitude.Matrix::m13
	float ___m13_7;
	// System.Single Wikitude.Matrix::m20
	float ___m20_8;
	// System.Single Wikitude.Matrix::m21
	float ___m21_9;
	// System.Single Wikitude.Matrix::m22
	float ___m22_10;
	// System.Single Wikitude.Matrix::m23
	float ___m23_11;
	// System.Single Wikitude.Matrix::m30
	float ___m30_12;
	// System.Single Wikitude.Matrix::m31
	float ___m31_13;
	// System.Single Wikitude.Matrix::m32
	float ___m32_14;
	// System.Single Wikitude.Matrix::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m01_1() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m01_1)); }
	inline float get_m01_1() const { return ___m01_1; }
	inline float* get_address_of_m01_1() { return &___m01_1; }
	inline void set_m01_1(float value)
	{
		___m01_1 = value;
	}

	inline static int32_t get_offset_of_m02_2() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m02_2)); }
	inline float get_m02_2() const { return ___m02_2; }
	inline float* get_address_of_m02_2() { return &___m02_2; }
	inline void set_m02_2(float value)
	{
		___m02_2 = value;
	}

	inline static int32_t get_offset_of_m03_3() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m03_3)); }
	inline float get_m03_3() const { return ___m03_3; }
	inline float* get_address_of_m03_3() { return &___m03_3; }
	inline void set_m03_3(float value)
	{
		___m03_3 = value;
	}

	inline static int32_t get_offset_of_m10_4() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m10_4)); }
	inline float get_m10_4() const { return ___m10_4; }
	inline float* get_address_of_m10_4() { return &___m10_4; }
	inline void set_m10_4(float value)
	{
		___m10_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m12_6() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m12_6)); }
	inline float get_m12_6() const { return ___m12_6; }
	inline float* get_address_of_m12_6() { return &___m12_6; }
	inline void set_m12_6(float value)
	{
		___m12_6 = value;
	}

	inline static int32_t get_offset_of_m13_7() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m13_7)); }
	inline float get_m13_7() const { return ___m13_7; }
	inline float* get_address_of_m13_7() { return &___m13_7; }
	inline void set_m13_7(float value)
	{
		___m13_7 = value;
	}

	inline static int32_t get_offset_of_m20_8() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m20_8)); }
	inline float get_m20_8() const { return ___m20_8; }
	inline float* get_address_of_m20_8() { return &___m20_8; }
	inline void set_m20_8(float value)
	{
		___m20_8 = value;
	}

	inline static int32_t get_offset_of_m21_9() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m21_9)); }
	inline float get_m21_9() const { return ___m21_9; }
	inline float* get_address_of_m21_9() { return &___m21_9; }
	inline void set_m21_9(float value)
	{
		___m21_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m23_11() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m23_11)); }
	inline float get_m23_11() const { return ___m23_11; }
	inline float* get_address_of_m23_11() { return &___m23_11; }
	inline void set_m23_11(float value)
	{
		___m23_11 = value;
	}

	inline static int32_t get_offset_of_m30_12() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m30_12)); }
	inline float get_m30_12() const { return ___m30_12; }
	inline float* get_address_of_m30_12() { return &___m30_12; }
	inline void set_m30_12(float value)
	{
		___m30_12 = value;
	}

	inline static int32_t get_offset_of_m31_13() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m31_13)); }
	inline float get_m31_13() const { return ___m31_13; }
	inline float* get_address_of_m31_13() { return &___m31_13; }
	inline void set_m31_13(float value)
	{
		___m31_13 = value;
	}

	inline static int32_t get_offset_of_m32_14() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m32_14)); }
	inline float get_m32_14() const { return ___m32_14; }
	inline float* get_address_of_m32_14() { return &___m32_14; }
	inline void set_m32_14(float value)
	{
		___m32_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};


// Wikitude.PlaneData
struct PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5 
{
public:
	// System.Int32 Wikitude.PlaneData::PlaneType
	int32_t ___PlaneType_0;
	// System.Single Wikitude.PlaneData::Confidence
	float ___Confidence_1;
	// System.Single Wikitude.PlaneData::ExtentXMin
	float ___ExtentXMin_2;
	// System.Single Wikitude.PlaneData::ExtentXMax
	float ___ExtentXMax_3;
	// System.Single Wikitude.PlaneData::ExtentYMin
	float ___ExtentYMin_4;
	// System.Single Wikitude.PlaneData::ExtentYMax
	float ___ExtentYMax_5;
	// System.UInt32 Wikitude.PlaneData::ConvexHullPointCount
	uint32_t ___ConvexHullPointCount_6;

public:
	inline static int32_t get_offset_of_PlaneType_0() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___PlaneType_0)); }
	inline int32_t get_PlaneType_0() const { return ___PlaneType_0; }
	inline int32_t* get_address_of_PlaneType_0() { return &___PlaneType_0; }
	inline void set_PlaneType_0(int32_t value)
	{
		___PlaneType_0 = value;
	}

	inline static int32_t get_offset_of_Confidence_1() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___Confidence_1)); }
	inline float get_Confidence_1() const { return ___Confidence_1; }
	inline float* get_address_of_Confidence_1() { return &___Confidence_1; }
	inline void set_Confidence_1(float value)
	{
		___Confidence_1 = value;
	}

	inline static int32_t get_offset_of_ExtentXMin_2() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___ExtentXMin_2)); }
	inline float get_ExtentXMin_2() const { return ___ExtentXMin_2; }
	inline float* get_address_of_ExtentXMin_2() { return &___ExtentXMin_2; }
	inline void set_ExtentXMin_2(float value)
	{
		___ExtentXMin_2 = value;
	}

	inline static int32_t get_offset_of_ExtentXMax_3() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___ExtentXMax_3)); }
	inline float get_ExtentXMax_3() const { return ___ExtentXMax_3; }
	inline float* get_address_of_ExtentXMax_3() { return &___ExtentXMax_3; }
	inline void set_ExtentXMax_3(float value)
	{
		___ExtentXMax_3 = value;
	}

	inline static int32_t get_offset_of_ExtentYMin_4() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___ExtentYMin_4)); }
	inline float get_ExtentYMin_4() const { return ___ExtentYMin_4; }
	inline float* get_address_of_ExtentYMin_4() { return &___ExtentYMin_4; }
	inline void set_ExtentYMin_4(float value)
	{
		___ExtentYMin_4 = value;
	}

	inline static int32_t get_offset_of_ExtentYMax_5() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___ExtentYMax_5)); }
	inline float get_ExtentYMax_5() const { return ___ExtentYMax_5; }
	inline float* get_address_of_ExtentYMax_5() { return &___ExtentYMax_5; }
	inline void set_ExtentYMax_5(float value)
	{
		___ExtentYMax_5 = value;
	}

	inline static int32_t get_offset_of_ConvexHullPointCount_6() { return static_cast<int32_t>(offsetof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5, ___ConvexHullPointCount_6)); }
	inline uint32_t get_ConvexHullPointCount_6() const { return ___ConvexHullPointCount_6; }
	inline uint32_t* get_address_of_ConvexHullPointCount_6() { return &___ConvexHullPointCount_6; }
	inline void set_ConvexHullPointCount_6(uint32_t value)
	{
		___ConvexHullPointCount_6 = value;
	}
};


// Wikitude.UnityPlaneConfiguration
struct UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2 
{
public:
	// System.Boolean Wikitude.UnityPlaneConfiguration::planeDetectionEnabled
	bool ___planeDetectionEnabled_0;
	// System.Boolean Wikitude.UnityPlaneConfiguration::convexHullEnabled
	bool ___convexHullEnabled_1;
	// System.Byte Wikitude.UnityPlaneConfiguration::planeFilter
	uint8_t ___planeFilter_2;

public:
	inline static int32_t get_offset_of_planeDetectionEnabled_0() { return static_cast<int32_t>(offsetof(UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2, ___planeDetectionEnabled_0)); }
	inline bool get_planeDetectionEnabled_0() const { return ___planeDetectionEnabled_0; }
	inline bool* get_address_of_planeDetectionEnabled_0() { return &___planeDetectionEnabled_0; }
	inline void set_planeDetectionEnabled_0(bool value)
	{
		___planeDetectionEnabled_0 = value;
	}

	inline static int32_t get_offset_of_convexHullEnabled_1() { return static_cast<int32_t>(offsetof(UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2, ___convexHullEnabled_1)); }
	inline bool get_convexHullEnabled_1() const { return ___convexHullEnabled_1; }
	inline bool* get_address_of_convexHullEnabled_1() { return &___convexHullEnabled_1; }
	inline void set_convexHullEnabled_1(bool value)
	{
		___convexHullEnabled_1 = value;
	}

	inline static int32_t get_offset_of_planeFilter_2() { return static_cast<int32_t>(offsetof(UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2, ___planeFilter_2)); }
	inline uint8_t get_planeFilter_2() const { return ___planeFilter_2; }
	inline uint8_t* get_address_of_planeFilter_2() { return &___planeFilter_2; }
	inline void set_planeFilter_2(uint8_t value)
	{
		___planeFilter_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Wikitude.UnityPlaneConfiguration
struct UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2_marshaled_pinvoke
{
	int32_t ___planeDetectionEnabled_0;
	int32_t ___convexHullEnabled_1;
	uint8_t ___planeFilter_2;
};
// Native definition for COM marshalling of Wikitude.UnityPlaneConfiguration
struct UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2_marshaled_com
{
	int32_t ___planeDetectionEnabled_0;
	int32_t ___convexHullEnabled_1;
	uint8_t ___planeFilter_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376
	__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  ___5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F
	__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  ___A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF
	__StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E  ___C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB
	__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  ___FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3;

public:
	inline static int32_t get_offset_of_U35998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24_StaticFields, ___5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0)); }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  get_U35998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0() const { return ___5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0; }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F * get_address_of_U35998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0() { return &___5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0; }
	inline void set_U35998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0(__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  value)
	{
		___5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0 = value;
	}

	inline static int32_t get_offset_of_A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24_StaticFields, ___A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1)); }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  get_A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1() const { return ___A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1; }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F * get_address_of_A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1() { return &___A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1; }
	inline void set_A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1(__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  value)
	{
		___A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1 = value;
	}

	inline static int32_t get_offset_of_C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24_StaticFields, ___C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2)); }
	inline __StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E  get_C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2() const { return ___C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2; }
	inline __StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E * get_address_of_C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2() { return &___C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2; }
	inline void set_C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2(__StaticArrayInitTypeSizeU3D48_tCE2E08069526B9E4E6B4E248F19755911FBB687E  value)
	{
		___C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2 = value;
	}

	inline static int32_t get_offset_of_FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24_StaticFields, ___FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3)); }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  get_FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3() const { return ___FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3; }
	inline __StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F * get_address_of_FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3() { return &___FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3; }
	inline void set_FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3(__StaticArrayInitTypeSizeU3D64_t44305191BC41631B1266C599008B82FA1FDC8F0F  value)
	{
		___FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3 = value;
	}
};


// SmartAvailability
struct SmartAvailability_t6724C7AC240D372426E8A887B6A2ED946F671FF2 
{
public:
	// System.Int32 SmartAvailability::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SmartAvailability_t6724C7AC240D372426E8A887B6A2ED946F671FF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Int32Enum
struct Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.GCHandleType
struct GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t7155EF9CB120186C6753EE17470D37E148CB2EF1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.CameraClearFlags
struct CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraClearFlags_tAC22BD22D12708CBDC63F6CFB31109E5E17CF239, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HideFlags
struct HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_t30B57DC00548E963A569318C8F4A4123E7447E37, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
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

// UnityEngine.RuntimePlatform
struct RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ScreenOrientation
struct ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t7C6B5101554065C47682E592D1E26079D4EC2DCE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAspectRatio
struct VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379 
{
public:
	// System.Int32 UnityEngine.Video.VideoAspectRatio::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAspectRatio_t5739968D28C4F8F802B085E293F22110205B8379, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoAudioOutputMode
struct VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F 
{
public:
	// System.Int32 UnityEngine.Video.VideoAudioOutputMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoAudioOutputMode_t8CDE10B382F3C321345EC57C9164A9177139DC6F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Video.VideoRenderMode
struct VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161 
{
public:
	// System.Int32 UnityEngine.Video.VideoRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VideoRenderMode_t0DBAABB576FDA890C49C6AD3EE641623F93E9161, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.WebCamKind
struct WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.Camera2SupportLevel
struct Camera2SupportLevel_tC9A4B81DF2196475B07298EF2E749C8626A0F24A 
{
public:
	// System.Int32 Wikitude.Camera2SupportLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Camera2SupportLevel_tC9A4B81DF2196475B07298EF2E749C8626A0F24A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CameraFramePlane
struct CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32 
{
public:
	// System.IntPtr Wikitude.CameraFramePlane::Data
	intptr_t ___Data_0;
	// System.UInt32 Wikitude.CameraFramePlane::DataSize
	uint32_t ___DataSize_1;
	// System.Int32 Wikitude.CameraFramePlane::PixelStride
	int32_t ___PixelStride_2;
	// System.Int32 Wikitude.CameraFramePlane::RowStride
	int32_t ___RowStride_3;

public:
	inline static int32_t get_offset_of_Data_0() { return static_cast<int32_t>(offsetof(CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32, ___Data_0)); }
	inline intptr_t get_Data_0() const { return ___Data_0; }
	inline intptr_t* get_address_of_Data_0() { return &___Data_0; }
	inline void set_Data_0(intptr_t value)
	{
		___Data_0 = value;
	}

	inline static int32_t get_offset_of_DataSize_1() { return static_cast<int32_t>(offsetof(CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32, ___DataSize_1)); }
	inline uint32_t get_DataSize_1() const { return ___DataSize_1; }
	inline uint32_t* get_address_of_DataSize_1() { return &___DataSize_1; }
	inline void set_DataSize_1(uint32_t value)
	{
		___DataSize_1 = value;
	}

	inline static int32_t get_offset_of_PixelStride_2() { return static_cast<int32_t>(offsetof(CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32, ___PixelStride_2)); }
	inline int32_t get_PixelStride_2() const { return ___PixelStride_2; }
	inline int32_t* get_address_of_PixelStride_2() { return &___PixelStride_2; }
	inline void set_PixelStride_2(int32_t value)
	{
		___PixelStride_2 = value;
	}

	inline static int32_t get_offset_of_RowStride_3() { return static_cast<int32_t>(offsetof(CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32, ___RowStride_3)); }
	inline int32_t get_RowStride_3() const { return ___RowStride_3; }
	inline int32_t* get_address_of_RowStride_3() { return &___RowStride_3; }
	inline void set_RowStride_3(int32_t value)
	{
		___RowStride_3 = value;
	}
};


// Wikitude.CaptureAutoFocusRestriction
struct CaptureAutoFocusRestriction_tFE9CAC50B08BA0E105DAD9188CBCC8555DB73D80 
{
public:
	// System.Int32 Wikitude.CaptureAutoFocusRestriction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureAutoFocusRestriction_tFE9CAC50B08BA0E105DAD9188CBCC8555DB73D80, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureDeviceFramerate
struct CaptureDeviceFramerate_t2521FA772CE149625521D555A1F5B9F6ABFCED8E 
{
public:
	// System.Int32 Wikitude.CaptureDeviceFramerate::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureDeviceFramerate_t2521FA772CE149625521D555A1F5B9F6ABFCED8E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureDevicePosition
struct CaptureDevicePosition_tE9EFFE2AA5D70AB979F383491716333197C12CAC 
{
public:
	// System.Int32 Wikitude.CaptureDevicePosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureDevicePosition_tE9EFFE2AA5D70AB979F383491716333197C12CAC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureDeviceResolution
struct CaptureDeviceResolution_tF8AB09AA4140D1ABA4FA4CBACC16967113D021B6 
{
public:
	// System.Int32 Wikitude.CaptureDeviceResolution::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureDeviceResolution_tF8AB09AA4140D1ABA4FA4CBACC16967113D021B6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureExposureMode
struct CaptureExposureMode_t4DB5C13777575179367B4B37B9F6FD83949883F1 
{
public:
	// System.Int32 Wikitude.CaptureExposureMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureExposureMode_t4DB5C13777575179367B4B37B9F6FD83949883F1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureFlashMode
struct CaptureFlashMode_t31B0F4AB64943CFFF8975D45BA28DBBB24AA3F4D 
{
public:
	// System.Int32 Wikitude.CaptureFlashMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureFlashMode_t31B0F4AB64943CFFF8975D45BA28DBBB24AA3F4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.CaptureFocusMode
struct CaptureFocusMode_t43F16B6C22152FABC4EFFF7CB0B79E53CB5EC317 
{
public:
	// System.Int32 Wikitude.CaptureFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CaptureFocusMode_t43F16B6C22152FABC4EFFF7CB0B79E53CB5EC317, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.FrameColorSpace
struct FrameColorSpace_tA2D5CDA994E40157FDC4577115996F0534087AD4 
{
public:
	// System.Int32 Wikitude.FrameColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FrameColorSpace_tA2D5CDA994E40157FDC4577115996F0534087AD4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.LivePreviewMode
struct LivePreviewMode_t5EDC56A296694B2C23A562FF299C69AA7CCE10CB 
{
public:
	// System.Int32 Wikitude.LivePreviewMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LivePreviewMode_t5EDC56A296694B2C23A562FF299C69AA7CCE10CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.ObjectTrackerRecognitionType
struct ObjectTrackerRecognitionType_tA7511CDA86F92DF8F1C08ABC7EAE846EBEA967DC 
{
public:
	// System.Int32 Wikitude.ObjectTrackerRecognitionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectTrackerRecognitionType_tA7511CDA86F92DF8F1C08ABC7EAE846EBEA967DC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.TransformProperties
struct TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E 
{
public:
	// UnityEngine.Vector3 Wikitude.TransformProperties::Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Position_0;
	// UnityEngine.Quaternion Wikitude.TransformProperties::Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___Rotation_1;
	// UnityEngine.Vector3 Wikitude.TransformProperties::Scale
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Scale_2;
	// System.Single Wikitude.TransformProperties::FieldOfView
	float ___FieldOfView_3;

public:
	inline static int32_t get_offset_of_Position_0() { return static_cast<int32_t>(offsetof(TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E, ___Position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Position_0() const { return ___Position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Position_0() { return &___Position_0; }
	inline void set_Position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Position_0 = value;
	}

	inline static int32_t get_offset_of_Rotation_1() { return static_cast<int32_t>(offsetof(TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E, ___Rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_Rotation_1() const { return ___Rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_Rotation_1() { return &___Rotation_1; }
	inline void set_Rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___Rotation_1 = value;
	}

	inline static int32_t get_offset_of_Scale_2() { return static_cast<int32_t>(offsetof(TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E, ___Scale_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Scale_2() const { return ___Scale_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Scale_2() { return &___Scale_2; }
	inline void set_Scale_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Scale_2 = value;
	}

	inline static int32_t get_offset_of_FieldOfView_3() { return static_cast<int32_t>(offsetof(TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E, ___FieldOfView_3)); }
	inline float get_FieldOfView_3() const { return ___FieldOfView_3; }
	inline float* get_address_of_FieldOfView_3() { return &___FieldOfView_3; }
	inline void set_FieldOfView_3(float value)
	{
		___FieldOfView_3 = value;
	}
};


// Wikitude.UnityVersion
struct UnityVersion_tEA96C0D9888DD50065B7C27F75544B1E93B319FB 
{
public:
	// System.Int32 Wikitude.UnityVersion::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UnityVersion_tEA96C0D9888DD50065B7C27F75544B1E93B319FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.WikitudeCamera/CallType
struct CallType_t79F7FC833B157FD859637AA65D6AA24EC9F90EBA 
{
public:
	// System.Int32 Wikitude.WikitudeCamera/CallType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CallType_t79F7FC833B157FD859637AA65D6AA24EC9F90EBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Wikitude.WikitudeCamera/OnCameraErrorEvent
struct OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF  : public UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1
{
public:

public:
};


// Wikitude.WikitudeCamera/OnCameraOpenedEvent
struct OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// Wikitude.WikitudeCamera/OnSDKInitializedEvent
struct OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Wikitude.LivePreviewMode>
struct Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Video.VideoClip
struct VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthCameraName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resolutions_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};

// Wikitude.ColorCameraFrameMetadata
struct ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A 
{
public:
	// System.Single Wikitude.ColorCameraFrameMetadata::HorizontalFieldOfView
	float ___HorizontalFieldOfView_0;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::Width
	int32_t ___Width_1;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::Height
	int32_t ___Height_2;
	// Wikitude.CaptureDevicePosition Wikitude.ColorCameraFrameMetadata::CameraPosition
	int32_t ___CameraPosition_3;
	// Wikitude.FrameColorSpace Wikitude.ColorCameraFrameMetadata::ColorSpace
	int32_t ___ColorSpace_4;
	// System.Int32 Wikitude.ColorCameraFrameMetadata::TimestampScale
	int32_t ___TimestampScale_5;

public:
	inline static int32_t get_offset_of_HorizontalFieldOfView_0() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___HorizontalFieldOfView_0)); }
	inline float get_HorizontalFieldOfView_0() const { return ___HorizontalFieldOfView_0; }
	inline float* get_address_of_HorizontalFieldOfView_0() { return &___HorizontalFieldOfView_0; }
	inline void set_HorizontalFieldOfView_0(float value)
	{
		___HorizontalFieldOfView_0 = value;
	}

	inline static int32_t get_offset_of_Width_1() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___Width_1)); }
	inline int32_t get_Width_1() const { return ___Width_1; }
	inline int32_t* get_address_of_Width_1() { return &___Width_1; }
	inline void set_Width_1(int32_t value)
	{
		___Width_1 = value;
	}

	inline static int32_t get_offset_of_Height_2() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___Height_2)); }
	inline int32_t get_Height_2() const { return ___Height_2; }
	inline int32_t* get_address_of_Height_2() { return &___Height_2; }
	inline void set_Height_2(int32_t value)
	{
		___Height_2 = value;
	}

	inline static int32_t get_offset_of_CameraPosition_3() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___CameraPosition_3)); }
	inline int32_t get_CameraPosition_3() const { return ___CameraPosition_3; }
	inline int32_t* get_address_of_CameraPosition_3() { return &___CameraPosition_3; }
	inline void set_CameraPosition_3(int32_t value)
	{
		___CameraPosition_3 = value;
	}

	inline static int32_t get_offset_of_ColorSpace_4() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___ColorSpace_4)); }
	inline int32_t get_ColorSpace_4() const { return ___ColorSpace_4; }
	inline int32_t* get_address_of_ColorSpace_4() { return &___ColorSpace_4; }
	inline void set_ColorSpace_4(int32_t value)
	{
		___ColorSpace_4 = value;
	}

	inline static int32_t get_offset_of_TimestampScale_5() { return static_cast<int32_t>(offsetof(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A, ___TimestampScale_5)); }
	inline int32_t get_TimestampScale_5() const { return ___TimestampScale_5; }
	inline int32_t* get_address_of_TimestampScale_5() { return &___TimestampScale_5; }
	inline void set_TimestampScale_5(int32_t value)
	{
		___TimestampScale_5 = value;
	}
};


// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Int32>
struct Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.RenderTexture
struct RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.WebCamTexture
struct WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};


// Wikitude.BridgeFactory/PlatformBridgeConstructor
struct PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.BridgeFactory/WikitudeBridgeConstructor
struct WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.CameraFrame
struct CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D  : public RuntimeObject
{
public:
	// System.Int64 Wikitude.CameraFrame::_id
	int64_t ____id_0;
	// System.Int64 Wikitude.CameraFrame::_colorTimestamp
	int64_t ____colorTimestamp_1;
	// Wikitude.ColorCameraFrameMetadata Wikitude.CameraFrame::_colorMetadata
	ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  ____colorMetadata_2;
	// System.Collections.Generic.List`1<Wikitude.CameraFramePlane> Wikitude.CameraFrame::_colorData
	List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * ____colorData_3;

public:
	inline static int32_t get_offset_of__id_0() { return static_cast<int32_t>(offsetof(CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D, ____id_0)); }
	inline int64_t get__id_0() const { return ____id_0; }
	inline int64_t* get_address_of__id_0() { return &____id_0; }
	inline void set__id_0(int64_t value)
	{
		____id_0 = value;
	}

	inline static int32_t get_offset_of__colorTimestamp_1() { return static_cast<int32_t>(offsetof(CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D, ____colorTimestamp_1)); }
	inline int64_t get__colorTimestamp_1() const { return ____colorTimestamp_1; }
	inline int64_t* get_address_of__colorTimestamp_1() { return &____colorTimestamp_1; }
	inline void set__colorTimestamp_1(int64_t value)
	{
		____colorTimestamp_1 = value;
	}

	inline static int32_t get_offset_of__colorMetadata_2() { return static_cast<int32_t>(offsetof(CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D, ____colorMetadata_2)); }
	inline ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  get__colorMetadata_2() const { return ____colorMetadata_2; }
	inline ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A * get_address_of__colorMetadata_2() { return &____colorMetadata_2; }
	inline void set__colorMetadata_2(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  value)
	{
		____colorMetadata_2 = value;
	}

	inline static int32_t get_offset_of__colorData_3() { return static_cast<int32_t>(offsetof(CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D, ____colorData_3)); }
	inline List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * get__colorData_3() const { return ____colorData_3; }
	inline List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 ** get_address_of__colorData_3() { return &____colorData_3; }
	inline void set__colorData_3(List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * value)
	{
		____colorData_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____colorData_3), (void*)value);
	}
};


// Wikitude.TrackerManager/TargetCollectionResourceFailedCallback
struct TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback
struct TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.TrackerManager/TrackerInitializationErrorCallback
struct TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback
struct UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback
struct UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57  : public MulticastDelegate_t
{
public:

public:
};


// Wikitude.UnityFrame
struct UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758 
{
public:
	// System.Int64 Wikitude.UnityFrame::ID
	int64_t ___ID_0;
	// System.Int64 Wikitude.UnityFrame::Timestamp
	int64_t ___Timestamp_1;
	// Wikitude.ColorCameraFrameMetadata Wikitude.UnityFrame::ColorMetadata
	ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  ___ColorMetadata_2;
	// System.IntPtr Wikitude.UnityFrame::Planes
	intptr_t ___Planes_3;
	// System.Int32 Wikitude.UnityFrame::SizeOfPlaneData
	int32_t ___SizeOfPlaneData_4;
	// System.Int32 Wikitude.UnityFrame::PlaneCount
	int32_t ___PlaneCount_5;

public:
	inline static int32_t get_offset_of_ID_0() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___ID_0)); }
	inline int64_t get_ID_0() const { return ___ID_0; }
	inline int64_t* get_address_of_ID_0() { return &___ID_0; }
	inline void set_ID_0(int64_t value)
	{
		___ID_0 = value;
	}

	inline static int32_t get_offset_of_Timestamp_1() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___Timestamp_1)); }
	inline int64_t get_Timestamp_1() const { return ___Timestamp_1; }
	inline int64_t* get_address_of_Timestamp_1() { return &___Timestamp_1; }
	inline void set_Timestamp_1(int64_t value)
	{
		___Timestamp_1 = value;
	}

	inline static int32_t get_offset_of_ColorMetadata_2() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___ColorMetadata_2)); }
	inline ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  get_ColorMetadata_2() const { return ___ColorMetadata_2; }
	inline ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A * get_address_of_ColorMetadata_2() { return &___ColorMetadata_2; }
	inline void set_ColorMetadata_2(ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  value)
	{
		___ColorMetadata_2 = value;
	}

	inline static int32_t get_offset_of_Planes_3() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___Planes_3)); }
	inline intptr_t get_Planes_3() const { return ___Planes_3; }
	inline intptr_t* get_address_of_Planes_3() { return &___Planes_3; }
	inline void set_Planes_3(intptr_t value)
	{
		___Planes_3 = value;
	}

	inline static int32_t get_offset_of_SizeOfPlaneData_4() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___SizeOfPlaneData_4)); }
	inline int32_t get_SizeOfPlaneData_4() const { return ___SizeOfPlaneData_4; }
	inline int32_t* get_address_of_SizeOfPlaneData_4() { return &___SizeOfPlaneData_4; }
	inline void set_SizeOfPlaneData_4(int32_t value)
	{
		___SizeOfPlaneData_4 = value;
	}

	inline static int32_t get_offset_of_PlaneCount_5() { return static_cast<int32_t>(offsetof(UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758, ___PlaneCount_5)); }
	inline int32_t get_PlaneCount_5() const { return ___PlaneCount_5; }
	inline int32_t* get_address_of_PlaneCount_5() { return &___PlaneCount_5; }
	inline void set_PlaneCount_5(int32_t value)
	{
		___PlaneCount_5 = value;
	}
};


// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___prepareCompleted_4)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___loopPointReached_5)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___started_6)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_started_6() const { return ___started_6; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameDropped_7)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___errorReceived_8)); }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tF5863946928B48BE13146ED5FF70AC92678FE222 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___seekCompleted_9)); }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t5069D72E1ED46BD04F19D8D4534811B95A8E2308 * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_tDD815DAABFADDD98C8993B2A97A2FCE858266BC1 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2, ___frameReady_11)); }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// Wikitude.BackgroundCamera
struct BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Wikitude.WikitudeCamera Wikitude.BackgroundCamera::WikitudeCamera
	WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ___WikitudeCamera_4;
	// UnityEngine.Camera Wikitude.BackgroundCamera::_currentCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ____currentCamera_5;

public:
	inline static int32_t get_offset_of_WikitudeCamera_4() { return static_cast<int32_t>(offsetof(BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E, ___WikitudeCamera_4)); }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * get_WikitudeCamera_4() const { return ___WikitudeCamera_4; }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D ** get_address_of_WikitudeCamera_4() { return &___WikitudeCamera_4; }
	inline void set_WikitudeCamera_4(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * value)
	{
		___WikitudeCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WikitudeCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of__currentCamera_5() { return static_cast<int32_t>(offsetof(BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E, ____currentCamera_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get__currentCamera_5() const { return ____currentCamera_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of__currentCamera_5() { return &____currentCamera_5; }
	inline void set__currentCamera_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		____currentCamera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____currentCamera_5), (void*)value);
	}
};


// Wikitude.Plugin
struct Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String Wikitude.Plugin::_identifier
	String_t* ____identifier_4;
	// System.Boolean Wikitude.Plugin::_hasInputModule
	bool ____hasInputModule_5;
	// System.Single Wikitude.Plugin::_cameraToSurfaceAngle
	float ____cameraToSurfaceAngle_6;
	// Wikitude.Plugin/OnPluginErrorEvent Wikitude.Plugin::OnPluginError
	OnPluginErrorEvent_t0AA14AF9EB7422E944CC995FA064473274D75260 * ___OnPluginError_7;
	// Wikitude.Plugin/OnCameraFrameAvailableEvent Wikitude.Plugin::OnCameraFrameAvailable
	OnCameraFrameAvailableEvent_t524601D62BC34781CA60B7730AEF7673C6D38921 * ___OnCameraFrameAvailable_8;
	// System.Boolean Wikitude.Plugin::_requestsCameraFrameRendering
	bool ____requestsCameraFrameRendering_9;
	// System.Boolean Wikitude.Plugin::_invertFrame
	bool ____invertFrame_10;
	// Wikitude.Plugin/OnCameraReleasedEvent Wikitude.Plugin::OnCameraReleased
	OnCameraReleasedEvent_t85D57391C51FA5553A2C18588A83CF886B6A5B5D * ___OnCameraReleased_11;
	// Wikitude.Plugin/OnCameraReleaseFailedEvent Wikitude.Plugin::OnCameraReleaseFailed
	OnCameraReleaseFailedEvent_t77ADCA744342CEF1B21586422B5AD6D1691F4E1A * ___OnCameraReleaseFailed_12;
	// System.Boolean Wikitude.Plugin::_initialized
	bool ____initialized_13;
	// Wikitude.WikitudeCamera Wikitude.Plugin::_wikitudeCamera
	WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ____wikitudeCamera_14;

public:
	inline static int32_t get_offset_of__identifier_4() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____identifier_4)); }
	inline String_t* get__identifier_4() const { return ____identifier_4; }
	inline String_t** get_address_of__identifier_4() { return &____identifier_4; }
	inline void set__identifier_4(String_t* value)
	{
		____identifier_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identifier_4), (void*)value);
	}

	inline static int32_t get_offset_of__hasInputModule_5() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____hasInputModule_5)); }
	inline bool get__hasInputModule_5() const { return ____hasInputModule_5; }
	inline bool* get_address_of__hasInputModule_5() { return &____hasInputModule_5; }
	inline void set__hasInputModule_5(bool value)
	{
		____hasInputModule_5 = value;
	}

	inline static int32_t get_offset_of__cameraToSurfaceAngle_6() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____cameraToSurfaceAngle_6)); }
	inline float get__cameraToSurfaceAngle_6() const { return ____cameraToSurfaceAngle_6; }
	inline float* get_address_of__cameraToSurfaceAngle_6() { return &____cameraToSurfaceAngle_6; }
	inline void set__cameraToSurfaceAngle_6(float value)
	{
		____cameraToSurfaceAngle_6 = value;
	}

	inline static int32_t get_offset_of_OnPluginError_7() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ___OnPluginError_7)); }
	inline OnPluginErrorEvent_t0AA14AF9EB7422E944CC995FA064473274D75260 * get_OnPluginError_7() const { return ___OnPluginError_7; }
	inline OnPluginErrorEvent_t0AA14AF9EB7422E944CC995FA064473274D75260 ** get_address_of_OnPluginError_7() { return &___OnPluginError_7; }
	inline void set_OnPluginError_7(OnPluginErrorEvent_t0AA14AF9EB7422E944CC995FA064473274D75260 * value)
	{
		___OnPluginError_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPluginError_7), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraFrameAvailable_8() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ___OnCameraFrameAvailable_8)); }
	inline OnCameraFrameAvailableEvent_t524601D62BC34781CA60B7730AEF7673C6D38921 * get_OnCameraFrameAvailable_8() const { return ___OnCameraFrameAvailable_8; }
	inline OnCameraFrameAvailableEvent_t524601D62BC34781CA60B7730AEF7673C6D38921 ** get_address_of_OnCameraFrameAvailable_8() { return &___OnCameraFrameAvailable_8; }
	inline void set_OnCameraFrameAvailable_8(OnCameraFrameAvailableEvent_t524601D62BC34781CA60B7730AEF7673C6D38921 * value)
	{
		___OnCameraFrameAvailable_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraFrameAvailable_8), (void*)value);
	}

	inline static int32_t get_offset_of__requestsCameraFrameRendering_9() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____requestsCameraFrameRendering_9)); }
	inline bool get__requestsCameraFrameRendering_9() const { return ____requestsCameraFrameRendering_9; }
	inline bool* get_address_of__requestsCameraFrameRendering_9() { return &____requestsCameraFrameRendering_9; }
	inline void set__requestsCameraFrameRendering_9(bool value)
	{
		____requestsCameraFrameRendering_9 = value;
	}

	inline static int32_t get_offset_of__invertFrame_10() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____invertFrame_10)); }
	inline bool get__invertFrame_10() const { return ____invertFrame_10; }
	inline bool* get_address_of__invertFrame_10() { return &____invertFrame_10; }
	inline void set__invertFrame_10(bool value)
	{
		____invertFrame_10 = value;
	}

	inline static int32_t get_offset_of_OnCameraReleased_11() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ___OnCameraReleased_11)); }
	inline OnCameraReleasedEvent_t85D57391C51FA5553A2C18588A83CF886B6A5B5D * get_OnCameraReleased_11() const { return ___OnCameraReleased_11; }
	inline OnCameraReleasedEvent_t85D57391C51FA5553A2C18588A83CF886B6A5B5D ** get_address_of_OnCameraReleased_11() { return &___OnCameraReleased_11; }
	inline void set_OnCameraReleased_11(OnCameraReleasedEvent_t85D57391C51FA5553A2C18588A83CF886B6A5B5D * value)
	{
		___OnCameraReleased_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraReleased_11), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraReleaseFailed_12() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ___OnCameraReleaseFailed_12)); }
	inline OnCameraReleaseFailedEvent_t77ADCA744342CEF1B21586422B5AD6D1691F4E1A * get_OnCameraReleaseFailed_12() const { return ___OnCameraReleaseFailed_12; }
	inline OnCameraReleaseFailedEvent_t77ADCA744342CEF1B21586422B5AD6D1691F4E1A ** get_address_of_OnCameraReleaseFailed_12() { return &___OnCameraReleaseFailed_12; }
	inline void set_OnCameraReleaseFailed_12(OnCameraReleaseFailedEvent_t77ADCA744342CEF1B21586422B5AD6D1691F4E1A * value)
	{
		___OnCameraReleaseFailed_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraReleaseFailed_12), (void*)value);
	}

	inline static int32_t get_offset_of__initialized_13() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____initialized_13)); }
	inline bool get__initialized_13() const { return ____initialized_13; }
	inline bool* get_address_of__initialized_13() { return &____initialized_13; }
	inline void set__initialized_13(bool value)
	{
		____initialized_13 = value;
	}

	inline static int32_t get_offset_of__wikitudeCamera_14() { return static_cast<int32_t>(offsetof(Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201, ____wikitudeCamera_14)); }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * get__wikitudeCamera_14() const { return ____wikitudeCamera_14; }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D ** get_address_of__wikitudeCamera_14() { return &____wikitudeCamera_14; }
	inline void set__wikitudeCamera_14(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * value)
	{
		____wikitudeCamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wikitudeCamera_14), (void*)value);
	}
};


// Wikitude.PluginManager
struct PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Wikitude.WikitudeCamera Wikitude.PluginManager::_wikitude
	WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ____wikitude_5;
	// System.Collections.Generic.List`1<Wikitude.Plugin> Wikitude.PluginManager::_plugins
	List_1_t56EF75346EA6855E31B79592F1C1986C06AD76C5 * ____plugins_6;

public:
	inline static int32_t get_offset_of__wikitude_5() { return static_cast<int32_t>(offsetof(PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D, ____wikitude_5)); }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * get__wikitude_5() const { return ____wikitude_5; }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D ** get_address_of__wikitude_5() { return &____wikitude_5; }
	inline void set__wikitude_5(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * value)
	{
		____wikitude_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wikitude_5), (void*)value);
	}

	inline static int32_t get_offset_of__plugins_6() { return static_cast<int32_t>(offsetof(PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D, ____plugins_6)); }
	inline List_1_t56EF75346EA6855E31B79592F1C1986C06AD76C5 * get__plugins_6() const { return ____plugins_6; }
	inline List_1_t56EF75346EA6855E31B79592F1C1986C06AD76C5 ** get_address_of__plugins_6() { return &____plugins_6; }
	inline void set__plugins_6(List_1_t56EF75346EA6855E31B79592F1C1986C06AD76C5 * value)
	{
		____plugins_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____plugins_6), (void*)value);
	}
};

struct PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D_StaticFields
{
public:
	// Wikitude.PluginManager Wikitude.PluginManager::_instance
	PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * ____instance_4;

public:
	inline static int32_t get_offset_of__instance_4() { return static_cast<int32_t>(offsetof(PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D_StaticFields, ____instance_4)); }
	inline PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * get__instance_4() const { return ____instance_4; }
	inline PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D ** get_address_of__instance_4() { return &____instance_4; }
	inline void set__instance_4(PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * value)
	{
		____instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_4), (void*)value);
	}
};


// Wikitude.TrackerBehaviour
struct TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Wikitude.TrackerManager Wikitude.TrackerBehaviour::_manager
	TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * ____manager_4;
	// System.Collections.Generic.Dictionary`2<Wikitude.Trackable,System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget>> Wikitude.TrackerBehaviour::_registeredTrackables
	Dictionary_2_tA58F088EE750331AA0DDFDA4D7B75DDF2A536199 * ____registeredTrackables_5;
	// Wikitude.RecognizedTarget Wikitude.TrackerBehaviour::_anchorTarget
	RecognizedTarget_t5C6408C405095914A960081CC86AAAE0742E084C * ____anchorTarget_6;
	// UnityEngine.Vector3 Wikitude.TrackerBehaviour::_anchorPositionOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____anchorPositionOffset_7;
	// UnityEngine.Quaternion Wikitude.TrackerBehaviour::_anchorRotationOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____anchorRotationOffset_8;
	// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget> Wikitude.TrackerBehaviour::_cachedTrackedTargets
	HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * ____cachedTrackedTargets_9;
	// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget> Wikitude.TrackerBehaviour::_cachedTargetsToAdd
	HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * ____cachedTargetsToAdd_10;
	// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget> Wikitude.TrackerBehaviour::_cachedTargetsToRemove
	HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * ____cachedTargetsToRemove_11;
	// System.Boolean Wikitude.TrackerBehaviour::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_12;
	// UnityEngine.Camera Wikitude.TrackerBehaviour::_sceneCamera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ____sceneCamera_13;
	// UnityEngine.Vector3 Wikitude.TrackerBehaviour::_initialSceneCameraPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____initialSceneCameraPosition_14;
	// UnityEngine.Quaternion Wikitude.TrackerBehaviour::_initialSceneCameraRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____initialSceneCameraRotation_15;
	// Wikitude.WikitudeCamera Wikitude.TrackerBehaviour::_wikitudeCamera
	WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ____wikitudeCamera_16;
	// Wikitude.TrackerBehaviour/OnTargetsLoadedEvent Wikitude.TrackerBehaviour::OnTargetsLoaded
	OnTargetsLoadedEvent_tB42CCE818F682216D10344100D75CABD1FA05A54 * ___OnTargetsLoaded_17;
	// Wikitude.TrackerBehaviour/OnErrorLoadingTargetsEvent Wikitude.TrackerBehaviour::OnErrorLoadingTargets
	OnErrorLoadingTargetsEvent_t5BF8D7CC626102559DA2D7FA6FF0BCB63C689684 * ___OnErrorLoadingTargets_18;
	// Wikitude.TrackerBehaviour/OnInitializationErrorEvent Wikitude.TrackerBehaviour::OnInitializationError
	OnInitializationErrorEvent_t0704E68E6CC2F5AC005B32B3C30C6DB8C8F7E324 * ___OnInitializationError_19;

public:
	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____manager_4)); }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * get__manager_4() const { return ____manager_4; }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____manager_4), (void*)value);
	}

	inline static int32_t get_offset_of__registeredTrackables_5() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____registeredTrackables_5)); }
	inline Dictionary_2_tA58F088EE750331AA0DDFDA4D7B75DDF2A536199 * get__registeredTrackables_5() const { return ____registeredTrackables_5; }
	inline Dictionary_2_tA58F088EE750331AA0DDFDA4D7B75DDF2A536199 ** get_address_of__registeredTrackables_5() { return &____registeredTrackables_5; }
	inline void set__registeredTrackables_5(Dictionary_2_tA58F088EE750331AA0DDFDA4D7B75DDF2A536199 * value)
	{
		____registeredTrackables_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredTrackables_5), (void*)value);
	}

	inline static int32_t get_offset_of__anchorTarget_6() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____anchorTarget_6)); }
	inline RecognizedTarget_t5C6408C405095914A960081CC86AAAE0742E084C * get__anchorTarget_6() const { return ____anchorTarget_6; }
	inline RecognizedTarget_t5C6408C405095914A960081CC86AAAE0742E084C ** get_address_of__anchorTarget_6() { return &____anchorTarget_6; }
	inline void set__anchorTarget_6(RecognizedTarget_t5C6408C405095914A960081CC86AAAE0742E084C * value)
	{
		____anchorTarget_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____anchorTarget_6), (void*)value);
	}

	inline static int32_t get_offset_of__anchorPositionOffset_7() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____anchorPositionOffset_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__anchorPositionOffset_7() const { return ____anchorPositionOffset_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__anchorPositionOffset_7() { return &____anchorPositionOffset_7; }
	inline void set__anchorPositionOffset_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____anchorPositionOffset_7 = value;
	}

	inline static int32_t get_offset_of__anchorRotationOffset_8() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____anchorRotationOffset_8)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__anchorRotationOffset_8() const { return ____anchorRotationOffset_8; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__anchorRotationOffset_8() { return &____anchorRotationOffset_8; }
	inline void set__anchorRotationOffset_8(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____anchorRotationOffset_8 = value;
	}

	inline static int32_t get_offset_of__cachedTrackedTargets_9() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____cachedTrackedTargets_9)); }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * get__cachedTrackedTargets_9() const { return ____cachedTrackedTargets_9; }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE ** get_address_of__cachedTrackedTargets_9() { return &____cachedTrackedTargets_9; }
	inline void set__cachedTrackedTargets_9(HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * value)
	{
		____cachedTrackedTargets_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedTrackedTargets_9), (void*)value);
	}

	inline static int32_t get_offset_of__cachedTargetsToAdd_10() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____cachedTargetsToAdd_10)); }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * get__cachedTargetsToAdd_10() const { return ____cachedTargetsToAdd_10; }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE ** get_address_of__cachedTargetsToAdd_10() { return &____cachedTargetsToAdd_10; }
	inline void set__cachedTargetsToAdd_10(HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * value)
	{
		____cachedTargetsToAdd_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedTargetsToAdd_10), (void*)value);
	}

	inline static int32_t get_offset_of__cachedTargetsToRemove_11() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____cachedTargetsToRemove_11)); }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * get__cachedTargetsToRemove_11() const { return ____cachedTargetsToRemove_11; }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE ** get_address_of__cachedTargetsToRemove_11() { return &____cachedTargetsToRemove_11; }
	inline void set__cachedTargetsToRemove_11(HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * value)
	{
		____cachedTargetsToRemove_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedTargetsToRemove_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInitializedU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ___U3CInitializedU3Ek__BackingField_12)); }
	inline bool get_U3CInitializedU3Ek__BackingField_12() const { return ___U3CInitializedU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CInitializedU3Ek__BackingField_12() { return &___U3CInitializedU3Ek__BackingField_12; }
	inline void set_U3CInitializedU3Ek__BackingField_12(bool value)
	{
		___U3CInitializedU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of__sceneCamera_13() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____sceneCamera_13)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get__sceneCamera_13() const { return ____sceneCamera_13; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of__sceneCamera_13() { return &____sceneCamera_13; }
	inline void set__sceneCamera_13(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		____sceneCamera_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sceneCamera_13), (void*)value);
	}

	inline static int32_t get_offset_of__initialSceneCameraPosition_14() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____initialSceneCameraPosition_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__initialSceneCameraPosition_14() const { return ____initialSceneCameraPosition_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__initialSceneCameraPosition_14() { return &____initialSceneCameraPosition_14; }
	inline void set__initialSceneCameraPosition_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____initialSceneCameraPosition_14 = value;
	}

	inline static int32_t get_offset_of__initialSceneCameraRotation_15() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____initialSceneCameraRotation_15)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__initialSceneCameraRotation_15() const { return ____initialSceneCameraRotation_15; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__initialSceneCameraRotation_15() { return &____initialSceneCameraRotation_15; }
	inline void set__initialSceneCameraRotation_15(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____initialSceneCameraRotation_15 = value;
	}

	inline static int32_t get_offset_of__wikitudeCamera_16() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ____wikitudeCamera_16)); }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * get__wikitudeCamera_16() const { return ____wikitudeCamera_16; }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D ** get_address_of__wikitudeCamera_16() { return &____wikitudeCamera_16; }
	inline void set__wikitudeCamera_16(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * value)
	{
		____wikitudeCamera_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wikitudeCamera_16), (void*)value);
	}

	inline static int32_t get_offset_of_OnTargetsLoaded_17() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ___OnTargetsLoaded_17)); }
	inline OnTargetsLoadedEvent_tB42CCE818F682216D10344100D75CABD1FA05A54 * get_OnTargetsLoaded_17() const { return ___OnTargetsLoaded_17; }
	inline OnTargetsLoadedEvent_tB42CCE818F682216D10344100D75CABD1FA05A54 ** get_address_of_OnTargetsLoaded_17() { return &___OnTargetsLoaded_17; }
	inline void set_OnTargetsLoaded_17(OnTargetsLoadedEvent_tB42CCE818F682216D10344100D75CABD1FA05A54 * value)
	{
		___OnTargetsLoaded_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTargetsLoaded_17), (void*)value);
	}

	inline static int32_t get_offset_of_OnErrorLoadingTargets_18() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ___OnErrorLoadingTargets_18)); }
	inline OnErrorLoadingTargetsEvent_t5BF8D7CC626102559DA2D7FA6FF0BCB63C689684 * get_OnErrorLoadingTargets_18() const { return ___OnErrorLoadingTargets_18; }
	inline OnErrorLoadingTargetsEvent_t5BF8D7CC626102559DA2D7FA6FF0BCB63C689684 ** get_address_of_OnErrorLoadingTargets_18() { return &___OnErrorLoadingTargets_18; }
	inline void set_OnErrorLoadingTargets_18(OnErrorLoadingTargetsEvent_t5BF8D7CC626102559DA2D7FA6FF0BCB63C689684 * value)
	{
		___OnErrorLoadingTargets_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnErrorLoadingTargets_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnInitializationError_19() { return static_cast<int32_t>(offsetof(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048, ___OnInitializationError_19)); }
	inline OnInitializationErrorEvent_t0704E68E6CC2F5AC005B32B3C30C6DB8C8F7E324 * get_OnInitializationError_19() const { return ___OnInitializationError_19; }
	inline OnInitializationErrorEvent_t0704E68E6CC2F5AC005B32B3C30C6DB8C8F7E324 ** get_address_of_OnInitializationError_19() { return &___OnInitializationError_19; }
	inline void set_OnInitializationError_19(OnInitializationErrorEvent_t0704E68E6CC2F5AC005B32B3C30C6DB8C8F7E324 * value)
	{
		___OnInitializationError_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnInitializationError_19), (void*)value);
	}
};


// Wikitude.TrackerManager
struct TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int64 Wikitude.TrackerManager::_targetCollectionResourceId
	int64_t ____targetCollectionResourceId_4;
	// System.Int64 Wikitude.TrackerManager::_cloudRecognitionServiceId
	int64_t ____cloudRecognitionServiceId_5;
	// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.TargetCollectionResource> Wikitude.TrackerManager::_registeredTargetCollectionResources
	Dictionary_2_t3D6D03831DB29A84C527AC32736662B1C1BFF79F * ____registeredTargetCollectionResources_6;
	// System.Collections.Generic.Dictionary`2<System.Int64,Wikitude.CloudRecognitionService> Wikitude.TrackerManager::_registeredCloudRecognitionServices
	Dictionary_2_t91CEB5E535A2E94F0A63AF14BF389D742AB9CFFA * ____registeredCloudRecognitionServices_7;
	// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget> Wikitude.TrackerManager::_recognizedTargets
	HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * ____recognizedTargets_8;
	// System.Collections.Generic.HashSet`1<Wikitude.RecognizedTarget> Wikitude.TrackerManager::_updatedTargets
	HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * ____updatedTargets_9;
	// System.String[] Wikitude.TrackerManager::_cachedSplitString
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____cachedSplitString_10;
	// System.Collections.Generic.HashSet`1<Wikitude.Plane> Wikitude.TrackerManager::_recognizedPlanes
	HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * ____recognizedPlanes_11;
	// System.Collections.Generic.HashSet`1<Wikitude.Plane> Wikitude.TrackerManager::_updatedPlanes
	HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * ____updatedPlanes_12;
	// Wikitude.TrackerBehaviour Wikitude.TrackerManager::_activeTracker
	TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * ____activeTracker_13;
	// Wikitude.WikitudeCamera Wikitude.TrackerManager::_wikitudeCamera
	WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ____wikitudeCamera_14;
	// Wikitude.TrackerManagerQueue Wikitude.TrackerManager::_queue
	TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * ____queue_15;

public:
	inline static int32_t get_offset_of__targetCollectionResourceId_4() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____targetCollectionResourceId_4)); }
	inline int64_t get__targetCollectionResourceId_4() const { return ____targetCollectionResourceId_4; }
	inline int64_t* get_address_of__targetCollectionResourceId_4() { return &____targetCollectionResourceId_4; }
	inline void set__targetCollectionResourceId_4(int64_t value)
	{
		____targetCollectionResourceId_4 = value;
	}

	inline static int32_t get_offset_of__cloudRecognitionServiceId_5() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____cloudRecognitionServiceId_5)); }
	inline int64_t get__cloudRecognitionServiceId_5() const { return ____cloudRecognitionServiceId_5; }
	inline int64_t* get_address_of__cloudRecognitionServiceId_5() { return &____cloudRecognitionServiceId_5; }
	inline void set__cloudRecognitionServiceId_5(int64_t value)
	{
		____cloudRecognitionServiceId_5 = value;
	}

	inline static int32_t get_offset_of__registeredTargetCollectionResources_6() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____registeredTargetCollectionResources_6)); }
	inline Dictionary_2_t3D6D03831DB29A84C527AC32736662B1C1BFF79F * get__registeredTargetCollectionResources_6() const { return ____registeredTargetCollectionResources_6; }
	inline Dictionary_2_t3D6D03831DB29A84C527AC32736662B1C1BFF79F ** get_address_of__registeredTargetCollectionResources_6() { return &____registeredTargetCollectionResources_6; }
	inline void set__registeredTargetCollectionResources_6(Dictionary_2_t3D6D03831DB29A84C527AC32736662B1C1BFF79F * value)
	{
		____registeredTargetCollectionResources_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredTargetCollectionResources_6), (void*)value);
	}

	inline static int32_t get_offset_of__registeredCloudRecognitionServices_7() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____registeredCloudRecognitionServices_7)); }
	inline Dictionary_2_t91CEB5E535A2E94F0A63AF14BF389D742AB9CFFA * get__registeredCloudRecognitionServices_7() const { return ____registeredCloudRecognitionServices_7; }
	inline Dictionary_2_t91CEB5E535A2E94F0A63AF14BF389D742AB9CFFA ** get_address_of__registeredCloudRecognitionServices_7() { return &____registeredCloudRecognitionServices_7; }
	inline void set__registeredCloudRecognitionServices_7(Dictionary_2_t91CEB5E535A2E94F0A63AF14BF389D742AB9CFFA * value)
	{
		____registeredCloudRecognitionServices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredCloudRecognitionServices_7), (void*)value);
	}

	inline static int32_t get_offset_of__recognizedTargets_8() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____recognizedTargets_8)); }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * get__recognizedTargets_8() const { return ____recognizedTargets_8; }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE ** get_address_of__recognizedTargets_8() { return &____recognizedTargets_8; }
	inline void set__recognizedTargets_8(HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * value)
	{
		____recognizedTargets_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recognizedTargets_8), (void*)value);
	}

	inline static int32_t get_offset_of__updatedTargets_9() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____updatedTargets_9)); }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * get__updatedTargets_9() const { return ____updatedTargets_9; }
	inline HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE ** get_address_of__updatedTargets_9() { return &____updatedTargets_9; }
	inline void set__updatedTargets_9(HashSet_1_tFC8C4B0FBB92A36EDE2C421DFA6E5D1EAB5AF1AE * value)
	{
		____updatedTargets_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updatedTargets_9), (void*)value);
	}

	inline static int32_t get_offset_of__cachedSplitString_10() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____cachedSplitString_10)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__cachedSplitString_10() const { return ____cachedSplitString_10; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__cachedSplitString_10() { return &____cachedSplitString_10; }
	inline void set__cachedSplitString_10(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____cachedSplitString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cachedSplitString_10), (void*)value);
	}

	inline static int32_t get_offset_of__recognizedPlanes_11() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____recognizedPlanes_11)); }
	inline HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * get__recognizedPlanes_11() const { return ____recognizedPlanes_11; }
	inline HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 ** get_address_of__recognizedPlanes_11() { return &____recognizedPlanes_11; }
	inline void set__recognizedPlanes_11(HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * value)
	{
		____recognizedPlanes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recognizedPlanes_11), (void*)value);
	}

	inline static int32_t get_offset_of__updatedPlanes_12() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____updatedPlanes_12)); }
	inline HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * get__updatedPlanes_12() const { return ____updatedPlanes_12; }
	inline HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 ** get_address_of__updatedPlanes_12() { return &____updatedPlanes_12; }
	inline void set__updatedPlanes_12(HashSet_1_t4709B5E52A72029DF89E9C1CB89572313C8812D6 * value)
	{
		____updatedPlanes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____updatedPlanes_12), (void*)value);
	}

	inline static int32_t get_offset_of__activeTracker_13() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____activeTracker_13)); }
	inline TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * get__activeTracker_13() const { return ____activeTracker_13; }
	inline TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 ** get_address_of__activeTracker_13() { return &____activeTracker_13; }
	inline void set__activeTracker_13(TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * value)
	{
		____activeTracker_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeTracker_13), (void*)value);
	}

	inline static int32_t get_offset_of__wikitudeCamera_14() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____wikitudeCamera_14)); }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * get__wikitudeCamera_14() const { return ____wikitudeCamera_14; }
	inline WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D ** get_address_of__wikitudeCamera_14() { return &____wikitudeCamera_14; }
	inline void set__wikitudeCamera_14(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * value)
	{
		____wikitudeCamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wikitudeCamera_14), (void*)value);
	}

	inline static int32_t get_offset_of__queue_15() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400, ____queue_15)); }
	inline TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * get__queue_15() const { return ____queue_15; }
	inline TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E ** get_address_of__queue_15() { return &____queue_15; }
	inline void set__queue_15(TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * value)
	{
		____queue_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____queue_15), (void*)value);
	}
};

struct TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_StaticFields
{
public:
	// Wikitude.TrackerManager Wikitude.TrackerManager::Instance
	TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * ___Instance_16;

public:
	inline static int32_t get_offset_of_Instance_16() { return static_cast<int32_t>(offsetof(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_StaticFields, ___Instance_16)); }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * get_Instance_16() const { return ___Instance_16; }
	inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 ** get_address_of_Instance_16() { return &___Instance_16; }
	inline void set_Instance_16(TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * value)
	{
		___Instance_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Instance_16), (void*)value);
	}
};


// Wikitude.WikitudeCamera
struct WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Wikitude.WikitudeCamera/OnSDKInitializedEvent Wikitude.WikitudeCamera::OnSDKInitialized
	OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * ___OnSDKInitialized_4;
	// System.String Wikitude.WikitudeCamera::_WikitudeLicenseKey
	String_t* ____WikitudeLicenseKey_5;
	// System.Boolean Wikitude.WikitudeCamera::_enableCameraRendering
	bool ____enableCameraRendering_6;
	// System.Boolean Wikitude.WikitudeCamera::_staticCamera
	bool ____staticCamera_7;
	// UnityEngine.Vector3 Wikitude.WikitudeCamera::_calibrationPositionOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____calibrationPositionOffset_8;
	// UnityEngine.Quaternion Wikitude.WikitudeCamera::_calibrationRotationOffset
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____calibrationRotationOffset_9;
	// System.Boolean Wikitude.WikitudeCamera::_ignoreTrackableScale
	bool ____ignoreTrackableScale_10;
	// System.Boolean Wikitude.WikitudeCamera::_printErrorsToConsole
	bool ____printErrorsToConsole_11;
	// Wikitude.WikitudeBridge Wikitude.WikitudeCamera::_bridge
	WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * ____bridge_12;
	// System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour> Wikitude.WikitudeCamera::_registeredTrackers
	HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * ____registeredTrackers_13;
	// UnityEngine.GameObject Wikitude.WikitudeCamera::_backgroundCamera
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____backgroundCamera_14;
	// UnityEngine.Camera Wikitude.WikitudeCamera::_sceneCameraComponent
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ____sceneCameraComponent_15;
	// System.Boolean Wikitude.WikitudeCamera::<InvertCulling>k__BackingField
	bool ___U3CInvertCullingU3Ek__BackingField_16;
	// System.Boolean Wikitude.WikitudeCamera::<FlipHorizontal>k__BackingField
	bool ___U3CFlipHorizontalU3Ek__BackingField_17;
	// UnityEngine.Vector3 Wikitude.WikitudeCamera::_mirroredScaleVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____mirroredScaleVector_18;
	// System.Boolean Wikitude.WikitudeCamera::_wasCullingInverted
	bool ____wasCullingInverted_19;
	// System.Boolean Wikitude.WikitudeCamera::_platformCameraInitialized
	bool ____platformCameraInitialized_20;
	// System.Boolean Wikitude.WikitudeCamera::_initialized
	bool ____initialized_21;
	// Wikitude.WikitudeCamera/OnCameraErrorEvent Wikitude.WikitudeCamera::OnCameraError
	OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * ___OnCameraError_22;
	// Wikitude.WikitudeCamera/OnCameraOpenedEvent Wikitude.WikitudeCamera::OnCameraOpened
	OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * ___OnCameraOpened_23;
	// System.Action`1<System.Int32> Wikitude.WikitudeCamera::_cameraListCallback
	Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ____cameraListCallback_24;
	// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::_cachedDevicePosition
	int32_t ____cachedDevicePosition_25;
	// System.Int32 Wikitude.WikitudeCamera::_cachedActiveCameraIndex
	int32_t ____cachedActiveCameraIndex_26;
	// Wikitude.CaptureFocusMode Wikitude.WikitudeCamera::_cachedFocusMode
	int32_t ____cachedFocusMode_27;
	// Wikitude.CaptureDeviceResolution Wikitude.WikitudeCamera::_desiredDeviceResolution
	int32_t ____desiredDeviceResolution_28;
	// Wikitude.CaptureDeviceFramerate Wikitude.WikitudeCamera::_desiredDeviceFramerate
	int32_t ____desiredDeviceFramerate_29;
	// System.Boolean Wikitude.WikitudeCamera::_enableCamera2
	bool ____enableCamera2_30;
	// Wikitude.Camera2SupportLevel Wikitude.WikitudeCamera::_camera2SupportLevel
	int32_t ____camera2SupportLevel_31;
	// System.Boolean Wikitude.WikitudeCamera::_enableLivePreview
	bool ____enableLivePreview_32;
	// Wikitude.LivePreviewMode Wikitude.WikitudeCamera::_livePreviewMode
	int32_t ____livePreviewMode_33;
	// UnityEngine.Texture2D Wikitude.WikitudeCamera::_staticImage
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____staticImage_34;
	// System.String Wikitude.WikitudeCamera::_webCamName
	String_t* ____webCamName_35;
	// System.Boolean Wikitude.WikitudeCamera::_webCamIsMirrored
	bool ____webCamIsMirrored_36;
	// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::_remoteCameraPosition
	int32_t ____remoteCameraPosition_37;
	// System.Single Wikitude.WikitudeCamera::_cameraToHorizonAngle
	float ____cameraToHorizonAngle_38;
	// UnityEngine.Video.VideoClip Wikitude.WikitudeCamera::_videoClip
	VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * ____videoClip_39;
	// System.Boolean Wikitude.WikitudeCamera::_videoLoop
	bool ____videoLoop_40;
	// System.Single Wikitude.WikitudeCamera::_videoSpeed
	float ____videoSpeed_41;
	// System.Boolean Wikitude.WikitudeCamera::<ForceResendData>k__BackingField
	bool ___U3CForceResendDataU3Ek__BackingField_42;
	// System.Nullable`1<Wikitude.LivePreviewMode> Wikitude.WikitudeCamera::_previousMode
	Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  ____previousMode_43;
	// UnityEngine.WebCamTexture Wikitude.WikitudeCamera::_feed
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ____feed_44;
	// UnityEngine.Color32[] Wikitude.WikitudeCamera::_pixels
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ____pixels_45;
	// System.Byte[] Wikitude.WikitudeCamera::_bytes
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ____bytes_46;
	// System.UInt64 Wikitude.WikitudeCamera::_frameIndex
	uint64_t ____frameIndex_47;
	// System.Int64 Wikitude.WikitudeCamera::_renderFrameIndex
	int64_t ____renderFrameIndex_48;
	// Wikitude.RingBuffer Wikitude.WikitudeCamera::_ringBuffer
	RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * ____ringBuffer_49;
	// System.Int32 Wikitude.WikitudeCamera::_previousWidth
	int32_t ____previousWidth_50;
	// System.Int32 Wikitude.WikitudeCamera::_previousHeight
	int32_t ____previousHeight_51;
	// UnityEngine.Video.VideoPlayer Wikitude.WikitudeCamera::_videoPlayer
	VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ____videoPlayer_52;
	// System.Collections.Generic.HashSet`1<Wikitude.Plugin> Wikitude.WikitudeCamera::_plugins
	HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * ____plugins_53;
	// System.Boolean Wikitude.WikitudeCamera::_hasInputPlugins
	bool ____hasInputPlugins_54;
	// System.Boolean Wikitude.WikitudeCamera::_requestsCameraFrameRendering
	bool ____requestsCameraFrameRendering_55;
	// UnityEngine.Texture2D Wikitude.WikitudeCamera::_inputPluginTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ____inputPluginTexture_56;

public:
	inline static int32_t get_offset_of_OnSDKInitialized_4() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___OnSDKInitialized_4)); }
	inline OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * get_OnSDKInitialized_4() const { return ___OnSDKInitialized_4; }
	inline OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 ** get_address_of_OnSDKInitialized_4() { return &___OnSDKInitialized_4; }
	inline void set_OnSDKInitialized_4(OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * value)
	{
		___OnSDKInitialized_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSDKInitialized_4), (void*)value);
	}

	inline static int32_t get_offset_of__WikitudeLicenseKey_5() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____WikitudeLicenseKey_5)); }
	inline String_t* get__WikitudeLicenseKey_5() const { return ____WikitudeLicenseKey_5; }
	inline String_t** get_address_of__WikitudeLicenseKey_5() { return &____WikitudeLicenseKey_5; }
	inline void set__WikitudeLicenseKey_5(String_t* value)
	{
		____WikitudeLicenseKey_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WikitudeLicenseKey_5), (void*)value);
	}

	inline static int32_t get_offset_of__enableCameraRendering_6() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____enableCameraRendering_6)); }
	inline bool get__enableCameraRendering_6() const { return ____enableCameraRendering_6; }
	inline bool* get_address_of__enableCameraRendering_6() { return &____enableCameraRendering_6; }
	inline void set__enableCameraRendering_6(bool value)
	{
		____enableCameraRendering_6 = value;
	}

	inline static int32_t get_offset_of__staticCamera_7() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____staticCamera_7)); }
	inline bool get__staticCamera_7() const { return ____staticCamera_7; }
	inline bool* get_address_of__staticCamera_7() { return &____staticCamera_7; }
	inline void set__staticCamera_7(bool value)
	{
		____staticCamera_7 = value;
	}

	inline static int32_t get_offset_of__calibrationPositionOffset_8() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____calibrationPositionOffset_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__calibrationPositionOffset_8() const { return ____calibrationPositionOffset_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__calibrationPositionOffset_8() { return &____calibrationPositionOffset_8; }
	inline void set__calibrationPositionOffset_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____calibrationPositionOffset_8 = value;
	}

	inline static int32_t get_offset_of__calibrationRotationOffset_9() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____calibrationRotationOffset_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__calibrationRotationOffset_9() const { return ____calibrationRotationOffset_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__calibrationRotationOffset_9() { return &____calibrationRotationOffset_9; }
	inline void set__calibrationRotationOffset_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____calibrationRotationOffset_9 = value;
	}

	inline static int32_t get_offset_of__ignoreTrackableScale_10() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____ignoreTrackableScale_10)); }
	inline bool get__ignoreTrackableScale_10() const { return ____ignoreTrackableScale_10; }
	inline bool* get_address_of__ignoreTrackableScale_10() { return &____ignoreTrackableScale_10; }
	inline void set__ignoreTrackableScale_10(bool value)
	{
		____ignoreTrackableScale_10 = value;
	}

	inline static int32_t get_offset_of__printErrorsToConsole_11() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____printErrorsToConsole_11)); }
	inline bool get__printErrorsToConsole_11() const { return ____printErrorsToConsole_11; }
	inline bool* get_address_of__printErrorsToConsole_11() { return &____printErrorsToConsole_11; }
	inline void set__printErrorsToConsole_11(bool value)
	{
		____printErrorsToConsole_11 = value;
	}

	inline static int32_t get_offset_of__bridge_12() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____bridge_12)); }
	inline WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * get__bridge_12() const { return ____bridge_12; }
	inline WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 ** get_address_of__bridge_12() { return &____bridge_12; }
	inline void set__bridge_12(WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * value)
	{
		____bridge_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bridge_12), (void*)value);
	}

	inline static int32_t get_offset_of__registeredTrackers_13() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____registeredTrackers_13)); }
	inline HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * get__registeredTrackers_13() const { return ____registeredTrackers_13; }
	inline HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B ** get_address_of__registeredTrackers_13() { return &____registeredTrackers_13; }
	inline void set__registeredTrackers_13(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * value)
	{
		____registeredTrackers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____registeredTrackers_13), (void*)value);
	}

	inline static int32_t get_offset_of__backgroundCamera_14() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____backgroundCamera_14)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__backgroundCamera_14() const { return ____backgroundCamera_14; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__backgroundCamera_14() { return &____backgroundCamera_14; }
	inline void set__backgroundCamera_14(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____backgroundCamera_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____backgroundCamera_14), (void*)value);
	}

	inline static int32_t get_offset_of__sceneCameraComponent_15() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____sceneCameraComponent_15)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get__sceneCameraComponent_15() const { return ____sceneCameraComponent_15; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of__sceneCameraComponent_15() { return &____sceneCameraComponent_15; }
	inline void set__sceneCameraComponent_15(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		____sceneCameraComponent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sceneCameraComponent_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInvertCullingU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___U3CInvertCullingU3Ek__BackingField_16)); }
	inline bool get_U3CInvertCullingU3Ek__BackingField_16() const { return ___U3CInvertCullingU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CInvertCullingU3Ek__BackingField_16() { return &___U3CInvertCullingU3Ek__BackingField_16; }
	inline void set_U3CInvertCullingU3Ek__BackingField_16(bool value)
	{
		___U3CInvertCullingU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CFlipHorizontalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___U3CFlipHorizontalU3Ek__BackingField_17)); }
	inline bool get_U3CFlipHorizontalU3Ek__BackingField_17() const { return ___U3CFlipHorizontalU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CFlipHorizontalU3Ek__BackingField_17() { return &___U3CFlipHorizontalU3Ek__BackingField_17; }
	inline void set_U3CFlipHorizontalU3Ek__BackingField_17(bool value)
	{
		___U3CFlipHorizontalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of__mirroredScaleVector_18() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____mirroredScaleVector_18)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__mirroredScaleVector_18() const { return ____mirroredScaleVector_18; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__mirroredScaleVector_18() { return &____mirroredScaleVector_18; }
	inline void set__mirroredScaleVector_18(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____mirroredScaleVector_18 = value;
	}

	inline static int32_t get_offset_of__wasCullingInverted_19() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____wasCullingInverted_19)); }
	inline bool get__wasCullingInverted_19() const { return ____wasCullingInverted_19; }
	inline bool* get_address_of__wasCullingInverted_19() { return &____wasCullingInverted_19; }
	inline void set__wasCullingInverted_19(bool value)
	{
		____wasCullingInverted_19 = value;
	}

	inline static int32_t get_offset_of__platformCameraInitialized_20() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____platformCameraInitialized_20)); }
	inline bool get__platformCameraInitialized_20() const { return ____platformCameraInitialized_20; }
	inline bool* get_address_of__platformCameraInitialized_20() { return &____platformCameraInitialized_20; }
	inline void set__platformCameraInitialized_20(bool value)
	{
		____platformCameraInitialized_20 = value;
	}

	inline static int32_t get_offset_of__initialized_21() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____initialized_21)); }
	inline bool get__initialized_21() const { return ____initialized_21; }
	inline bool* get_address_of__initialized_21() { return &____initialized_21; }
	inline void set__initialized_21(bool value)
	{
		____initialized_21 = value;
	}

	inline static int32_t get_offset_of_OnCameraError_22() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___OnCameraError_22)); }
	inline OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * get_OnCameraError_22() const { return ___OnCameraError_22; }
	inline OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF ** get_address_of_OnCameraError_22() { return &___OnCameraError_22; }
	inline void set_OnCameraError_22(OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * value)
	{
		___OnCameraError_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraError_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnCameraOpened_23() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___OnCameraOpened_23)); }
	inline OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * get_OnCameraOpened_23() const { return ___OnCameraOpened_23; }
	inline OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 ** get_address_of_OnCameraOpened_23() { return &___OnCameraOpened_23; }
	inline void set_OnCameraOpened_23(OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * value)
	{
		___OnCameraOpened_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCameraOpened_23), (void*)value);
	}

	inline static int32_t get_offset_of__cameraListCallback_24() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____cameraListCallback_24)); }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * get__cameraListCallback_24() const { return ____cameraListCallback_24; }
	inline Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B ** get_address_of__cameraListCallback_24() { return &____cameraListCallback_24; }
	inline void set__cameraListCallback_24(Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * value)
	{
		____cameraListCallback_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____cameraListCallback_24), (void*)value);
	}

	inline static int32_t get_offset_of__cachedDevicePosition_25() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____cachedDevicePosition_25)); }
	inline int32_t get__cachedDevicePosition_25() const { return ____cachedDevicePosition_25; }
	inline int32_t* get_address_of__cachedDevicePosition_25() { return &____cachedDevicePosition_25; }
	inline void set__cachedDevicePosition_25(int32_t value)
	{
		____cachedDevicePosition_25 = value;
	}

	inline static int32_t get_offset_of__cachedActiveCameraIndex_26() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____cachedActiveCameraIndex_26)); }
	inline int32_t get__cachedActiveCameraIndex_26() const { return ____cachedActiveCameraIndex_26; }
	inline int32_t* get_address_of__cachedActiveCameraIndex_26() { return &____cachedActiveCameraIndex_26; }
	inline void set__cachedActiveCameraIndex_26(int32_t value)
	{
		____cachedActiveCameraIndex_26 = value;
	}

	inline static int32_t get_offset_of__cachedFocusMode_27() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____cachedFocusMode_27)); }
	inline int32_t get__cachedFocusMode_27() const { return ____cachedFocusMode_27; }
	inline int32_t* get_address_of__cachedFocusMode_27() { return &____cachedFocusMode_27; }
	inline void set__cachedFocusMode_27(int32_t value)
	{
		____cachedFocusMode_27 = value;
	}

	inline static int32_t get_offset_of__desiredDeviceResolution_28() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____desiredDeviceResolution_28)); }
	inline int32_t get__desiredDeviceResolution_28() const { return ____desiredDeviceResolution_28; }
	inline int32_t* get_address_of__desiredDeviceResolution_28() { return &____desiredDeviceResolution_28; }
	inline void set__desiredDeviceResolution_28(int32_t value)
	{
		____desiredDeviceResolution_28 = value;
	}

	inline static int32_t get_offset_of__desiredDeviceFramerate_29() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____desiredDeviceFramerate_29)); }
	inline int32_t get__desiredDeviceFramerate_29() const { return ____desiredDeviceFramerate_29; }
	inline int32_t* get_address_of__desiredDeviceFramerate_29() { return &____desiredDeviceFramerate_29; }
	inline void set__desiredDeviceFramerate_29(int32_t value)
	{
		____desiredDeviceFramerate_29 = value;
	}

	inline static int32_t get_offset_of__enableCamera2_30() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____enableCamera2_30)); }
	inline bool get__enableCamera2_30() const { return ____enableCamera2_30; }
	inline bool* get_address_of__enableCamera2_30() { return &____enableCamera2_30; }
	inline void set__enableCamera2_30(bool value)
	{
		____enableCamera2_30 = value;
	}

	inline static int32_t get_offset_of__camera2SupportLevel_31() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____camera2SupportLevel_31)); }
	inline int32_t get__camera2SupportLevel_31() const { return ____camera2SupportLevel_31; }
	inline int32_t* get_address_of__camera2SupportLevel_31() { return &____camera2SupportLevel_31; }
	inline void set__camera2SupportLevel_31(int32_t value)
	{
		____camera2SupportLevel_31 = value;
	}

	inline static int32_t get_offset_of__enableLivePreview_32() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____enableLivePreview_32)); }
	inline bool get__enableLivePreview_32() const { return ____enableLivePreview_32; }
	inline bool* get_address_of__enableLivePreview_32() { return &____enableLivePreview_32; }
	inline void set__enableLivePreview_32(bool value)
	{
		____enableLivePreview_32 = value;
	}

	inline static int32_t get_offset_of__livePreviewMode_33() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____livePreviewMode_33)); }
	inline int32_t get__livePreviewMode_33() const { return ____livePreviewMode_33; }
	inline int32_t* get_address_of__livePreviewMode_33() { return &____livePreviewMode_33; }
	inline void set__livePreviewMode_33(int32_t value)
	{
		____livePreviewMode_33 = value;
	}

	inline static int32_t get_offset_of__staticImage_34() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____staticImage_34)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__staticImage_34() const { return ____staticImage_34; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__staticImage_34() { return &____staticImage_34; }
	inline void set__staticImage_34(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____staticImage_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____staticImage_34), (void*)value);
	}

	inline static int32_t get_offset_of__webCamName_35() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____webCamName_35)); }
	inline String_t* get__webCamName_35() const { return ____webCamName_35; }
	inline String_t** get_address_of__webCamName_35() { return &____webCamName_35; }
	inline void set__webCamName_35(String_t* value)
	{
		____webCamName_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____webCamName_35), (void*)value);
	}

	inline static int32_t get_offset_of__webCamIsMirrored_36() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____webCamIsMirrored_36)); }
	inline bool get__webCamIsMirrored_36() const { return ____webCamIsMirrored_36; }
	inline bool* get_address_of__webCamIsMirrored_36() { return &____webCamIsMirrored_36; }
	inline void set__webCamIsMirrored_36(bool value)
	{
		____webCamIsMirrored_36 = value;
	}

	inline static int32_t get_offset_of__remoteCameraPosition_37() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____remoteCameraPosition_37)); }
	inline int32_t get__remoteCameraPosition_37() const { return ____remoteCameraPosition_37; }
	inline int32_t* get_address_of__remoteCameraPosition_37() { return &____remoteCameraPosition_37; }
	inline void set__remoteCameraPosition_37(int32_t value)
	{
		____remoteCameraPosition_37 = value;
	}

	inline static int32_t get_offset_of__cameraToHorizonAngle_38() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____cameraToHorizonAngle_38)); }
	inline float get__cameraToHorizonAngle_38() const { return ____cameraToHorizonAngle_38; }
	inline float* get_address_of__cameraToHorizonAngle_38() { return &____cameraToHorizonAngle_38; }
	inline void set__cameraToHorizonAngle_38(float value)
	{
		____cameraToHorizonAngle_38 = value;
	}

	inline static int32_t get_offset_of__videoClip_39() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____videoClip_39)); }
	inline VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * get__videoClip_39() const { return ____videoClip_39; }
	inline VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 ** get_address_of__videoClip_39() { return &____videoClip_39; }
	inline void set__videoClip_39(VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * value)
	{
		____videoClip_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoClip_39), (void*)value);
	}

	inline static int32_t get_offset_of__videoLoop_40() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____videoLoop_40)); }
	inline bool get__videoLoop_40() const { return ____videoLoop_40; }
	inline bool* get_address_of__videoLoop_40() { return &____videoLoop_40; }
	inline void set__videoLoop_40(bool value)
	{
		____videoLoop_40 = value;
	}

	inline static int32_t get_offset_of__videoSpeed_41() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____videoSpeed_41)); }
	inline float get__videoSpeed_41() const { return ____videoSpeed_41; }
	inline float* get_address_of__videoSpeed_41() { return &____videoSpeed_41; }
	inline void set__videoSpeed_41(float value)
	{
		____videoSpeed_41 = value;
	}

	inline static int32_t get_offset_of_U3CForceResendDataU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ___U3CForceResendDataU3Ek__BackingField_42)); }
	inline bool get_U3CForceResendDataU3Ek__BackingField_42() const { return ___U3CForceResendDataU3Ek__BackingField_42; }
	inline bool* get_address_of_U3CForceResendDataU3Ek__BackingField_42() { return &___U3CForceResendDataU3Ek__BackingField_42; }
	inline void set_U3CForceResendDataU3Ek__BackingField_42(bool value)
	{
		___U3CForceResendDataU3Ek__BackingField_42 = value;
	}

	inline static int32_t get_offset_of__previousMode_43() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____previousMode_43)); }
	inline Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  get__previousMode_43() const { return ____previousMode_43; }
	inline Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * get_address_of__previousMode_43() { return &____previousMode_43; }
	inline void set__previousMode_43(Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  value)
	{
		____previousMode_43 = value;
	}

	inline static int32_t get_offset_of__feed_44() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____feed_44)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get__feed_44() const { return ____feed_44; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of__feed_44() { return &____feed_44; }
	inline void set__feed_44(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		____feed_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____feed_44), (void*)value);
	}

	inline static int32_t get_offset_of__pixels_45() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____pixels_45)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get__pixels_45() const { return ____pixels_45; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of__pixels_45() { return &____pixels_45; }
	inline void set__pixels_45(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		____pixels_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____pixels_45), (void*)value);
	}

	inline static int32_t get_offset_of__bytes_46() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____bytes_46)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get__bytes_46() const { return ____bytes_46; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of__bytes_46() { return &____bytes_46; }
	inline void set__bytes_46(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		____bytes_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bytes_46), (void*)value);
	}

	inline static int32_t get_offset_of__frameIndex_47() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____frameIndex_47)); }
	inline uint64_t get__frameIndex_47() const { return ____frameIndex_47; }
	inline uint64_t* get_address_of__frameIndex_47() { return &____frameIndex_47; }
	inline void set__frameIndex_47(uint64_t value)
	{
		____frameIndex_47 = value;
	}

	inline static int32_t get_offset_of__renderFrameIndex_48() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____renderFrameIndex_48)); }
	inline int64_t get__renderFrameIndex_48() const { return ____renderFrameIndex_48; }
	inline int64_t* get_address_of__renderFrameIndex_48() { return &____renderFrameIndex_48; }
	inline void set__renderFrameIndex_48(int64_t value)
	{
		____renderFrameIndex_48 = value;
	}

	inline static int32_t get_offset_of__ringBuffer_49() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____ringBuffer_49)); }
	inline RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * get__ringBuffer_49() const { return ____ringBuffer_49; }
	inline RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C ** get_address_of__ringBuffer_49() { return &____ringBuffer_49; }
	inline void set__ringBuffer_49(RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * value)
	{
		____ringBuffer_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ringBuffer_49), (void*)value);
	}

	inline static int32_t get_offset_of__previousWidth_50() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____previousWidth_50)); }
	inline int32_t get__previousWidth_50() const { return ____previousWidth_50; }
	inline int32_t* get_address_of__previousWidth_50() { return &____previousWidth_50; }
	inline void set__previousWidth_50(int32_t value)
	{
		____previousWidth_50 = value;
	}

	inline static int32_t get_offset_of__previousHeight_51() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____previousHeight_51)); }
	inline int32_t get__previousHeight_51() const { return ____previousHeight_51; }
	inline int32_t* get_address_of__previousHeight_51() { return &____previousHeight_51; }
	inline void set__previousHeight_51(int32_t value)
	{
		____previousHeight_51 = value;
	}

	inline static int32_t get_offset_of__videoPlayer_52() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____videoPlayer_52)); }
	inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * get__videoPlayer_52() const { return ____videoPlayer_52; }
	inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 ** get_address_of__videoPlayer_52() { return &____videoPlayer_52; }
	inline void set__videoPlayer_52(VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * value)
	{
		____videoPlayer_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____videoPlayer_52), (void*)value);
	}

	inline static int32_t get_offset_of__plugins_53() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____plugins_53)); }
	inline HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * get__plugins_53() const { return ____plugins_53; }
	inline HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C ** get_address_of__plugins_53() { return &____plugins_53; }
	inline void set__plugins_53(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * value)
	{
		____plugins_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____plugins_53), (void*)value);
	}

	inline static int32_t get_offset_of__hasInputPlugins_54() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____hasInputPlugins_54)); }
	inline bool get__hasInputPlugins_54() const { return ____hasInputPlugins_54; }
	inline bool* get_address_of__hasInputPlugins_54() { return &____hasInputPlugins_54; }
	inline void set__hasInputPlugins_54(bool value)
	{
		____hasInputPlugins_54 = value;
	}

	inline static int32_t get_offset_of__requestsCameraFrameRendering_55() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____requestsCameraFrameRendering_55)); }
	inline bool get__requestsCameraFrameRendering_55() const { return ____requestsCameraFrameRendering_55; }
	inline bool* get_address_of__requestsCameraFrameRendering_55() { return &____requestsCameraFrameRendering_55; }
	inline void set__requestsCameraFrameRendering_55(bool value)
	{
		____requestsCameraFrameRendering_55 = value;
	}

	inline static int32_t get_offset_of__inputPluginTexture_56() { return static_cast<int32_t>(offsetof(WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D, ____inputPluginTexture_56)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get__inputPluginTexture_56() const { return ____inputPluginTexture_56; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of__inputPluginTexture_56() { return &____inputPluginTexture_56; }
	inline void set__inputPluginTexture_56(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		____inputPluginTexture_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____inputPluginTexture_56), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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
// System.Int64[]
struct Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  m_Items[1];

public:
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};
// Wikitude.CameraFramePlane[]
struct CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  m_Items[1];

public:
	inline CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m46AC83542050A403FDE1B6323623C4DDC36A83B8_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133  HashSet_1_GetEnumerator_m5A0F9266D42AC7318CB948E664A782B2037551A7_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m43A23560E872D9DC81B992EB57464910FF498334_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.Void System.Action`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_gshared (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m243C0A419A326DF7FEB2FEB2F3A4C8FC6CC12A7A_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_mDF2D4DC386BD762B8AF37F6F93B2F24EC5A49ABF_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5C28B34DE8C6D3A1E136828428C71543A08B32D3_gshared (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m7682B86D551DE9273BDB73DD727BC7744F78B143_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_gshared_inline (List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared (HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3EF0DBAF5E4C36146DFEDFA38E652D8C27B7FDF3_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mB3D9D66F9CFB6CB7013F547768CAE89834974B8F_gshared (Dictionary_2_t0D7F3A50EB302696E4E5A19D582D99A8C7F70060 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::Add(!0)
inline void List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16  List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16  (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_inline (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 * __this, const RuntimeMethod* method)
{
	return ((  Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * (*) (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823 (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::Clear()
inline void List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1_Clear_mC5CFC6C9F3007FC24FE020198265D4B5B0659FFC_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3 (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m8C55493198DEBCA9B920FDF12D8157AD790626D3 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, float ___fieldOfView3, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::.ctor(Wikitude.TransformProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m209D0A2C2E8A6118CA60951581A8D1BAAEA66E50 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  ___original0, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m96AAD4EE86BB6AAF2331BDB98DA016073CBC5979 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method);
// System.Void Wikitude.Math::DecomposeMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Math_DecomposeMatrix_mF133AF9C194488AB67EFA0A1B5989A87A39AFE01 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * ___matrix0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___localPosition1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___localRotation2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___localScale3, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m746D0CE8967E0F3BF50839B7F8AC236CF98C2352 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transformation0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::Apply(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_Apply_m07F5295B3D9B0C31E16C5EEA0B232684696DBEF6 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Wikitude.Math::ComponentDivision(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Math_ComponentDivision_m4913B433ED1835DF73DABBD040F38782648AA728 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v10, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v21, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::ApplyGlobal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_ApplyGlobal_m235F5E6E3DEF2DF672021DEC5F48A55831FFE14B (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5006BA0D01A27619A053704D3BD6A8938F7DEDA5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::Apply(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pos0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___s2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Wikitude.TransformProperties::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Wikitude.TransformProperties::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_worldToLocalMatrix_m317BDABC93C3E25103D1B51D4DD57A5A91496FE6 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::RotateAround(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___angle1, const RuntimeMethod* method);
// System.Void Wikitude.TransformProperties::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void Wikitude.BridgeFactory/WikitudeBridgeConstructor::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridgeConstructor__ctor_m8204EAEAC257BC650E0B39894B9C37A68CEC9808 (WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Wikitude.BridgeFactory::RegisterWikitudeBridgeConstructor(System.String,Wikitude.BridgeFactory/WikitudeBridgeConstructor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeFactory_RegisterWikitudeBridgeConstructor_m706C2CA216F6E3B6828EE4F59F8B50D5E0946FC2 (String_t* ___platformName0, WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81 * ___wikitudeBridgeConstructor1, const RuntimeMethod* method);
// System.Void Wikitude.BridgeFactory/PlatformBridgeConstructor::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformBridgeConstructor__ctor_m237FC015FD374911C27889C209B222E95D3021C3 (PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Wikitude.BridgeFactory::RegisterPlatformBridgeConstructor(System.String,Wikitude.BridgeFactory/PlatformBridgeConstructor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BridgeFactory_RegisterPlatformBridgeConstructor_mA63BFB1318DD0C94CB61B32843A1B6FBA9A7B6A6 (String_t* ___platformName0, PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824 * ___platformBridgeConstructor1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.String System.IntPtr::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntPtr_ToString_m69003637DD38C2850CFD23F50ECBDD777B3C310C (intptr_t* __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2 (intptr_t ___source0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___destination1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.Byte[],System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___source0, int32_t ___startIndex1, intptr_t ___destination2, int32_t ___length3, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_blackTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956 (const RuntimeMethod* method);
// System.Void Wikitude.TrackerManager::IsPlatformAssistedTrackingAvailableInternal(SmartAvailability,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManager_IsPlatformAssistedTrackingAvailableInternal_mD3133218798956166530E169116943E57C4BF934 (int32_t ___smartAvailability0, bool ___internalCall1, const RuntimeMethod* method);
// System.Void Wikitude.UnityWikitudeBridge/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m516F6AE2658AF018FB91168A3FB8DBEE3078E11C (U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * __this, const RuntimeMethod* method);
// System.Void Wikitude.UnityWikitudeBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Wikitude.TrackerManager>()
inline TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * GameObject_AddComponent_TisTrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_mDE58DE006D5AC351EDD533A795B42AAB52ECC437 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void Wikitude.TrackerManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManager_Init_mD1CDF4A0CFA0C939A6B448F6B762F484E296B969 (TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * __this, const RuntimeMethod* method);
// Wikitude.IWikitudeBridge Wikitude.WikitudeSDK::get_WikitudeBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5 (const RuntimeMethod* method);
// System.Void Wikitude.TrackerManager::UpdateTrackables(System.String,System.Int64[],System.Single[],System.Single[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManager_UpdateTrackables_mEC1F6D24F438A5DEA573C29EDBCACF4C733335D6 (TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * __this, String_t* ___targetNames0, Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* ___targetIDs1, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___modelViewMatrices2, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___viewMatrix3, float ___fov4, const RuntimeMethod* method);
// System.Void Wikitude.TrackerManager::UpdatePlanes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManager_UpdatePlanes_m6F54D1BF7B7F8AF807B32EB962719E78C55C08CD (TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * __this, const RuntimeMethod* method);
// System.Void Wikitude.TrackerManager::ExecuteQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManager_ExecuteQueue_m22DC45924873021C5CA414C2AAC4D24EED710FEA (TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_Initialized()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::PrintSetAfterInitializationError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::InitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::get_PlatformBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>::Contains(!0)
inline bool HashSet_1_Contains_mD203323B0CF5F16ECA5C6351B10F900844405A22 (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * __this, TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B *, TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 *, const RuntimeMethod*))HashSet_1_Contains_m46AC83542050A403FDE1B6323623C4DDC36A83B8_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>::Add(!0)
inline bool HashSet_1_Add_mC2E2E8F393C540A59ADE3639F3E747DBD556C94B (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * __this, TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B *, TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 *, const RuntimeMethod*))HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void Wikitude.WikitudeSDK::ForceUnityBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeSDK_ForceUnityBridge_m26F67BA31B2DF237E48BEBF7A230B7D312520E16 (const RuntimeMethod* method);
// System.Void UnityEngine.Application::set_runInBackground(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_runInBackground_mFA0776084D9A103EE79F8692C3F33BA3248565EC (bool ___value0, const RuntimeMethod* method);
// Wikitude.PlatformBase Wikitude.PlatformBase::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694_inline (const RuntimeMethod* method);
// System.Void Wikitude.WikitudeBridge::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_Setup_m8FB8E8AC6872A0CEDC3F9E1E91B0DEEA9001533B (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::InitializeNativeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_temporaryCachePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C (const RuntimeMethod* method);
// Wikitude.PluginManager Wikitude.PluginManager::get_WeakInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Wikitude.PluginManager::Initialize(Wikitude.WikitudeCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PluginManager_Initialize_mD0EB9BCAE828473CD49D386141BBFBC2BC8EA3D1 (PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * __this, WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * ___wikitude0, const RuntimeMethod* method);
// System.Boolean Wikitude.PluginManager::HasPluginsWithInputModule()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PluginManager_HasPluginsWithInputModule_mBA34EDDB70A33FEB11350933B481BAAFCE3A8B85 (PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::UpdateCameraRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>::GetEnumerator()
inline Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8  HashSet_1_GetEnumerator_mF9D739E7085205B81CEC5EBAE3CE68104FE258AB (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8  (*) (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B *, const RuntimeMethod*))HashSet_1_GetEnumerator_m5A0F9266D42AC7318CB948E664A782B2037551A7_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Wikitude.TrackerBehaviour>::get_Current()
inline TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * Enumerator_get_Current_m14CB2EF048AA92E6CC5F5C6DA75752C08300B269_inline (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 * __this, const RuntimeMethod* method)
{
	return ((  TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * (*) (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *, const RuntimeMethod*))Enumerator_get_Current_m43A23560E872D9DC81B992EB57464910FF498334_gshared_inline)(__this, method);
}
// System.Void Wikitude.TrackerBehaviour::OnWikitudeCameraInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerBehaviour_OnWikitudeCameraInitialized_m0D8F1F6B396FD7F57D217F38117BF9A53ABF37E8 (TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Wikitude.TrackerBehaviour>::MoveNext()
inline bool Enumerator_MoveNext_m9C970A52969C613F62BBF07B74B3350594996FEE (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *, const RuntimeMethod*))Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Wikitude.TrackerBehaviour>::Dispose()
inline void Enumerator_Dispose_m3B4863788741AD9FF45E08C1812DCE18C971B3E7 (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *, const RuntimeMethod*))Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared)(__this, method);
}
// System.Void Wikitude.WikitudeCamera::UpdateCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeBridge::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_OnDestroy_m74E15F3ED269CB9CE131DEED5702E5DBD9D2A798 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeSDK::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeSDK_Destroy_m967AE0AA637FAF6069EA90FBF9003A07B9A40BEB (const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::DestroyLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_DestroyLivePreview_m34CF4D531DAB5BDA677BAF20464FE8D04BE12B18 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_clearFlags_m1D02BA1ABD7310269F6121C58AF41DCDEF1E0266 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_clearFlags(UnityEngine.CameraClearFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Camera::get_orthographic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_orthographic_m801883D15C8D9816091F6B9C742CA5FA3650C8E6 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_mB2549D26F5E220102D7478EB4C15F8F12D96FE09 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Wikitude.BackgroundCamera>()
inline BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * Component_GetComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m390220902A4292B43AF4BB672C2591965A89E17B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<Wikitude.BackgroundCamera>()
inline BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * GameObject_AddComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m7DF3B4DB4CA60855860B6760DBA2B1AE5883D20F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF (const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_backgroundColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::get_CachedDevicePosition()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CachedDevicePosition_m16C224A3C3CBC64261C0B44CF236A0CEA52EABDD_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::set_InvertCulling(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_InvertCulling()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_InvertCulling_mF0412440AE9A922CD1169C6A3FA04FFDFD0D6DFE_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::set_FlipHorizontal(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GL::get_invertCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GL_get_invertCulling_m5919A261F2122C481C85E3496DDE22E0C2294965 (const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_FlipHorizontal()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_FlipHorizontal_m8167E0ADE960A81B5F5CAE6EF5E18BA9F8EE62D9_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_set_invertCulling_m4F67C6CDC3355DA4BAD77414C08557E64311211D (bool ___value0, const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_IsLivePreviewRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsLivePreviewRunning_m60CD00826D5C7B2B4D1D310A4BD51EB119FA75C6 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::UpdateLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateLivePreview_m41F452BBDD4524769CF488A7431CF0C3EAF38960 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// UnityEngine.Texture Wikitude.WikitudeCamera::get_CameraTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// UnityEngine.ScreenOrientation UnityEngine.Screen::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_orientation_m7977C7ECC2E3F22BB5DF7661951843FCC7E645B0 (const RuntimeMethod* method);
// System.Void Wikitude.WikitudeBridge::InternalUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_InternalUpdate_m009D78360169BB3ED52DD4F9236F5EDA2628AFC9 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::UpdateRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateRenderTexture_mA1F6E539983306DF6CCA634AEAC1EE4932EFEFE7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::CheckSDKInitialized(System.String,Wikitude.WikitudeCamera/CallType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___callName0, int32_t ___callType1, const RuntimeMethod* method);
// System.Void Wikitude.Error::.ctor(System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8 (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * __this, int32_t ___errorCode0, String_t* ___errorDomain1, String_t* ___errorMessage2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Wikitude.Error>::Invoke(!0)
inline void UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42 (UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1 * __this, Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1 *, Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, ___arg00, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(!0)
inline void Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500 (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * __this, int32_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B *, int32_t, const RuntimeMethod*))Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_gshared)(__this, ___obj0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::RefreshLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_RefreshLivePreview_m687D353223B9FEF473DA182F4CD1F87DFEF26679 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// Wikitude.LivePreviewMode Wikitude.WikitudeCamera::get_LivePreviewMode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Wikitude.WikitudeCamera::get_StaticImage()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture Wikitude.RingBuffer::GetLatestTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RingBuffer_GetLatestTexture_m903AA87CEED9A5B8126E5513499828C6FF9F5A69 (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture Wikitude.RingBuffer::GetTexture(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * RingBuffer_GetTexture_m858792E1838CD8F03A5C75353CCC604ED7C538BD (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * __this, uint64_t ___id0, const RuntimeMethod* method);
// UnityEngine.Texture Wikitude.WikitudeCamera::get_CurrentTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GL::LoadPixelMatrix(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_LoadPixelMatrix_m37EC8678D2658C87C0C2CD0256AF79986CFD6554 (float ___left0, float ___right1, float ___bottom2, float ___top3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m02878E5708942CE6149A57E6E10C453358D2B2A9 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_WebCamIsMirrored()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_WebCamIsMirrored_mFE045AE291B9A8B2FEE93C16DFE5FB6FBA0F42FF_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___lhs0, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.GL::MultMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<Wikitude.LivePreviewMode>::get_HasValue()
inline bool Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_inline (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *, const RuntimeMethod*))Nullable_1_get_HasValue_m243C0A419A326DF7FEB2FEB2F3A4C8FC6CC12A7A_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<Wikitude.LivePreviewMode>::get_Value()
inline int32_t Nullable_1_get_Value_m80DDF5520E31CEF50256AA39B549A66A44873E87 (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *, const RuntimeMethod*))Nullable_1_get_Value_mDF2D4DC386BD762B8AF37F6F93B2F24EC5A49ABF_gshared)(__this, method);
}
// !0 System.Nullable`1<Wikitude.LivePreviewMode>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_inline (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920 (const RuntimeMethod* method);
// System.Boolean Wikitude.WikitudeCamera::get_IsWebCamNameValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsWebCamNameValid_m728D9864CCB5F6B7B41419A857C33131CD1E0182 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mCDA59B88B6D7F96B76663FA98EF12B7AF2DCFD61 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, String_t* ___deviceName0, int32_t ___requestedWidth1, int32_t ___requestedHeight2, int32_t ___requestedFPS3, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// UnityEngine.Gyroscope UnityEngine.Input::get_gyro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1 * Input_get_gyro_mE481C9495C12652B8744F8214A3F9ED20C317BD4 (const RuntimeMethod* method);
// System.Void UnityEngine.Gyroscope::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gyroscope_set_enabled_mEEAA3A44F6286C36F20C3A122E21E34F8FD131AA (Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<Wikitude.LivePreviewMode>::.ctor(!0)
inline void Nullable_1__ctor_m0979087A4465BFDEA3F25EF7C5C9EC1A7DDCE774 (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5C28B34DE8C6D3A1E136828428C71543A08B32D3_gshared)(__this, ___value0, method);
}
// System.Void Wikitude.WikitudeCamera::UpdateVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_didUpdateThisFrame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebCamTexture_get_didUpdateThisFrame_mFB0307CCD0634E6CCD89BC9368C7B0361762B3C4 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Int32 Wikitude.WikitudeCamera::get_CurrentWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Int32 Wikitude.WikitudeCamera::get_CurrentHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Wikitude.RingBuffer::SetSize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_SetSize_mFC84B2BE74589100F6F7CDF2AD0E5FE65F21F5C7 (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* WebCamTexture_GetPixels32_m08DEBC9193EB3FEB3C1E1161FE4CA51A6409F755 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___colors0, const RuntimeMethod* method);
// System.Boolean System.Runtime.InteropServices.GCHandle::op_Inequality(System.Runtime.InteropServices.GCHandle,System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_op_Inequality_mA8B5C82D5D4EE37FC482B9A6750D63E494E10816 (GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___a0, GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  ___b1, const RuntimeMethod* method);
// System.Void Wikitude.RingBuffer::AddTexture(System.UInt64,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_AddTexture_m5D428DCAF0CAEBD4B3BA780D34EC5CAB4569A219 (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * __this, uint64_t ___id0, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___texture1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera::NotifyNewDeviceRotationEvent(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, float ___cameraToSurfaceAngle1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Gyroscope::get_attitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Gyroscope_get_attitude_m4A8F384362895239F7811D04681359BAE982A208 (Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1 * __this, const RuntimeMethod* method);
// UnityEngine.RenderTexture Wikitude.WikitudeCamera::get_CurrentRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * WikitudeCamera_get_CurrentRenderTexture_mFE9AC5AD61E260510F9B6654457CF9161D9C9A0B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Video.VideoPlayer>()
inline VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * GameObject_AddComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m0FC58A141D1F8863C8F68F94BC76190C53AA5032 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Void UnityEngine.Video.VideoPlayer::set_renderMode(UnityEngine.Video.VideoRenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_aspectRatio(UnityEngine.Video.VideoAspectRatio)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_audioOutputMode(UnityEngine.Video.VideoAudioOutputMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_clip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_isLooping(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_isLooping_m0FA87AE5A8F06A545349EAA8F0C64158E29700C7 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_playbackSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_sendFrameReadyEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameReadyEventHandler__ctor_m7DFDBF9203E8F9FC1093E1655C5E2695623D7E3D (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_frameReady(UnityEngine.Video.VideoPlayer/FrameReadyEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_frameReady_mB7641568597E988CE68BC3E3BEF068F558DBCF6F (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_skipOnDrop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isLooping()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, double ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Video.VideoPlayer::get_playbackSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_Resize_m9B3D67DF42A47D5C573D084C080CEDA5E330A8D2 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1 (RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_ReadPixels_m1ED1C11E41D0ACC8CFCABBD25946CF0BD16D4F61 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___source0, int32_t ___destX1, int32_t ___destY2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_m84665EE1EB3F31A1C30D9D3E17515802E446E849 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_canStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::StepForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899 (VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Wikitude.Math::MakeRotation(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Math_MakeRotation_m37A8D8D4F027A8ECD0AF4A6682AFDE1C98BA4826 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Wikitude.Math::MakeRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Math_MakeRotation_m59B922B3803576E96AF98DA7F80876B0AAA58043 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___q0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Matrix4x4_get_transpose_mD7983388309D5C806DF8E79A76FF0209964C0D02 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Matrix4x4_get_Item_m3F051969B5275A3EA6F3C620CBE0A19FD48BE70E (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Wikitude.Plugin>::GetEnumerator()
inline Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6  HashSet_1_GetEnumerator_m4F69AD65B260CE86E8493222A4B04E36C1671131 (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6  (*) (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *, const RuntimeMethod*))HashSet_1_GetEnumerator_m5A0F9266D42AC7318CB948E664A782B2037551A7_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Wikitude.Plugin>::get_Current()
inline Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * Enumerator_get_Current_m6DEEBCD07F29116402AE4A4C17B816F298C79AB8_inline (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 * __this, const RuntimeMethod* method)
{
	return ((  Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * (*) (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *, const RuntimeMethod*))Enumerator_get_Current_m43A23560E872D9DC81B992EB57464910FF498334_gshared_inline)(__this, method);
}
// System.Boolean Wikitude.Plugin::get_HasInputModule()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Plugin_get_HasInputModule_m18F70F4D12C19B6CA4028FACFE5E0B7325AB8437_inline (Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * __this, const RuntimeMethod* method);
// System.Boolean Wikitude.Plugin::get_RequestsCameraFrameRendering()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Plugin_get_RequestsCameraFrameRendering_m685AA8CA981AFAF56FF187D46231E2933336511C_inline (Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Wikitude.Plugin>::MoveNext()
inline bool Enumerator_MoveNext_mA45A02FEE4CE736671FAD1192782E8FB7EE5D479 (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *, const RuntimeMethod*))Enumerator_MoveNext_m3C52626EAD0998616A661D927B94DD52E67118D4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Wikitude.Plugin>::Dispose()
inline void Enumerator_Dispose_mFACF9D60A0BD61283E35984A59EF668A33AE03AC (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *, const RuntimeMethod*))Enumerator_Dispose_mE2BD5476A999119F49555D958386A0688E9C0C01_gshared)(__this, method);
}
// System.Boolean Wikitude.WikitudeCamera::get_EnableLivePreview()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_EnableLivePreview_m80B0DC21FDD420F9C3855A24C9DA0F5818BAB980_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Wikitude.Plugin>::Add(!0)
inline bool HashSet_1_Add_mB6D35F4347319EF7CB3309E19B5B407565F087B3 (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * __this, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 *, const RuntimeMethod*))HashSet_1_Add_m1A3167674F8646F908B2AF4977144E4D8175D695_gshared)(__this, ___item0, method);
}
// System.Void Wikitude.WikitudeCamera::CheckForInputPlugins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method);
// System.Void Wikitude.Plugin::CameraReleased()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plugin_CameraReleased_m2B4F10C056D417076C9DC943902FBA5B3CF9EFCF (Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<Wikitude.Plugin>::Contains(!0)
inline bool HashSet_1_Contains_mDB430F258B0B0E42C5BF2B69553A1B4A8106C1D2 (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * __this, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 *, const RuntimeMethod*))HashSet_1_Contains_m46AC83542050A403FDE1B6323623C4DDC36A83B8_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<Wikitude.Plugin>::Remove(!0)
inline bool HashSet_1_Remove_mFCD5DF1888EB22E31D1DEE68971BF8DADE683B96 (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * __this, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 *, const RuntimeMethod*))HashSet_1_Remove_m7682B86D551DE9273BDB73DD727BC7744F78B143_gshared)(__this, ___item0, method);
}
// Wikitude.ColorCameraFrameMetadata Wikitude.CameraFrame::get_ColorMetadata()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  CameraFrame_get_ColorMetadata_mDC94620ECD71A251C4700E43B7BD1BD6AC55C43E_inline (CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, int32_t ___width0, int32_t ___height1, int32_t ___textureFormat2, bool ___mipChain3, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Wikitude.CameraFramePlane> Wikitude.CameraFrame::get_ColorData()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * CameraFrame_get_ColorData_m585083707C07B5D8682C4D54AEE3DC3320C7F34A_inline (CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Wikitude.CameraFramePlane>::get_Item(System.Int32)
inline CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_inline (List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  (*) (List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 *, int32_t, const RuntimeMethod*))List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m8669AE290D19897A70859BE23D9A438EB7EDA67E (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1 (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * __this, bool ___updateMipmaps0, bool ___makeNoLongerReadable1, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m4E3BD56B6481E2A0D53707119CFCB6074941B447 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera/OnSDKInitializedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSDKInitializedEvent__ctor_m3AAB986DAB2DC77E80A33051D9E4C6092F8BEF3C (OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge__ctor_mFE63E37D30170B409F09B0143E0E6EFF7C13CBD3 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<Wikitude.TrackerBehaviour>::.ctor()
inline void HashSet_1__ctor_m999F302DDAC594C47CBD9F2D2D22031D2717BFB6 (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B *, const RuntimeMethod*))HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared)(__this, method);
}
// System.Void Wikitude.WikitudeCamera/OnCameraErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraErrorEvent__ctor_m340ED43D22FFF1AF489D4A2E2C6BE5920F55D989 (OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * __this, const RuntimeMethod* method);
// System.Void Wikitude.WikitudeCamera/OnCameraOpenedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraOpenedEvent__ctor_m1F33AEBE3C2077FB0D127EDA3D417B8A489F61CE (OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * __this, const RuntimeMethod* method);
// System.Void Wikitude.RingBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer__ctor_m586272195B6AEFF9AF915D95698020858DB5ACFD (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<Wikitude.Plugin>::.ctor()
inline void HashSet_1__ctor_m9BCFF60E57E5FD526DB75586B3BD2DDDEA763DA9 (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *, const RuntimeMethod*))HashSet_1__ctor_m8A209D312FD08A21AFB5551881E7A6946A07C0D5_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<Wikitude.Error>::.ctor()
inline void UnityEvent_1__ctor_m1F9F77404BF472FCB65911F74EBB3B0A8EC05BB2 (UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC15B5A719F7BE5F3F2F6356C3980A1CF526F61D1 *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, const RuntimeMethod* method);
// Wikitude.IWikitudeBridge Wikitude.WikitudeSDK::CreateWikitudeBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_CreateWikitudeBridge_m56A5C6C354D4BB974CFE9F493327777AC9A3CE66 (const RuntimeMethod* method);
// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::CreatePlatformBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_CreatePlatformBridge_mA950B0C3F83BB9628077CBD0F2006DA1DAD34A62 (const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * __this, int32_t ___key0, String_t** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA *, int32_t, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_m3EF0DBAF5E4C36146DFEDFA38E652D8C27B7FDF3_gshared)(__this, ___key0, ___value1, method);
}
// Wikitude.IWikitudeBridge Wikitude.BridgeFactory::ConstructWikitudeBridge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BridgeFactory_ConstructWikitudeBridge_m0CA859748BF23B3F714F6E87FACFF39C7BB5D98D (String_t* ___bridgeName0, const RuntimeMethod* method);
// Wikitude.IPlatformBridge Wikitude.BridgeFactory::ConstructPlatformBridge(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BridgeFactory_ConstructPlatformBridge_mFF6F4576E4EE087015C25D4081C46F9DFB8C01C3 (String_t* ___bridgeName0, const RuntimeMethod* method);
// System.Void Wikitude.SDKBuildInformation::.ctor(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKBuildInformation__ctor_m9354039CA73B67A9C065CB8D66B9EDBA850612B2 (SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * __this, String_t* ___buildConfiguration0, String_t* ___buildNumber1, String_t* ___buildDate2, String_t* ___sdkVersion3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String>::.ctor()
inline void Dictionary_2__ctor_mEB8DD50334D2B8AA1733694B07D55B5FAD191AA3 (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA *, const RuntimeMethod*))Dictionary_2__ctor_m80B728B0F4A8176CF1F62C2768D31E6F7838B232_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.RuntimePlatform,System.String>::Add(!0,!1)
inline void Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8 (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * __this, int32_t ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA *, int32_t, String_t*, const RuntimeMethod*))Dictionary_2_Add_mB3D9D66F9CFB6CB7013F547768CAE89834974B8F_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 (TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 * __this, int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t, int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___identifier0, ___errorCount1, ___errorData2);

}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceFailedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceFailedCallback__ctor_mF364C2732D53E6AC44BF43015A36C79BFA9730CD (TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceFailedCallback::Invoke(System.Int64,System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceFailedCallback_Invoke_m377D543A630324054BB1BE2687EC8B223E10EB4C (TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 * __this, int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int64_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___identifier0, ___errorCount1, ___errorData2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int64_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___identifier0, ___errorCount1, ___errorData2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int64_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___identifier0, ___errorCount1, ___errorData2);
					else
						GenericVirtActionInvoker3< int64_t, int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___identifier0, ___errorCount1, ___errorData2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int64_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___identifier0, ___errorCount1, ___errorData2);
					else
						VirtActionInvoker3< int64_t, int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___identifier0, ___errorCount1, ___errorData2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___identifier0) - 1), ___errorCount1, ___errorData2, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int64_t, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___identifier0, ___errorCount1, ___errorData2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Wikitude.TrackerManager/TargetCollectionResourceFailedCallback::BeginInvoke(System.Int64,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetCollectionResourceFailedCallback_BeginInvoke_m997179AC8295A53B68DE9E0D96178261B2E9A91A (TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 * __this, int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetCollectionResourceFailedCallback_BeginInvoke_m997179AC8295A53B68DE9E0D96178261B2E9A91A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___identifier0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___errorCount1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorData2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceFailedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceFailedCallback_EndInvoke_mC7D2BF2794A4E2A9D2424A1E9BB5533015D952A2 (TargetCollectionResourceFailedCallback_tBCBB7AEEC5DFF0BFD235F9A14C211546F39650C5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 (TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 * __this, int64_t ___identifier0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int64_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___identifier0);

}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceInitializedCallback__ctor_mE128F7958AAD515EECAD5FACE0B60B239D72BA58 (TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback::Invoke(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceInitializedCallback_Invoke_mBBCFD5992AF910BDB598BD68682FBFA6AF89D229 (TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 * __this, int64_t ___identifier0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___identifier0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___identifier0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int64_t >::Invoke(targetMethod, targetThis, ___identifier0);
					else
						GenericVirtActionInvoker1< int64_t >::Invoke(targetMethod, targetThis, ___identifier0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___identifier0);
					else
						VirtActionInvoker1< int64_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___identifier0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___identifier0) - 1), targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int64_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___identifier0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback::BeginInvoke(System.Int64,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TargetCollectionResourceInitializedCallback_BeginInvoke_mA5D7A16B483BB99C4BBFD8FE1E88CD7BCAADEC39 (TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 * __this, int64_t ___identifier0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TargetCollectionResourceInitializedCallback_BeginInvoke_mA5D7A16B483BB99C4BBFD8FE1E88CD7BCAADEC39_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___identifier0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Wikitude.TrackerManager/TargetCollectionResourceInitializedCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetCollectionResourceInitializedCallback_EndInvoke_m5782194ABB051BE39B47C613309841D5D1BA3BA3 (TargetCollectionResourceInitializedCallback_t3835F95CB9E571881822AD823EFB2A4424995C13 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 (TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 * __this, int32_t ___errorCount0, intptr_t ___errorData1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___errorCount0, ___errorData1);

}
// System.Void Wikitude.TrackerManager/TrackerInitializationErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerInitializationErrorCallback__ctor_mD713FA980066141792A95EB1812E733D59253218 (TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wikitude.TrackerManager/TrackerInitializationErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerInitializationErrorCallback_Invoke_mDB01A28F7A81A18AF3425235E2C8F8740AA627EA (TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 * __this, int32_t ___errorCount0, intptr_t ___errorData1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___errorCount0, ___errorData1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCount0, ___errorData1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___errorCount0, ___errorData1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___errorCount0, ___errorData1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___errorCount0, ___errorData1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___errorCount0, ___errorData1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___errorCount0) - 1), ___errorData1, targetMethod);
				}
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___errorCount0, ___errorData1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Wikitude.TrackerManager/TrackerInitializationErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackerInitializationErrorCallback_BeginInvoke_m4BFD55CF5973F3DF85C16EC838379FCFFD17F9F4 (TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 * __this, int32_t ___errorCount0, intptr_t ___errorData1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerInitializationErrorCallback_BeginInvoke_m4BFD55CF5973F3DF85C16EC838379FCFFD17F9F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___errorCount0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___errorData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Wikitude.TrackerManager/TrackerInitializationErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerInitializationErrorCallback_EndInvoke_m828629A63D14EC5C8CF9E093F0FE3EBC463B97CE (TrackerInitializationErrorCallback_tF1974196ACE1C16584CA9D980739E2770ED80A61 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 (UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 * __this, String_t* ___targetName0, int64_t ___targetID1, int32_t ___oldTrackingQuality2, int32_t ___newTrackingQuality3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int64_t, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___targetName0' to native representation
	char* ____targetName0_marshaled = NULL;
	____targetName0_marshaled = il2cpp_codegen_marshal_string(___targetName0);

	// Native function invocation
	il2cppPInvokeFunc(____targetName0_marshaled, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);

	// Marshaling cleanup of parameter '___targetName0' native representation
	il2cpp_codegen_marshal_free(____targetName0_marshaled);
	____targetName0_marshaled = NULL;

}
// System.Void Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedImageTrackingQualityCallback__ctor_mD8067E957BE86952A361D58FD10BF6B83B8945EB (UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback::Invoke(System.String,System.Int64,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedImageTrackingQualityCallback_Invoke_mDFE847B6F9E0C22687D50B4D9FF4AAC60EBE9A58 (UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 * __this, String_t* ___targetName0, int64_t ___targetID1, int32_t ___oldTrackingQuality2, int32_t ___newTrackingQuality3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int64_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int64_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
			}
		}
		else if (___parameterCount != 4)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int64_t, int32_t, int32_t >::Invoke(targetMethod, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
					else
						GenericVirtActionInvoker3< int64_t, int32_t, int32_t >::Invoke(targetMethod, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int64_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
					else
						VirtActionInvoker3< int64_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___targetID1) - 1), ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, int64_t, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< String_t*, int64_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
					else
						GenericVirtActionInvoker4< String_t*, int64_t, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< String_t*, int64_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
					else
						VirtActionInvoker4< String_t*, int64_t, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int64_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___targetName0) - 1), ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int64_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int64_t, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___targetName0, ___targetID1, ___oldTrackingQuality2, ___newTrackingQuality3, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback::BeginInvoke(System.String,System.Int64,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateExtendedImageTrackingQualityCallback_BeginInvoke_m3821096F68F1EC02C8A7687172DEB1087CDDA41D (UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 * __this, String_t* ___targetName0, int64_t ___targetID1, int32_t ___oldTrackingQuality2, int32_t ___newTrackingQuality3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateExtendedImageTrackingQualityCallback_BeginInvoke_m3821096F68F1EC02C8A7687172DEB1087CDDA41D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = ___targetName0;
	__d_args[1] = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &___targetID1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___oldTrackingQuality2);
	__d_args[3] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___newTrackingQuality3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Wikitude.TrackerManager/UpdateExtendedImageTrackingQualityCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedImageTrackingQualityCallback_EndInvoke_mB47C2602B933AB6C8EBA70D85CF7FF661FE3ECFC (UpdateExtendedImageTrackingQualityCallback_t502363EEAE401C452E5A3D32899C5DC8466E2715 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 (UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 * __this, String_t* ___targetName0, int32_t ___oldTrackingQuality1, int32_t ___newTrackingQuality2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___targetName0' to native representation
	char* ____targetName0_marshaled = NULL;
	____targetName0_marshaled = il2cpp_codegen_marshal_string(___targetName0);

	// Native function invocation
	il2cppPInvokeFunc(____targetName0_marshaled, ___oldTrackingQuality1, ___newTrackingQuality2);

	// Marshaling cleanup of parameter '___targetName0' native representation
	il2cpp_codegen_marshal_free(____targetName0_marshaled);
	____targetName0_marshaled = NULL;

}
// System.Void Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedObjectTrackingQualityCallback__ctor_m2382ACB50662382CB672DD6F0FE09E968001A2C5 (UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback::Invoke(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedObjectTrackingQualityCallback_Invoke_m05128376AC3875F318D6ED2098E0B6403B453050 (UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 * __this, String_t* ___targetName0, int32_t ___oldTrackingQuality1, int32_t ___newTrackingQuality2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___oldTrackingQuality1) - 1), ___newTrackingQuality2, targetMethod);
				}
				typedef void (*FunctionPointerType) (String_t*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< String_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
					else
						GenericVirtActionInvoker3< String_t*, int32_t, int32_t >::Invoke(targetMethod, targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< String_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
					else
						VirtActionInvoker3< String_t*, int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___targetName0) - 1), ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
				}
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___targetName0, ___oldTrackingQuality1, ___newTrackingQuality2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback::BeginInvoke(System.String,System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdateExtendedObjectTrackingQualityCallback_BeginInvoke_m48EE44162FC9F17599317578AB7016502D53DF49 (UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 * __this, String_t* ___targetName0, int32_t ___oldTrackingQuality1, int32_t ___newTrackingQuality2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UpdateExtendedObjectTrackingQualityCallback_BeginInvoke_m48EE44162FC9F17599317578AB7016502D53DF49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___targetName0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___oldTrackingQuality1);
	__d_args[2] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___newTrackingQuality2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Wikitude.TrackerManager/UpdateExtendedObjectTrackingQualityCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateExtendedObjectTrackingQualityCallback_EndInvoke_m7F13C7F81C7BCD4BC62D1C0D16793529F69F3C1F (UpdateExtendedObjectTrackingQualityCallback_t3B397EB5E7E12E813A96D4994C9146C7FC4B0E57 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Wikitude.TrackerManagerQueue::Add(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManagerQueue_Add_m33B59248DC5C3A672E489FCB62FAD137BE6624E6 (TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * __this, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___job0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManagerQueue_Add_m33B59248DC5C3A672E489FCB62FAD137BE6624E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__thisLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_2 = __this->get__jobs_0();
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = ___job0;
		NullCheck(L_2);
		List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242(L_2, L_3, /*hidden argument*/List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242_RuntimeMethod_var);
		IL2CPP_LEAVE(0x29, FINALLY_001f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001f;
	}

FINALLY_001f:
	{ // begin finally (depth: 1)
		{
			bool L_4 = V_1;
			if (!L_4)
			{
				goto IL_0028;
			}
		}

IL_0022:
		{
			RuntimeObject * L_5 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_5, /*hidden argument*/NULL);
		}

IL_0028:
		{
			IL2CPP_END_FINALLY(31)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(31)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x29, IL_0029)
	}

IL_0029:
	{
		return;
	}
}
// System.Void Wikitude.TrackerManagerQueue::Execute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManagerQueue_Execute_m2AC863505918BCE24E24CF28198A08992420FCB4 (TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManagerQueue_Execute_m2AC863505918BCE24E24CF28198A08992420FCB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		RuntimeObject * L_0 = __this->get__thisLock_2();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mC5B353DD83A0B0155DF6FBCC4DF5A580C25534C5(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_2 = __this->get__jobs_0();
			NullCheck(L_2);
			Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16  L_3 = List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930(L_2, /*hidden argument*/List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_001d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0033;
			}

IL_001f:
			{
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_4 = Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_inline((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_RuntimeMethod_var);
				V_3 = L_4;
				List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_5 = __this->get__jobsCopy_1();
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_6 = V_3;
				NullCheck(L_5);
				List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242(L_5, L_6, /*hidden argument*/List_1_Add_m8DDC8569C5393C3A6DD7345DC74B90A5A276E242_RuntimeMethod_var);
			}

IL_0033:
			{
				bool L_7 = Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_001f;
				}
			}

IL_003c:
			{
				IL2CPP_LEAVE(0x4C, FINALLY_003e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_003e;
		}

FINALLY_003e:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823_RuntimeMethod_var);
			IL2CPP_END_FINALLY(62)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(62)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x4C, IL_004c)
		}

IL_004c:
		{
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_8 = __this->get__jobs_0();
			NullCheck(L_8);
			List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039(L_8, /*hidden argument*/List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var);
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_9 = __this->get__jobsCopy_1();
			NullCheck(L_9);
			Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16  L_10 = List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930(L_9, /*hidden argument*/List_1_GetEnumerator_m11648D3DF8D6BCB80A67324540AE5A3405FBC930_RuntimeMethod_var);
			V_2 = L_10;
		}

IL_0063:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0071;
			}

IL_0065:
			{
				Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_11 = Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_inline((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m48182255F404D5E44CCEE4A0072BE65C18C65DED_RuntimeMethod_var);
				NullCheck(L_11);
				Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_11, /*hidden argument*/NULL);
			}

IL_0071:
			{
				bool L_12 = Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mC150064B3064AFD9FC0FC5554B093F0969B2805C_RuntimeMethod_var);
				if (L_12)
				{
					goto IL_0065;
				}
			}

IL_007a:
			{
				IL2CPP_LEAVE(0x8A, FINALLY_007c);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_007c;
		}

FINALLY_007c:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823((Enumerator_t7E3B70A058CE7B7B7B3276442A0F38B629D07A16 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m6384D0A6934E0930BE1E1D2D3F69168956B6D823_RuntimeMethod_var);
			IL2CPP_END_FINALLY(124)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(124)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_JUMP_TBL(0x8A, IL_008a)
		}

IL_008a:
		{
			List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_13 = __this->get__jobsCopy_1();
			NullCheck(L_13);
			List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039(L_13, /*hidden argument*/List_1_Clear_mCE39EB4018B1834C1D57318786D5C7ECDFEE2039_RuntimeMethod_var);
			IL2CPP_LEAVE(0xA1, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		{
			bool L_14 = V_1;
			if (!L_14)
			{
				goto IL_00a0;
			}
		}

IL_009a:
		{
			RuntimeObject * L_15 = V_0;
			Monitor_Exit_m49A1E5356D984D0B934BB97A305E2E5E207225C2(L_15, /*hidden argument*/NULL);
		}

IL_00a0:
		{
			IL2CPP_END_FINALLY(151)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xA1, IL_00a1)
	}

IL_00a1:
	{
		return;
	}
}
// System.Void Wikitude.TrackerManagerQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackerManagerQueue__ctor_mA28A91FAFE59569AD801DCE25907AF79CB0AF217 (TrackerManagerQueue_t7C7166F8F18F2256F2DB118E9038A794E6ABB20E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackerManagerQueue__ctor_mA28A91FAFE59569AD801DCE25907AF79CB0AF217_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_0 = (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *)il2cpp_codegen_object_new(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var);
		List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3(L_0, /*hidden argument*/List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var);
		__this->set__jobs_0(L_0);
		List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 * L_1 = (List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7 *)il2cpp_codegen_object_new(List_1_t9E7F53A878191B703A76E69CE36AA90A372800E7_il2cpp_TypeInfo_var);
		List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3(L_1, /*hidden argument*/List_1__ctor_mC8B3CE5991B065CAE86AABC7C683CAF61EBF5FE3_RuntimeMethod_var);
		__this->set__jobsCopy_1(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(L_2, /*hidden argument*/NULL);
		__this->set__thisLock_2(L_2);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Wikitude.TransformProperties::.ctor(Wikitude.TransformProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m209D0A2C2E8A6118CA60951581A8D1BAAEA66E50 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  ___original0, const RuntimeMethod* method)
{
	{
		TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  L_0 = ___original0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = L_0.get_Position_0();
		TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  L_2 = ___original0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = L_2.get_Rotation_1();
		TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  L_4 = ___original0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = L_4.get_Scale_2();
		TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  L_6 = ___original0;
		float L_7 = L_6.get_FieldOfView_3();
		TransformProperties__ctor_m8C55493198DEBCA9B920FDF12D8157AD790626D3((TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *)__this, L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m209D0A2C2E8A6118CA60951581A8D1BAAEA66E50_AdjustorThunk (RuntimeObject * __this, TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E  ___original0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties__ctor_m209D0A2C2E8A6118CA60951581A8D1BAAEA66E50(_thisAdjusted, ___original0, method);
}
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m96AAD4EE86BB6AAF2331BDB98DA016073CBC5979 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		__this->set_Position_0(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		__this->set_Rotation_1(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		__this->set_Scale_2(L_2);
		__this->set_FieldOfView_3((0.0f));
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m96AAD4EE86BB6AAF2331BDB98DA016073CBC5979_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties__ctor_m96AAD4EE86BB6AAF2331BDB98DA016073CBC5979(_thisAdjusted, ___position0, ___rotation1, ___scale2, method);
}
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m8C55493198DEBCA9B920FDF12D8157AD790626D3 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, float ___fieldOfView3, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		__this->set_Position_0(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = ___rotation1;
		__this->set_Rotation_1(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___scale2;
		__this->set_Scale_2(L_2);
		float L_3 = ___fieldOfView3;
		__this->set_FieldOfView_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m8C55493198DEBCA9B920FDF12D8157AD790626D3_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___scale2, float ___fieldOfView3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties__ctor_m8C55493198DEBCA9B920FDF12D8157AD790626D3(_thisAdjusted, ___position0, ___rotation1, ___scale2, ___fieldOfView3, method);
}
// System.Void Wikitude.TransformProperties::.ctor(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties__ctor_m746D0CE8967E0F3BF50839B7F8AC236CF98C2352 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transformation0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_Position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = __this->get_address_of_Rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_2 = __this->get_address_of_Scale_2();
		Math_DecomposeMatrix_mF133AF9C194488AB67EFA0A1B5989A87A39AFE01((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&___transformation0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_2, /*hidden argument*/NULL);
		__this->set_FieldOfView_3((0.0f));
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties__ctor_m746D0CE8967E0F3BF50839B7F8AC236CF98C2352_AdjustorThunk (RuntimeObject * __this, Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___transformation0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties__ctor_m746D0CE8967E0F3BF50839B7F8AC236CF98C2352(_thisAdjusted, ___transformation0, method);
}
// System.Void Wikitude.TransformProperties::Apply(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_Apply_m07F5295B3D9B0C31E16C5EEA0B232684696DBEF6 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_Position_0();
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = __this->get_Rotation_1();
		NullCheck(L_2);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_2, L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_Scale_2();
		NullCheck(L_4);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties_Apply_m07F5295B3D9B0C31E16C5EEA0B232684696DBEF6_AdjustorThunk (RuntimeObject * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties_Apply_m07F5295B3D9B0C31E16C5EEA0B232684696DBEF6(_thisAdjusted, ___target0, method);
}
// System.Void Wikitude.TransformProperties::ApplyGlobal(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_ApplyGlobal_m235F5E6E3DEF2DF672021DEC5F48A55831FFE14B (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_Position_0();
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___target0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = __this->get_Rotation_1();
		NullCheck(L_2);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_2, L_3, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = ___target0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_Scale_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = ___target0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_localScale_mD8F631021C2D62B7C341B1A17FA75491F64E13DA(L_7, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Math_ComponentDivision_m4913B433ED1835DF73DABBD040F38782648AA728(L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_4, L_9, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties_ApplyGlobal_m235F5E6E3DEF2DF672021DEC5F48A55831FFE14B_AdjustorThunk (RuntimeObject * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties_ApplyGlobal_m235F5E6E3DEF2DF672021DEC5F48A55831FFE14B(_thisAdjusted, ___target0, method);
}
// System.Void Wikitude.TransformProperties::Apply(UnityEngine.Transform,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___target0;
		TransformProperties_Apply_m07F5295B3D9B0C31E16C5EEA0B232684696DBEF6((TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *)__this, L_0, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = ___camera1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = ___camera1;
		float L_4 = __this->get_FieldOfView_3();
		NullCheck(L_3);
		Camera_set_fieldOfView_m5006BA0D01A27619A053704D3BD6A8938F7DEDA5(L_3, L_4, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594_AdjustorThunk (RuntimeObject * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___camera1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties_Apply_m810BB5F3B25C3655BFCBBEE0525ABE083207A594(_thisAdjusted, ___target0, ___camera1, method);
}
// UnityEngine.Matrix4x4 Wikitude.TransformProperties::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_Position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = __this->get_Rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_Scale_2();
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	return TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97(_thisAdjusted, method);
}
// UnityEngine.Matrix4x4 Wikitude.TransformProperties::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_worldToLocalMatrix_m317BDABC93C3E25103D1B51D4DD57A5A91496FE6 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, const RuntimeMethod* method)
{
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = TransformProperties_get_localToWorldMatrix_m884866352D350B16AD2F9A2F5A29694205BE8F97((TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *)__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_1 = Matrix4x4_get_inverse_mBD3145C0D7977962E18C8B3BF63DD671F7917166((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  TransformProperties_get_worldToLocalMatrix_m317BDABC93C3E25103D1B51D4DD57A5A91496FE6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	return TransformProperties_get_worldToLocalMatrix_m317BDABC93C3E25103D1B51D4DD57A5A91496FE6(_thisAdjusted, method);
}
// System.Void Wikitude.TransformProperties::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___angle2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___axis1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___pivot0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = V_0;
		TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2((TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *)__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, float ___angle2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties_RotateAround_mEC3F4EFAE63BD1F4C63F379F3514E1C0A2232833(_thisAdjusted, ___pivot0, ___axis1, ___angle2, method);
}
// System.Void Wikitude.TransformProperties::RotateAround(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2 (TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___angle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_Position_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___pivot0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_0, L_1, /*hidden argument*/NULL);
		__this->set_Position_0(L_2);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = ___angle1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_Position_0();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_3, L_4, /*hidden argument*/NULL);
		__this->set_Position_0(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get_Position_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = ___pivot0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_7, /*hidden argument*/NULL);
		__this->set_Position_0(L_8);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = ___angle1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = __this->get_Rotation_1();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		__this->set_Rotation_1(L_11);
		return;
	}
}
IL2CPP_EXTERN_C  void TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___pivot0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___angle1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E * _thisAdjusted = reinterpret_cast<TransformProperties_t0681F7DA2C1AA144EF16B7043C773F6B5EC6FD1E *>(__this + _offset);
	TransformProperties_RotateAround_m7670028F2C04E5D72EEEAAAC6BF54D3B2C31FEC2(_thisAdjusted, ___pivot0, ___angle1, method);
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
// System.Void Wikitude.UnityWikitudeBridge::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge__cctor_mB4159AE4D6FE2188EB83244920F86C34036153DF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge__cctor_mB4159AE4D6FE2188EB83244920F86C34036153DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var);
		U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * L_0 = ((U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81 * L_1 = (WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81 *)il2cpp_codegen_object_new(WikitudeBridgeConstructor_tCCC7DF0548CCEC2C076FFB5C23AF9E043CCC9A81_il2cpp_TypeInfo_var);
		WikitudeBridgeConstructor__ctor_m8204EAEAC257BC650E0B39894B9C37A68CEC9808(L_1, L_0, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__0_0_mB72972816794D6848F042E4FD0917D865C1D1098_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		BridgeFactory_RegisterWikitudeBridgeConstructor_m706C2CA216F6E3B6828EE4F59F8B50D5E0946FC2(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, L_1, /*hidden argument*/NULL);
		U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * L_2 = ((U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824 * L_3 = (PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824 *)il2cpp_codegen_object_new(PlatformBridgeConstructor_t4F10DA7A4B10115547B7311A1D26F6671D8E6824_il2cpp_TypeInfo_var);
		PlatformBridgeConstructor__ctor_m237FC015FD374911C27889C209B222E95D3021C3(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3C_cctorU3Eb__0_1_m37C4560DCB8BD5DC9C48C1B8A53E4E1D3C59193D_RuntimeMethod_var), /*hidden argument*/NULL);
		BridgeFactory_RegisterPlatformBridgeConstructor_mA63BFB1318DD0C94CB61B32843A1B6FBA9A7B6A6(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InitializeCSharpFunctions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InitializeCSharpFunctions_mAD88377380F048B3C86ABEE2B4F711E1F68D24C2 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, intptr_t ___csharpFunctions0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateWikitudeNativeSDK(System.String,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateWikitudeNativeSDK_m097F1D7766EB513CBFB028DA45E77CE779802B57 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___licenseKey0, intptr_t ___platformComponent1, intptr_t ___sdkMutex2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyWikitudeNativeSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyWikitudeNativeSDK_mDF6695C122A4B1CFFDEC2B97540B995AA112B40F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StartWikitudeNativeSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StartWikitudeNativeSDK_m6B7FC96659FCA1B571F5D348AD43278B6104B6F5 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StopWikitudeNativeSDK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StopWikitudeNativeSDK_mA1C3FD82F94EE293E558D1964F3D4F0AA6306268 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateTargetCollectionResource(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateTargetCollectionResource_mDC99D98345E3667DE86986CF40058F34E72E982D (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___path0, int64_t ___id1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateCloudRecognitionService(System.String,System.String,System.String,System.Int32,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateCloudRecognitionService_m05BD7ECBD19A9B8AC25B3BE0600BF35F437511D0 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___clientToken0, String_t* ___groupId1, String_t* ___targetCollectionId2, int32_t ___region3, String_t* ___customServerURL4, int64_t ___id5, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateImageTrackerWithTargetCollectionResource(System.String,System.String,System.Int32,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateImageTrackerWithTargetCollectionResource_mB6907B2309C91C088B2BF095043188B82BBA52EA (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetsForExtendedTracking0, String_t* ___physicalTargetImageHeights1, int32_t ___maximumNumberOfConcurrentTrackableTargets2, int32_t ___rangeExtension3, int32_t ___trackerEfficiencyMode4, int64_t ___targetCollectionResourceId5, const RuntimeMethod* method)
{
	{
		__this->set__isObjectTrackingRunning_7((bool)0);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateImageTrackerWithCloudRecognitionService(System.String,System.String,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateImageTrackerWithCloudRecognitionService_m782767225A132B7EBC9D05EDEF0F9C120D561307 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetsForExtendedTracking0, String_t* ___physicalTargetImageHeights1, int32_t ___rangeExtension2, int32_t ___trackerEfficiencyMode3, int64_t ___cloudRecognitionServiceId4, const RuntimeMethod* method)
{
	{
		__this->set__isObjectTrackingRunning_7((bool)0);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateObjectTrackerWithTargetCollectionResource(System.String,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateObjectTrackerWithTargetCollectionResource_m1519FA62DC642F5E1F43B7ADEB9449F4AE284823 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetsForExtendedTracking0, int32_t ___trackerEfficiencyMode1, int64_t ___targetCollectionResourceId2, const RuntimeMethod* method)
{
	{
		__this->set__isObjectTrackingRunning_7((bool)1);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.InstantiateInstantTracker(System.Boolean,System.Single,System.Single,System.Int32,Wikitude.UnityPlaneConfiguration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_InstantiateInstantTracker_mE60E8BAF0AB9CD076AAE1857D22DC788405477F7 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, bool ___smartEnabled0, float ___deviceHeightAboveGround1, float ___planeOrientationAngle2, int32_t ___trackerEfficiencyMode3, UnityPlaneConfiguration_t62EDB282F4E9704CE1460D0423AFE5E66DF0FBD2  ___planeConfiguration4, const RuntimeMethod* method)
{
	{
		__this->set__isObjectTrackingRunning_7((bool)0);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.UpdateImageTrackerExtendedTargets(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_UpdateImageTrackerExtendedTargets_m73FAA269B0B2FFD30FD3C9F9DEE0B75780B9411C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetsForExtendedTracking0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StopExtendedImageTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StopExtendedImageTracking_m48177135840ECF20E8B57D988585776B24EE7C1F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.UpdateObjectTrackerExtendedTargets(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_UpdateObjectTrackerExtendedTargets_m47DE3DE132C81693982D34CD78867724604016E6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetsForExtendedTracking0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StopExtendedObjectTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StopExtendedObjectTracking_m3AAB27F56341CFADCEE77FEE767C2AC0C017326F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyTargetCollectionResource(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyTargetCollectionResource_m88A069BDC18DFC227B1E5EFEE6EBD373333EDF8F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___id0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyCloudRecognitionService(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyCloudRecognitionService_m5203DB73BD2BFA9104A36023CD1408CC6E299A17 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___id0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyImageTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyImageTracker_m56273C8AEC2F539C19C1AB5D0C4581B2BC24EB98 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyInstantTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyInstantTracker_m7E840E76F643F0C4696F38892D17892C590A0EBE (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DestroyObjectTracker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DestroyObjectTracker_m08C2D28A9D42A7BB4F2D0D8F587522F10AECCB6C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.ChangeRecognitionType(System.String,Wikitude.ObjectTrackerRecognitionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_ChangeRecognitionType_m2EE2507E760F1FF0B393798A9B5D5DAD3ADB303A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetName0, int32_t ___recognitionType1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.UpdateAlignmentPose(Wikitude.Matrix)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_UpdateAlignmentPose_m66DA320BD853E7B182F689CC988D6EAA8A1174B6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, Matrix_tD9A409B5235EA655E618E7DB10E95AAB902DC5C6  ___pose0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.Recognize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_Recognize_m5019BCE5E6EAEA07904F0121DF27699A77CABABF (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___id0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StartContinuousRecognition(System.Double,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StartContinuousRecognition_mF1D8E31C2E30FD4FC157874C1FEB3DBB4A4A2209 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, double ___interval0, int64_t ___id1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.StopContinuousRecognition(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_StopContinuousRecognition_m42262BAC5B5DC2B078980FD49F83A0A29E483AA4 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___id0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.SetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_SetState_m4E537C05BC4B746E7218CBA9A41158945C2F1E93 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.SetDeviceHeightAboveGround(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_SetDeviceHeightAboveGround_mBA713A5DE954936BFC6B4F6A5388F25A9602D30F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___height0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.SetTrackingPlaneOrientation(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_SetTrackingPlaneOrientation_m70B24372F1D8C233D2D26AC92735C372D50D5A6B (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___planeOrientationAngle0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.CanStartTracking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IWikitudeBridge_CanStartTracking_mCEA2D0E9EE842FF5C025977ACF987DC15A4F39DF (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.ConvertScreenCoordinate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_ConvertScreenCoordinate_m8567A61741B6E4B0F0A5D0C0FC005FCB90EAC9AD (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenCoordinate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_ConvertScreenCoordinate_m8567A61741B6E4B0F0A5D0C0FC005FCB90EAC9AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get__trackerManagerName_8();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_0, /*hidden argument*/NULL);
		float* L_2 = (&___screenCoordinate0)->get_address_of_x_0();
		String_t* L_3 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_2, /*hidden argument*/NULL);
		float* L_4 = (&___screenCoordinate0)->get_address_of_y_1();
		String_t* L_5 = Single_ToString_m2B1556CFBBD088D285A0B0EA280F82D3A4344DC3((float*)L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_3, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8, L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E(L_1, _stringLiteral980DA9AE60DC366DFDEC5DC08C2BB608C33B8319, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.RequestPointCloud()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_RequestPointCloud_m070B1C17480EB9F78A7A3358EED003BBB0A7A3B0 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_RequestPointCloud_m070B1C17480EB9F78A7A3358EED003BBB0A7A3B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_0 = NULL;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____C41861748509CEC7903CF9025B773179349BC8CA13AEBCCABA898D76C46B12AF_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = V_0;
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_4 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_3, 3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		intptr_t L_5 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
		V_2 = (intptr_t)L_5;
		String_t* L_6 = __this->get__trackerManagerName_8();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(L_6, /*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = V_0;
		NullCheck(L_8);
		V_3 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))/(int32_t)3));
		String_t* L_9 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_10 = IntPtr_ToString_m69003637DD38C2850CFD23F50ECBDD777B3C310C((intptr_t*)(&V_2), /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_9, _stringLiteral3EB416223E9E69E6BB8EE19793911AD1AD2027D8, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SendMessage_mAF014F12A3B807BC435571585D4DD34FA89EC28E(L_7, _stringLiteral1892ABBB1DCB56D4C13BA6EFC79A119EB546E54F, L_11, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x69, FINALLY_0058);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0058;
	}

FINALLY_0058:
	{ // begin finally (depth: 1)
		{
			bool L_12 = GCHandle_get_IsAllocated_m91323BCB568B1150F90515EF862B00F193E77808((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0068;
			}
		}

IL_0061:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_1), /*hidden argument*/NULL);
		}

IL_0068:
		{
			IL2CPP_END_FINALLY(88)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(88)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x69, IL_0069)
	}

IL_0069:
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.TransferPointCloud(System.IntPtr,System.IntPtr,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_TransferPointCloud_mFE279E19987EFC4F87813F477CCA391E784E0C6D (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, intptr_t ___source0, intptr_t ___destination1, uint32_t ___length2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_TransferPointCloud_mFE279E19987EFC4F87813F477CCA391E784E0C6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		uint32_t L_0 = ___length2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		intptr_t L_2 = ___source0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		uint32_t L_4 = ___length2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_2, L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_5 = V_0;
		intptr_t L_6 = ___destination1;
		uint32_t L_7 = ___length2;
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_5, 0, (intptr_t)L_6, L_7, /*hidden argument*/NULL);
		goto IL_0022;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001b;
		throw e;
	}

CATCH_001b:
	{ // begin catch(System.Exception)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(((Exception_t *)__exception_local), /*hidden argument*/NULL);
		goto IL_0022;
	} // end catch (depth: 1)

IL_0022:
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.SaveCurrentInstantTarget(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_SaveCurrentInstantTarget_m4E70D1406F8ACA9B47385033A77FBA05AB379229 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.LoadInstantTarget(System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_LoadInstantTarget_mC7C9C4B69FB94BF4D30F4DAD57D876BE25A82677 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___resourceId0, int32_t ___expansionPolicy1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetTrackedTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetTrackedTargets_m0D32AA880AC6958A75A777748A54A9DF43B10C9F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_TrackedTargets_5();
		return L_0;
	}
}
// System.Int64[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetTargetIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetTargetIDs_m02D19FE5FC3E5D03F5AC3BF8E48357F5E5668A9B (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = __this->get_TargetIDs_4();
		return L_0;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetFov()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetFov_mF4AFCF78188460966AF9962CB41D95F98E038C7C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (57.0f);
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetCameraToSurfaceAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetCameraToSurfaceAngle_m57A7C20F023D5BDA188CCA0810179B5767CC0234 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Single[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetModelViewMatrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetModelViewMatrices_mB0052E6A023F6BAC28A9B91FA83CC7C10F7201EF (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__isObjectTrackingRunning_7();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = __this->get_ObjectTrackingMatrix_1();
		return L_1;
	}

IL_000f:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_2 = __this->get_GenericTrackingMatrices_0();
		return L_2;
	}
}
// System.Single[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetViewMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetViewMatrix_mE8F9AC006EE5DE068E15F1B4AA7070965CE53F89 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = __this->get_ViewMatrix_2();
		return L_0;
	}
}
// System.Int64[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetPlaneIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneIDs_m05B857C97868398C0E1D81F3866EF66298F5FDC6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneIDs_m05B857C97868398C0E1D81F3866EF66298F5FDC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_0;
	}
}
// Wikitude.PlaneData Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetPlaneData(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5  UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneData_m350D94DA94A42553B4C9BFF4B3D55A7EBDDF0FBB (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___identifier0, const RuntimeMethod* method)
{
	PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5 ));
		PlaneData_t541493006697BBD9D181DC352F23C45A4A79A5A5  L_0 = V_0;
		return L_0;
	}
}
// System.Single[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetPlaneMatrices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneMatrices_m05A012DF6CF3ADDE72558EABF00D0190B4C6F229 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = __this->get_GenericTrackingMatrices_0();
		return L_0;
	}
}
// System.Single[] Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetPlaneConvexHull(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneConvexHull_mBDF14B4CB46B2BFC1DC9F9744145C490E61E013D (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int64_t ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPlaneConvexHull_mBDF14B4CB46B2BFC1DC9F9744145C490E61E013D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)0);
		return L_0;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetImageTargetScale(System.String,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetImageTargetScale_m37EF868DAA017EAF088744575D8A399CCE7C2F63 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetName0, int64_t ___targetId1, int32_t ___componentIndex2, const RuntimeMethod* method)
{
	{
		return (1.0f);
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetObjectTargetScale(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetObjectTargetScale_mDCD5FED8AB420D1D34E2AB1AB345A783C99C473F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetName0, int32_t ___componentIndex1, const RuntimeMethod* method)
{
	{
		return (1.0f);
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetPhysicalTargetHeight(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetPhysicalTargetHeight_mE99E705D3105E97F9BFA633725C1D3FA5A0907DF (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___targetName0, int64_t ___targetId1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0004:
	{
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_0 = __this->get_TargetIDs_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		int64_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int64_t L_4 = ___targetId1;
		if ((!(((uint64_t)L_3) == ((uint64_t)L_4))))
		{
			goto IL_0018;
		}
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = __this->get_PhysicalTargetHeights_3();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}

IL_0018:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_10 = V_0;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_11 = __this->get_TargetIDs_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))
		{
			goto IL_0004;
		}
	}
	{
		return (298.0f);
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.RegisterPlugin(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_RegisterPlugin_m5F9246289EFF114EBD99460FC4C4B5A0D950A477 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___identifier0, bool ___hasInputModule1, bool ___requestsCameraFrameRendering2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.NotifyNewCameraFrame(System.String,Wikitude.UnityFrame,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_NotifyNewCameraFrame_m60260E6632E3EB747C7A04C84E8493D1F8C46C9F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___identifier0, UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758  ___unityFrame1, bool ___invertFrame2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.SetInputModuleCameraToSurfaceAngle(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_SetInputModuleCameraToSurfaceAngle_mCD48883DA09EAE2D6359D727468E23853C5E0398 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___identifier0, float ___cameraToSurfaceAngle1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.DeregisterPlugin(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IWikitudeBridge_DeregisterPlugin_m500A684639A77EC139D8F0F439F11EBE2EC7E11E (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetSDKBuildConfiguration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildConfiguration_m35026E956EA7D64B7D21D772F510B7D169A287C9 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildConfiguration_m35026E956EA7D64B7D21D772F510B7D169A287C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral01F561AC4AB15D6A23A57976BBA4DBCC423B9CBB;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetSDKBuildNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildNumber_mA9BFD708BCCED5AA0BC095C068D34EA2F6C10C18 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildNumber_mA9BFD708BCCED5AA0BC095C068D34EA2F6C10C18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral939BB46A04C3640C8C427E92B1B557E882E2D2A0;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetSDKBuildDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildDate_m2766581198A55E48360759E79F03ABC14E5545B9 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildDate_m2766581198A55E48360759E79F03ABC14E5545B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral7907256910E477CE90D69E72480005AB4616D325;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetSDKBuildVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildVersion_mDAE2D9989113A0D8DB121A09FC2FCC3191084ACE (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetSDKBuildVersion_mDAE2D9989113A0D8DB121A09FC2FCC3191084ACE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.ComputeDistanceBetweenTargets(System.String,System.Int64,System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_ComputeDistanceBetweenTargets_mE46CCE901E97C3C73D61CE3ED0C4291444E73527 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___firstImageTargetName0, int64_t ___firstImageTargetID1, String_t* ___secondImageTargetName2, int64_t ___secondImageTargetID3, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.ComputeCameraDistanceToTarget(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IWikitudeBridge_ComputeCameraDistanceToTarget_mF8811FB9312358F14189B1CF9551D05F7DF413C2 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___imageTargetName0, int64_t ___imageTargetID1, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Int64 Wikitude.UnityWikitudeBridge::Wikitude.IWikitudeBridge.GetRenderFrameId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWikitudeBridge_Wikitude_IWikitudeBridge_GetRenderFrameId_m61BA533646387082D0AA184432B37BF93F57B62D (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (((int64_t)((int64_t)(-1))));
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.get_IsUsingRemote()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_get_IsUsingRemote_mE3645DC6C2DE93F802D8F84318E8CD6000993B3A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.set_IsUsingRemote(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_set_IsUsingRemote_m86DF570FFAF47CE3D71E26FEB8334FD3ABAC0DE7 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.get_IsEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_get_IsEditor_mC94FEE923A531CDCE15705F9ACAC7E70ACEDEC3A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)1;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.InitializeCSharpFunctions(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_InitializeCSharpFunctions_m637328B72967F8929331DCB9DE031CB0AD8713EE (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, intptr_t ___csharpFunctions0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.IntPtr Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.InstantiatePlatform(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWikitudeBridge_Wikitude_IPlatformBridge_InstantiatePlatform_m154738688068FA63045E4793A65D12D6B48E6454 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___temporaryDirectory0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IPlatformBridge_InstantiatePlatform_m154738688068FA63045E4793A65D12D6B48E6454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.IntPtr Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetSDKMutex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetSDKMutex_m51A4A2D2A2CEBF9B9E0448423700D0192C8D1826 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IPlatformBridge_GetSDKMutex_m51A4A2D2A2CEBF9B9E0448423700D0192C8D1826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return (intptr_t)(0);
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetLicenseKey(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetLicenseKey_mB7CDC8308B2989F2734BB6F89B00F24A5FE7E94A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, String_t* ___licenseKey0, String_t* ___bundleIdentifier1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.InitializeCoordinateSystem(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_InitializeCoordinateSystem_mCEF50AA6862A926E329E6141721A9BE67F34E31C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, intptr_t ___coordinateSystem0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_Start_m4BBC6E701BB7286567611D18F135D81509C6409C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_Stop_mF98851E41D7AC20470F6DBA2C6B857C20C853752 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.InitializePlatformCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_InitializePlatformCamera_mE9AD72C1E19621C4BEE2925139EEEA7B8B5CE181 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.DestroyPlatform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_DestroyPlatform_m3ADDBEFA576884526000DD4CE9956229AC203208 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// UnityEngine.Texture Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * UnityWikitudeBridge_Wikitude_IPlatformBridge_GetRenderTexture_mDA90486E1B8C03F8A773ED952D8BF217B5F77A0A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.UpdateRenderTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_UpdateRenderTexture_m9AB7CF079D4A3055B622BB266E3E9F016DA8BFEA (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___texture0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SurfaceChanged(System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SurfaceChanged_mBE707290341BE94A19C81AFFE299081E1672D231 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, uint32_t ___width0, uint32_t ___height1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.CameraToSurfaceAngleChanged(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_CameraToSurfaceAngleChanged_mEFE1A3B0A9E0ACE1F947111B2B9074EDD9312A3C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___angle0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetMetadata(System.Single,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetMetadata_m4288A9A8B7913D0B5BD48CBC62E5B9E69F000448 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___cameraFieldOfView0, uint32_t ___frameWidth1, uint32_t ___frameHeight2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_OnPreRender_m1D5458C0239F7A313DE09479E3B51ACD27ADA63A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_Update_m3F636393B9D816A61D9C18754F2D1BCA738D74C8 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.UpdateOrientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_UpdateOrientation_m8777A8755BC73DF33572C9C34F917EEC3A205ED9 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___orientation0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.NotifyNewInputFrame(System.UInt64,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_NotifyNewInputFrame_m61230468E4A0CC1B4AAD0CEDFDE6884806D5EC66 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, uint64_t ___frameId0, intptr_t ___frameData1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.NotifyNewDeviceRotationEvent(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_NotifyNewDeviceRotationEvent_m4B24BD5184EA6F8A62E5D70211E583A49C5D3BF6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___rotation0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsPlatformAssistedTrackingSupported(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_IsPlatformAssistedTrackingSupported_m71DBAA71D8520A156B403D71B6BEDA78C75A16C0 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, bool ___internalCall0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___internalCall0;
		TrackerManager_IsPlatformAssistedTrackingAvailableInternal_mD3133218798956166530E169116943E57C4BF934(2, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureDeviceResolution(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureDeviceResolution_mAD1591160EDFE1483BB93C1695EFE48E756B954C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___resolutionMode0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureDeviceFramerate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureDeviceFramerate_mCBFC88D056C0B4492EE06D59F4B3FAE412F5D7C8 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___framerateMode0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureDevicePosition_m38F61D26381A8EC8BF12383BF926C929D8F1E0A0 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureDevicePosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureDevicePosition_mEDAF4F26E162578707CD7F0D5CADBF08CCC5BA14 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___newDevicePosition0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCaptureFocusModeSupported(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCaptureFocusModeSupported_m28E2C89ED01814CA3001EAB541AD839418E536B4 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___focusMode0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureFocusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureFocusMode_m91CC6813D83F894D906DDCB51FE41AC53A52E620 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureFocusMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureFocusMode_m7080DC5217126A5A96E044B66E3A75B78C7ECD1A (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___focusMode0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCaptureExposureModeSupported(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCaptureExposureModeSupported_m02EACCBDEFA414119551488C3A6992B04C0C98D5 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___focusMode0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureExposureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureExposureMode_m73592433B434B1E119EC69FF24A01B88FCF689C9 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureExposureMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureExposureMode_m29ADD50CBD54926419737ECE74AA1DF7A4D2B72E (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___exposureMode0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsManualFocusAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsManualFocusAvailable_mF99FA5D90BBAA9FCC34FBE9597B58D03334CE9F4 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetManualFocusDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IPlatformBridge_GetManualFocusDistance_m29B2A7E6ABA682ECB385167D8DCAE85F18924413 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetManualFocusDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetManualFocusDistance_m52780441DAAA458245F57BA388F642C223904F08 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___manualFocusDistance0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCaptureAutoFocusRestrictionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCaptureAutoFocusRestrictionSupported_mB51A5D852E9DAC8EE789F1991681425921385E7C (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureAutoFocusRestriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureAutoFocusRestriction_mB142F5332C12A0027C96F03F2835ECBD318C79F6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureAutoFocusRestriction(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureAutoFocusRestriction_mCE7EB081B620CD44D63BBA716305033F1DADF2E0 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___newAutoFocusRestriction0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCaptureZoomLevelSupported(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCaptureZoomLevelSupported_mF535E9C78CA18393DDDFAB6226FF1B363E157174 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___zoomLevel0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureZoomLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureZoomLevel_mDF92A8F7BD7ABA14E1B7794A3FEC9E5477793948 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (0.0f);
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureZoomLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureZoomLevel_m8234EA9C61C28138C3A2024DF6545AEE7FED3759 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___newZoomLevel0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Single Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureMaxZoomLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureMaxZoomLevel_mB3D45C3AF28CC772760371173001B38D4E1C62E5 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (1.0f);
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCaptureFlashModeSupported(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCaptureFlashModeSupported_mA489857F6E13336C0B1C8B68793D113235ADD305 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___flashMode0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCaptureFlashMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCaptureFlashMode_mCE7D4D1392FD6A04EA0562EC13F7F8FBDA8AAE90 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return 0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCaptureFlashMode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCaptureFlashMode_m61C02FBF1F78CF81D8AA0D40098467870DBE224F (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___newFlashMode0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsFocusAtPointOfInterestSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsFocusAtPointOfInterestSupported_mF43481A0311EE4D3ED04FD27EE9E478F4B12337E (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.FocusAtPointOfInterest(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_FocusAtPointOfInterest_mCA45811199157781921EA3BDF24E45540CB27E18 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___pointOfInterestX0, float ___pointOfInterestY1, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsExposeAtPointOfInterestSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsExposeAtPointOfInterestSupported_m13E6897E51C9262AF81E1EDA87FDDF0E05CDD377 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.ExposeAtPointOfInterest(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_ExposeAtPointOfInterest_m5118E8F9985A7FF17D2B0D1A0EFAE89682E6F38B (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, float ___pointOfInterestX0, float ___pointOfInterestY1, int32_t ___exposureMode2, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.EnableCamera2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_EnableCamera2_mCFAFB1AA1CC8CBC25AF7DECD94F9D8A716C0D4E6 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetCamera2SupportLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetCamera2SupportLevel_m7CB66362B8E0BBB5B97CCBAFC6F93D22E8A57102 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___camera2SupportLevel0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.IsCameraListSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWikitudeBridge_Wikitude_IPlatformBridge_IsCameraListSupported_mA807AB0F49CDDE930889D8ED4E6C092A2D24C927 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCameraList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCameraList_m4E45A204A2CD8AB084FA696A0AE418A37FA2BBCF (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.String Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetCameraName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCameraName_mAEB1D0218823CA3CE4B1B5382E685013CCB83339 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___cameraIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge_Wikitude_IPlatformBridge_GetCameraName_mAEB1D0218823CA3CE4B1B5382E685013CCB83339_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Void Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.SetActiveCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge_Wikitude_IPlatformBridge_SetActiveCamera_mCBCB6A4A1AE09EF9C0B94A4B3AAA9A3A491969C4 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, int32_t ___cameraIndex0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Int32 Wikitude.UnityWikitudeBridge::Wikitude.IPlatformBridge.GetActiveCameraIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWikitudeBridge_Wikitude_IPlatformBridge_GetActiveCameraIndex_m03F20CC44167D0936F21AB56025E9CF9CD940FC5 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	{
		return (-1);
	}
}
// System.Void Wikitude.UnityWikitudeBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72 (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = L_0;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____A0EF2E7EA17CD8F7D02C2CBF3F23BD19E00000490DB7BCC8289D41BC8002190F_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_GenericTrackingMatrices_0(L_1);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_3 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____FE16C88AF62892FB353800966A4A89FC6D673586D2EDAE4BD09FA9ED156D85DB_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_ObjectTrackingMatrix_1(L_4);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_6 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = L_6;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_8 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t93E3DDE4E4568E7627E39388EB48913AB4E11B24____5998E9D1DD9BF48AF6AF87A1EF8C7783B818AC8329637ADA08CC5FB329042376_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_7, L_8, /*hidden argument*/NULL);
		__this->set_ViewMatrix_2(L_7);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_PhysicalTargetHeights_3(L_9);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_10 = (Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F*)SZArrayNew(Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_TargetIDs_4(L_10);
		__this->set_TrackedTargets_5(_stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6);
		__this->set_TargetCount_6(1);
		__this->set__trackerManagerName_8(_stringLiteral17EA174361919AE3C1BB2B3DB5335E670ACB6137);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Wikitude.UnityWikitudeBridge/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6E2F4C4D9C6AC4D086A1F1E26CC45411CC9CB2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC6E2F4C4D9C6AC4D086A1F1E26CC45411CC9CB2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * L_0 = (U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C *)il2cpp_codegen_object_new(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m516F6AE2658AF018FB91168A3FB8DBEE3078E11C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Wikitude.UnityWikitudeBridge/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m516F6AE2658AF018FB91168A3FB8DBEE3078E11C (U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// Wikitude.IWikitudeBridge Wikitude.UnityWikitudeBridge/<>c::<.cctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__0_0_mB72972816794D6848F042E4FD0917D865C1D1098 (U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__0_0_mB72972816794D6848F042E4FD0917D865C1D1098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * L_0 = (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 *)il2cpp_codegen_object_new(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981_il2cpp_TypeInfo_var);
		UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72(L_0, /*hidden argument*/NULL);
		return L_0;
	}
}
// Wikitude.IPlatformBridge Wikitude.UnityWikitudeBridge/<>c::<.cctor>b__0_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_cctorU3Eb__0_1_m37C4560DCB8BD5DC9C48C1B8A53E4E1D3C59193D (U3CU3Ec_t8E749A6CEF658BB7371E1207B618B48D4E532E7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3C_cctorU3Eb__0_1_m37C4560DCB8BD5DC9C48C1B8A53E4E1D3C59193D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 * L_0 = (UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981 *)il2cpp_codegen_object_new(UnityWikitudeBridge_tDAEFD14FE250D8B4A1E2A83E7F093B35F105D981_il2cpp_TypeInfo_var);
		UnityWikitudeBridge__ctor_m3073059F225C94DD375E8260A75CD60869320F72(L_0, /*hidden argument*/NULL);
		return L_0;
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
// System.Void Wikitude.WikitudeBridge::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_Setup_m8FB8E8AC6872A0CEDC3F9E1E91B0DEEA9001533B (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeBridge_Setup_m8FB8E8AC6872A0CEDC3F9E1E91B0DEEA9001533B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral17EA174361919AE3C1BB2B3DB5335E670ACB6137, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_2 = GameObject_AddComponent_TisTrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_mDE58DE006D5AC351EDD533A795B42AAB52ECC437(L_1, /*hidden argument*/GameObject_AddComponent_TisTrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400_mDE58DE006D5AC351EDD533A795B42AAB52ECC437_RuntimeMethod_var);
		__this->set__trackerManager_0(L_2);
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_3 = __this->get__trackerManager_0();
		NullCheck(L_3);
		TrackerManager_Init_mD1CDF4A0CFA0C939A6B448F6B762F484E296B969(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeBridge::InternalUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_InternalUpdate_m009D78360169BB3ED52DD4F9236F5EDA2628AFC9 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeBridge_InternalUpdate_m009D78360169BB3ED52DD4F9236F5EDA2628AFC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* V_1 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_2 = NULL;
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_3 = NULL;
	float V_4 = 0.0f;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(40 /* System.String Wikitude.IWikitudeBridge::GetTrackedTargets() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		RuntimeObject* L_2 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_2);
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_3 = InterfaceFuncInvoker0< Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* >::Invoke(39 /* System.Int64[] Wikitude.IWikitudeBridge::GetTargetIDs() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		RuntimeObject* L_4 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_4);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_5 = InterfaceFuncInvoker0< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(43 /* System.Single[] Wikitude.IWikitudeBridge::GetModelViewMatrices() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_4);
		V_2 = L_5;
		RuntimeObject* L_6 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_6);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_7 = InterfaceFuncInvoker0< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(44 /* System.Single[] Wikitude.IWikitudeBridge::GetViewMatrix() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_6);
		V_3 = L_7;
		RuntimeObject* L_8 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = InterfaceFuncInvoker0< float >::Invoke(41 /* System.Single Wikitude.IWikitudeBridge::GetFov() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_8);
		V_4 = L_9;
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_10 = __this->get__trackerManager_0();
		String_t* L_11 = V_0;
		Int64U5BU5D_tE04A3DEF6AF1C852A43B98A24EFB715806B37F5F* L_12 = V_1;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = V_2;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_14 = V_3;
		float L_15 = V_4;
		NullCheck(L_10);
		TrackerManager_UpdateTrackables_mEC1F6D24F438A5DEA573C29EDBCACF4C733335D6(L_10, L_11, L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_16 = __this->get__trackerManager_0();
		NullCheck(L_16);
		TrackerManager_UpdatePlanes_m6F54D1BF7B7F8AF807B32EB962719E78C55C08CD(L_16, /*hidden argument*/NULL);
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_17 = __this->get__trackerManager_0();
		NullCheck(L_17);
		TrackerManager_ExecuteQueue_m22DC45924873021C5CA414C2AAC4D24EED710FEA(L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeBridge::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge_OnDestroy_m74E15F3ED269CB9CE131DEED5702E5DBD9D2A798 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeBridge_OnDestroy_m74E15F3ED269CB9CE131DEED5702E5DBD9D2A798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_0 = __this->get__trackerManager_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_2 = __this->get__trackerManager_0();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		TrackerManager_t14B3EF65DC7D0B00CE884E04E729B02124659400 * L_5 = __this->get__trackerManager_0();
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeBridge::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeBridge__ctor_mFE63E37D30170B409F09B0143E0E6EFF7C13CBD3 (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.String Wikitude.WikitudeCamera::get_WikitudeLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WikitudeCamera_get_WikitudeLicenseKey_m222DCF689FCDDFC7846EB1B2D3C2FF5E4C04C2F9 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__WikitudeLicenseKey_5();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_WikitudeLicenseKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_WikitudeLicenseKey_m0E6C41078F3E0CDCB97570504189CC04F8CBED98 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_WikitudeLicenseKey_m0E6C41078F3E0CDCB97570504189CC04F8CBED98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		String_t* L_1 = ___value0;
		__this->set__WikitudeLicenseKey_5(L_1);
		return;
	}

IL_0010:
	{
		WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66(__this, _stringLiteralA2BCE7E66A25DCA5CDFCA800AC96276D6CA065F7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_EnableCameraRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_EnableCameraRendering_m679514F966F1E9E3ADA6E030DA7A480E2DE29751 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableCameraRendering_6();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_EnableCameraRendering(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_EnableCameraRendering_m14E0468381FEACA74B354B634AD45BCCCCDA2A43 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		bool L_1 = __this->get__enableCameraRendering_6();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0016;
		}
	}
	{
		bool L_2 = ___value0;
		__this->set__enableCameraRendering_6(L_2);
		WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_StaticCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_StaticCamera_m4D9A3D8BB8AADB12AC75468A19D01BACA912BF73 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__staticCamera_7();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_StaticCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_StaticCamera_mF12CF57B99CE3809A2529FF7EC53BC4B85161181 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__staticCamera_7(L_0);
		return;
	}
}
// UnityEngine.Vector3 Wikitude.WikitudeCamera::get_CalibrationPositionOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  WikitudeCamera_get_CalibrationPositionOffset_m9C6D9CFC15F3F752439D154E6B350B5101E0347C (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get__calibrationPositionOffset_8();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_CalibrationPositionOffset(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_CalibrationPositionOffset_m2D8E0B267C09725F71307C86BA9AFAFE3A0A74FC (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___value0;
		__this->set__calibrationPositionOffset_8(L_0);
		return;
	}
}
// UnityEngine.Quaternion Wikitude.WikitudeCamera::get_CalibrationRotationOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  WikitudeCamera_get_CalibrationRotationOffset_mC9E9C71D778736A83D48E1E7A4C1FA4EB332AEB7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = __this->get__calibrationRotationOffset_9();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_CalibrationRotationOffset(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_CalibrationRotationOffset_m02BA273ACF3D80C908C31E10E997FED7A2EB66D6 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method)
{
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_0 = ___value0;
		__this->set__calibrationRotationOffset_9(L_0);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IgnoreTrackableScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IgnoreTrackableScale_mF8517528C0E0D65F90D913AE8610ADB29DB1E2D8 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__ignoreTrackableScale_10();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_IgnoreTrackableScale(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_IgnoreTrackableScale_m5F6B85F80084831BDF373D1DD2AFA030BB6C02F4 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__ignoreTrackableScale_10(L_0);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_PrintErrorsToConsole()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_PrintErrorsToConsole_mA5C065CD55986941A6B72C104AE2D61F5D0E3567 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__printErrorsToConsole_11();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_PrintErrorsToConsole(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_PrintErrorsToConsole_mBE2F2C307D1C343611BE3CCADCA301CC9DD467EF (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__printErrorsToConsole_11(L_0);
		return;
	}
}
// UnityEngine.Texture Wikitude.WikitudeCamera::get_CameraTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = InterfaceFuncInvoker0< Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * >::Invoke(12 /* UnityEngine.Texture Wikitude.IPlatformBridge::GetRenderTexture() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_Initialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__initialized_21();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_Initialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__initialized_21(L_0);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_InvertCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_InvertCulling_mF0412440AE9A922CD1169C6A3FA04FFDFD0D6DFE (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInvertCullingU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_InvertCulling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CInvertCullingU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_FlipHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_FlipHorizontal_m8167E0ADE960A81B5F5CAE6EF5E18BA9F8EE62D9 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFlipHorizontalU3Ek__BackingField_17();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_FlipHorizontal(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CFlipHorizontalU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::RegisterTracker(Wikitude.TrackerBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_RegisterTracker_m9330BAEE75C95AE51E2145490D431DDA71F11A1F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * ___tracker0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_RegisterTracker_m9330BAEE75C95AE51E2145490D431DDA71F11A1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * L_0 = __this->get__registeredTrackers_13();
		TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * L_1 = ___tracker0;
		NullCheck(L_0);
		bool L_2 = HashSet_1_Contains_mD203323B0CF5F16ECA5C6351B10F900844405A22(L_0, L_1, /*hidden argument*/HashSet_1_Contains_mD203323B0CF5F16ECA5C6351B10F900844405A22_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * L_3 = __this->get__registeredTrackers_13();
		TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * L_4 = ___tracker0;
		NullCheck(L_3);
		HashSet_1_Add_mC2E2E8F393C540A59ADE3639F3E747DBD556C94B(L_3, L_4, /*hidden argument*/HashSet_1_Add_mC2E2E8F393C540A59ADE3639F3E747DBD556C94B_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_Awake_mABB3E95408F35A6CED85F711EC37C7186B69DD6C (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_Awake_mABB3E95408F35A6CED85F711EC37C7186B69DD6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__enableLivePreview_32();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)7))))
		{
			goto IL_001c;
		}
	}

IL_0017:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		WikitudeSDK_ForceUnityBridge_m26F67BA31B2DF237E48BEBF7A230B7D312520E16(/*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_Start_mFBA612900287C5995065B10CC234077033F4DEC9 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_Start_mFBA612900287C5995065B10CC234077033F4DEC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)7))))
		{
			goto IL_0015;
		}
	}

IL_000f:
	{
		Application_set_runInBackground_mFA0776084D9A103EE79F8692C3F33BA3248565EC((bool)1, /*hidden argument*/NULL);
	}

IL_0015:
	{
		PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * L_2 = PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694_inline(/*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0026;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralE0B4955E94AC0FB3B4768BD4DCD9607D6BF5E8B5, /*hidden argument*/NULL);
	}

IL_0026:
	{
		WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * L_3 = __this->get__bridge_12();
		NullCheck(L_3);
		WikitudeBridge_Setup_m8FB8E8AC6872A0CEDC3F9E1E91B0DEEA9001533B(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_5 = __this->get__desiredDeviceResolution_28();
		NullCheck(L_4);
		InterfaceActionInvoker1< int32_t >::Invoke(23 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceResolution(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_7 = __this->get__desiredDeviceFramerate_29();
		NullCheck(L_6);
		InterfaceActionInvoker1< int32_t >::Invoke(24 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceFramerate(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		bool L_9 = __this->get__enableCamera2_30();
		NullCheck(L_8);
		InterfaceActionInvoker1< bool >::Invoke(50 /* System.Void Wikitude.IPlatformBridge::EnableCamera2(System.Boolean) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_11 = __this->get__camera2SupportLevel_31();
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(51 /* System.Void Wikitude.IPlatformBridge::SetCamera2SupportLevel(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_10, L_11);
		WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033(__this, /*hidden argument*/NULL);
		RuntimeObject* L_12 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		String_t* L_13 = __this->get__WikitudeLicenseKey_5();
		RuntimeObject* L_14 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		String_t* L_15 = Application_get_temporaryCachePath_m6769909A405A6A5A0477F8E5F312920C8115E50C(/*hidden argument*/NULL);
		NullCheck(L_14);
		intptr_t L_16 = InterfaceFuncInvoker1< intptr_t, String_t* >::Invoke(4 /* System.IntPtr Wikitude.IPlatformBridge::InstantiatePlatform(System.String) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_17 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_17);
		intptr_t L_18 = InterfaceFuncInvoker0< intptr_t >::Invoke(5 /* System.IntPtr Wikitude.IPlatformBridge::GetSDKMutex() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_12);
		InterfaceActionInvoker3< String_t*, intptr_t, intptr_t >::Invoke(1 /* System.Void Wikitude.IWikitudeBridge::InstantiateWikitudeNativeSDK(System.String,System.IntPtr,System.IntPtr) */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_12, L_13, (intptr_t)L_16, (intptr_t)L_18);
		RuntimeObject* L_19 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		String_t* L_20 = __this->get__WikitudeLicenseKey_5();
		PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * L_21 = PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694_inline(/*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String Wikitude.PlatformBase::GetApplicationIdentifier() */, L_21);
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void Wikitude.IPlatformBridge::SetLicenseKey(System.String,System.String) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_19, L_20, L_22);
		V_0 = (bool)1;
		PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * L_23 = PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00e2;
		}
	}
	{
		PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * L_25 = PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743_inline(/*hidden argument*/NULL);
		NullCheck(L_25);
		PluginManager_Initialize_mD0EB9BCAE828473CD49D386141BBFBC2BC8EA3D1(L_25, __this, /*hidden argument*/NULL);
		PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * L_26 = PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743_inline(/*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = PluginManager_HasPluginsWithInputModule_mBA34EDDB70A33FEB11350933B481BAAFCE3A8B85(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00e2;
		}
	}
	{
		V_0 = (bool)0;
	}

IL_00e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_28 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(8 /* System.Void Wikitude.IPlatformBridge::Start() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_28);
		bool L_29 = V_0;
		if (!L_29)
		{
			goto IL_00f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_30 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_30);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Wikitude.IPlatformBridge::InitializePlatformCamera() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_30);
	}

IL_00f9:
	{
		WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A(__this, /*hidden argument*/NULL);
		WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_31 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_31);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Wikitude.IWikitudeBridge::StartWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_31);
		bool L_32 = V_0;
		__this->set__platformCameraInitialized_20(L_32);
		WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F_inline(__this, (bool)1, /*hidden argument*/NULL);
		HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * L_33 = __this->get__registeredTrackers_13();
		NullCheck(L_33);
		Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8  L_34 = HashSet_1_GetEnumerator_mF9D739E7085205B81CEC5EBAE3CE68104FE258AB(L_33, /*hidden argument*/HashSet_1_GetEnumerator_mF9D739E7085205B81CEC5EBAE3CE68104FE258AB_RuntimeMethod_var);
		V_1 = L_34;
	}

IL_0129:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0137;
		}

IL_012b:
		{
			TrackerBehaviour_t80BFFD792EBBCA579BD37D1B764B1F25ECC47048 * L_35 = Enumerator_get_Current_m14CB2EF048AA92E6CC5F5C6DA75752C08300B269_inline((Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m14CB2EF048AA92E6CC5F5C6DA75752C08300B269_RuntimeMethod_var);
			NullCheck(L_35);
			TrackerBehaviour_OnWikitudeCameraInitialized_m0D8F1F6B396FD7F57D217F38117BF9A53ABF37E8(L_35, /*hidden argument*/NULL);
		}

IL_0137:
		{
			bool L_36 = Enumerator_MoveNext_m9C970A52969C613F62BBF07B74B3350594996FEE((Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m9C970A52969C613F62BBF07B74B3350594996FEE_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_012b;
			}
		}

IL_0140:
		{
			IL2CPP_LEAVE(0x150, FINALLY_0142);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0142;
	}

FINALLY_0142:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B4863788741AD9FF45E08C1812DCE18C971B3E7((Enumerator_tF9441FC1593B00F188DE6015DB7BF486172027D8 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3B4863788741AD9FF45E08C1812DCE18C971B3E7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(322)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(322)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x150, IL_0150)
	}

IL_0150:
	{
		WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0(__this, /*hidden argument*/NULL);
		OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * L_37 = __this->get_OnSDKInitialized_4();
		NullCheck(L_37);
		UnityEvent_Invoke_mB2FA1C76256FE34D5E7F84ABE528AC61CE8A0325(L_37, /*hidden argument*/NULL);
		WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnEnable_mB75F426F3B56C7E3E4B2F9F5BF6C7BEB6111F32D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_OnEnable_mB75F426F3B56C7E3E4B2F9F5BF6C7BEB6111F32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Wikitude.IWikitudeBridge::StartWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_1);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnDisable_m28A89AFBA073D5485C24F42161BC518D0D29D76B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_OnDisable_m28A89AFBA073D5485C24F42161BC518D0D29D76B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Wikitude.IWikitudeBridge::StopWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_1);
	}

IL_0012:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnDestroy_m90E801D4A6E4352A5EFD8391E72B89087E158493 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_OnDestroy_m90E801D4A6E4352A5EFD8391E72B89087E158493_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F_inline(__this, (bool)0, /*hidden argument*/NULL);
		WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * L_0 = __this->get__bridge_12();
		NullCheck(L_0);
		WikitudeBridge_OnDestroy_m74E15F3ED269CB9CE131DEED5702E5DBD9D2A798(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(9 /* System.Void Wikitude.IPlatformBridge::Stop() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_2 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Wikitude.IWikitudeBridge::StopWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(4 /* System.Void Wikitude.IWikitudeBridge::DestroyWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker0::Invoke(11 /* System.Void Wikitude.IPlatformBridge::DestroyPlatform() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_4);
		WikitudeSDK_Destroy_m967AE0AA637FAF6069EA90FBF9003A07B9A40BEB(/*hidden argument*/NULL);
		WikitudeCamera_DestroyLivePreview_m34CF4D531DAB5BDA677BAF20464FE8D04BE12B18(__this, /*hidden argument*/NULL);
		WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::InitializeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_InitializeCamera_mC35E435034839A3CF07A1AE3E6077D16580A8C0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_1 = NULL;
	BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * V_2 = NULL;
	{
		bool L_0 = __this->get__enableCameraRendering_6();
		if (!L_0)
		{
			goto IL_01ff;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		__this->set__sceneCameraComponent_15(L_1);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = __this->get__sceneCameraComponent_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral57325206D0020D725B95D7BFE28CEFF055C34C44, /*hidden argument*/NULL);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		bool L_4 = __this->get__hasInputPlugins_54();
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		bool L_5 = __this->get__requestsCameraFrameRendering_55();
		if (!L_5)
		{
			goto IL_006a;
		}
	}

IL_0046:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = __this->get__sceneCameraComponent_15();
		NullCheck(L_6);
		int32_t L_7 = Camera_get_clearFlags_m1D02BA1ABD7310269F6121C58AF41DCDEF1E0266(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)3)))
		{
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralD6F1923E1B5508C7017A1CDA544B81E392455842, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_8 = __this->get__sceneCameraComponent_15();
		NullCheck(L_8);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_8, 3, /*hidden argument*/NULL);
	}

IL_006a:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_9 = __this->get__sceneCameraComponent_15();
		NullCheck(L_9);
		bool L_10 = Camera_get_orthographic_m801883D15C8D9816091F6B9C742CA5FA3650C8E6(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_008d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteralC813FA902B04A30624977C2363D478DDAF51135D, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = __this->get__sceneCameraComponent_15();
		NullCheck(L_11);
		Camera_set_orthographic_mB2549D26F5E220102D7478EB4C15F8F12D96FE09(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_008d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get__backgroundCamera_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_12, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral621CCC1F4554EC41DC37B1E2D27C4593D2E21D8B, /*hidden argument*/NULL);
		return;
	}

IL_00a6:
	{
		V_0 = 0;
		goto IL_0181;
	}

IL_00ad:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_18 = GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD(L_17, /*hidden argument*/GameObject_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mCF3938D33A4B2D1D9B65321455F867660E72C3FD_RuntimeMethod_var);
		V_1 = L_18;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_017d;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_21 = V_1;
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_21, /*hidden argument*/NULL);
		__this->set__backgroundCamera_14(L_22);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_23 = V_1;
		NullCheck(L_23);
		int32_t L_24 = Camera_get_clearFlags_m1D02BA1ABD7310269F6121C58AF41DCDEF1E0266(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_24) == ((int32_t)2)))
		{
			goto IL_010b;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get__backgroundCamera_14();
		NullCheck(L_25);
		String_t* L_26 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_25, /*hidden argument*/NULL);
		String_t* L_27 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8BB5FFE3E9929A8E30C8679F011CD16FDB6C0A3B, L_26, _stringLiteral86A7E4306FD41B3393D3F4E9E196F0C7E9437EC5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_27, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_28 = V_1;
		NullCheck(L_28);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_28, 2, /*hidden argument*/NULL);
	}

IL_010b:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_29 = V_1;
		NullCheck(L_29);
		bool L_30 = Camera_get_orthographic_m801883D15C8D9816091F6B9C742CA5FA3650C8E6(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_0139;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get__backgroundCamera_14();
		NullCheck(L_31);
		String_t* L_32 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_31, /*hidden argument*/NULL);
		String_t* L_33 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8BB5FFE3E9929A8E30C8679F011CD16FDB6C0A3B, L_32, _stringLiteral363455E58D7BDB85CFF382C83C52772BF2268083, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_33, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_34 = V_1;
		NullCheck(L_34);
		Camera_set_orthographic_mB2549D26F5E220102D7478EB4C15F8F12D96FE09(L_34, (bool)0, /*hidden argument*/NULL);
	}

IL_0139:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_35 = V_1;
		NullCheck(L_35);
		BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * L_36 = Component_GetComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m390220902A4292B43AF4BB672C2591965A89E17B(L_35, /*hidden argument*/Component_GetComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m390220902A4292B43AF4BB672C2591965A89E17B_RuntimeMethod_var);
		V_2 = L_36;
		BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_38 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_37, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0174;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get__backgroundCamera_14();
		NullCheck(L_39);
		String_t* L_40 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_39, /*hidden argument*/NULL);
		String_t* L_41 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral8BB5FFE3E9929A8E30C8679F011CD16FDB6C0A3B, L_40, _stringLiteral67ED8E83A2FC8158F744B30284DB7FBC21E3B38A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_41, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_42 = __this->get__backgroundCamera_14();
		NullCheck(L_42);
		BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * L_43 = GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF(L_42, /*hidden argument*/GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF_RuntimeMethod_var);
		V_2 = L_43;
	}

IL_0174:
	{
		BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * L_44 = V_2;
		NullCheck(L_44);
		L_44->set_WikitudeCamera_4(__this);
		goto IL_0192;
	}

IL_017d:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0181:
	{
		int32_t L_46 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_47 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		int32_t L_48 = Transform_get_childCount_m7665D779DCDB6B175FB52A254276CDF0C384A724(L_47, /*hidden argument*/NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_00ad;
		}
	}

IL_0192:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_49 = __this->get__backgroundCamera_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_50 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_49, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_021f;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_51 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mA4DFA8F4471418C248E95B55070665EF344B4B2D(L_51, /*hidden argument*/NULL);
		__this->set__backgroundCamera_14(L_51);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_52 = __this->get__backgroundCamera_14();
		NullCheck(L_52);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_52, _stringLiteral2811A025BCC523D531947F0A725A386EDA530A41, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_53 = __this->get__backgroundCamera_14();
		NullCheck(L_53);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_54 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_53, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_55 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_SetParent_mFAF9209CAB6A864552074BA065D740924A4BF979(L_54, L_55, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get__backgroundCamera_14();
		NullCheck(L_56);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_57 = GameObject_AddComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m7DF3B4DB4CA60855860B6760DBA2B1AE5883D20F(L_56, /*hidden argument*/GameObject_AddComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_m7DF3B4DB4CA60855860B6760DBA2B1AE5883D20F_RuntimeMethod_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_58 = L_57;
		NullCheck(L_58);
		Camera_set_clearFlags_m805DFBD136AA3E1E46A2E61441965D174E87FE50(L_58, 2, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_59 = Color_get_black_mEB3C91F45F8AA7E4842238DFCC578BB322723DAF(/*hidden argument*/NULL);
		NullCheck(L_58);
		Camera_set_backgroundColor_mDB9CA1B37FE2D52493823914AC5BC9F8C1935D6F(L_58, L_59, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = __this->get__backgroundCamera_14();
		NullCheck(L_60);
		BackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E * L_61 = GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF(L_60, /*hidden argument*/GameObject_AddComponent_TisBackgroundCamera_t8D26B4BDC7F1A9DB77F0929B61667BE15AD3F70E_m37F407E7316387C5D080425980643AFCE6F483BF_RuntimeMethod_var);
		NullCheck(L_61);
		L_61->set_WikitudeCamera_4(__this);
		return;
	}

IL_01ff:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_62 = __this->get__backgroundCamera_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_63 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_62, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_021f;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_64 = __this->get__backgroundCamera_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_64, /*hidden argument*/NULL);
		__this->set__backgroundCamera_14((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
	}

IL_021f:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::InitializeNativeCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = __this->get__desiredDeviceResolution_28();
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(23 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceResolution(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_3 = __this->get__desiredDeviceFramerate_29();
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(24 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceFramerate(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_2, L_3);
		int32_t L_4 = __this->get__cachedActiveCameraIndex_26();
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_6 = __this->get__cachedActiveCameraIndex_26();
		NullCheck(L_5);
		InterfaceActionInvoker1< int32_t >::Invoke(55 /* System.Void Wikitude.IPlatformBridge::SetActiveCamera(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_5, L_6);
		goto IL_004b;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_7 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_8 = __this->get__cachedDevicePosition_25();
		NullCheck(L_7);
		InterfaceActionInvoker1< int32_t >::Invoke(26 /* System.Void Wikitude.IPlatformBridge::SetCaptureDevicePosition(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_004b:
	{
		WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::InitializePlatformCameraIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_InitializePlatformCameraIfNeeded_m19D4B823A22B606A611B6551E6AC3FED328C3C6A (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_InitializePlatformCameraIfNeeded_m19D4B823A22B606A611B6551E6AC3FED328C3C6A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__platformCameraInitialized_20();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(10 /* System.Void Wikitude.IPlatformBridge::InitializePlatformCamera() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_1);
		__this->set__platformCameraInitialized_20((bool)1);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateCameraRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = __this->get__desiredDeviceResolution_28();
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(23 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceResolution(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_3 = __this->get__desiredDeviceFramerate_29();
		NullCheck(L_2);
		InterfaceActionInvoker1< int32_t >::Invoke(24 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceFramerate(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_4 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_5 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint32_t, uint32_t >::Invoke(14 /* System.Void Wikitude.IPlatformBridge::SurfaceChanged(System.UInt32,System.UInt32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_4, L_5, L_6);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateCulling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableCameraRendering_6();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = WikitudeCamera_get_CachedDevicePosition_m16C224A3C3CBC64261C0B44CF236A0CEA52EABDD_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC_inline(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_001a:
	{
		WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC_inline(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_002a;
	}

IL_0023:
	{
		WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_002a:
	{
		bool L_2 = WikitudeCamera_get_InvertCulling_mF0412440AE9A922CD1169C6A3FA04FFDFD0D6DFE_inline(__this, /*hidden argument*/NULL);
		WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnPreRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnPreRender_mC2FCBB9A3FABC793C2BCB04A9B7A24074E5516A8 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	{
		bool L_0 = GL_get_invertCulling_m5919A261F2122C481C85E3496DDE22E0C2294965(/*hidden argument*/NULL);
		__this->set__wasCullingInverted_19(L_0);
		bool L_1 = WikitudeCamera_get_InvertCulling_mF0412440AE9A922CD1169C6A3FA04FFDFD0D6DFE_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		bool L_2 = WikitudeCamera_get_FlipHorizontal_m8167E0ADE960A81B5F5CAE6EF5E18BA9F8EE62D9_inline(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		GL_set_invertCulling_m4F67C6CDC3355DA4BAD77414C08557E64311211D((bool)G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnPostRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnPostRender_mCAF740CD18FCA3F60DCBA5E8F9C620DC4BABB796 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__wasCullingInverted_19();
		GL_set_invertCulling_m4F67C6CDC3355DA4BAD77414C08557E64311211D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnApplicationPause_mA4F36369B2F58B087657B1EF490D58EA2C66C972 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___paused0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_OnApplicationPause_mA4F36369B2F58B087657B1EF490D58EA2C66C972_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___paused0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(3 /* System.Void Wikitude.IWikitudeBridge::StopWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_1);
		return;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void Wikitude.IWikitudeBridge::StartWikitudeNativeSDK() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_2);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_Update_mE7B41CF0C5E40990829FCBA7D881DE9E3D4F6E23 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_Update_mE7B41CF0C5E40990829FCBA7D881DE9E3D4F6E23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_IsLivePreviewRunning_m60CD00826D5C7B2B4D1D310A4BD51EB119FA75C6(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		WikitudeCamera_UpdateLivePreview_m41F452BBDD4524769CF488A7431CF0C3EAF38960(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		bool L_1 = __this->get__enableCameraRendering_6();
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_2 = WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		int32_t L_4 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_003a;
		}
	}
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_5 = WikitudeCamera_get_CameraTexture_mDD5CD5D5AC23E84CBC6C3ADDBB643F4777A23780(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_5);
		int32_t L_7 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0040;
		}
	}

IL_003a:
	{
		WikitudeCamera_UpdateCameraRenderer_m97A1778F5537AC644CAF719462FF242F79548CF5(__this, /*hidden argument*/NULL);
	}

IL_0040:
	{
		bool L_8 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker0::Invoke(18 /* System.Void Wikitude.IPlatformBridge::Update() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_10 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_11 = Screen_get_orientation_m7977C7ECC2E3F22BB5DF7661951843FCC7E645B0(/*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(19 /* System.Void Wikitude.IPlatformBridge::UpdateOrientation(UnityEngine.ScreenOrientation) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_10, L_11);
		WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * L_12 = __this->get__bridge_12();
		NullCheck(L_12);
		WikitudeBridge_InternalUpdate_m009D78360169BB3ED52DD4F9236F5EDA2628AFC9(L_12, /*hidden argument*/NULL);
	}

IL_006c:
	{
		bool L_13 = WikitudeCamera_get_IsLivePreviewRunning_m60CD00826D5C7B2B4D1D310A4BD51EB119FA75C6(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007a;
		}
	}
	{
		WikitudeCamera_UpdateRenderTexture_mA1F6E539983306DF6CCA634AEAC1EE4932EFEFE7(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		return;
	}
}
// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::get_DevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_DevicePosition_m224F414A3493A290C61ECC32D9D3518D2FBEBEB6 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cachedDevicePosition_25();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_DevicePosition(Wikitude.CaptureDevicePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_DevicePosition_mB7512CC8A91B545D8554E48F34DC000DC35C5600 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cachedDevicePosition_25();
		int32_t L_1 = ___value0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_2 = ___value0;
		__this->set__cachedDevicePosition_25(L_2);
		__this->set__cachedActiveCameraIndex_26((-1));
		bool L_3 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::get_CachedDevicePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CachedDevicePosition_m16C224A3C3CBC64261C0B44CF236A0CEA52EABDD (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cachedDevicePosition_25();
		return L_0;
	}
}
// Wikitude.CaptureFocusMode Wikitude.WikitudeCamera::get_FocusMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_FocusMode_m8A75F2EB81EDA1E5BA3913EB3AAC48383AC1FD97 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_FocusMode_m8A75F2EB81EDA1E5BA3913EB3AAC48383AC1FD97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral8209BE90721101AFCAE297A024725C674F253ED0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(28 /* System.Int32 Wikitude.IPlatformBridge::GetCaptureFocusMode() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		__this->set__cachedFocusMode_27(L_1);
		int32_t L_2 = __this->get__cachedFocusMode_27();
		return L_2;
	}
}
// System.Void Wikitude.WikitudeCamera::set_FocusMode(Wikitude.CaptureFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_FocusMode_mF2EFCEA5763593B3028442143E48AE67998A2E4E (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_FocusMode_mF2EFCEA5763593B3028442143E48AE67998A2E4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral8209BE90721101AFCAE297A024725C674F253ED0, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(29 /* System.Void Wikitude.IPlatformBridge::SetCaptureFocusMode(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_2 = ___value0;
		__this->set__cachedFocusMode_27(L_2);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::IsFocusModeSupported(Wikitude.CaptureFocusMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_IsFocusModeSupported_mDEA2280EC70FAED2F8F326B9D30CB699B4DB60B3 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___focusMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_IsFocusModeSupported_mDEA2280EC70FAED2F8F326B9D30CB699B4DB60B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral9EE3DE22BD7B2709B82DAB6AEFE5E4481C34B743, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___focusMode0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(27 /* System.Boolean Wikitude.IPlatformBridge::IsCaptureFocusModeSupported(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// Wikitude.CaptureExposureMode Wikitude.WikitudeCamera::get_ExposureMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_ExposureMode_mEBACEED55AAD24CA5BB0346120ABABB3B462B165 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_ExposureMode_mEBACEED55AAD24CA5BB0346120ABABB3B462B165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral4B4B1F0CD2B131C67AE1ADFE947E2C291DFA1AFF, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 Wikitude.IPlatformBridge::GetCaptureExposureMode() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return (int32_t)(L_1);
	}
}
// System.Void Wikitude.WikitudeCamera::set_ExposureMode(Wikitude.CaptureExposureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_ExposureMode_mB3E481FC10E31EB9983FA852F60EBB23124C8121 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_ExposureMode_mB3E481FC10E31EB9983FA852F60EBB23124C8121_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral4B4B1F0CD2B131C67AE1ADFE947E2C291DFA1AFF, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(32 /* System.Void Wikitude.IPlatformBridge::SetCaptureExposureMode(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::IsExposureModeSupported(Wikitude.CaptureExposureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_IsExposureModeSupported_m6D68A873E99B31B43364235E61DD7D750BBEA8A1 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___exposureMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_IsExposureModeSupported_m6D68A873E99B31B43364235E61DD7D750BBEA8A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralF38B4EC29B2654870076A9862CB5F4258C110257, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___exposureMode0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(30 /* System.Boolean Wikitude.IPlatformBridge::IsCaptureExposureModeSupported(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Wikitude.WikitudeCamera::set_ManualFocusDistance(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_ManualFocusDistance_m20C1D26656001BC5CF579DF0C15F4CFFBF7F5532 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_ManualFocusDistance_m20C1D26656001BC5CF579DF0C15F4CFFBF7F5532_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__cachedFocusMode_27();
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_1 = __this->get_OnCameraError_22();
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_2 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_2, ((int32_t)11001), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, _stringLiteralAFF863E42279CD6192C376DE4E40CCCCBA575E11, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
		return;
	}

IL_0028:
	{
		int32_t L_3 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0059;
		}
	}
	{
		bool L_4 = __this->get__enableCamera2_30();
		if (L_4)
		{
			goto IL_0059;
		}
	}
	{
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_5 = __this->get_OnCameraError_22();
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_6 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_6, ((int32_t)11001), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, _stringLiteralF183E24B4440DCA88350EB78DD415D4F6E6FC6EE, /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_5, L_6, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
		return;
	}

IL_0059:
	{
		float L_7 = ___value0;
		if ((((float)L_7) < ((float)(0.0f))))
		{
			goto IL_0069;
		}
	}
	{
		float L_8 = ___value0;
		if ((!(((float)L_8) > ((float)(1.0f)))))
		{
			goto IL_0089;
		}
	}

IL_0069:
	{
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_9 = __this->get_OnCameraError_22();
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_10 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_10, ((int32_t)11003), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, _stringLiteral2FE798DD527B8534AB0BD45E1032A9CF066E2384, /*hidden argument*/NULL);
		NullCheck(L_9);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_9, L_10, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
		return;
	}

IL_0089:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_11 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		float L_12 = ___value0;
		NullCheck(L_11);
		InterfaceActionInvoker1< float >::Invoke(35 /* System.Void Wikitude.IPlatformBridge::SetManualFocusDistance(System.Single) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_11, L_12);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsManualFocusAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsManualFocusAvailable_m36FC69DAE7271641DDC0DFDBC8A223A6D12F6AD3 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_IsManualFocusAvailable_m36FC69DAE7271641DDC0DFDBC8A223A6D12F6AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralEA27DB5BEAB4EEF8784A01F0B6E3A39F7171A22F, 1, /*hidden argument*/NULL);
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001f;
		}
	}
	{
		bool L_1 = __this->get__enableCamera2_30();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(33 /* System.Boolean Wikitude.IPlatformBridge::IsManualFocusAvailable() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// Wikitude.CaptureAutoFocusRestriction Wikitude.WikitudeCamera::get_AutoFocusRestriction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_AutoFocusRestriction_m7BA0DADD108B7B55008757CE45C5D788DFB14420 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_AutoFocusRestriction_m7BA0DADD108B7B55008757CE45C5D788DFB14420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0027;
		}
	}
	{
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_1 = __this->get_OnCameraError_22();
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_2 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_2, ((int32_t)11004), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, _stringLiteralC02192A329A2BF5F9DC93E68289296895AD7F3FB, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
	}

IL_0027:
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralDF653120A68CFC6CF1833BF22A6129D6A40FE04A, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(37 /* System.Int32 Wikitude.IPlatformBridge::GetCaptureAutoFocusRestriction() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_3);
		return (int32_t)(L_4);
	}
}
// System.Void Wikitude.WikitudeCamera::set_AutoFocusRestriction(Wikitude.CaptureAutoFocusRestriction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_AutoFocusRestriction_mC13C6D60888F535BD8BB805FEB4B92334652116F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_AutoFocusRestriction_mC13C6D60888F535BD8BB805FEB4B92334652116F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if ((((int32_t)L_0) == ((int32_t)8)))
		{
			goto IL_0027;
		}
	}
	{
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_1 = __this->get_OnCameraError_22();
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_2 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_2, ((int32_t)11004), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, _stringLiteralA448F44B3EB0132A68244BF74AB1824D0101C1E8, /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_1, L_2, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
	}

IL_0027:
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralDF653120A68CFC6CF1833BF22A6129D6A40FE04A, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(38 /* System.Void Wikitude.IPlatformBridge::SetCaptureAutoFocusRestriction(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsAutoFocusRestrictionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsAutoFocusRestrictionSupported_m4EB052980F42E1E8789375A3A1EEDF2BA37716BD (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_IsAutoFocusRestrictionSupported_m4EB052980F42E1E8789375A3A1EEDF2BA37716BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral1D497467BEBBAFED950FE6EC47284E264A79F869, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(36 /* System.Boolean Wikitude.IPlatformBridge::IsCaptureAutoFocusRestrictionSupported() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Wikitude.WikitudeCamera::get_ZoomLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WikitudeCamera_get_ZoomLevel_m3B56A1B1B073BE3F9E975A5E7A2DDD8C60C6F7A7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_ZoomLevel_m3B56A1B1B073BE3F9E975A5E7A2DDD8C60C6F7A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralC06EA3EED5E9A8D7D337BEA7838838B861013AF4, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = InterfaceFuncInvoker0< float >::Invoke(40 /* System.Single Wikitude.IPlatformBridge::GetCaptureZoomLevel() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Wikitude.WikitudeCamera::set_ZoomLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_ZoomLevel_mB7C85CE14027E2D70C511AD797EEA82C2B91654D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_ZoomLevel_mB7C85CE14027E2D70C511AD797EEA82C2B91654D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralC06EA3EED5E9A8D7D337BEA7838838B861013AF4, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< float >::Invoke(41 /* System.Void Wikitude.IPlatformBridge::SetCaptureZoomLevel(System.Single) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::IsZoomLevelSupported(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_IsZoomLevelSupported_m5B4E9A5327D2BF03B19DAA522E0394D5FDC8996F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, float ___zoomLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_IsZoomLevelSupported_m5B4E9A5327D2BF03B19DAA522E0394D5FDC8996F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral390D4E277925A411247D87FF466662D7F7E39A91, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		float L_1 = ___zoomLevel0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, float >::Invoke(39 /* System.Boolean Wikitude.IPlatformBridge::IsCaptureZoomLevelSupported(System.Single) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Single Wikitude.WikitudeCamera::get_MaxZoomLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WikitudeCamera_get_MaxZoomLevel_mB745E598BEC96877F734F8C2428DA090D0F3C5BE (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_MaxZoomLevel_mB745E598BEC96877F734F8C2428DA090D0F3C5BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral3C1C1D26AE09795A551572D99580D9135C350F2E, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = InterfaceFuncInvoker0< float >::Invoke(42 /* System.Single Wikitude.IPlatformBridge::GetCaptureMaxZoomLevel() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Wikitude.CaptureFlashMode Wikitude.WikitudeCamera::get_FlashMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_FlashMode_m3744038799BE23A90935A658C6ECD757D6654EE0 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_FlashMode_m3744038799BE23A90935A658C6ECD757D6654EE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralE06AAB5BB3707BE5B8789942E1DBA803422E7713, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(44 /* System.Int32 Wikitude.IPlatformBridge::GetCaptureFlashMode() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return (int32_t)(L_1);
	}
}
// System.Void Wikitude.WikitudeCamera::set_FlashMode(Wikitude.CaptureFlashMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_FlashMode_mF18103B72F3404D36910E1D0822E01421F83AF19 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_FlashMode_mF18103B72F3404D36910E1D0822E01421F83AF19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteralE06AAB5BB3707BE5B8789942E1DBA803422E7713, 2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(45 /* System.Void Wikitude.IPlatformBridge::SetCaptureFlashMode(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::IsFlashModeSupported(Wikitude.CaptureFlashMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_IsFlashModeSupported_m0274A24670F1E35CC683C51EEEDDE93289C38804 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___flashMode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_IsFlashModeSupported_m0274A24670F1E35CC683C51EEEDDE93289C38804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral15767D33734CE260420070D40220821F5DD860D8, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___flashMode0;
		NullCheck(L_0);
		bool L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(43 /* System.Boolean Wikitude.IPlatformBridge::IsCaptureFlashModeSupported(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Wikitude.WikitudeCamera::IsCameraListSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_IsCameraListSupported_m2431D835305F686FCC7F8495E066B03BF6174671 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_IsCameraListSupported_m2431D835305F686FCC7F8495E066B03BF6174671_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(52 /* System.Boolean Wikitude.IPlatformBridge::IsCameraListSupported() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Wikitude.WikitudeCamera::GetCameraList(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_GetCameraList_m3F84ECEDD27BE0E478E1FB372ECF2BAB02BE0C56 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_GetCameraList_m3F84ECEDD27BE0E478E1FB372ECF2BAB02BE0C56_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = ___callback0;
		__this->set__cameraListCallback_24(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(53 /* System.Void Wikitude.IPlatformBridge::GetCameraList() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_1);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnCameraPositionChanged(Wikitude.CaptureDevicePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnCameraPositionChanged_mD113B199E8020E12750A662EB15B71A08340872A (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___cameraPosition_0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___cameraPosition_0;
		__this->set__cachedDevicePosition_25(L_0);
		WikitudeCamera_UpdateCulling_m49A62CEB811E3BCDCA79E9C192077DC200D7D4E0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::OnCameraListSucessful(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_OnCameraListSucessful_mDE86EAFE20EE954198C37E5AF02B4772218482E1 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___cameraCount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_OnCameraListSucessful_mDE86EAFE20EE954198C37E5AF02B4772218482E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tF0CF99E3EB61F030882DC0AF501614FF92CFD14B * L_0 = __this->get__cameraListCallback_24();
		int32_t L_1 = ___cameraCount0;
		NullCheck(L_0);
		Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500(L_0, L_1, /*hidden argument*/Action_1_Invoke_m236B4013FB31497A692E886DB7DC16D52BE79500_RuntimeMethod_var);
		return;
	}
}
// System.String Wikitude.WikitudeCamera::GetCameraName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WikitudeCamera_GetCameraName_m89328023A409D59AC6E16257CCEC2984F4C9DD35 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___cameraIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_GetCameraName_m89328023A409D59AC6E16257CCEC2984F4C9DD35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_1 = ___cameraIndex0;
		NullCheck(L_0);
		String_t* L_2 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(54 /* System.String Wikitude.IPlatformBridge::GetCameraName(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Wikitude.WikitudeCamera::SetActiveCamera(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_SetActiveCamera_mF21A81A794573432C239A3A48B00736D97C9C5A4 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___cameraIndex0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cachedActiveCameraIndex_26();
		int32_t L_1 = ___cameraIndex0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = ___cameraIndex0;
		__this->set__cachedActiveCameraIndex_26(L_2);
		bool L_3 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		WikitudeCamera_InitializeNativeCamera_m3F3D4FFEA95AC6F4C882B9EA6F5898C5D6F67033(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Int32 Wikitude.WikitudeCamera::GetActiveCameraIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_GetActiveCameraIndex_m798737ABFA3F0B7C97302CAA4280D1E1524D1E5F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_GetActiveCameraIndex_m798737ABFA3F0B7C97302CAA4280D1E1524D1E5F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__cachedActiveCameraIndex_26();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(56 /* System.Int32 Wikitude.IPlatformBridge::GetActiveCameraIndex() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_1);
		__this->set__cachedActiveCameraIndex_26(L_2);
	}

IL_0019:
	{
		int32_t L_3 = __this->get__cachedActiveCameraIndex_26();
		return L_3;
	}
}
// Wikitude.CaptureDeviceResolution Wikitude.WikitudeCamera::get_DesiredCameraResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_DesiredCameraResolution_m56E2233B29D0761F1A819A74616342C62FD4968C (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__desiredDeviceResolution_28();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_DesiredCameraResolution(Wikitude.CaptureDeviceResolution)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_DesiredCameraResolution_mD5DE9623FD44D2FF0C5BBA2113447AB02B70C935 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_DesiredCameraResolution_mD5DE9623FD44D2FF0C5BBA2113447AB02B70C935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__desiredDeviceResolution_28();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(23 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceResolution(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_3, L_4);
		int32_t L_5 = ___value0;
		__this->set__desiredDeviceResolution_28(L_5);
		return;
	}

IL_0024:
	{
		WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66(__this, _stringLiteral87961C7F57F185CA188A23ED62231DA528D5DF90, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// Wikitude.CaptureDeviceFramerate Wikitude.WikitudeCamera::get_DesiredCameraFramerate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_DesiredCameraFramerate_mFAC3DC1F3B5EF9CE33D0234B36256C17D500BF8B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__desiredDeviceFramerate_29();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_DesiredCameraFramerate(Wikitude.CaptureDeviceFramerate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_DesiredCameraFramerate_mC97A94DB016E99307B90E8C83900A1D8D45CAC66 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_DesiredCameraFramerate_mC97A94DB016E99307B90E8C83900A1D8D45CAC66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__desiredDeviceFramerate_29();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_002f;
		}
	}
	{
		bool L_2 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(24 /* System.Void Wikitude.IPlatformBridge::SetCaptureDeviceFramerate(System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_3, L_4);
		int32_t L_5 = ___value0;
		__this->set__desiredDeviceFramerate_29(L_5);
		return;
	}

IL_0024:
	{
		WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66(__this, _stringLiteral897B5AF198D0DE178A65A27CA63ECB118CE3EDD2, /*hidden argument*/NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_EnableCamera2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_EnableCamera2_m482A74318A5F403D410AF35D80DC1D5347FA386C (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableCamera2_30();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_EnableCamera2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_EnableCamera2_m6EE043FEA9EDB023DE156A219E773883D962A03B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_EnableCamera2_m6EE043FEA9EDB023DE156A219E773883D962A03B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		bool L_1 = __this->get__enableCamera2_30();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		bool L_3 = ___value0;
		__this->set__enableCamera2_30(L_3);
		return;
	}

IL_0019:
	{
		WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66(__this, _stringLiteral884D32F601A0E6410EE384ED5C39074FA3D4B2C1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// Wikitude.Camera2SupportLevel Wikitude.WikitudeCamera::get_Camera2SupportLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_Camera2SupportLevel_mDD0F55BA24BB9CB02749834651502B3B059D0C27 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__camera2SupportLevel_31();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_Camera2SupportLevel(Wikitude.Camera2SupportLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_Camera2SupportLevel_m315DD51D696861D14C781421A017162594D02BB2 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_Camera2SupportLevel_m315DD51D696861D14C781421A017162594D02BB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = __this->get__camera2SupportLevel_31();
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0024;
		}
	}
	{
		bool L_2 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___value0;
		__this->set__camera2SupportLevel_31(L_3);
		return;
	}

IL_0019:
	{
		WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66(__this, _stringLiteral1839643A66C112ED63ADE84A69D45D0C29884738, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::FocusAtPointOfInterest(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_FocusAtPointOfInterest_m77A9554387BD18E408BCF9ABE793546CFE0F4CEF (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointOfInterest0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_FocusAtPointOfInterest_m77A9554387BD18E408BCF9ABE793546CFE0F4CEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral4F87779B05F32751CFB37C7DBE66E4BF77BCDC71, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___pointOfInterest0;
		float L_2 = L_1.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___pointOfInterest0;
		float L_4 = L_3.get_y_1();
		NullCheck(L_0);
		InterfaceActionInvoker2< float, float >::Invoke(47 /* System.Void Wikitude.IPlatformBridge::FocusAtPointOfInterest(System.Single,System.Single) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsFocusAtPointOfInterestSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsFocusAtPointOfInterestSupported_m5EAE37134BEC931F7045C250BA0E0D1C6387C3E6 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_IsFocusAtPointOfInterestSupported_m5EAE37134BEC931F7045C250BA0E0D1C6387C3E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral66395D710EDA4325D6BE904032C88BD086AB0FA0, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(46 /* System.Boolean Wikitude.IPlatformBridge::IsFocusAtPointOfInterestSupported() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Wikitude.WikitudeCamera::ExposeAtPointOfInterest(UnityEngine.Vector2,Wikitude.CaptureExposureMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_ExposeAtPointOfInterest_m965D94AD1D61679EF33DDD9514FB774618C9911F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___pointOfInterest0, int32_t ___exposureMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_ExposeAtPointOfInterest_m965D94AD1D61679EF33DDD9514FB774618C9911F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral75C679CDF99AAD03E58DCC6BA9A1BDDF782B6F04, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___pointOfInterest0;
		float L_2 = L_1.get_x_0();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = ___pointOfInterest0;
		float L_4 = L_3.get_y_1();
		int32_t L_5 = ___exposureMode1;
		NullCheck(L_0);
		InterfaceActionInvoker3< float, float, int32_t >::Invoke(49 /* System.Void Wikitude.IPlatformBridge::ExposeAtPointOfInterest(System.Single,System.Single,System.Int32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0, L_2, L_4, L_5);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsExposeAtPointOfInterstSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsExposeAtPointOfInterstSupported_m30F3E388D662CC8FBE666F1E4507EA8FF4A86112 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_get_IsExposeAtPointOfInterstSupported_m30F3E388D662CC8FBE666F1E4507EA8FF4A86112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F(__this, _stringLiteral6CBB2264141ECB3EED7F85966FE2318FE974E754, 1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(48 /* System.Boolean Wikitude.IPlatformBridge::IsExposeAtPointOfInterestSupported() */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Wikitude.WikitudeCamera::CheckSDKInitialized(System.String,Wikitude.WikitudeCamera/CallType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___callName0, int32_t ___callType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_CheckSDKInitialized_m8D04EBA2A1FCB9497292151E10AB0B997A4E028F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		bool L_0 = WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_1 = ___callType1;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_2 = ___callName0;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral27795028E1033B253A64D2169C1C1453A2461695, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0038;
	}

IL_001a:
	{
		int32_t L_4 = ___callType1;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_5 = ___callName0;
		String_t* L_6 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral93EFE2C6DF3430E6B3E9310D71E8347EFAF61BDF, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0038;
	}

IL_002c:
	{
		String_t* L_7 = ___callName0;
		String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral9F349427459EA3944F5BCA57AA2157ABD06B9FD6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_0038:
	{
		V_1 = _stringLiteral35D14E2CE68F391ABD622DD4CD40683B17D45517;
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_9, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_12 = __this->get_OnCameraError_22();
		String_t* L_13 = V_2;
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_14 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_14, ((int32_t)11005), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_12, L_14, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
	}

IL_0061:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::PrintSetAfterInitializationError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_PrintSetAfterInitializationError_m744643857C8C20D1B1EA59865F53153C6AFC0C66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___propertyName0;
		String_t* L_1 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralE97EBA623435E72AB81F2814A9A394A880C1D7F8, L_0, _stringLiteralEF1D7CABDF71F053743391521F61A997E52734F7, /*hidden argument*/NULL);
		V_0 = L_1;
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_2 = __this->get_OnCameraError_22();
		String_t* L_3 = V_0;
		Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C * L_4 = (Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C *)il2cpp_codegen_object_new(Error_t34E3881A50CC2AA99E2CCF7746CD09D1E9FCF91C_il2cpp_TypeInfo_var);
		Error__ctor_m8F88DDF104BF9A0AC1C33809E1BC442BF1519BF8(L_4, ((int32_t)11006), _stringLiteral69EBF4196678C13AD04D2BCCE63AB08DBD3F8477, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42(L_2, L_4, /*hidden argument*/UnityEvent_1_Invoke_mE7956B859315B816906541D6E33D92496EB84F42_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_EnableLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_EnableLivePreview_m80B0DC21FDD420F9C3855A24C9DA0F5818BAB980 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableLivePreview_32();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_EnableLivePreview(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_EnableLivePreview_m14E5E7D80EB1D95B1F9CDA0004061435D9549752 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__enableLivePreview_32(L_0);
		return;
	}
}
// Wikitude.LivePreviewMode Wikitude.WikitudeCamera::get_LivePreviewMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__livePreviewMode_33();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_LivePreviewMode(Wikitude.LivePreviewMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_LivePreviewMode_m98C757FD1CDF88796533B1F3B24F04EC8A477F54 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__livePreviewMode_33(L_0);
		return;
	}
}
// UnityEngine.Texture2D Wikitude.WikitudeCamera::get_StaticImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__staticImage_34();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_StaticImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_StaticImage_mEEBAD286327963D0B32BF8B6395264EE1AD9995E (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_StaticImage_mEEBAD286327963D0B32BF8B6395264EE1AD9995E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = ___value0;
		__this->set__staticImage_34(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral87643D5C3B6C7BEE3DD6370984A500C11CC567FB, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		WikitudeCamera_RefreshLivePreview_m687D353223B9FEF473DA182F4CD1F87DFEF26679(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Wikitude.WikitudeCamera::get_WebCamName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WikitudeCamera_get_WebCamName_mE33D707E7C1F677B71F0F3A36BDA2A07F735198E (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__webCamName_35();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_WebCamName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_WebCamName_mD71C21A43705D8FD93312D1A949326D439EB3C13 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_WebCamName_mD71C21A43705D8FD93312D1A949326D439EB3C13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		__this->set__webCamName_35(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralB91EAEC77177BAF667D1ACE1A1719144BA820290, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		WikitudeCamera_RefreshLivePreview_m687D353223B9FEF473DA182F4CD1F87DFEF26679(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsWebCamNameValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsWebCamNameValid_m728D9864CCB5F6B7B41419A857C33131CD1E0182 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__webCamName_35();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = __this->get__webCamName_35();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_WebCamIsMirrored()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_WebCamIsMirrored_mFE045AE291B9A8B2FEE93C16DFE5FB6FBA0F42FF (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__webCamIsMirrored_36();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_WebCamIsMirrored(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_WebCamIsMirrored_m11DFA3BB4C85CD6CDED0882147E00D579BAE13C1 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_WebCamIsMirrored_m11DFA3BB4C85CD6CDED0882147E00D579BAE13C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		__this->set__webCamIsMirrored_36(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralE9624B87B5157E1FA334AC61B8705E78E8DF2B49, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// Wikitude.CaptureDevicePosition Wikitude.WikitudeCamera::get_RemoteCameraPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_RemoteCameraPosition_m644990009E5453A180B05AFDC160137D491E8B39 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__remoteCameraPosition_37();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_RemoteCameraPosition(Wikitude.CaptureDevicePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_RemoteCameraPosition_m0407012A7726EF1A6997E50BB420962D47A5ABD9 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_RemoteCameraPosition_m0407012A7726EF1A6997E50BB420962D47A5ABD9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		__this->set__remoteCameraPosition_37(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralA7A702D8EF582E2B9218E9DA772DADEEF2F9AE7F, /*hidden argument*/NULL);
		return;
	}

IL_001b:
	{
		WikitudeCamera_RefreshLivePreview_m687D353223B9FEF473DA182F4CD1F87DFEF26679(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Wikitude.WikitudeCamera::get_CameraToHorizonAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WikitudeCamera_get_CameraToHorizonAngle_mCFB26A133B15E7C7AEB764596378222F1854A489 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__cameraToHorizonAngle_38();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_CameraToHorizonAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_CameraToHorizonAngle_m5D9E58C053C2F265117A9EE83EED59C9AA3FF864 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, float ___value0, const RuntimeMethod* method)
{
	{
		float L_0 = ___value0;
		__this->set__cameraToHorizonAngle_38(L_0);
		return;
	}
}
// UnityEngine.Video.VideoClip Wikitude.WikitudeCamera::get_VideoClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * WikitudeCamera_get_VideoClip_mADF3221A7F2273185C9A41F3245E8746B551C4DD (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_0 = __this->get__videoClip_39();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_VideoClip(UnityEngine.Video.VideoClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_VideoClip_m481A22FD9B99CB5C7EACCCC3D7B76C078A4B8B03 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_VideoClip_m481A22FD9B99CB5C7EACCCC3D7B76C078A4B8B03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_0 = ___value0;
		__this->set__videoClip_39(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral3DADDB7014BD24B553A46A5D33AC53799C999E47, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_VideoLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_VideoLoop_m980173C138BACF4CE0C260FCE2E06D83FC67BEBC (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__videoLoop_40();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_VideoLoop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_VideoLoop_mABD4B12F08E97F58CD9E79AF3B01205E6F4F3707 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_VideoLoop_mABD4B12F08E97F58CD9E79AF3B01205E6F4F3707_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		__this->set__videoLoop_40(L_0);
		int32_t L_1 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralFE50CA181576AF9F7D2EF01F311629C8797ACA69, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Single Wikitude.WikitudeCamera::get_VideoSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WikitudeCamera_get_VideoSpeed_m8937CD4E58D0580A6213A468B2614E37C35BA97D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get__videoSpeed_41();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_VideoSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_VideoSpeed_mAFCABC32ECCA5A844189E733C634A081C23A86B4 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_set_VideoSpeed_mAFCABC32ECCA5A844189E733C634A081C23A86B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp_m033DD894F89E6DCCDAFC580091053059C86A4507(L_0, (0.0f), ((std::numeric_limits<float>::max)()), /*hidden argument*/NULL);
		__this->set__videoSpeed_41(L_1);
		int32_t L_2 = __this->get__livePreviewMode_33();
		if ((((int32_t)L_2) == ((int32_t)3)))
		{
			goto IL_0029;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC10BF79E3205C2C7816B8A56E7FD8941073B8A82, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_ForceResendData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_ForceResendData_m9EED8259E948A796C9EBB5496853FD60ECFAED69 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CForceResendDataU3Ek__BackingField_42();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::set_ForceResendData(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_set_ForceResendData_m7B1563467B1D1E6C4F96EBDA4E301D49F873C159 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CForceResendDataU3Ek__BackingField_42(L_0);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_IsLivePreviewRunning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_IsLivePreviewRunning_m60CD00826D5C7B2B4D1D310A4BD51EB119FA75C6 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableLivePreview_32();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_2 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)7))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}

IL_001a:
	{
		return (bool)0;
	}
}
// UnityEngine.Texture Wikitude.WikitudeCamera::get_CurrentTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get__hasInputPlugins_54();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_1 = __this->get__inputPluginTexture_56();
		return L_1;
	}

IL_000f:
	{
		int32_t L_2 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_0035;
			}
			case 2:
			{
				goto IL_0035;
			}
			case 3:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_002e:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_4 = WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0035:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_5 = __this->get__feed_44();
		return L_5;
	}

IL_003c:
	{
		return (Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 *)NULL;
	}
}
// UnityEngine.RenderTexture Wikitude.WikitudeCamera::get_CurrentRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * WikitudeCamera_get_CurrentRenderTexture_mFE9AC5AD61E260510F9B6654457CF9161D9C9A0B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get__renderFrameIndex_48();
		if ((!(((uint64_t)L_0) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_0016;
		}
	}
	{
		RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * L_1 = __this->get__ringBuffer_49();
		NullCheck(L_1);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_2 = RingBuffer_GetLatestTexture_m903AA87CEED9A5B8126E5513499828C6FF9F5A69(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * L_3 = __this->get__ringBuffer_49();
		int64_t L_4 = __this->get__renderFrameIndex_48();
		NullCheck(L_3);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = RingBuffer_GetTexture_m858792E1838CD8F03A5C75353CCC604ED7C538BD(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Wikitude.WikitudeCamera::get_CurrentWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		return L_1;
	}
}
// System.Int32 Wikitude.WikitudeCamera::get_CurrentHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_0);
		return L_1;
	}
}
// System.Void Wikitude.WikitudeCamera::SetGL(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_SetGL_mE56E10F242495D061AA2A292816494C96B3F53D7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_SetGL_mE56E10F242495D061AA2A292816494C96B3F53D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_0 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2 = ___width0;
		int32_t L_3 = ___height1;
		GL_LoadPixelMatrix_m37EC8678D2658C87C0C2CD0256AF79986CFD6554((0.0f), (((float)((float)L_2))), (0.0f), (((float)((float)L_3))), /*hidden argument*/NULL);
		return;
	}

IL_0022:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = (0.0f);
		int32_t L_5 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_6 = __this->get__feed_44();
		NullCheck(L_6);
		int32_t L_7 = WebCamTexture_get_videoRotationAngle_m02878E5708942CE6149A57E6E10C453358D2B2A9(L_6, /*hidden argument*/NULL);
		V_1 = (((float)((float)L_7)));
	}

IL_0044:
	{
		int32_t L_8 = ___width0;
		int32_t L_9 = ___height1;
		V_2 = ((float)((float)(((float)((float)L_8)))/(float)(((float)((float)L_9)))));
		float L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_11 = fabsf(L_10);
		if ((((float)L_11) < ((float)(0.01f))))
		{
			goto IL_006a;
		}
	}
	{
		float L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_13 = fabsf(((float)il2cpp_codegen_subtract((float)L_12, (float)(180.0f))));
		if ((!(((float)L_13) < ((float)(0.01f)))))
		{
			goto IL_0086;
		}
	}

IL_006a:
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_14 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_14);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_16 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		V_3 = ((float)((float)(((float)((float)L_15)))/(float)(((float)((float)L_17)))));
		goto IL_00a0;
	}

IL_0086:
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_18 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_18);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_20 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		int32_t L_21 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_20);
		V_3 = ((float)((float)(((float)((float)L_19)))/(float)(((float)((float)L_21)))));
	}

IL_00a0:
	{
		float L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_23 = fabsf(L_22);
		if ((((float)L_23) < ((float)(0.01f))))
		{
			goto IL_00c0;
		}
	}
	{
		float L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_25 = fabsf(((float)il2cpp_codegen_subtract((float)L_24, (float)(180.0f))));
		if ((!(((float)L_25) < ((float)(0.01f)))))
		{
			goto IL_00dc;
		}
	}

IL_00c0:
	{
		float L_26 = V_2;
		float L_27 = V_3;
		if ((!(((float)L_26) > ((float)L_27))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_28 = V_2;
		float L_29 = V_3;
		(&V_0)->set_y_3(((float)((float)L_28/(float)L_29)));
		goto IL_010e;
	}

IL_00d0:
	{
		float L_30 = V_3;
		float L_31 = V_2;
		(&V_0)->set_x_2(((float)((float)L_30/(float)L_31)));
		goto IL_010e;
	}

IL_00dc:
	{
		float L_32 = V_2;
		float L_33 = V_3;
		if ((!(((float)L_32) > ((float)L_33))))
		{
			goto IL_00f8;
		}
	}
	{
		float L_34 = V_3;
		(&V_0)->set_x_2(((float)((float)(1.0f)/(float)L_34)));
		float L_35 = V_2;
		(&V_0)->set_y_3(L_35);
		goto IL_010e;
	}

IL_00f8:
	{
		float L_36 = V_2;
		(&V_0)->set_x_2(((float)((float)(1.0f)/(float)L_36)));
		float L_37 = V_3;
		(&V_0)->set_y_3(L_37);
	}

IL_010e:
	{
		int32_t L_38 = __this->get__livePreviewMode_33();
		if ((!(((uint32_t)L_38) == ((uint32_t)2))))
		{
			goto IL_0120;
		}
	}
	{
		int32_t L_39 = __this->get__remoteCameraPosition_37();
		if ((((int32_t)L_39) == ((int32_t)1)))
		{
			goto IL_0131;
		}
	}

IL_0120:
	{
		int32_t L_40 = __this->get__livePreviewMode_33();
		if ((!(((uint32_t)L_40) == ((uint32_t)1))))
		{
			goto IL_014d;
		}
	}
	{
		bool L_41 = WikitudeCamera_get_WebCamIsMirrored_mFE045AE291B9A8B2FEE93C16DFE5FB6FBA0F42FF_inline(__this, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_014d;
		}
	}

IL_0131:
	{
		int32_t L_42 = ___width0;
		int32_t L_43 = ___height1;
		GL_LoadPixelMatrix_m37EC8678D2658C87C0C2CD0256AF79986CFD6554((((float)((float)L_42))), (0.0f), (((float)((float)L_43))), (0.0f), /*hidden argument*/NULL);
		WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160_inline(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0167;
	}

IL_014d:
	{
		int32_t L_44 = ___width0;
		int32_t L_45 = ___height1;
		GL_LoadPixelMatrix_m37EC8678D2658C87C0C2CD0256AF79986CFD6554((0.0f), (((float)((float)L_44))), (((float)((float)L_45))), (0.0f), /*hidden argument*/NULL);
		WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160_inline(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0167:
	{
		int32_t L_46 = ___width0;
		int32_t L_47 = ___height1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_48), ((float)((float)(((float)((float)L_46)))/(float)(2.0f))), ((float)((float)(((float)((float)L_47)))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_49 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_51 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_48, L_49, L_50, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_53 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = V_0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_56 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_52, L_54, L_55, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_57 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_51, L_56, /*hidden argument*/NULL);
		int32_t L_58 = ___width0;
		int32_t L_59 = ___height1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_60;
		memset((&L_60), 0, sizeof(L_60));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_60), ((float)((float)(((float)((float)((-L_58)))))/(float)(2.0f))), ((float)((float)(((float)((float)((-L_59)))))/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_61 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_63 = Matrix4x4_TRS_m5BB2EBA1152301BAC92FDC7F33ECA732BAE57990(L_60, L_61, L_62, /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_64 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_57, L_63, /*hidden argument*/NULL);
		GL_MultMatrix_m1DFDF696AC702066E319BD72252B7D97E74F3753(L_64, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::RefreshLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_RefreshLivePreview_m687D353223B9FEF473DA182F4CD1F87DFEF26679 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * L_0 = __this->get_address_of__previousMode_43();
		il2cpp_codegen_initobj(L_0, sizeof(Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E ));
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateLivePreview_m41F452BBDD4524769CF488A7431CF0C3EAF38960 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_UpdateLivePreview_m41F452BBDD4524769CF488A7431CF0C3EAF38960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* V_5 = NULL;
	int32_t V_6 = 0;
	WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  V_7;
	memset((&V_7), 0, sizeof(V_7));
	WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  V_8;
	memset((&V_8), 0, sizeof(V_8));
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_9;
	memset((&V_9), 0, sizeof(V_9));
	intptr_t V_10;
	memset((&V_10), 0, sizeof(V_10));
	uint64_t V_11 = 0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	float G_B86_0 = 0.0f;
	{
		bool L_0 = __this->get__hasInputPlugins_54();
		if (L_0)
		{
			goto IL_01ec;
		}
	}
	{
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * L_1 = __this->get_address_of__previousMode_43();
		bool L_2 = Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_inline((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)L_1, /*hidden argument*/Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E * L_4 = __this->get_address_of__previousMode_43();
		int32_t L_5 = Nullable_1_get_Value_m80DDF5520E31CEF50256AA39B549A66A44873E87((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)L_4, /*hidden argument*/Nullable_1_get_Value_m80DDF5520E31CEF50256AA39B549A66A44873E87_RuntimeMethod_var);
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_01ec;
		}
	}

IL_002e:
	{
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  L_6 = __this->get__previousMode_43();
		V_1 = L_6;
		V_2 = 3;
		int32_t L_7 = Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_inline((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_RuntimeMethod_var);
		int32_t L_8 = V_2;
		bool L_9 = Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_inline((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_RuntimeMethod_var);
		if (((int32_t)((int32_t)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9)))
		{
			goto IL_0068;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_10 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0068;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_12 = __this->get__videoPlayer_52();
		NullCheck(L_12);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_13, /*hidden argument*/NULL);
	}

IL_0068:
	{
		int32_t L_14 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		switch (L_15)
		{
			case 0:
			{
				goto IL_008a;
			}
			case 1:
			{
				goto IL_009a;
			}
			case 2:
			{
				goto IL_0145;
			}
			case 3:
			{
				goto IL_008a;
			}
		}
	}
	{
		goto IL_01db;
	}

IL_008a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Wikitude.IPlatformBridge::set_IsUsingRemote(System.Boolean) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_16, (bool)0);
		goto IL_01db;
	}

IL_009a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_17 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Wikitude.IPlatformBridge::set_IsUsingRemote(System.Boolean) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_17, (bool)0);
		V_3 = (bool)0;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_18 = WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920(/*hidden argument*/NULL);
		V_5 = L_18;
		V_6 = 0;
		goto IL_010d;
	}

IL_00b3:
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_19 = V_5;
		int32_t L_20 = V_6;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_7 = L_22;
		bool L_23 = WikitudeCamera_get_IsWebCamNameValid_m728D9864CCB5F6B7B41419A857C33131CD1E0182(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00da;
		}
	}
	{
		String_t* L_24 = __this->get__webCamName_35();
		String_t* L_25 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)(&V_7), /*hidden argument*/NULL);
		bool L_26 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_0107;
		}
	}

IL_00da:
	{
		String_t* L_27 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)(&V_7), /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_28 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_mCDA59B88B6D7F96B76663FA98EF12B7AF2DCFD61(L_28, L_27, ((int32_t)640), ((int32_t)480), ((int32_t)60), /*hidden argument*/NULL);
		__this->set__feed_44(L_28);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_29 = __this->get__feed_44();
		NullCheck(L_29);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_29, /*hidden argument*/NULL);
		V_3 = (bool)1;
		goto IL_0115;
	}

IL_0107:
	{
		int32_t L_30 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_010d:
	{
		int32_t L_31 = V_6;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_32 = V_5;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))))
		{
			goto IL_00b3;
		}
	}

IL_0115:
	{
		bool L_33 = V_3;
		if (L_33)
		{
			goto IL_01db;
		}
	}
	{
		bool L_34 = WikitudeCamera_get_IsWebCamNameValid_m728D9864CCB5F6B7B41419A857C33131CD1E0182(__this, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_01db;
		}
	}
	{
		String_t* L_35 = __this->get__webCamName_35();
		String_t* L_36 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteralA9BDB64370ACDF598E95E44233DB2C401A0B50F9, L_35, _stringLiteral2654F5CCEAF52997DFCFCED105D22EF40DEF62CC, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_36, /*hidden argument*/NULL);
		goto IL_01db;
	}

IL_0145:
	{
		Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1 * L_37 = Input_get_gyro_mE481C9495C12652B8744F8214A3F9ED20C317BD4(/*hidden argument*/NULL);
		NullCheck(L_37);
		Gyroscope_set_enabled_mEEAA3A44F6286C36F20C3A122E21E34F8FD131AA(L_37, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_38 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		NullCheck(L_38);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Wikitude.IPlatformBridge::set_IsUsingRemote(System.Boolean) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_38, (bool)1);
		V_4 = (bool)0;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_39 = WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920(/*hidden argument*/NULL);
		V_5 = L_39;
		V_6 = 0;
		goto IL_01ce;
	}

IL_016a:
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_40 = V_5;
		int32_t L_41 = V_6;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_8 = L_43;
		String_t* L_44 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)(&V_8), /*hidden argument*/NULL);
		NullCheck(L_44);
		bool L_45 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_44, _stringLiteralC93F6536DCFBEEEE0B339ACC7D769BF64450E761, /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_01c8;
		}
	}
	{
		int32_t L_46 = __this->get__remoteCameraPosition_37();
		bool L_47 = WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)(&V_8), /*hidden argument*/NULL);
		if ((!(((uint32_t)((((int32_t)L_46) == ((int32_t)1))? 1 : 0)) == ((uint32_t)L_47))))
		{
			goto IL_01c8;
		}
	}
	{
		String_t* L_48 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)(&V_8), /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_49 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_mCDA59B88B6D7F96B76663FA98EF12B7AF2DCFD61(L_49, L_48, ((int32_t)640), ((int32_t)480), ((int32_t)60), /*hidden argument*/NULL);
		__this->set__feed_44(L_49);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_50 = __this->get__feed_44();
		NullCheck(L_50);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_50, /*hidden argument*/NULL);
		V_4 = (bool)1;
		goto IL_01d6;
	}

IL_01c8:
	{
		int32_t L_51 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_01ce:
	{
		int32_t L_52 = V_6;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_53 = V_5;
		NullCheck(L_53);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_53)->max_length)))))))
		{
			goto IL_016a;
		}
	}

IL_01d6:
	{
		bool L_54 = V_4;
		if (L_54)
		{
			goto IL_01db;
		}
	}
	{
		return;
	}

IL_01db:
	{
		int32_t L_55 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		Nullable_1__ctor_m0979087A4465BFDEA3F25EF7C5C9EC1A7DDCE774((&L_56), L_55, /*hidden argument*/Nullable_1__ctor_m0979087A4465BFDEA3F25EF7C5C9EC1A7DDCE774_RuntimeMethod_var);
		__this->set__previousMode_43(L_56);
	}

IL_01ec:
	{
		Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E  L_57 = __this->get__previousMode_43();
		V_1 = L_57;
		V_2 = 3;
		int32_t L_58 = Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_inline((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)(&V_1), /*hidden argument*/Nullable_1_GetValueOrDefault_m3F25D7F40526B9CDCE6065C708882D71F90E235D_RuntimeMethod_var);
		int32_t L_59 = V_2;
		bool L_60 = Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_inline((Nullable_1_t221578D885DA0C30D53EAE7B443F011D03F2F20E *)(&V_1), /*hidden argument*/Nullable_1_get_HasValue_m3D5F9C35B0CFF2FB2772DB2F463F43018A937988_RuntimeMethod_var);
		if (!((int32_t)((int32_t)((((int32_t)L_58) == ((int32_t)L_59))? 1 : 0)&(int32_t)L_60)))
		{
			goto IL_022a;
		}
	}
	{
		WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B(__this, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_61 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_62 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_022a;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_63 = __this->get__videoPlayer_52();
		NullCheck(L_63);
		bool L_64 = VideoPlayer_get_isPrepared_mF0DC157BD0B5E8FF26A27EA7ABE4BEDCBE963694(L_63, /*hidden argument*/NULL);
		if (L_64)
		{
			goto IL_022a;
		}
	}
	{
		return;
	}

IL_022a:
	{
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_65 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_66 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_65, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_024b;
		}
	}
	{
		bool L_67 = __this->get__hasInputPlugins_54();
		if (L_67)
		{
			goto IL_024a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral5F15B7672B931BB4B0663E942D3D7887F2C0DEA2, /*hidden argument*/NULL);
	}

IL_024a:
	{
		return;
	}

IL_024b:
	{
		bool L_68 = __this->get__hasInputPlugins_54();
		if (L_68)
		{
			goto IL_02b2;
		}
	}
	{
		int32_t L_69 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_69;
		int32_t L_70 = V_2;
		switch (L_70)
		{
			case 0:
			{
				goto IL_0272;
			}
			case 1:
			{
				goto IL_0281;
			}
			case 2:
			{
				goto IL_028f;
			}
			case 3:
			{
				goto IL_0272;
			}
		}
	}
	{
		goto IL_02b2;
	}

IL_0272:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_71 = WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_72 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_71, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_02b2;
		}
	}
	{
		return;
	}

IL_0281:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_73 = __this->get__feed_44();
		NullCheck(L_73);
		bool L_74 = WebCamTexture_get_didUpdateThisFrame_mFB0307CCD0634E6CCD89BC9368C7B0361762B3C4(L_73, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_02b2;
		}
	}
	{
		return;
	}

IL_028f:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_75 = __this->get__feed_44();
		NullCheck(L_75);
		bool L_76 = WebCamTexture_get_didUpdateThisFrame_mFB0307CCD0634E6CCD89BC9368C7B0361762B3C4(L_75, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_029d;
		}
	}
	{
		return;
	}

IL_029d:
	{
		int32_t L_77 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)64))))
		{
			goto IL_02b1;
		}
	}
	{
		int32_t L_78 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_78) >= ((int32_t)((int32_t)64))))
		{
			goto IL_02b2;
		}
	}

IL_02b1:
	{
		return;
	}

IL_02b2:
	{
		int32_t L_79 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_79) <= ((int32_t)0)))
		{
			goto IL_02c4;
		}
	}
	{
		int32_t L_80 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_80) > ((int32_t)0)))
		{
			goto IL_02f6;
		}
	}

IL_02c4:
	{
		int32_t L_81 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		V_6 = L_81;
		String_t* L_82 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_6), /*hidden argument*/NULL);
		int32_t L_83 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		V_6 = L_83;
		String_t* L_84 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_85 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralC5466045C8D8263521FA5BB4AE3EDF0B44F93BAF, L_82, _stringLiteral73C774F3077BCDA69B947EE284A1C7E56CE644F6, L_84, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_85, /*hidden argument*/NULL);
	}

IL_02f6:
	{
		int32_t L_86 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		int32_t L_87 = __this->get__previousWidth_50();
		if ((!(((uint32_t)L_86) == ((uint32_t)L_87))))
		{
			goto IL_0315;
		}
	}
	{
		int32_t L_88 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		int32_t L_89 = __this->get__previousHeight_51();
		if ((((int32_t)L_88) == ((int32_t)L_89)))
		{
			goto IL_03c3;
		}
	}

IL_0315:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_90 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		int32_t L_91 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		int32_t L_92 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		InterfaceActionInvoker3< float, uint32_t, uint32_t >::Invoke(16 /* System.Void Wikitude.IPlatformBridge::SetMetadata(System.Single,System.UInt32,System.UInt32) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_90, (58.0f), L_91, L_92);
		RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * L_93 = __this->get__ringBuffer_49();
		int32_t L_94 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		int32_t L_95 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		NullCheck(L_93);
		RingBuffer_SetSize_mFC84B2BE74589100F6F7CDF2AD0E5FE65F21F5C7(L_93, L_94, L_95, /*hidden argument*/NULL);
		int32_t L_96 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		__this->set__previousWidth_50(L_96);
		int32_t L_97 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		__this->set__previousHeight_51(L_97);
		bool L_98 = __this->get__hasInputPlugins_54();
		if (L_98)
		{
			goto IL_03c3;
		}
	}
	{
		int32_t L_99 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_99;
		int32_t L_100 = V_2;
		switch (L_100)
		{
			case 0:
			{
				goto IL_0386;
			}
			case 1:
			{
				goto IL_03ab;
			}
			case 2:
			{
				goto IL_03ab;
			}
			case 3:
			{
				goto IL_0386;
			}
		}
	}
	{
		goto IL_03c3;
	}

IL_0386:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_101 = WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_101);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_102 = Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6(L_101, /*hidden argument*/NULL);
		__this->set__pixels_45(L_102);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_103 = __this->get__pixels_45();
		if (L_103)
		{
			goto IL_03c3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9C76258C195A52DB46177269E8965072E8E46C75, /*hidden argument*/NULL);
		goto IL_03c3;
	}

IL_03ab:
	{
		int32_t L_104 = WikitudeCamera_get_CurrentWidth_mF505EAA96D7106E0BE0F043E2A7A66E488B3E8AE(__this, /*hidden argument*/NULL);
		int32_t L_105 = WikitudeCamera_get_CurrentHeight_m939BC1DABBE7DA4E847C86634333CC48B6ED526D(__this, /*hidden argument*/NULL);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_106 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_104, (int32_t)L_105)));
		__this->set__pixels_45(L_106);
	}

IL_03c3:
	{
		bool L_107 = __this->get__hasInputPlugins_54();
		if (L_107)
		{
			goto IL_043a;
		}
	}
	{
		int32_t L_108 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_108;
		int32_t L_109 = V_2;
		switch (L_109)
		{
			case 0:
			{
				goto IL_03ea;
			}
			case 1:
			{
				goto IL_040f;
			}
			case 2:
			{
				goto IL_040f;
			}
			case 3:
			{
				goto IL_0423;
			}
		}
	}
	{
		goto IL_043a;
	}

IL_03ea:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_110 = WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_110);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_111 = Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6(L_110, /*hidden argument*/NULL);
		__this->set__pixels_45(L_111);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_112 = __this->get__pixels_45();
		if (L_112)
		{
			goto IL_043a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral9C76258C195A52DB46177269E8965072E8E46C75, /*hidden argument*/NULL);
		goto IL_043a;
	}

IL_040f:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_113 = __this->get__feed_44();
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_114 = __this->get__pixels_45();
		NullCheck(L_113);
		WebCamTexture_GetPixels32_m08DEBC9193EB3FEB3C1E1161FE4CA51A6409F755(L_113, L_114, /*hidden argument*/NULL);
		goto IL_043a;
	}

IL_0423:
	{
		WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B(__this, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_115 = WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_115);
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_116 = Texture2D_GetPixels32_m7CC6EC6AD48D4CD84AF28DFDFBE24750900FA2E6(L_115, /*hidden argument*/NULL);
		__this->set__pixels_45(L_116);
	}

IL_043a:
	{
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_117 = __this->get__pixels_45();
		if (!L_117)
		{
			goto IL_04a7;
		}
	}
	{
		bool L_118 = __this->get__hasInputPlugins_54();
		if (L_118)
		{
			goto IL_04a7;
		}
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
	}

IL_0452:
	try
	{ // begin try (depth: 1)
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_119 = __this->get__pixels_45();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_120 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_119, 3, /*hidden argument*/NULL);
		V_9 = L_120;
		intptr_t L_121 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_9), /*hidden argument*/NULL);
		V_10 = (intptr_t)L_121;
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_122 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		uint64_t L_123 = __this->get__frameIndex_47();
		V_11 = ((int64_t)il2cpp_codegen_add((int64_t)L_123, (int64_t)(((int64_t)((int64_t)1)))));
		uint64_t L_124 = V_11;
		__this->set__frameIndex_47(L_124);
		uint64_t L_125 = V_11;
		intptr_t L_126 = V_10;
		NullCheck(L_122);
		InterfaceActionInvoker2< uint64_t, intptr_t >::Invoke(20 /* System.Void Wikitude.IPlatformBridge::NotifyNewInputFrame(System.UInt64,System.IntPtr) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_122, L_125, (intptr_t)L_126);
		IL2CPP_LEAVE(0x4A7, FINALLY_048c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_048c;
	}

FINALLY_048c:
	{ // begin finally (depth: 1)
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_127 = V_9;
			il2cpp_codegen_initobj((&V_12), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_128 = V_12;
			bool L_129 = GCHandle_op_Inequality_mA8B5C82D5D4EE37FC482B9A6750D63E494E10816(L_127, L_128, /*hidden argument*/NULL);
			if (!L_129)
			{
				goto IL_04a6;
			}
		}

IL_049f:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_9), /*hidden argument*/NULL);
		}

IL_04a6:
		{
			IL2CPP_END_FINALLY(1164)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1164)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4A7, IL_04a7)
	}

IL_04a7:
	{
		bool L_130 = __this->get__hasInputPlugins_54();
		if (!L_130)
		{
			goto IL_04b7;
		}
	}
	{
		bool L_131 = __this->get__requestsCameraFrameRendering_55();
		if (!L_131)
		{
			goto IL_04ce;
		}
	}

IL_04b7:
	{
		RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * L_132 = __this->get__ringBuffer_49();
		uint64_t L_133 = __this->get__frameIndex_47();
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_134 = WikitudeCamera_get_CurrentTexture_mF9CB53EF4840351DA9AC166A82015206E45DAAFC(__this, /*hidden argument*/NULL);
		NullCheck(L_132);
		RingBuffer_AddTexture_m5D428DCAF0CAEBD4B3BA780D34EC5CAB4569A219(L_132, L_133, L_134, /*hidden argument*/NULL);
	}

IL_04ce:
	{
		V_0 = (0.0f);
		bool L_135 = __this->get__hasInputPlugins_54();
		if (L_135)
		{
			goto IL_0513;
		}
	}
	{
		int32_t L_136 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_136;
		int32_t L_137 = V_2;
		switch (L_137)
		{
			case 0:
			{
				goto IL_0508;
			}
			case 1:
			{
				goto IL_04fb;
			}
			case 2:
			{
				goto IL_04fb;
			}
			case 3:
			{
				goto IL_0508;
			}
		}
	}
	{
		goto IL_0508;
	}

IL_04fb:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_138 = __this->get__feed_44();
		NullCheck(L_138);
		int32_t L_139 = WebCamTexture_get_videoRotationAngle_m02878E5708942CE6149A57E6E10C453358D2B2A9(L_138, /*hidden argument*/NULL);
		V_0 = (((float)((float)L_139)));
	}

IL_0508:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_140 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		float L_141 = V_0;
		NullCheck(L_140);
		InterfaceActionInvoker1< float >::Invoke(15 /* System.Void Wikitude.IPlatformBridge::CameraToSurfaceAngleChanged(System.Single) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_140, L_141);
	}

IL_0513:
	{
		int32_t L_142 = WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline(__this, /*hidden argument*/NULL);
		V_2 = L_142;
		int32_t L_143 = V_2;
		if ((!(((uint32_t)L_143) > ((uint32_t)1))))
		{
			goto IL_0525;
		}
	}
	{
		int32_t L_144 = V_2;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_144, (int32_t)2))) > ((uint32_t)1))))
		{
			goto IL_056d;
		}
	}
	{
		return;
	}

IL_0525:
	{
		float L_145 = __this->get__cameraToHorizonAngle_38();
		V_13 = ((float)il2cpp_codegen_subtract((float)(90.0f), (float)L_145));
		float L_146 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_147 = fabsf(L_146);
		bool L_148 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_147, (90.0f), /*hidden argument*/NULL);
		if (L_148)
		{
			goto IL_054a;
		}
	}
	{
		float L_149 = V_13;
		G_B86_0 = L_149;
		goto IL_0552;
	}

IL_054a:
	{
		float L_150 = V_13;
		G_B86_0 = ((float)il2cpp_codegen_add((float)L_150, (float)(0.1f)));
	}

IL_0552:
	{
		V_13 = G_B86_0;
		float L_151 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_152 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), L_151, (90.0f), /*hidden argument*/NULL);
		float L_153 = V_0;
		WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B(__this, L_152, L_153, /*hidden argument*/NULL);
		return;
	}

IL_056d:
	{
		Gyroscope_t48D5E1FF13C0C404A0EE843254DF154C6FCE1DC1 * L_154 = Input_get_gyro_mE481C9495C12652B8744F8214A3F9ED20C317BD4(/*hidden argument*/NULL);
		NullCheck(L_154);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_155 = Gyroscope_get_attitude_m4A8F384362895239F7811D04681359BAE982A208(L_154, /*hidden argument*/NULL);
		float L_156 = V_0;
		WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B(__this, L_155, L_156, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateRenderTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateRenderTexture_mA1F6E539983306DF6CCA634AEAC1EE4932EFEFE7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_UpdateRenderTexture_mA1F6E539983306DF6CCA634AEAC1EE4932EFEFE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__hasInputPlugins_54();
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->get__requestsCameraFrameRendering_55();
		if (!L_1)
		{
			goto IL_0030;
		}
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_2);
		int64_t L_3 = InterfaceFuncInvoker0< int64_t >::Invoke(53 /* System.Int64 Wikitude.IWikitudeBridge::GetRenderFrameId() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_2);
		__this->set__renderFrameIndex_48(L_3);
		RuntimeObject* L_4 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_5 = WikitudeCamera_get_CurrentRenderTexture_mFE9AC5AD61E260510F9B6654457CF9161D9C9A0B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * >::Invoke(13 /* System.Void Wikitude.IPlatformBridge::UpdateRenderTexture(UnityEngine.Texture) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0030:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateVideoPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00e3;
		}
	}
	{
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_2 = __this->get__videoClip_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		__this->set__staticImage_34((Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)NULL);
		return;
	}

IL_0027:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_4, _stringLiteralCE6A8213CD20805B16473A9A66D5EC7E49080CDA, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = L_4;
		NullCheck(L_5);
		Object_set_hideFlags_mB0B45A19A5871EF407D7B09E0EB76003496BA4F0(L_5, ((int32_t)61), /*hidden argument*/NULL);
		V_0 = L_5;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = Texture2D_get_blackTexture_mCF4F978DF9B6066794E7130E0C14618216ED0956(/*hidden argument*/NULL);
		__this->set__staticImage_34(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		NullCheck(L_7);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_8 = GameObject_AddComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m0FC58A141D1F8863C8F68F94BC76190C53AA5032(L_7, /*hidden argument*/GameObject_AddComponent_TisVideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2_m0FC58A141D1F8863C8F68F94BC76190C53AA5032_RuntimeMethod_var);
		__this->set__videoPlayer_52(L_8);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_9 = __this->get__videoPlayer_52();
		NullCheck(L_9);
		VideoPlayer_set_renderMode_m9DC3CFC4B99F66FA6E6116379D8C7F64D798CB63(L_9, 2, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_10 = __this->get__videoPlayer_52();
		NullCheck(L_10);
		VideoPlayer_set_aspectRatio_mEA5D88F04CF46AE08D472146D0A0274DA5E97065(L_10, 4, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_11 = __this->get__videoPlayer_52();
		NullCheck(L_11);
		VideoPlayer_set_audioOutputMode_m95A8791FE87A490EAEF1959E7597E0CC1659227F(L_11, 0, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_12 = __this->get__videoPlayer_52();
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_13 = __this->get__videoClip_39();
		NullCheck(L_12);
		VideoPlayer_set_clip_mD8D5AA8642010DFACD0B88F38FAF7CBBB8DD4E64(L_12, L_13, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_14 = __this->get__videoPlayer_52();
		bool L_15 = __this->get__videoLoop_40();
		NullCheck(L_14);
		VideoPlayer_set_isLooping_m0FA87AE5A8F06A545349EAA8F0C64158E29700C7(L_14, L_15, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_16 = __this->get__videoPlayer_52();
		float L_17 = __this->get__videoSpeed_41();
		NullCheck(L_16);
		VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6(L_16, L_17, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_18 = __this->get__videoPlayer_52();
		NullCheck(L_18);
		VideoPlayer_set_sendFrameReadyEvents_m9ABC64BBC1AD7D7E457C92BE975997F571637BAD(L_18, (bool)1, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_19 = __this->get__videoPlayer_52();
		FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 * L_20 = (FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422 *)il2cpp_codegen_object_new(FrameReadyEventHandler_t518B277D916AB292680CAA186BCDB3D3EF130422_il2cpp_TypeInfo_var);
		FrameReadyEventHandler__ctor_m7DFDBF9203E8F9FC1093E1655C5E2695623D7E3D(L_20, __this, (intptr_t)((intptr_t)WikitudeCamera_UpdateVideoTexture_m844EA240BD4CBEA4B486335CA609F98A6DC4DCED_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_19);
		VideoPlayer_add_frameReady_mB7641568597E988CE68BC3E3BEF068F558DBCF6F(L_19, L_20, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_21 = __this->get__videoPlayer_52();
		NullCheck(L_21);
		VideoPlayer_set_skipOnDrop_mBAA06EE0F8E6E41AA3CC43F0791E76BF2C14C0C8(L_21, (bool)1, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_22 = __this->get__videoPlayer_52();
		NullCheck(L_22);
		VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257(L_22, /*hidden argument*/NULL);
		return;
	}

IL_00e3:
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_23 = __this->get__videoPlayer_52();
		NullCheck(L_23);
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_24 = VideoPlayer_get_clip_mA2C3AC016BB7B09855C56A11843AE60EB4D36B76(L_23, /*hidden argument*/NULL);
		VideoClip_tA4039CBBC6F9C3AD62B067964A6C20C6FB7376D5 * L_25 = __this->get__videoClip_39();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_26 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_24, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_010d;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_27 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_27, /*hidden argument*/NULL);
		WikitudeCamera_UpdateVideoPlayer_m08E50D4D2C83C0BF4E9DF5C0C17B7633F0F0B31B(__this, /*hidden argument*/NULL);
		return;
	}

IL_010d:
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_28 = __this->get__videoPlayer_52();
		NullCheck(L_28);
		bool L_29 = VideoPlayer_get_isLooping_m096B276AD270A2C03C517262D4DA100DEC1A2014(L_28, /*hidden argument*/NULL);
		bool L_30 = __this->get__videoLoop_40();
		if ((((int32_t)L_29) == ((int32_t)L_30)))
		{
			goto IL_0165;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_31 = __this->get__videoPlayer_52();
		bool L_32 = __this->get__videoLoop_40();
		NullCheck(L_31);
		VideoPlayer_set_isLooping_m0FA87AE5A8F06A545349EAA8F0C64158E29700C7(L_31, L_32, /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_33 = __this->get__videoPlayer_52();
		NullCheck(L_33);
		bool L_34 = VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF(L_33, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0165;
		}
	}
	{
		bool L_35 = __this->get__videoLoop_40();
		if (!L_35)
		{
			goto IL_0165;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_36 = __this->get__videoPlayer_52();
		NullCheck(L_36);
		VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514(L_36, (0.0), /*hidden argument*/NULL);
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_37 = __this->get__videoPlayer_52();
		NullCheck(L_37);
		VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257(L_37, /*hidden argument*/NULL);
	}

IL_0165:
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_38 = __this->get__videoPlayer_52();
		NullCheck(L_38);
		float L_39 = VideoPlayer_get_playbackSpeed_m6A0A48C222262FADDA28565AD3D36C45B92D31A6(L_38, /*hidden argument*/NULL);
		float L_40 = __this->get__videoSpeed_41();
		if ((((float)L_39) == ((float)L_40)))
		{
			goto IL_0189;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_41 = __this->get__videoPlayer_52();
		float L_42 = __this->get__videoSpeed_41();
		NullCheck(L_41);
		VideoPlayer_set_playbackSpeed_m76CDBC2141AE66474AFCB707A6E0EE77454628A6(L_41, L_42, /*hidden argument*/NULL);
	}

IL_0189:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::UpdateVideoTexture(UnityEngine.Video.VideoPlayer,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_UpdateVideoTexture_m844EA240BD4CBEA4B486335CA609F98A6DC4DCED (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_UpdateVideoTexture_m844EA240BD4CBEA4B486335CA609F98A6DC4DCED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * V_0 = NULL;
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = ___source0;
		NullCheck(L_0);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_1 = VideoPlayer_get_texture_m7FEBFE07CDB830FCAD4B5B2D7EF63D12E8C034CC(L_0, /*hidden argument*/NULL);
		V_0 = ((RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)IsInstClass((RuntimeObject*)L_1, RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6_il2cpp_TypeInfo_var));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_2 = __this->get__staticImage_34();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_2);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_4);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_6 = __this->get__staticImage_34();
		NullCheck(L_6);
		int32_t L_7 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_6);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_8);
		if ((((int32_t)L_7) == ((int32_t)L_9)))
		{
			goto IL_004a;
		}
	}

IL_0032:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_10 = __this->get__staticImage_34();
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_11);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_13);
		NullCheck(L_10);
		Texture2D_Resize_m9B3D67DF42A47D5C573D084C080CEDA5E330A8D2(L_10, L_12, L_14, /*hidden argument*/NULL);
	}

IL_004a:
	{
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_15 = V_0;
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1(L_15, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = __this->get__staticImage_34();
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_17);
		RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 * L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_19);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_21), (0.0f), (0.0f), (((float)((float)L_18))), (((float)((float)L_20))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Texture2D_ReadPixels_m1ED1C11E41D0ACC8CFCABBD25946CF0BD16D4F61(L_16, L_21, 0, 0, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_22 = __this->get__staticImage_34();
		NullCheck(L_22);
		Texture2D_Apply_m0F3B4A4B1B89E44E2AF60ABDEFAA18D93735B5CA(L_22, /*hidden argument*/NULL);
		RenderTexture_set_active_m992E25C701DEFC8042B31022EA45F02A787A84F1((RenderTexture_tBC47D853E3DA6511CD6C49DBF78D47B890FCD2F6 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::VideoIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_VideoIsPlaying_m58C9C231A5ACB69B09F44350A4E5D7188D24CF22 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_VideoIsPlaying_m58C9C231A5ACB69B09F44350A4E5D7188D24CF22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = __this->get__videoPlayer_52();
		NullCheck(L_2);
		bool L_3 = VideoPlayer_get_isPlaying_mC7CFE17762C14F2AFB1D73500317B9D25A7395DF(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Void Wikitude.WikitudeCamera::VideoPlayOrPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_VideoPlayOrPause_m8CEC3D379ECB86E728D05B81CC4794CBC38F0CA8 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_VideoPlayOrPause_m8CEC3D379ECB86E728D05B81CC4794CBC38F0CA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0031;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = __this->get__videoPlayer_52();
		NullCheck(L_2);
		bool L_3 = VideoPlayer_get_isPaused_m84665EE1EB3F31A1C30D9D3E17515802E446E849(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = __this->get__videoPlayer_52();
		NullCheck(L_4);
		VideoPlayer_Play_m2BCD775F42A36AC291C7B32D9E4D934EF0B91257(L_4, /*hidden argument*/NULL);
		return;
	}

IL_0026:
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_5 = __this->get__videoPlayer_52();
		NullCheck(L_5);
		VideoPlayer_Pause_m62EE5660CFA287D78BB3FE815CA5649242509B93(L_5, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::VideoReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_VideoReset_m7BC3882A9E6AFC02F2D0579E57C6BF1CB1C448FB (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_VideoReset_m7BC3882A9E6AFC02F2D0579E57C6BF1CB1C448FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = __this->get__videoPlayer_52();
		NullCheck(L_2);
		VideoPlayer_set_time_m474F47BCE704FFCB3C6FFAAE6414A9ED89678514(L_2, (0.0), /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::VideoStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_VideoStep_m46A0FA9E99A5A7409CA4561E1F82F88B019EEBA2 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_VideoStep_m46A0FA9E99A5A7409CA4561E1F82F88B019EEBA2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_0 = __this->get__videoPlayer_52();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_2 = __this->get__videoPlayer_52();
		NullCheck(L_2);
		bool L_3 = VideoPlayer_get_canStep_mCCE3965DAF4B2805F0451BAACA41864F8309872D(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		VideoPlayer_tFC1C27AF83D59A5213B2AC561B43FD7E19FE02F2 * L_4 = __this->get__videoPlayer_52();
		NullCheck(L_4);
		VideoPlayer_StepForward_m8B9A90273A3FA36EDE431773EF97E15F9151A899(L_4, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::NotifyNewDeviceRotationEvent(UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, float ___cameraToSurfaceAngle1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_NotifyNewDeviceRotationEvent_mF6C4E5219B71C96DE21EBB9FE0A5BD018D5C284B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* V_1 = NULL;
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_0 = Math_MakeRotation_m37A8D8D4F027A8ECD0AF4A6682AFDE1C98BA4826((180.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		float L_1 = ___cameraToSurfaceAngle1;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_2 = Math_MakeRotation_m37A8D8D4F027A8ECD0AF4A6682AFDE1C98BA4826((0.0f), (0.0f), L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_il2cpp_TypeInfo_var);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_3 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_0, L_2, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___rotation0;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_5 = Math_MakeRotation_m59B922B3803576E96AF98DA7F80876B0AAA58043(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_6 = Matrix4x4_get_transpose_mD7983388309D5C806DF8E79A76FF0209964C0D02((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), /*hidden argument*/NULL);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_7 = Matrix4x4_op_Multiply_mF6693A950E1917204E356366892C3CCB0553436E(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_8 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		V_1 = L_8;
		V_3 = 0;
		goto IL_0058;
	}

IL_0049:
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_9 = V_1;
		int32_t L_10 = V_3;
		int32_t L_11 = V_3;
		float L_12 = Matrix4x4_get_Item_m3F051969B5275A3EA6F3C620CBE0A19FD48BE70E((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_0), L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (float)L_12);
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_14 = V_3;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)16))))
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70(/*hidden argument*/NULL);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_16 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker1< SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* >::Invoke(21 /* System.Void Wikitude.IPlatformBridge::NotifyNewDeviceRotationEvent(System.Single[]) */, IPlatformBridge_t39579617411D1F2B746127878F5B07F6B47B731B_il2cpp_TypeInfo_var, L_15, L_16);
		return;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_HasInputPlugins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_HasInputPlugins_mBC2460AAF5E8A0466E297C35788EFA7ACC165C3F (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__hasInputPlugins_54();
		return L_0;
	}
}
// System.Boolean Wikitude.WikitudeCamera::get_RequestsCameraFrameRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WikitudeCamera_get_RequestsCameraFrameRendering_m5377A8B395DC27CF92EFEDCC8B570DF42E50F6A3 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__requestsCameraFrameRendering_55();
		return L_0;
	}
}
// System.Void Wikitude.WikitudeCamera::CheckForInputPlugins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		__this->set__hasInputPlugins_54((bool)0);
		__this->set__requestsCameraFrameRendering_55((bool)0);
		HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * L_0 = __this->get__plugins_53();
		NullCheck(L_0);
		Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6  L_1 = HashSet_1_GetEnumerator_m4F69AD65B260CE86E8493222A4B04E36C1671131(L_0, /*hidden argument*/HashSet_1_GetEnumerator_m4F69AD65B260CE86E8493222A4B04E36C1671131_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_001c:
		{
			Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_2 = Enumerator_get_Current_m6DEEBCD07F29116402AE4A4C17B816F298C79AB8_inline((Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6DEEBCD07F29116402AE4A4C17B816F298C79AB8_RuntimeMethod_var);
			V_1 = L_2;
			Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = Plugin_get_HasInputModule_m18F70F4D12C19B6CA4028FACFE5E0B7325AB8437_inline(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0042;
			}
		}

IL_002c:
		{
			__this->set__hasInputPlugins_54((bool)1);
			Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_5 = V_1;
			NullCheck(L_5);
			bool L_6 = Plugin_get_RequestsCameraFrameRendering_m685AA8CA981AFAF56FF187D46231E2933336511C_inline(L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0042;
			}
		}

IL_003b:
		{
			__this->set__requestsCameraFrameRendering_55((bool)1);
		}

IL_0042:
		{
			bool L_7 = Enumerator_MoveNext_mA45A02FEE4CE736671FAD1192782E8FB7EE5D479((Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mA45A02FEE4CE736671FAD1192782E8FB7EE5D479_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001c;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mFACF9D60A0BD61283E35984A59EF668A33AE03AC((Enumerator_t49A32A91B8FB3B3543C0BD2C67D27C86E7E6B0B6 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mFACF9D60A0BD61283E35984A59EF668A33AE03AC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(77)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
	}

IL_005b:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::RegisterPlugin(Wikitude.Plugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_RegisterPlugin_mFAD1AB165B550F22BA5761F2414A1AD89A9D82C7 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_RegisterPlugin_mFAD1AB165B550F22BA5761F2414A1AD89A9D82C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_EnableLivePreview_m80B0DC21FDD420F9C3855A24C9DA0F5818BAB980_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * L_1 = __this->get__plugins_53();
		Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_2 = ___plugin0;
		NullCheck(L_1);
		HashSet_1_Add_mB6D35F4347319EF7CB3309E19B5B407565F087B3(L_1, L_2, /*hidden argument*/HashSet_1_Add_mB6D35F4347319EF7CB3309E19B5B407565F087B3_RuntimeMethod_var);
		WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239(__this, /*hidden argument*/NULL);
		bool L_3 = __this->get__hasInputPlugins_54();
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_4 = __this->get__feed_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		__this->set__feed_44((WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)NULL);
	}

IL_0038:
	{
		Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_6 = ___plugin0;
		NullCheck(L_6);
		Plugin_CameraReleased_m2B4F10C056D417076C9DC943902FBA5B3CF9EFCF(L_6, /*hidden argument*/NULL);
	}

IL_003e:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::DeregisterPlugin(Wikitude.Plugin)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_DeregisterPlugin_m73BD75CFA23AC3B34D423462DD558D0AE0B3C724 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * ___plugin0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_DeregisterPlugin_m73BD75CFA23AC3B34D423462DD558D0AE0B3C724_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = WikitudeCamera_get_EnableLivePreview_m80B0DC21FDD420F9C3855A24C9DA0F5818BAB980_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * L_1 = __this->get__plugins_53();
		Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_2 = ___plugin0;
		NullCheck(L_1);
		bool L_3 = HashSet_1_Contains_mDB430F258B0B0E42C5BF2B69553A1B4A8106C1D2(L_1, L_2, /*hidden argument*/HashSet_1_Contains_mDB430F258B0B0E42C5BF2B69553A1B4A8106C1D2_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * L_4 = __this->get__plugins_53();
		Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * L_5 = ___plugin0;
		NullCheck(L_4);
		HashSet_1_Remove_mFCD5DF1888EB22E31D1DEE68971BF8DADE683B96(L_4, L_5, /*hidden argument*/HashSet_1_Remove_mFCD5DF1888EB22E31D1DEE68971BF8DADE683B96_RuntimeMethod_var);
		WikitudeCamera_CheckForInputPlugins_mE038AB209EA0F3BE05D278BFC4D55C5E0CD4E239(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::NotifyNewCameraFrame(System.String,Wikitude.CameraFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_NotifyNewCameraFrame_mD1D616589F08BD78885E79EC089C6C026A1E5A79 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, String_t* ___identifier0, CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * ___cameraFrame1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_NotifyNewCameraFrame_mD1D616589F08BD78885E79EC089C6C026A1E5A79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_3;
	memset((&V_3), 0, sizeof(V_3));
	intptr_t V_4;
	memset((&V_4), 0, sizeof(V_4));
	GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * L_0 = ___cameraFrame1;
		NullCheck(L_0);
		ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  L_1 = CameraFrame_get_ColorMetadata_mDC94620ECD71A251C4700E43B7BD1BD6AC55C43E_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = L_1.get_ColorSpace_4();
		if ((((int32_t)L_2) == ((int32_t)5)))
		{
			goto IL_0019;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral2F23458F001CA406EA38A057A13BCDF5E7C723FC, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * L_3 = ___cameraFrame1;
		NullCheck(L_3);
		ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  L_4 = CameraFrame_get_ColorMetadata_mDC94620ECD71A251C4700E43B7BD1BD6AC55C43E_inline(L_3, /*hidden argument*/NULL);
		int32_t L_5 = L_4.get_Width_1();
		V_0 = L_5;
		CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * L_6 = ___cameraFrame1;
		NullCheck(L_6);
		ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  L_7 = CameraFrame_get_ColorMetadata_mDC94620ECD71A251C4700E43B7BD1BD6AC55C43E_inline(L_6, /*hidden argument*/NULL);
		int32_t L_8 = L_7.get_Height_2();
		V_1 = L_8;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)L_10));
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_11 = __this->get__inputPluginTexture_56();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_005f;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_13 = __this->get__inputPluginTexture_56();
		NullCheck(L_13);
		int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 UnityEngine.Texture::get_width() */, L_13);
		int32_t L_15 = V_0;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_005f;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_16 = __this->get__inputPluginTexture_56();
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 UnityEngine.Texture::get_height() */, L_16);
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) == ((int32_t)L_18)))
		{
			goto IL_00a1;
		}
	}

IL_005f:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_19 = __this->get__inputPluginTexture_56();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_19, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0078;
		}
	}
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_21 = __this->get__inputPluginTexture_56();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_21, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_22 = V_0;
		int32_t L_23 = V_1;
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_24 = (Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C *)il2cpp_codegen_object_new(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C_il2cpp_TypeInfo_var);
		Texture2D__ctor_m22561E039BC96019757E6B2427BE09734AE2C44A(L_24, L_22, L_23, 4, (bool)0, /*hidden argument*/NULL);
		__this->set__inputPluginTexture_56(L_24);
		int32_t L_25 = V_2;
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_26 = (Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*)SZArrayNew(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->set__pixels_45(L_26);
		int32_t L_27 = V_2;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_28 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)4)));
		__this->set__bytes_46(L_28);
	}

IL_00a1:
	{
		CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * L_29 = ___cameraFrame1;
		NullCheck(L_29);
		List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * L_30 = CameraFrame_get_ColorData_m585083707C07B5D8682C4D54AEE3DC3320C7F34A_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  L_31 = List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_inline(L_30, 0, /*hidden argument*/List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_RuntimeMethod_var);
		intptr_t L_32 = L_31.get_Data_0();
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_33 = __this->get__bytes_46();
		int32_t L_34 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m64744D9E23AFC00AA06CD6B057E19B7C0CE4C0C2((intptr_t)L_32, L_33, 0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)4)), /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_3), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
	}

IL_00c9:
	try
	{ // begin try (depth: 1)
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_35 = __this->get__pixels_45();
		GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_36 = GCHandle_Alloc_m30DAF14F75E3A692C594965CE6724E2454DE9A2E((RuntimeObject *)(RuntimeObject *)L_35, 3, /*hidden argument*/NULL);
		V_3 = L_36;
		intptr_t L_37 = GCHandle_AddrOfPinnedObject_mA20090CB8274F28D087A6E8AD36D3230B6741EA5((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_3), /*hidden argument*/NULL);
		V_4 = (intptr_t)L_37;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_38 = __this->get__bytes_46();
		intptr_t L_39 = V_4;
		int32_t L_40 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		Marshal_Copy_m0486DFF229946F0F9E6A04DDDF3BC9E5F1609A5A(L_38, 0, (intptr_t)L_39, ((int32_t)il2cpp_codegen_multiply((int32_t)L_40, (int32_t)4)), /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x10C, FINALLY_00f2);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00f2;
	}

FINALLY_00f2:
	{ // begin finally (depth: 1)
		{
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_41 = V_3;
			il2cpp_codegen_initobj((&V_5), sizeof(GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 ));
			GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3  L_42 = V_5;
			bool L_43 = GCHandle_op_Inequality_mA8B5C82D5D4EE37FC482B9A6750D63E494E10816(L_41, L_42, /*hidden argument*/NULL);
			if (!L_43)
			{
				goto IL_010b;
			}
		}

IL_0104:
		{
			GCHandle_Free_m392ECC9B1058E35A0FD5CF21A65F212873FC26F0((GCHandle_t39FAEE3EA592432C93B574A31DD83B87F1847DE3 *)(&V_3), /*hidden argument*/NULL);
		}

IL_010b:
		{
			IL2CPP_END_FINALLY(242)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(242)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x10C, IL_010c)
	}

IL_010c:
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_44 = __this->get__inputPluginTexture_56();
		Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_45 = __this->get__pixels_45();
		NullCheck(L_44);
		Texture2D_SetPixels32_m8669AE290D19897A70859BE23D9A438EB7EDA67E(L_44, L_45, /*hidden argument*/NULL);
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_46 = __this->get__inputPluginTexture_56();
		NullCheck(L_46);
		Texture2D_Apply_mCC17B1895AEB420CF75B1A50A62AB623C225A6C1(L_46, (bool)0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::DestroyLivePreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera_DestroyLivePreview_m34CF4D531DAB5BDA677BAF20464FE8D04BE12B18 (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera_DestroyLivePreview_m34CF4D531DAB5BDA677BAF20464FE8D04BE12B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_0 = __this->get__feed_44();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_2 = __this->get__feed_44();
		NullCheck(L_2);
		WebCamTexture_Stop_m4E3BD56B6481E2A0D53707119CFCB6074941B447(L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Wikitude.WikitudeCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeCamera__ctor_mBFB26150D8ED7D5C668A7DF71D2975E9EAB1BC3D (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeCamera__ctor_mBFB26150D8ED7D5C668A7DF71D2975E9EAB1BC3D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * L_0 = (OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 *)il2cpp_codegen_object_new(OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8_il2cpp_TypeInfo_var);
		OnSDKInitializedEvent__ctor_m3AAB986DAB2DC77E80A33051D9E4C6092F8BEF3C(L_0, /*hidden argument*/NULL);
		__this->set_OnSDKInitialized_4(L_0);
		__this->set__enableCameraRendering_6((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		__this->set__calibrationPositionOffset_8(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set__calibrationRotationOffset_9(L_2);
		__this->set__printErrorsToConsole_11((bool)1);
		WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 * L_3 = (WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74 *)il2cpp_codegen_object_new(WikitudeBridge_t4635ACE0E4372B28CCADBCD36D0AD1A426097E74_il2cpp_TypeInfo_var);
		WikitudeBridge__ctor_mFE63E37D30170B409F09B0143E0E6EFF7C13CBD3(L_3, /*hidden argument*/NULL);
		__this->set__bridge_12(L_3);
		HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B * L_4 = (HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B *)il2cpp_codegen_object_new(HashSet_1_t11615705EF66BA291F4B4C49DE37E43DDD1C101B_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m999F302DDAC594C47CBD9F2D2D22031D2717BFB6(L_4, /*hidden argument*/HashSet_1__ctor_m999F302DDAC594C47CBD9F2D2D22031D2717BFB6_RuntimeMethod_var);
		__this->set__registeredTrackers_13(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_5), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set__mirroredScaleVector_18(L_5);
		OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * L_6 = (OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF *)il2cpp_codegen_object_new(OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF_il2cpp_TypeInfo_var);
		OnCameraErrorEvent__ctor_m340ED43D22FFF1AF489D4A2E2C6BE5920F55D989(L_6, /*hidden argument*/NULL);
		__this->set_OnCameraError_22(L_6);
		OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * L_7 = (OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 *)il2cpp_codegen_object_new(OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34_il2cpp_TypeInfo_var);
		OnCameraOpenedEvent__ctor_m1F33AEBE3C2077FB0D127EDA3D417B8A489F61CE(L_7, /*hidden argument*/NULL);
		__this->set_OnCameraOpened_23(L_7);
		__this->set__cachedActiveCameraIndex_26((-1));
		__this->set__cachedFocusMode_27(2);
		__this->set__enableCamera2_30((bool)1);
		__this->set__camera2SupportLevel_31(1);
		__this->set__enableLivePreview_32((bool)1);
		__this->set__livePreviewMode_33(1);
		__this->set__webCamIsMirrored_36((bool)1);
		__this->set__cameraToHorizonAngle_38((45.0f));
		__this->set__videoLoop_40((bool)1);
		__this->set__videoSpeed_41((1.0f));
		__this->set__renderFrameIndex_48((((int64_t)((int64_t)(-1)))));
		RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C * L_8 = (RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C *)il2cpp_codegen_object_new(RingBuffer_tD6EF9031911E90E380A493A157D9A4AF733ED30C_il2cpp_TypeInfo_var);
		RingBuffer__ctor_m586272195B6AEFF9AF915D95698020858DB5ACFD(L_8, /*hidden argument*/NULL);
		__this->set__ringBuffer_49(L_8);
		HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C * L_9 = (HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C *)il2cpp_codegen_object_new(HashSet_1_tD95DFEAAD13BC1B5FC89413FF45EE7DD057BE12C_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9BCFF60E57E5FD526DB75586B3BD2DDDEA763DA9(L_9, /*hidden argument*/HashSet_1__ctor_m9BCFF60E57E5FD526DB75586B3BD2DDDEA763DA9_RuntimeMethod_var);
		__this->set__plugins_53(L_9);
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
// System.Void Wikitude.WikitudeCamera/OnCameraErrorEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraErrorEvent__ctor_m340ED43D22FFF1AF489D4A2E2C6BE5920F55D989 (OnCameraErrorEvent_tE5055B13149EBE0F5E780E2BBCB44C31204500EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCameraErrorEvent__ctor_m340ED43D22FFF1AF489D4A2E2C6BE5920F55D989_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m1F9F77404BF472FCB65911F74EBB3B0A8EC05BB2(__this, /*hidden argument*/UnityEvent_1__ctor_m1F9F77404BF472FCB65911F74EBB3B0A8EC05BB2_RuntimeMethod_var);
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
// System.Void Wikitude.WikitudeCamera/OnCameraOpenedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCameraOpenedEvent__ctor_m1F33AEBE3C2077FB0D127EDA3D417B8A489F61CE (OnCameraOpenedEvent_tB915C6B70A1B566DCAE924FDFE6A03AD33787F34 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(__this, /*hidden argument*/NULL);
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
// System.Void Wikitude.WikitudeCamera/OnSDKInitializedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnSDKInitializedEvent__ctor_m3AAB986DAB2DC77E80A33051D9E4C6092F8BEF3C (OnSDKInitializedEvent_t9A771E6F4AFB0FFA1E72FC52393AF61A681C9FA8 * __this, const RuntimeMethod* method)
{
	{
		UnityEvent__ctor_m2F8C02F28E289CA65598FF4FA8EAB84D955FF028(__this, /*hidden argument*/NULL);
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
// Wikitude.IWikitudeBridge Wikitude.WikitudeSDK::get_WikitudeBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__wikitudeBridge_0();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_CreateWikitudeBridge_m56A5C6C354D4BB974CFE9F493327777AC9A3CE66(/*hidden argument*/NULL);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__wikitudeBridge_0(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__wikitudeBridge_0();
		return L_2;
	}
}
// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::get_PlatformBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_get_PlatformBridge_m5BA61F87A8F1DE8E120322947F1014F7AC0F7C70_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__platformBridge_1();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_CreatePlatformBridge_mA950B0C3F83BB9628077CBD0F2006DA1DAD34A62(/*hidden argument*/NULL);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__platformBridge_1(L_1);
	}

IL_0011:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__platformBridge_1();
		return L_2;
	}
}
// System.Void Wikitude.WikitudeSDK::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeSDK_Destroy_m967AE0AA637FAF6069EA90FBF9003A07B9A40BEB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_Destroy_m967AE0AA637FAF6069EA90FBF9003A07B9A40BEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__wikitudeBridge_0((RuntimeObject*)NULL);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__platformBridge_1((RuntimeObject*)NULL);
		return;
	}
}
// Wikitude.IWikitudeBridge Wikitude.WikitudeSDK::CreateWikitudeBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_CreateWikitudeBridge_m56A5C6C354D4BB974CFE9F493327777AC9A3CE66 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_CreateWikitudeBridge_m56A5C6C354D4BB974CFE9F493327777AC9A3CE66_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_0 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__platforms_2();
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = BridgeFactory_ConstructWikitudeBridge_m0CA859748BF23B3F714F6E87FACFF39C7BB5D98D(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		int32_t L_5 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_1 = L_5;
		RuntimeObject * L_6 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, (&V_1));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_1 = *(int32_t*)UnBox(L_6);
		String_t* L_8 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(_stringLiteral522E6924D67715544A0B0CE5868C01FD7D8B6B69, L_7, _stringLiteralDE22AB18EC834EFAB1C07EC57BE8A8C0F25B080B, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = BridgeFactory_ConstructWikitudeBridge_m0CA859748BF23B3F714F6E87FACFF39C7BB5D98D(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, /*hidden argument*/NULL);
		return L_9;
	}
}
// Wikitude.IPlatformBridge Wikitude.WikitudeSDK::CreatePlatformBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WikitudeSDK_CreatePlatformBridge_mA950B0C3F83BB9628077CBD0F2006DA1DAD34A62 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_CreatePlatformBridge_mA950B0C3F83BB9628077CBD0F2006DA1DAD34A62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_0 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__platforms_2();
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA(L_0, L_1, (String_t**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m090CE692FB3E940D6CEA14F4F4F5DFCB829B56FA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		String_t* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_4 = BridgeFactory_ConstructPlatformBridge_mFF6F4576E4EE087015C25D4081C46F9DFB8C01C3(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = BridgeFactory_ConstructPlatformBridge_mFF6F4576E4EE087015C25D4081C46F9DFB8C01C3(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Void Wikitude.WikitudeSDK::ForceUnityBridge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeSDK_ForceUnityBridge_m26F67BA31B2DF237E48BEBF7A230B7D312520E16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_ForceUnityBridge_m26F67BA31B2DF237E48BEBF7A230B7D312520E16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BridgeFactory_tAB7A22083CB58988578D56FE02C73935DCF088F3_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = BridgeFactory_ConstructWikitudeBridge_m0CA859748BF23B3F714F6E87FACFF39C7BB5D98D(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__wikitudeBridge_0(L_0);
		RuntimeObject* L_1 = BridgeFactory_ConstructPlatformBridge_mFF6F4576E4EE087015C25D4081C46F9DFB8C01C3(_stringLiteralD0866D1BCB122C793DA5CF5BFEE3205F9C995C6E, /*hidden argument*/NULL);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__platformBridge_1(L_1);
		return;
	}
}
// Wikitude.SDKBuildInformation Wikitude.WikitudeSDK::get_BuildInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * WikitudeSDK_get_BuildInformation_m8C7FAF58057D338CF9A8EE6D7F87FF6138C066B5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK_get_BuildInformation_m8C7FAF58057D338CF9A8EE6D7F87FF6138C066B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * L_0 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__cachedBuildInformation_3();
		if (L_0)
		{
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(54 /* System.String Wikitude.IWikitudeBridge::GetSDKBuildConfiguration() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(55 /* System.String Wikitude.IWikitudeBridge::GetSDKBuildNumber() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
		RuntimeObject* L_5 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(56 /* System.String Wikitude.IWikitudeBridge::GetSDKBuildDate() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
		RuntimeObject* L_7 = WikitudeSDK_get_WikitudeBridge_mD966B92B68DB2527D3708690F5E9F3BA5CCF5EA5(/*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(57 /* System.String Wikitude.IWikitudeBridge::GetSDKBuildVersion() */, IWikitudeBridge_tE78CFF0FEB891342026B5F54B8BE6E09AA8DDB0E_il2cpp_TypeInfo_var, L_7);
		V_2 = L_8;
		String_t* L_9 = V_0;
		String_t* L_10 = V_1;
		String_t* L_11 = V_2;
		SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * L_12 = (SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 *)il2cpp_codegen_object_new(SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3_il2cpp_TypeInfo_var);
		SDKBuildInformation__ctor_m9354039CA73B67A9C065CB8D66B9EDBA850612B2(L_12, L_2, L_9, L_10, L_11, /*hidden argument*/NULL);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__cachedBuildInformation_3(L_12);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var);
		SDKBuildInformation_tA9ACC4D3FF0BCEC77536B78B7AB2BD573F4F7DE3 * L_13 = ((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->get__cachedBuildInformation_3();
		return L_13;
	}
}
// System.Void Wikitude.WikitudeSDK::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WikitudeSDK__cctor_mBF2C6CF8D6DF5BB635D6AA0EF79A1CFB9559D48E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WikitudeSDK__cctor_mBF2C6CF8D6DF5BB635D6AA0EF79A1CFB9559D48E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_0 = (Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA *)il2cpp_codegen_object_new(Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEB8DD50334D2B8AA1733694B07D55B5FAD191AA3(L_0, /*hidden argument*/Dictionary_2__ctor_mEB8DD50334D2B8AA1733694B07D55B5FAD191AA3_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_1, 8, _stringLiteral6413E837D316AAFCF260786CD21A849F88AE3069, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_2 = L_1;
		NullCheck(L_2);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_2, ((int32_t)11), _stringLiteral1928F95C598B9E69462FCB512625CF8E28923044, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_3 = L_2;
		NullCheck(L_3);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_3, 0, _stringLiteral6B7E4DDB1EF95E854F28AA9B25F02DF36DB1374B, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_4 = L_3;
		NullCheck(L_4);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_4, 7, _stringLiteralBDF8C6F9FBB9C23293A045E0EFBA5A106429FCE3, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_5 = L_4;
		NullCheck(L_5);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_5, ((int32_t)19), _stringLiteral71F79BCDD35D537FBB16530D224C83EAD4CB5586, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_6 = L_5;
		NullCheck(L_6);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_6, ((int32_t)18), _stringLiteral71F79BCDD35D537FBB16530D224C83EAD4CB5586, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		Dictionary_2_t16015C8505E1BDDFA9F4F340DB67F616B4E88ADA * L_7 = L_6;
		NullCheck(L_7);
		Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8(L_7, ((int32_t)20), _stringLiteral71F79BCDD35D537FBB16530D224C83EAD4CB5586, /*hidden argument*/Dictionary_2_Add_m9F19A07E188F96C45D2FD4FC6312F775708074A8_RuntimeMethod_var);
		((WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_StaticFields*)il2cpp_codegen_static_fields_for(WikitudeSDK_t48A7B11FA13DDD38492B86C64FB34BC3B6DE7313_il2cpp_TypeInfo_var))->set__platforms_2(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_Initialized_m40187D8CB657DB8BA14EA05D3C9AEFDF42F107CA_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__initialized_21();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlatformBase_get_Instance_m27174814189E567672F7EC5FBF396B6479037694WikitudeUnityPlugin1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC * L_0 = ((PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC_StaticFields*)il2cpp_codegen_static_fields_for(PlatformBase_tFCE86FAF71F49AFF80C514E78316E58F74FD07EC_il2cpp_TypeInfo_var))->get__instance_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PluginManager_get_WeakInstance_m1D2D9072E4BD42C633E392BA17F4B8CE7B6FA743WikitudeUnityPlugin1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D * L_0 = ((PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D_StaticFields*)il2cpp_codegen_static_fields_for(PluginManager_t2D2F65D71B940FFBB6FB75623CFBEE45F8B15D4D_il2cpp_TypeInfo_var))->get__instance_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_Initialized_mF2AE726597F61B23EC2C4357F266A318B316B47F_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set__initialized_21(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_CachedDevicePosition_m16C224A3C3CBC64261C0B44CF236A0CEA52EABDD_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cachedDevicePosition_25();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_InvertCulling_m6095D0F846E62006D1EF8213EADB70EF2C2B70DC_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CInvertCullingU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_InvertCulling_mF0412440AE9A922CD1169C6A3FA04FFDFD0D6DFE_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CInvertCullingU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WikitudeCamera_set_FlipHorizontal_mCE97D25CF51A9F03A2680243CF3A775710FA0160_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CFlipHorizontalU3Ek__BackingField_17(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_FlipHorizontal_m8167E0ADE960A81B5F5CAE6EF5E18BA9F8EE62D9_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CFlipHorizontalU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WikitudeCamera_get_LivePreviewMode_m622E4A752E9319BDD2B208F67D04F769D7C66861_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__livePreviewMode_33();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * WikitudeCamera_get_StaticImage_m0214F7950AE530ECB05DE3C72064B0257A7EFB2A_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * L_0 = __this->get__staticImage_34();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_WebCamIsMirrored_mFE045AE291B9A8B2FEE93C16DFE5FB6FBA0F42FF_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__webCamIsMirrored_36();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Plugin_get_HasInputModule_m18F70F4D12C19B6CA4028FACFE5E0B7325AB8437_inline (Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__hasInputModule_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Plugin_get_RequestsCameraFrameRendering_m685AA8CA981AFAF56FF187D46231E2933336511C_inline (Plugin_tA2A9D2AF9CD2E7F7D5B04F2E913C007DC9125201 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__requestsCameraFrameRendering_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool WikitudeCamera_get_EnableLivePreview_m80B0DC21FDD420F9C3855A24C9DA0F5818BAB980_inline (WikitudeCamera_t2980FDF47814E47C54D0C9E72A1F451FFDDBAE0D * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__enableLivePreview_32();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  CameraFrame_get_ColorMetadata_mDC94620ECD71A251C4700E43B7BD1BD6AC55C43E_inline (CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * __this, const RuntimeMethod* method)
{
	{
		ColorCameraFrameMetadata_t8F1CC0223A79E779644FE582B9EF4D59D255E05A  L_0 = __this->get__colorMetadata_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * CameraFrame_get_ColorData_m585083707C07B5D8682C4D54AEE3DC3320C7F34A_inline (CameraFrame_tFC5F7896DB8525C478A9D91A06DC6E3A4210490D * __this, const RuntimeMethod* method)
{
	{
		List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * L_0 = __this->get__colorData_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m43A23560E872D9DC81B992EB57464910FF498334_gshared_inline (Enumerator_t16164AEE5BCAD6A8A04C21F32E9D949BE1CA0133 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m243C0A419A326DF7FEB2FEB2F3A4C8FC6CC12A7A_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA591973E70B08BA8DF51199694BF3656AFF11422_gshared_inline (Nullable_1_tBCA4780CE8E9555A53CF0BA48AF742DA998C0833 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  List_1_get_Item_m4E2D558304D90A5F16B8EDFF40DC4AFBDC7A8E5D_gshared_inline (List_1_t104BD3E3FB7D39C1E8374D1D2878B5565B4E4C70 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8* L_2 = (CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8*)__this->get__items_1();
		int32_t L_3 = ___index0;
		CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((CameraFramePlaneU5BU5D_t419848C8284AAFA5DD8FA95C2448E941BC656EB8*)L_2, (int32_t)L_3);
		return (CameraFramePlane_tF05357D1C42A49841027EBF58F6F4CEFFD57CB32 )L_4;
	}
}
