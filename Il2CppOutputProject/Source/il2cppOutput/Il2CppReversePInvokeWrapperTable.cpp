#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;

struct EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB ;
struct Guid_t ;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


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

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048(Guid_t * ___sourceId0, int32_t ___controlCode1, uint8_t ___setLevel2, int64_t ___anyKeyword3, int64_t ___allKeyword4, EVENT_FILTER_DESCRIPTOR_t24FD3DB96806FFE8C96FFDB38B1B8331EA0D72BB * ___filterData5, void* ___callbackContext6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147(intptr_t ___arg0);
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_ARFoundationAnchorManager_OnCreateAnchor_mBF6E5D6E08B485A1130C255146B2DBB5D3472D68(intptr_t ___posePtr0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_ARFoundationAnchorManager_OnRemoveAnchor_m0F3E0BD200AE9B4BD1B69BFFC7DF0E56BFC22992(intptr_t ___uuidPtr0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_DebugLogError_m7AF0FF988A554028F48390971F3014501ED221E4(char* ___message0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_TargetCollectionResourceFailed_m7CCDE64A9B94B055AAB659EAD0E41E334D3B533C(int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_TargetCollectionResourceInitialized_m2AC7A0DC46287E416C0307CCF0D6748D1090A151(int64_t ___identifier0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceFailed_mF4B4327AB17A439BA79DF2C416A41707797E5B3E(int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceInitialized_m5A57ECAB611E6BD306B293D354649EFF35FD4A5C(int64_t ___identifier0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseSuccessful_m3FE42103CB84665FFFBC7A2F8F27BE34F9DB510A(int64_t ___identifier0, int32_t ___recognized1, char* ___name2, int32_t ___rating3, char* ___metadata4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseFailed_m5B4697D1C3DCF7B1516033E9D7BAFD3829856CB2(int64_t ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseInterruption_mAC9A795D111D200E08ED07DA64B6E4674A6771A6(int64_t ___identifier_0, double ___suggestedInterval_1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ScreenCoordinateConversionSuccessful_m153C79CEA6206A5B8F4FAEFABC38786A8527BFD3(float ___screenCoordinateX0, float ___screenCoordinateY1, float ___pointCloudCoordinateX2, float ___pointCloudCoordinateY3, float ___pointCloudCoordinateZ4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ScreenCoordinateConversionFailed_m73E2F56918FEEB36214AEFDCADC8ADB65D35D77E(float ___screenCoordinateX0, float ___screenCoordinateY1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_TrackerInitializationError_m7772F817B8404FE571E1C8AAFF9CD2A05743590B(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ImageTrackerFinishedLoading_m30C2EDC5BE276898381C0A30106B6FB68AE95EEC();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ErrorLoadingImageTracker_mE6683EACFA3793FEF8C27F55E93C554A5CAF2629(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_UpdateExtendedImageTrackingQuality_m3410A445A9123A4ED9E56A9DE8C8FDC04814BA8D(char* ___targetName0, int64_t ___targetID1, int32_t ___oldTrackingQuality2, int32_t ___newTrackingQuality3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ObjectTrackerFinishedLoading_m833D336890AD4D6CBD7B24DACFA48BFBC8D6A8A6();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_ErrorLoadingObjectTracker_mF6E6579728778670D52C3019B26B964A26CAE76D(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_UpdateExtendedObjectTrackingQuality_m10A31D83CE92CA9A6EE29BCB70F5BF6FF8C90432(char* ___targetName0, int32_t ___oldTrackingQuality1, int32_t ___newTrackingQuality2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerChangedState_m74A8C1A770260E3E60F1CF9450AE5B95A7F84A61(uint32_t ___newState0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerFailedStateChange_mDFAD25FF80B5BD8B110C4F0A58332389F15FEDA6(uint32_t ___failedState0, int32_t ___errorCount1, intptr_t ___errorData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_PointCloudRequestFinished_mF8262B3242306B00F7D5B29C95B9D47F6CF3556C(uint32_t ___size0, intptr_t ___data1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerSaveSuccess_mB385505AC21FA1B4E103184CBAC77E92FBE26281(char* ___path0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerSaveError_mF21507912DA6A97A5E99F42D6CC7807E51382499(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerLoadSuccess_mE2CD0D92E32CEFE43E3A6520E7D10553C9D3DEB0(char* ___path0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_InstantTrackerLoadError_mD14CFBF8DA74F1221DA855C9EFAB736145A3EC60(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_IsPlatformAssistedTrackingAvailable_m6039975FDD39A6647421B83715262283125FB001(int32_t ___smartAvailability0, int32_t ___internalCall1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraError_m5D0DCCA6A04956AD5D49EC3F606548A27E89E38C(int32_t ___errorCount0, intptr_t ___errorData1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraOpened_m4F378B8C270A8BDBAC9057ADAFE5455D86CC596E();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraListSuccessful_mD572D37CC4607C93D32374D6EF71F555B2060DFE(int32_t ___cameraListSize_0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraPositionChanged_m6F517C2B59753A525AAF06A69C79948331534627(int32_t ___cameraPosition_0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_CameraFrameAvailable_m516074104684D3A987B3051CB97F078AFE56544D(char* ___identifier0, UnityFrame_t10B12AABCF7FE25BD59245D8DD84CFF717A31758  ___unityFrame1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraReleased_m6A14602D49173E8946F7EEE6D2B0322034FEA546(char* ___identifier0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnCameraReleaseFailed_m2479955417B0CA07322E3E6FD68B3B7CDF7BD830(char* ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TrackerManager_OnErrorRegisteringPlugin_m6F533FFF12965C09CE77D8D87A095BC68FBA4129(char* ___identifier0, int32_t ___errorCount1, intptr_t ___errorData2);


extern const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[37] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_EventProvider_EtwEnableCallBack_m32987ABF4E909DC5476F09C034714951CB4A8048),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m056BCE43FF155AAE872FF7E565F8F72A50D26147),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARFoundationAnchorManager_OnCreateAnchor_mBF6E5D6E08B485A1130C255146B2DBB5D3472D68),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARFoundationAnchorManager_OnRemoveAnchor_m0F3E0BD200AE9B4BD1B69BFFC7DF0E56BFC22992),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_DebugLogError_m7AF0FF988A554028F48390971F3014501ED221E4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_TargetCollectionResourceFailed_m7CCDE64A9B94B055AAB659EAD0E41E334D3B533C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_TargetCollectionResourceInitialized_m2AC7A0DC46287E416C0307CCF0D6748D1090A151),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceFailed_mF4B4327AB17A439BA79DF2C416A41707797E5B3E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceInitialized_m5A57ECAB611E6BD306B293D354649EFF35FD4A5C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseSuccessful_m3FE42103CB84665FFFBC7A2F8F27BE34F9DB510A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseFailed_m5B4697D1C3DCF7B1516033E9D7BAFD3829856CB2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CloudRecognitionServiceResponseInterruption_mAC9A795D111D200E08ED07DA64B6E4674A6771A6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ScreenCoordinateConversionSuccessful_m153C79CEA6206A5B8F4FAEFABC38786A8527BFD3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ScreenCoordinateConversionFailed_m73E2F56918FEEB36214AEFDCADC8ADB65D35D77E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_TrackerInitializationError_m7772F817B8404FE571E1C8AAFF9CD2A05743590B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ImageTrackerFinishedLoading_m30C2EDC5BE276898381C0A30106B6FB68AE95EEC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ErrorLoadingImageTracker_mE6683EACFA3793FEF8C27F55E93C554A5CAF2629),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_UpdateExtendedImageTrackingQuality_m3410A445A9123A4ED9E56A9DE8C8FDC04814BA8D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ObjectTrackerFinishedLoading_m833D336890AD4D6CBD7B24DACFA48BFBC8D6A8A6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_ErrorLoadingObjectTracker_mF6E6579728778670D52C3019B26B964A26CAE76D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_UpdateExtendedObjectTrackingQuality_m10A31D83CE92CA9A6EE29BCB70F5BF6FF8C90432),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerChangedState_m74A8C1A770260E3E60F1CF9450AE5B95A7F84A61),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerFailedStateChange_mDFAD25FF80B5BD8B110C4F0A58332389F15FEDA6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_PointCloudRequestFinished_mF8262B3242306B00F7D5B29C95B9D47F6CF3556C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerSaveSuccess_mB385505AC21FA1B4E103184CBAC77E92FBE26281),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerSaveError_mF21507912DA6A97A5E99F42D6CC7807E51382499),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerLoadSuccess_mE2CD0D92E32CEFE43E3A6520E7D10553C9D3DEB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_InstantTrackerLoadError_mD14CFBF8DA74F1221DA855C9EFAB736145A3EC60),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_IsPlatformAssistedTrackingAvailable_m6039975FDD39A6647421B83715262283125FB001),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraError_m5D0DCCA6A04956AD5D49EC3F606548A27E89E38C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraOpened_m4F378B8C270A8BDBAC9057ADAFE5455D86CC596E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraListSuccessful_mD572D37CC4607C93D32374D6EF71F555B2060DFE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraPositionChanged_m6F517C2B59753A525AAF06A69C79948331534627),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_CameraFrameAvailable_m516074104684D3A987B3051CB97F078AFE56544D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraReleased_m6A14602D49173E8946F7EEE6D2B0322034FEA546),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnCameraReleaseFailed_m2479955417B0CA07322E3E6FD68B3B7CDF7BD830),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_TrackerManager_OnErrorRegisteringPlugin_m6F533FFF12965C09CE77D8D87A095BC68FBA4129),
};
