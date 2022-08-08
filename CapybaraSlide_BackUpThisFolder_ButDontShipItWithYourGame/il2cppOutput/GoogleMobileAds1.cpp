#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC;
// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>
struct Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_tA4237B21C5C8EBD17672BC90C68627810953FAD1;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>
struct EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0;
// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IEqualityComparer`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct IEqualityComparer_1_t75E47BCC874E40DCDFE6AC980E61DAE9B5A5018C;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4;
// System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>
struct List_1_t337A202D9649681DE7186A7BE020428AD6BBC505;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.HashSet`1/Slot<GoogleMobileAds.Common.IRewardedInterstitialAdClient>[]
struct SlotU5BU5D_tB81369F0A536EDCAB616A97CF8519FF6C9C75033;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G[]
struct _EZUY2sDrZ60wiKIRbwJMVaAWZ5GU5BU5D_t41CB50A744C5EB2ACD950F4A8E458D89CCE4D562;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// GoogleMobileAds.Common.IResponseInfoClient
struct IResponseInfoClient_tCF770586616698786A19AB53CA4009AF567121B7;
// GoogleMobileAds.Common.IRewardedInterstitialAdClient
struct IRewardedInterstitialAdClient_t2FC8FDCB9CA844BC20920D49A995D36DDA10E2D5;
// GoogleMobileAds.Common.IUnifiedNativeAdClient
struct IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ResponseInfo
struct ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// GoogleMobileAds.Api.UnifiedNativeAd
struct UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B;
// GoogleMobileAds.Api.UnifiedNativeAdEventArgs
struct UnifiedNativeAdEventArgs_t027E5898FF20392446C5174EEF67F1E13807E75D;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G
struct _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR
struct _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// GoogleMobileAds.Api.RewardedInterstitialAd/_dASSjhnrs7FChZ60ZjfAwl4Ei0p
struct _dASSjhnrs7FChZ60ZjfAwl4Ei0p_tEB56F42FE74073A36AC6E4E25D362A0C7E8040BC;
// GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF
struct _oxXWzf2YF7Je07cGkeWGdde82pF_tF1C74ADDCE821C58E73F9DDBE9490FB62AFA37B7;
// GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY
struct _4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442;
// GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d
struct _htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E;
// GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb
struct _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Field_t422266BE6A2611375A9668F13526189CF80FE9FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t337A202D9649681DE7186A7BE020428AD6BBC505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisGraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_mFAA710539C9B50E8A8F733BA0DFFD6751FB81658_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_m65368B3CB1BE2D7C16A84073E04F3CFE18FA93E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m01283FB4A94CC2EEA5028FFAD002CCE963E5F46D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m557308E222C2A7F1E47B4E31BCFBD727C28226F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB5E7E861CBB13D6330C565D9C8B9FC77BA5E5BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnifiedNativeAd__3ftzzXJrcyadoWDuMiS3cPkjHzK_mDE8A988AA145752E8326708E9557E8DA2BD0711B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnifiedNativeAd__3yaLVRlhzWn0ZeUuSjlhI5QeaE_mE88D85006B1F26659F45833D76B4930F19FE9C38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnifiedNativeAd__ZEXiQzdBtmY5gv2vlMIpMEnepgW_m584C7F65973C6A2A19B5119D81D0019065BCDF53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnifiedNativeAd__jBmIXpfVvRPlTuDShdlClpUdvmS_mA0C689D279AC4A55E51AB9897D437563423D6785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _4AxCVQ4ihgrDpISFjJIkHf5oHwY__A3hX7UbFLyNbQJvNA7afld0Az0P_m1D0FF92A215725F4B4AC3D1172E8B0FAAD562E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eA6IRxzTs3fpotROpQjU9UsL6bD_m5262C5AFDB5C36200A20E11E8264B82F30A9D612_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _htCoDo15BcEytEC1AVRv7n8Jb4d__A3hX7UbFLyNbQJvNA7afld0Az0P_m993D87822799C87985FAAC61C1347D2DF4F75BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__3dy2jrZGuy7UMrdbjwHzTjGK7LI_m2697567DD366E8E65DBA38EC6DE2C46CEC077496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__A3hX7UbFLyNbQJvNA7afld0Az0P_m6C85F92D17A37607D4BC23ABD88DF55366F8849E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE;
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>
struct HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tB81369F0A536EDCAB616A97CF8519FF6C9C75033* ____slots_8;
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
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8292C421BBB00D7661DC07462822936152BAB446_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastResultU5BU5D_tEAF6B3C3088179304676571328CBB001D8CECBC7* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>
struct List_1_t337A202D9649681DE7186A7BE020428AD6BBC505  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5GU5BU5D_t41CB50A744C5EB2ACD950F4A8E458D89CCE4D562* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t337A202D9649681DE7186A7BE020428AD6BBC505_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5GU5BU5D_t41CB50A744C5EB2ACD950F4A8E458D89CCE4D562* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// ResponseInfo
struct ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A  : public RuntimeObject
{
	// GoogleMobileAds.Common.IResponseInfoClient ResponseInfo::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_0;
};

// GoogleMobileAds.Api.RewardedInterstitialAd
struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd::_32MEWULUdpDENbCULMUVs8eKfkg
	RuntimeObject* ____32MEWULUdpDENbCULMUVs8eKfkg_0;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ____EGlx7neqXuAvzTfKSBXsqW67nKg_2;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_WkNPgqllUXXqCv20pveMC4DP0KG
	EventHandler_1_tA4237B21C5C8EBD17672BC90C68627810953FAD1* ____WkNPgqllUXXqCv20pveMC4DP0KG_3;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_6UrgX1GEFwW0x0tMNmxOa0CvzTA
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____6UrgX1GEFwW0x0tMNmxOa0CvzTA_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedInterstitialAd::_klZI0xNc33bLrxKFLlPUX53JNGC
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____klZI0xNc33bLrxKFLlPUX53JNGC_5;
};

struct RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields
{
	// System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient> GoogleMobileAds.Api.RewardedInterstitialAd::_71XYLughYL6ltj1bdirPyKCJb2B
	HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* ____71XYLughYL6ltj1bdirPyKCJb2B_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// GoogleMobileAds.Api.UnifiedNativeAd
struct UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B  : public RuntimeObject
{
	// System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G> GoogleMobileAds.Api.UnifiedNativeAd::_N26C46FBVhXAuJypk4XBf4zqIpr
	List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* ____N26C46FBVhXAuJypk4XBf4zqIpr_0;
	// GoogleMobileAds.Common.IUnifiedNativeAdClient GoogleMobileAds.Api.UnifiedNativeAd::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
	// UnityEngine.Texture2D GoogleMobileAds.Api.UnifiedNativeAd::_zNCapvpg6wcO7TEpm9VwpancaXp
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____zNCapvpg6wcO7TEpm9VwpancaXp_2;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> GoogleMobileAds.Api.UnifiedNativeAd::_SFC4pV3jfeLBpQJRLkA2H8NAjVp
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
	// UnityEngine.Texture2D GoogleMobileAds.Api.UnifiedNativeAd::_Hcg6LEZlf2uOPG5AOJvz9Y1oiWc
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4;
	// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::_1TpEpG7v0SHFHp4GqokJ6B6mOvD
	bool ____1TpEpG7v0SHFHp4GqokJ6B6mOvD_5;
	// System.Int32 GoogleMobileAds.Api.UnifiedNativeAd::_f10vw6gFgPPxvNCDYwdFVq4ly7U
	int32_t ____f10vw6gFgPPxvNCDYwdFVq4ly7U_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.UnifiedNativeAd::_EGlx7neqXuAvzTfKSBXsqW67nKg
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ____EGlx7neqXuAvzTfKSBXsqW67nKg_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.UnifiedNativeAd::_zxop4tzN5gtKAHaORF3dS7CwzwL
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____zxop4tzN5gtKAHaORF3dS7CwzwL_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.UnifiedNativeAd::_TtN4RduswHxFwuAuw49VNIwRnyc
	EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* ____TtN4RduswHxFwuAuw49VNIwRnyc_9;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA
struct _5D2WKOR9kwjeO2yFRv5RmDvCLvA_tDD24D6C44A8C804E64C419BD1AEDBBADA751D4C0  : public RuntimeObject
{
};

// GoogleMobileAds.Api.RewardedInterstitialAd/_dASSjhnrs7FChZ60ZjfAwl4Ei0p
struct _dASSjhnrs7FChZ60ZjfAwl4Ei0p_tEB56F42FE74073A36AC6E4E25D362A0C7E8040BC  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedInterstitialAd/_dASSjhnrs7FChZ60ZjfAwl4Ei0p::_eKFmozacz8FpGS3VLB9j7c0nKx
	Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* ____eKFmozacz8FpGS3VLB9j7c0nKx_0;
};

// GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF
struct _oxXWzf2YF7Je07cGkeWGdde82pF_tF1C74ADDCE821C58E73F9DDBE9490FB62AFA37B7  : public RuntimeObject
{
	// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String> GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF::_1hxTDPIITBCAk7q3eifTTRoxmkN
	Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* ____1hxTDPIITBCAk7q3eifTTRoxmkN_0;
	// GoogleMobileAds.Common.IRewardedInterstitialAdClient GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF::_PdbQgPRNu3avbiwZinBxFNm0PTg
	RuntimeObject* ____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
};

// GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY
struct _4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY::_SvCvpL5BOWYqk4DgWPyNgDgw7h
	String_t* ____SvCvpL5BOWYqk4DgWPyNgDgw7h_0;
	// GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY::_TZlRwee83ZYPWW3A6WmuSRwG8mc
	_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* ____TZlRwee83ZYPWW3A6WmuSRwG8mc_1;
};

// GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d
struct _htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E  : public RuntimeObject
{
	// GoogleMobileAds.Api.UnifiedNativeAd/Field GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::_U7GSq5R56gqBZSf1TL01RmzVC0M
	int32_t ____U7GSq5R56gqBZSf1TL01RmzVC0M_0;
	// System.Object GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::_ZPlAjOujC9Q2bLSruldqykGcGKP
	RuntimeObject* ____ZPlAjOujC9Q2bLSruldqykGcGKP_1;
	// GoogleMobileAds.Api.UnifiedNativeAd GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::_Gc5ExvbcrF7MFmRKb3r4cQssupt
	UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* ____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
};

// GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb
struct _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49  : public RuntimeObject
{
	// System.String GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::_2DMeyzgFmbWjnpi6StGaWZNQ7qL
	String_t* ____2DMeyzgFmbWjnpi6StGaWZNQ7qL_0;
	// System.String GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::_IjAngXXNeRGCWwHdAm0F24wDgWw
	String_t* ____IjAngXXNeRGCWwHdAm0F24wDgWw_1;
	// GoogleMobileAds.Api.UnifiedNativeAd GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::_Gc5ExvbcrF7MFmRKb3r4cQssupt
	UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* ____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
};

// System.Collections.Generic.List`1/Enumerator<System.Action>
struct Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>
struct Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>
struct Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* ____current_3;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// GoogleMobileAds.Api.UnifiedNativeAdEventArgs
struct UnifiedNativeAdEventArgs_t027E5898FF20392446C5174EEF67F1E13807E75D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.UnifiedNativeAd GoogleMobileAds.Api.UnifiedNativeAdEventArgs::_QJSzrqWtVEvcPLwxjXy3Sjcdo6p
	UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* ____QJSzrqWtVEvcPLwxjXy3Sjcdo6p_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._pF4MA33klXwGKWXhSip5Rgr1kDc
struct _pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 
{
	// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._pF4MA33klXwGKWXhSip5Rgr1kDc::_QJMZoORUjKQAB8cT8KGzUOvdfeP
	float ____QJMZoORUjKQAB8cT8KGzUOvdfeP_0;
	// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._pF4MA33klXwGKWXhSip5Rgr1kDc::_LluJji3lPXYMtLRNPb6DgWt0mKq
	float ____LluJji3lPXYMtLRNPb6DgWt0mKq_1;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
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
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh
struct _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 
{
	// UnityEngine.Vector3 _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh::_mrus0IsOU72OIoYVCC985NTmREh
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____mrus0IsOU72OIoYVCC985NTmREh_0;
	// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh::_5Dfdtx8BXLdYk23FjVQo5znkyYk
	float ____5Dfdtx8BXLdYk23FjVQo5znkyYk_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>
struct Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR
struct _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_JzHKEeOvCrir7YSuym1INVQGDfG
	_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 ____JzHKEeOvCrir7YSuym1INVQGDfG_1;
	// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_ANELATAfdLmPNoTLoaM6i0PU8iF
	_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 ____ANELATAfdLmPNoTLoaM6i0PU8iF_2;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.Reward>
struct Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.Texture2D>
struct Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>
struct Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>
struct EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// GoogleMobileAds.Common.MobileAdsEventExecutor
struct MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields
{
	// GoogleMobileAds.Common.MobileAdsEventExecutor GoogleMobileAds.Common.MobileAdsEventExecutor::instance
	MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* ___instance_4;
	// System.Collections.Generic.List`1<System.Action> GoogleMobileAds.Common.MobileAdsEventExecutor::_kGsdC5HXap6ZSCvvIbsFRAjvASn
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____kGsdC5HXap6ZSCvvIbsFRAjvASn_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) GoogleMobileAds.Common.MobileAdsEventExecutor::_W5AZMfS3qSWwhHBALAgayJJJ4Yx
	bool ____W5AZMfS3qSWwhHBALAgayJJJ4Yx_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G
struct _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_BImyrxVoGQ3rXfqyfpjwy9yEPFF
	float ____BImyrxVoGQ3rXfqyfpjwy9yEPFF_6;
	// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_kgt7eBuTCnVrim8HseCokmUclDK
	float ____kgt7eBuTCnVrim8HseCokmUclDK_7;
	// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_Gd8dqsuZTLM9iRRvespGXox49Nj
	bool ____Gd8dqsuZTLM9iRRvespGXox49Nj_8;
	// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_7bLTDbosJLwbDiTxavwPFxzkMFp
	_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 ____7bLTDbosJLwbDiTxavwPFxzkMFp_9;
	// System.String _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_CVxzVJm7f4wvaR76XDeLdGMD6r
	String_t* ____CVxzVJm7f4wvaR76XDeLdGMD6r_10;
	// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_BLULIwBvI6ebiTF0iGyFtCXMkEA
	bool ____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
	// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_0Qf1T6GfZbknqUyBiPavTMIPFdE
	bool ____0Qf1T6GfZbknqUyBiPavTMIPFdE_12;
	// System.EventHandler`1<System.EventArgs> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_lsSp5wNkEu7AwywXobwJZ5buadN
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ____lsSp5wNkEu7AwywXobwJZ5buadN_13;
	// System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_csO422E4cFHyANFhfzoIa6LH7D8
	EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* ____csO422E4cFHyANFhfzoIa6LH7D8_14;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA m_Items[1];

	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Plane[]
struct PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE  : public RuntimeArray
{
	ALIGN_FIELD (8) Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C m_Items[1];

	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisRuntimeObject_m7EAEC59F80BD660B70DA45F2F209525C4D2D89EE_gshared (uint32_t p0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisRuntimeObject_m9FD2DB6D51E48C1D6ABAE77F4C97FC18767816C1_gshared (uint32_t p0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisRuntimeObject_m78BCF14F9CE7EFBB279110431DAE1B5D24DD431F_gshared (uint32_t p0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisRuntimeObject_m4A15081E7E77A170B1DE9744F2D8CB8A6AB84E76_gshared (uint32_t p0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.Object>(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisRuntimeObject_mEDA7E5F248E6E078C0608B3283FE667CA0BBCAA9_gshared (uint32_t p0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_gshared (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_gshared (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd::.ctor(GoogleMobileAds.Common.IRewardedInterstitialAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6 (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* __this, RuntimeObject* p0, const RuntimeMethod* method) ;
// System.Void System.Action`2<GoogleMobileAds.Api.RewardedInterstitialAd,System.String>::Invoke(T1,T2)
inline void Action_2_Invoke_mD9BB8940B465170DC024A187D163062B541BA9A5_inline (Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* __this, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E*, RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*, String_t*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<GoogleMobileAds.Common.IRewardedInterstitialAdClient>::Remove(T)
inline bool HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___item0, method);
}
// System.String GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m0E0DB6551009892740BBFB2BF60C027143E220AD_inline (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.Reward>::Invoke(T)
inline void Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* __this, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::.ctor()
inline void List_1__ctor_mB5E7E861CBB13D6330C565D9C8B9FC77BA5E5BC2 (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Common.Utils::CheckInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_CheckInitialization_m50CAF15EFD340BD2F707E80A93300DF39728A2D5 (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__ctor_m4ECCD7186BCF32A09B065301C73C48A52BCD6AD6 (_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _4AxCVQ4ihgrDpISFjJIkHf5oHwY__ctor_m230095C7028984A42BD39AF92B606B8B60ACF126 (_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Action>::get_Count()
inline int32_t List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Action>::GetEnumerator()
inline Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Action>::Dispose()
inline void Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Action>::get_Current()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Action>::MoveNext()
inline bool Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568 (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::ExecuteInUpdate(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_ExecuteInUpdate_m4D7D863382B3DFA6F791CBCFD275B5F7EE4BA91E (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _htCoDo15BcEytEC1AVRv7n8Jb4d__ctor_m2F6CA9008AD0969681794CC5BF94B45804A69D15 (_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Texture2D>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76 (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.IEnumerator GoogleMobileAds.Common.Utils::LoadImage(System.String,System.Action`1<UnityEngine.Texture2D>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Utils_LoadImage_m57AB3DA3C3EC55014CB8107983BFB4D2F17EA765 (String_t* ___url0, Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* ___callback1, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ResponseInfo::.ctor(GoogleMobileAds.Common.IResponseInfoClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* __this, RuntimeObject* p0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisRuntimeObject_m7EAEC59F80BD660B70DA45F2F209525C4D2D89EE_gshared)(p0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::_ZHbByj6a1RyOfZF8Kk5lKkkcqeP(UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, String_t* p1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisRuntimeObject_m9FD2DB6D51E48C1D6ABAE77F4C97FC18767816C1_gshared)(p0, method);
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisRuntimeObject_m78BCF14F9CE7EFBB279110431DAE1B5D24DD431F_gshared)(p0, method);
}
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisRuntimeObject_m4A15081E7E77A170B1DE9744F2D8CB8A6AB84E76_gshared)(p0, method);
}
// T UnityEngine.GameObject::GetComponent<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>()
inline _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::Add(T)
inline void List_1_Add_m01283FB4A94CC2EEA5028FFAD002CCE963E5F46D_inline (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* __this, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505*, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_w2Sy2lfiB69iyGEuBghZnzCwUbf(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__w2Sy2lfiB69iyGEuBghZnzCwUbf_m1135CAAD69F4F0820BD04A832BEEFCD4B1DC12F3 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>()
inline _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* GameObject_AddComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_m65368B3CB1BE2D7C16A84073E04F3CFE18FA93E4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m245FC8A60EC0103F44E3F57FCB7628D3C823F452 (EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_Unu45vxwiu8h5C3O4Vh8htG7USg(System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__Unu45vxwiu8h5C3O4Vh8htG7USg_m34D7BD722AFBF85DD8D84AD7E9F6EF03C368B749 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* p0, const RuntimeMethod* method) ;
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_eA6IRxzTs3fpotROpQjU9UsL6bD(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eA6IRxzTs3fpotROpQjU9UsL6bD_m5262C5AFDB5C36200A20E11E8264B82F30A9D612 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, String_t* p0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::Remove(T)
inline bool List_1_Remove_m557308E222C2A7F1E47B4E31BCFBD727C28226F1 (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* __this, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505*, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// - <Module>::?????????????????????????????????????????<System.String>(System.UInt32)
inline String_t* U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868 (uint32_t p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (uint32_t, const RuntimeMethod*))U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisRuntimeObject_mEDA7E5F248E6E078C0608B3283FE667CA0BBCAA9_gshared)(p0, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Texture2D>::GetEnumerator()
inline Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::Dispose()
inline void Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::get_Current()
inline Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Texture2D>::MoveNext()
inline bool Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35 (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_L4hDCCbfmoPnkGfsKTB8VRqdVKyA(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G,System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__L4hDCCbfmoPnkGfsKTB8VRqdVKyA_m3BCD1906CD1B4B34DCC118B241464D3FCB18D2B1 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::GetEnumerator()
inline Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A (*) (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::Dispose()
inline void Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0 (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::get_Current()
inline _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_inline (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A* __this, const RuntimeMethod* method)
{
	return ((  _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* (*) (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_iY17y1qd29fBeJArQKErgB8xcSs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iY17y1qd29fBeJArQKErgB8xcSs_mAFBFB2B93CCA009C3EB26D85325B9D06B0E62A2C (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>::MoveNext()
inline bool Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_LBaiSkaw4tGvDESDZVMvkYtjOpk()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LBaiSkaw4tGvDESDZVMvkYtjOpk_m9AB1A87431BF12C1A7D4F51C743A5314D23EC1CD_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) ;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_LXmCUeyVgQ1XwITAilfI85Tso2H()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LXmCUeyVgQ1XwITAilfI85Tso2H_m709CB4F2B75F2EF9992B4B2D283256E3D16CB26B_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_sH531rPWYxNIpSPWc1e36q0vPC(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G,System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__sH531rPWYxNIpSPWc1e36q0vPC_m7D29807D9F75505B3F80BB634742EED60AE64A66 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p1, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p2, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p3, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_ubvpgYD1zXsuqsLEBibbVRhCL5C(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__ubvpgYD1zXsuqsLEBibbVRhCL5C_m70B8AB65FCBE968386C4457904941A62CC7B4360 (_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_Destroy_m0851B48BC695C899B559E8097BB787B484221FE8 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_WaFcB2Wc3oq5XzhrO6IlmokE5dV(GoogleMobileAds.Api.UnifiedNativeAd/Field,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__WaFcB2Wc3oq5XzhrO6IlmokE5dV_mAED46402E6A2D96406C9020E82DF63545156DB94 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, int32_t p0, String_t* p1, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_RH3We0hIpYn560f1nPZUcVJdXag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__RH3We0hIpYn560f1nPZUcVJdXag_m327D9C91B631C1D3C9C61470E6EDD8FD42196646 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::_JwdyFHpHkoJBMuR4UHfqpewDs1f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd__JwdyFHpHkoJBMuR4UHfqpewDs1f_mBFF64D86D4E993B6550E67362DE5AD0541AD4D41 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::.ctor()
inline void List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28 (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Texture2D>::Add(T)
inline void List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_Message_m26F5479DCBC01F4F87AE180F3ACF5AF5F548A478_inline (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mE18D10EA0B92CEB01D552573103CA7BCEBE789FC_inline (EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*, RuntimeObject*, AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m677629D332BC959DC0E52E6AF3AC941B09D0C139 (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Single GoogleMobileAds.Common.Utils::ConvertPxToDp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23 (float ___pixels0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_qaZ9ZcveJzC8SIiIORK6B4bZQhh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__qaZ9ZcveJzC8SIiIORK6B4bZQhh_m3D20074D7C2C6C2D51684A10E94C33D920A2AFC4_inline (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_eesP3ddQRTjMAScQVJzAg5XCkXg()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eesP3ddQRTjMAScQVJzAg5XCkXg_m2EFC2EC198FDA8323212E65469EADD7619EF9084_inline (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_HNeX8xYUuPjcCdzLWpg964jw5lb(System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__HNeX8xYUuPjcCdzLWpg964jw5lb_mC67F263E292DEBFBFD318942553124CFB5882559 (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_aaw7j80kphNUyg0VjzN1dhFvSZf(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__aaw7j80kphNUyg0VjzN1dhFvSZf_m99BBBF11CAD672A9D74AAAA3011A11A850B40FE9 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._pF4MA33klXwGKWXhSip5Rgr1kDc _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_pPafBg5kh6SP4KDejfcHVivdJfx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__pPafBg5kh6SP4KDejfcHVivdJfx_mFC1243E9EAAB619598ADB4429D4E2AD9BE261286 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_lKDlfYm9opJclAeCGai7qKPm2Zf(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__lKDlfYm9opJclAeCGai7qKPm2Zf_m74C96CB4C3B6FDD3CD7AD4A3F03728C3241736C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_qnAG4EvLAZLJzGpmoHz3sWlK4hj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__qnAG4EvLAZLJzGpmoHz3sWlK4hj_m536E1789810A280F4B39B18EC5F74C92276299D5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera GoogleMobileAds.Common.Utils::GetCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider2D::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E (Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GoogleMobileAds.Common.Utils::GetBoundsMin(UnityEngine.GameObject,UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetBoundsMin_mD96D89E8C4E9FF8E93927B9D7FC214F0C249F352 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GoogleMobileAds.Common.Utils::GetBoundsMax(UnityEngine.GameObject,UnityEngine.Camera,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_GetBoundsMax_m82F2CB62C5ACC8841A2A1E87A484C0451EF1755B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam1, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single System.Math::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Min_mE913811A2F7566294BF4649A434282634E7254B3 (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA (float ___val10, float ___val21, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Renderer::get_isVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider2D>()
inline Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_TPkB7q9Bn6qviPHF0dOgADnxQ8V(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__TPkB7q9Bn6qviPHF0dOgADnxQ8V_m75AB446EFAAA10A02C46D7953D8B0CB1F5810CDB (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) ;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_fBcpY7SMOo1hOGIcWOWG1g4B5IO(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__fBcpY7SMOo1hOGIcWOWG1g4B5IO_mA9184C4D752266499769D3F184C106A8FB171F0C (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_QvoqGLdqICUWf3DBF66aj6PYrhe(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__QvoqGLdqICUWf3DBF66aj6PYrhe_m91B5C95E4F5B8CAB07A618856F683C5861F7F173 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_iwgCOkY2GB9KTiyOGWyvJQOADx7(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iwgCOkY2GB9KTiyOGWyvJQOADx7_m776BEC5A6E461E9632565349C05B4B458CD1E011 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, float p0, float p1, float p2, float p3, int32_t p4, int32_t p5, const RuntimeMethod* method) ;
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_DyPdmbII3b0VnyC5uDTEMRrtaTl(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DyPdmbII3b0VnyC5uDTEMRrtaTl_m2CA12D9591FEA43CEE2D3C70762CF40CA0016E8E (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, float p0, float p1, float p2, float p3, int32_t p4, int32_t p5, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit2D::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613 (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::GetRayIntersection(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_GetRayIntersection_m14FE964631FC806EC3C7D6EBCA461315961492C4 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* Physics2D_GetRayIntersectionAll_mE44882D00E63761758A1C10D8579F5AD5A027C14 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) ;
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_R8p5OQ2NMOnDlcHRyRnvDqsnf7H(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__R8p5OQ2NMOnDlcHRyRnvDqsnf7H_m4C198006B44BEA102843A04FA7C78A70296C2946 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.UI.GraphicRaycaster>()
inline GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* Component_GetComponentInParent_TisGraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_mFAA710539C9B50E8A8F733BA0DFFD6751FB81658 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_gshared)(__this, method);
}
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___eventSystem0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::GetEnumerator()
inline Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41 (List_1_t8292C421BBB00D7661DC07462822936152BAB446* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C (*) (List_1_t8292C421BBB00D7661DC07462822936152BAB446*, const RuntimeMethod*))List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::Dispose()
inline void Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::get_Current()
inline RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::get_gameObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.RaycastResult>::MoveNext()
inline bool Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C*, const RuntimeMethod*))Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Overlaps(UnityEngine.Rect,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Overlaps_m3F0BA2C8BB81491978B21EB21C8A6D3BBED02E41 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other0, bool ___allowInverse1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Common.Utils::IsRenderedInScreenSpaceOverlayCanvas(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utils_IsRenderedInScreenSpaceOverlayCanvas_m8A8B80DE25AE9E1AC0003CC481F21E06A72B31CE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GeometryUtility_TestPlanesAABB_mC59A5BE75084C86EAEB8E8F0FF6E6C171E0C1012 (PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* ___planes0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds1, const RuntimeMethod* method) ;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* GeometryUtility_CalculateFrustumPlanes_m22E17CF3D80D7CCA2255DB8E54A1C29AD6B92D92 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___camera0, const RuntimeMethod* method) ;
// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_2JXK8GxavPOA0jSe5Ljar3at3xo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__2JXK8GxavPOA0jSe5Ljar3at3xo_m2433A1EFA4059B3BDC679CAC56B94B17640D0C6B (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_DVd2cGMkFwGLXuijADZkV4G2WZG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DVd2cGMkFwGLXuijADZkV4G2WZG_m65919457F286E338D13D5721E6C5557F349BF4B9 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) ;
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__ctor_m005E64DD78FC45775DE4DF353CE054FFBC6076BE (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) ;
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_baBtPNL08tsXbqgcCXqZCORajOr(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__baBtPNL08tsXbqgcCXqZCORajOr_m187512D56C838851D18162565428A28C4BE2D6E6_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) ;
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_AibTA51B5uBATJ3eYgR9gT6PVdJ(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__AibTA51B5uBATJ3eYgR9gT6PVdJ_mF44EE3F70F5D36A78A5D936D52B8A0A0F7C64745_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m77D34C4CE6EE26EC6F7371EF34A4A68199234059_inline (EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* __this, RuntimeObject* ___sender0, _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*, RuntimeObject*, _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oxXWzf2YF7Je07cGkeWGdde82pF__ctor_m06D52F1350B4120455C765B4B8B1CD9F830DB71F (_oxXWzf2YF7Je07cGkeWGdde82pF_tF1C74ADDCE821C58E73F9DDBE9490FB62AFA37B7* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF::_A3hX7UbFLyNbQJvNA7afld0Az0P(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oxXWzf2YF7Je07cGkeWGdde82pF__A3hX7UbFLyNbQJvNA7afld0Az0P_mE7F0715C98C5D353CFA63ED248AFC85D743F11B6 (_oxXWzf2YF7Je07cGkeWGdde82pF_tF1C74ADDCE821C58E73F9DDBE9490FB62AFA37B7* __this, RuntimeObject* p0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* L_0 = __this->____1hxTDPIITBCAk7q3eifTTRoxmkN_0;
		if (!L_0)
		{
			goto IL_0061;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-2026031562);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1117532282)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0061;
			}
		}
	}
	{
		goto IL_0061;
	}

IL_002a:
	{
		Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* L_2 = __this->____1hxTDPIITBCAk7q3eifTTRoxmkN_0;
		RuntimeObject* L_3 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE* L_4 = (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)il2cpp_codegen_object_new(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RewardedInterstitialAd__ctor_mC4C75695E5B5F02F6D36BAEE3D7257CC5281EDE6(L_4, L_3, NULL);
		NullCheck(L_2);
		Action_2_Invoke_mD9BB8940B465170DC024A187D163062B541BA9A5_inline(L_2, L_4, (String_t*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_5 = ((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->____71XYLughYL6ltj1bdirPyKCJb2B_1;
		RuntimeObject* L_6 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F(L_5, L_6, HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		uint32_t L_8 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1255273777)))^((int32_t)-1854120291)));
		goto IL_000d;
	}

IL_0061:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/_oxXWzf2YF7Je07cGkeWGdde82pF::_3dy2jrZGuy7UMrdbjwHzTjGK7LI(System.Object,GoogleMobileAds.Api.AdFailedToLoadEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _oxXWzf2YF7Je07cGkeWGdde82pF__3dy2jrZGuy7UMrdbjwHzTjGK7LI_m5584EAD1ECF7F11614C1594C362E86E4F407C290 (_oxXWzf2YF7Je07cGkeWGdde82pF_tF1C74ADDCE821C58E73F9DDBE9490FB62AFA37B7* __this, RuntimeObject* p0, AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* L_0 = __this->____1hxTDPIITBCAk7q3eifTTRoxmkN_0;
		if (!L_0)
		{
			goto IL_006f;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)1357992216);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1074778611)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_002e;
			}
		}
	}
	{
		goto IL_006f;
	}

IL_002e:
	{
		Action_2_tB57C02DAB422660C775781BB13D1ADCE5F78B19E* L_2 = __this->____1hxTDPIITBCAk7q3eifTTRoxmkN_0;
		AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* L_3 = p1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = AdFailedToLoadEventArgs_get_Message_m0E0DB6551009892740BBFB2BF60C027143E220AD_inline(L_3, NULL);
		NullCheck(L_2);
		Action_2_Invoke_mD9BB8940B465170DC024A187D163062B541BA9A5_inline(L_2, (RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE*)NULL, L_4, NULL);
		uint32_t L_5 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)449032686)))^((int32_t)-1215819205)));
		goto IL_000d;
	}

IL_004f:
	{
		il2cpp_codegen_runtime_class_init_inline(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var);
		HashSet_1_t5BD867110D6538FDD88B08E4ADCA8B03A67FC9EE* L_6 = ((RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_StaticFields*)il2cpp_codegen_static_fields_for(RewardedInterstitialAd_t5E0B1087E71C016DFDC50BBFBAA8A2CCEFEA58AE_il2cpp_TypeInfo_var))->____71XYLughYL6ltj1bdirPyKCJb2B_1;
		RuntimeObject* L_7 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F(L_6, L_7, HashSet_1_Remove_m4A0CF6029D739D987E71D1D39D6464572788794F_RuntimeMethod_var);
		uint32_t L_9 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)952307546)))^((int32_t)110249006)));
		goto IL_000d;
	}

IL_006f:
	{
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
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/_dASSjhnrs7FChZ60ZjfAwl4Ei0p::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dASSjhnrs7FChZ60ZjfAwl4Ei0p__ctor_m4E0BCD219222D7DC63FB91FA583A1A2152E0A2C9 (_dASSjhnrs7FChZ60ZjfAwl4Ei0p_tEB56F42FE74073A36AC6E4E25D362A0C7E8040BC* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedInterstitialAd/_dASSjhnrs7FChZ60ZjfAwl4Ei0p::_A3hX7UbFLyNbQJvNA7afld0Az0P(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _dASSjhnrs7FChZ60ZjfAwl4Ei0p__A3hX7UbFLyNbQJvNA7afld0Az0P_m4D6E7376FAACFEFA60BE12E2FA212C7B0ED86482 (_dASSjhnrs7FChZ60ZjfAwl4Ei0p_tEB56F42FE74073A36AC6E4E25D362A0C7E8040BC* __this, RuntimeObject* p0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_0 = __this->____eKFmozacz8FpGS3VLB9j7c0nKx_0;
		if (!L_0)
		{
			goto IL_0045;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)1048449682);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1039254283)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0008;
			}
		}
	}
	{
		goto IL_0045;
	}

IL_002a:
	{
		Action_1_tBD6F5D2699E5306B21143A3CFF0438FBBA10A8CC* L_2 = __this->____eKFmozacz8FpGS3VLB9j7c0nKx_0;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_3 = p1;
		NullCheck(L_2);
		Action_1_Invoke_mD16ED15700A9B573C44A2A4CEF4CA51CACA79DCE_inline(L_2, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1342959991)))^((int32_t)955037109)));
		goto IL_000d;
	}

IL_0045:
	{
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
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::.ctor(GoogleMobileAds.Common.IUnifiedNativeAdClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__ctor_m3507E4F4655C14512A61A7815755E5CA88E6802B (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, RuntimeObject* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB5E7E861CBB13D6330C565D9C8B9FC77BA5E5BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t337A202D9649681DE7186A7BE020428AD6BBC505_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnifiedNativeAd__jBmIXpfVvRPlTuDShdlClpUdvmS_mA0C689D279AC4A55E51AB9897D437563423D6785_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-2060620695);
	}

IL_000b:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-340345076)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_0030;
			}
			case 3:
			{
				goto IL_0065;
			}
			case 4:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0030:
	{
		RuntimeObject* L_1 = p0;
		__this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1), (void*)L_1);
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_2 = (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505*)il2cpp_codegen_object_new(List_1_t337A202D9649681DE7186A7BE020428AD6BBC505_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mB5E7E861CBB13D6330C565D9C8B9FC77BA5E5BC2(L_2, List_1__ctor_mB5E7E861CBB13D6330C565D9C8B9FC77BA5E5BC2_RuntimeMethod_var);
		__this->____N26C46FBVhXAuJypk4XBf4zqIpr_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____N26C46FBVhXAuJypk4XBf4zqIpr_0), (void*)L_2);
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1009353036)))^((int32_t)-552307611)));
		goto IL_000b;
	}

IL_0051:
	{
		Utils_CheckInitialization_m50CAF15EFD340BD2F707E80A93300DF39728A2D5(NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1988401330)))^((int32_t)-797809031)));
		goto IL_000b;
	}

IL_0065:
	{
		RuntimeObject* L_5 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_6 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_6, __this, (intptr_t)((void*)UnifiedNativeAd__jBmIXpfVvRPlTuDShdlClpUdvmS_mA0C689D279AC4A55E51AB9897D437563423D6785_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IUnifiedNativeAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_5, L_6);
		uint32_t L_7 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-918483645)))^((int32_t)1220512997)));
		goto IL_000b;
	}

IL_008b:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_add_OnPaidEvent_m95994D01311F30E785548316BA06F288871F788B (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1451862533);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2037623365)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0059;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0029:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1451862533);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
		goto IL_0056;
	}

IL_0050:
	{
		int32_t L_12 = ((int32_t)-1017922840);
		G_B7_0 = L_12;
		G_B7_1 = L_12;
	}

IL_0056:
	{
		G_B2_0 = G_B7_1;
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::remove_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_remove_OnPaidEvent_m32BA2E247EB33C3D721665E883E4DC18F1A217EA (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_0 = NULL;
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1804595117);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)2075671512)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_006c;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)2078544886);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693** L_3 = (&__this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_4 = V_1;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_5 = ___value0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_7 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*>(L_3, ((EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)Castclass((RuntimeObject*)L_6, EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_9 = V_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_9) == ((RuntimeObject*)(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)1152748622);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1041772215);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1979319035)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_4DlCqhnCcy2cfASG6su8iHAreSDA(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__4DlCqhnCcy2cfASG6su8iHAreSDA_mD578612985797543BEA765FC5C8EACCDF127E6AF (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____zxop4tzN5gtKAHaORF3dS7CwzwL_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-602053586);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-20192010)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0031;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-1180586320);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_3) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)155992806);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)591720421);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)46372978)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_8 = (&__this->____zxop4tzN5gtKAHaORF3dS7CwzwL_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = p0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_12 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_8, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_11, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-166879835)))^((int32_t)-1934205076)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_cK8UJ0TTACom6N2jsOmdQy8DZdo(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__cK8UJ0TTACom6N2jsOmdQy8DZdo_m16BC29A4846C4F850AE7E72B3E82D71F8910C04B (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____zxop4tzN5gtKAHaORF3dS7CwzwL_8;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-661619585);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-2138034879)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0062;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-1651197163);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____zxop4tzN5gtKAHaORF3dS7CwzwL_8);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = p0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-208313826)))^((int32_t)-584625548)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_11)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)31156183);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1234599881);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1766159032)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_fllQlkocScodWYV6eDSAitPHxABA(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__fllQlkocScodWYV6eDSAitPHxABA_m3947A8417636958F9803A49D389432D0A5A9FE91 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* V_0 = NULL;
	EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_0 = __this->____TtN4RduswHxFwuAuw49VNIwRnyc_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1244309424);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1534716389)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0076;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_2 = V_0;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_3 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)L_2) == ((RuntimeObject*)(EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)L_3))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1036699683);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0043;
	}

IL_003d:
	{
		int32_t L_5 = ((int32_t)-995118326);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0043:
	{
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)502968570)))));
		goto IL_000c;
	}

IL_004e:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7** L_7 = (&__this->____TtN4RduswHxFwuAuw49VNIwRnyc_9);
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_8 = V_1;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_9 = p0;
		Delegate_t* L_10;
		L_10 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_8, L_9, NULL);
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_11 = V_0;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_12;
		L_12 = InterlockedCompareExchangeImpl<EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*>(L_7, ((EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)Castclass((RuntimeObject*)L_10, EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7_il2cpp_TypeInfo_var)), L_11);
		V_0 = L_12;
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-779335250)))^((int32_t)-949394458)));
		goto IL_000c;
	}

IL_0076:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_14 = V_0;
		V_1 = L_14;
		G_B2_0 = ((int32_t)-1628944143);
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_JTIbIU1HkQ5cl2rlDyPyrnwuoGG(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__JTIbIU1HkQ5cl2rlDyPyrnwuoGG_m4B370D34F2694B9C4FFD19D629DDEF054E00DD26 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* V_0 = NULL;
	EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_0 = __this->____TtN4RduswHxFwuAuw49VNIwRnyc_9;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)195794445);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1694813787)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_003a;
			}
			case 3:
			{
				goto IL_007f;
			}
			case 4:
			{
				goto IL_0031;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1329601611);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_3 = V_0;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)L_3) == ((RuntimeObject*)(EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)1838151037);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)1514244537);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1576335061)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7** L_8 = (&__this->____TtN4RduswHxFwuAuw49VNIwRnyc_9);
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_9 = V_1;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_10 = p0;
		Delegate_t* L_11;
		L_11 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_9, L_10, NULL);
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_12 = V_0;
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*>(L_8, ((EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7*)Castclass((RuntimeObject*)L_11, EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)858484770)))^((int32_t)1738819019)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_9k1I8CeAcOFMidgcTmRNJsGG9a8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__9k1I8CeAcOFMidgcTmRNJsGG9a8_m94E8925E4712E8043F50DFEC20BB2C637639A6C6 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_4AxCVQ4ihgrDpISFjJIkHf5oHwY__A3hX7UbFLyNbQJvNA7afld0Az0P_m1D0FF92A215725F4B4AC3D1172E8B0FAAD562E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__3dy2jrZGuy7UMrdbjwHzTjGK7LI_m2697567DD366E8E65DBA38EC6DE2C46CEC077496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__A3hX7UbFLyNbQJvNA7afld0Az0P_m6C85F92D17A37607D4BC23ABD88DF55366F8849E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* V_0 = NULL;
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* V_1 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* V_3 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_4 = NULL;
	Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D V_5;
	memset((&V_5), 0, sizeof(V_5));
	uint32_t V_6 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B47_1 = 0;
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_0 = (_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49*)il2cpp_codegen_object_new(_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__ctor_m4ECCD7186BCF32A09B065301C73C48A52BCD6AD6(L_0, NULL);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-829742564);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1038291414)));
		V_6 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_0029:
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_2 = V_0;
		NullCheck(L_2);
		L_2->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2), (void*)__this);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_3 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_3, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		V_1 = L_3;
		uint32_t L_4 = V_6;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-1303535739)))^((int32_t)1243922953)));
		goto IL_000b;
	}

IL_0046:
	{
		RuntimeObject* L_5 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = InterfaceFuncInvoker0< List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(3 /* System.Collections.Generic.List`1<System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetMainImageURLs() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_7;
		L_7 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_6, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_2 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0131:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_2), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00e8_1;
			}

IL_005c_1:
			{
				G_B8_0 = ((int32_t)-1678283677);
			}

IL_0061_1:
			{
				int32_t L_8 = ((int32_t)(G_B8_0^((int32_t)-1038291414)));
				V_6 = L_8;
				switch (((int32_t)((uint32_t)(int32_t)L_8%(uint32_t)(int32_t)7)))
				{
					case 0:
					{
						goto IL_005c_1;
					}
					case 1:
					{
						goto IL_00a6_1;
					}
					case 2:
					{
						goto IL_0105_1;
					}
					case 3:
					{
						goto IL_00e8_1;
					}
					case 4:
					{
						goto IL_0092_1;
					}
					case 5:
					{
						goto IL_012f_1;
					}
					case 6:
					{
						goto IL_00c8_1;
					}
				}
			}
			{
				goto IL_012f_1;
			}

IL_0092_1:
			{
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* L_9 = (_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442*)il2cpp_codegen_object_new(_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442_il2cpp_TypeInfo_var);
				NullCheck(L_9);
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY__ctor_m230095C7028984A42BD39AF92B606B8B60ACF126(L_9, NULL);
				V_3 = L_9;
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* L_10 = V_3;
				_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_11 = V_0;
				NullCheck(L_10);
				L_10->____TZlRwee83ZYPWW3A6WmuSRwG8mc_1 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&L_10->____TZlRwee83ZYPWW3A6WmuSRwG8mc_1), (void*)L_11);
				G_B8_0 = ((int32_t)-613474230);
				goto IL_0061_1;
			}

IL_00a6_1:
			{
				List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_12 = V_1;
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* L_13 = V_3;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_14, L_13, (intptr_t)((void*)_4AxCVQ4ihgrDpISFjJIkHf5oHwY__A3hX7UbFLyNbQJvNA7afld0Az0P_m1D0FF92A215725F4B4AC3D1172E8B0FAAD562E25_RuntimeMethod_var), NULL);
				NullCheck(L_12);
				List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_12, L_14, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
				uint32_t L_15 = V_6;
				G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-1784092457)))^((int32_t)-666782305)));
				goto IL_0061_1;
			}

IL_00c8_1:
			{
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* L_16 = V_3;
				String_t* L_17;
				L_17 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_2), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				NullCheck(L_16);
				L_16->____SvCvpL5BOWYqk4DgWPyNgDgw7h_0 = L_17;
				Il2CppCodeGenWriteBarrier((void**)(&L_16->____SvCvpL5BOWYqk4DgWPyNgDgw7h_0), (void*)L_17);
				uint32_t L_18 = V_6;
				G_B8_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)878867039)))^((int32_t)679843385)));
				goto IL_0061_1;
			}

IL_00e8_1:
			{
				bool L_19;
				L_19 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_2), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (!L_19)
				{
					goto IL_00f9_1;
				}
			}
			{
				int32_t L_20 = ((int32_t)-1678283677);
				G_B16_0 = L_20;
				G_B16_1 = L_20;
				goto IL_00ff_1;
			}

IL_00f9_1:
			{
				int32_t L_21 = ((int32_t)-4215470);
				G_B16_0 = L_21;
				G_B16_1 = L_21;
			}

IL_00ff_1:
			{
				G_B8_0 = G_B16_1;
				goto IL_0061_1;
			}

IL_0105_1:
			{
				_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* L_22 = V_3;
				NullCheck(L_22);
				String_t* L_23 = L_22->____SvCvpL5BOWYqk4DgWPyNgDgw7h_0;
				bool L_24;
				L_24 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_23, NULL);
				if (L_24)
				{
					goto IL_011a_1;
				}
			}
			{
				int32_t L_25 = ((int32_t)-374465409);
				G_B20_0 = L_25;
				G_B20_1 = L_25;
				goto IL_0120_1;
			}

IL_011a_1:
			{
				int32_t L_26 = ((int32_t)-898066202);
				G_B20_0 = L_26;
				G_B20_1 = L_26;
			}

IL_0120_1:
			{
				uint32_t L_27 = V_6;
				G_B8_0 = ((int32_t)(G_B20_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)2119790569)))));
				goto IL_0061_1;
			}

IL_012f_1:
			{
				goto IL_013f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_013f:
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_28 = V_0;
		RuntimeObject* L_29 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = InterfaceFuncInvoker0< String_t* >::Invoke(4 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetIconURL() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_29);
		NullCheck(L_28);
		L_28->____2DMeyzgFmbWjnpi6StGaWZNQ7qL_0 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_28->____2DMeyzgFmbWjnpi6StGaWZNQ7qL_0), (void*)L_30);
	}

IL_0150:
	{
		G_B25_0 = ((int32_t)-782531094);
	}

IL_0155:
	{
		int32_t L_31 = ((int32_t)(G_B25_0^((int32_t)-1038291414)));
		V_6 = L_31;
		switch (((int32_t)((uint32_t)(int32_t)L_31%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_0150;
			}
			case 1:
			{
				goto IL_01c0;
			}
			case 2:
			{
				goto IL_023c;
			}
			case 3:
			{
				goto IL_01e5;
			}
			case 4:
			{
				goto IL_0186;
			}
			case 5:
			{
				goto IL_01ad;
			}
			case 6:
			{
				goto IL_0217;
			}
		}
	}
	{
		goto IL_023c;
	}

IL_0186:
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_32 = V_0;
		NullCheck(L_32);
		String_t* L_33 = L_32->____2DMeyzgFmbWjnpi6StGaWZNQ7qL_0;
		bool L_34;
		L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
		if (!L_34)
		{
			goto IL_019b;
		}
	}
	{
		int32_t L_35 = ((int32_t)-1375124930);
		G_B30_0 = L_35;
		G_B30_1 = L_35;
		goto IL_01a1;
	}

IL_019b:
	{
		int32_t L_36 = ((int32_t)-184255656);
		G_B30_0 = L_36;
		G_B30_1 = L_36;
	}

IL_01a1:
	{
		uint32_t L_37 = V_6;
		G_B25_0 = ((int32_t)(G_B30_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)1307040167)))));
		goto IL_0155;
	}

IL_01ad:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_inline(L_38, List_1_get_Count_m5E7FCE3DF7B23B6D88C14A04177C1DCD15063858_RuntimeMethod_var);
		__this->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6 = L_39;
		G_B25_0 = ((int32_t)-906283633);
		goto IL_0155;
	}

IL_01c0:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_40 = V_1;
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_41 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_42 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_42, L_41, (intptr_t)((void*)_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__3dy2jrZGuy7UMrdbjwHzTjGK7LI_m2697567DD366E8E65DBA38EC6DE2C46CEC077496_RuntimeMethod_var), NULL);
		NullCheck(L_40);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_40, L_42, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		uint32_t L_43 = V_6;
		G_B25_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)883955157)))^((int32_t)-618364271)));
		goto IL_0155;
	}

IL_01e5:
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_44 = V_0;
		RuntimeObject* L_45 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = InterfaceFuncInvoker0< String_t* >::Invoke(5 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAdChoicesLogoURL() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_45);
		NullCheck(L_44);
		L_44->____IjAngXXNeRGCWwHdAm0F24wDgWw_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->____IjAngXXNeRGCWwHdAm0F24wDgWw_1), (void*)L_46);
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_47 = V_0;
		NullCheck(L_47);
		String_t* L_48 = L_47->____IjAngXXNeRGCWwHdAm0F24wDgWw_1;
		bool L_49;
		L_49 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_48, NULL);
		if (L_49)
		{
			goto IL_020b;
		}
	}
	{
		int32_t L_50 = ((int32_t)-1692592921);
		G_B36_0 = L_50;
		G_B36_1 = L_50;
		goto IL_0211;
	}

IL_020b:
	{
		int32_t L_51 = ((int32_t)-1844642048);
		G_B36_0 = L_51;
		G_B36_1 = L_51;
	}

IL_0211:
	{
		G_B25_0 = G_B36_1;
		goto IL_0155;
	}

IL_0217:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_52 = V_1;
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_53 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_54 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_54, L_53, (intptr_t)((void*)_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__A3hX7UbFLyNbQJvNA7afld0Az0P_m6C85F92D17A37607D4BC23ABD88DF55366F8849E_RuntimeMethod_var), NULL);
		NullCheck(L_52);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_52, L_54, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		uint32_t L_55 = V_6;
		G_B25_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_55, ((int32_t)1700658665)))^((int32_t)862455548)));
		goto IL_0155;
	}

IL_023c:
	{
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_56 = V_1;
		NullCheck(L_56);
		Enumerator_t3787AC8C42D500C005E2D239B9F7650C1E44A58D L_57;
		L_57 = List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254(L_56, List_1_GetEnumerator_mB6C244AAEBAD19DF16131057B7A205817A226254_RuntimeMethod_var);
		V_5 = L_57;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_02b4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B((&V_5), Enumerator_Dispose_m7AF54658D389DA447BBE4C9F2D82278217B0972B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0281_1;
			}

IL_0246_1:
			{
				G_B41_0 = ((int32_t)-1439010372);
			}

IL_024b_1:
			{
				int32_t L_58 = ((int32_t)(G_B41_0^((int32_t)-1038291414)));
				V_6 = L_58;
				switch (((int32_t)((uint32_t)(int32_t)L_58%(uint32_t)(int32_t)5)))
				{
					case 0:
					{
						goto IL_02b2_1;
					}
					case 1:
					{
						goto IL_0271_1;
					}
					case 2:
					{
						goto IL_029b_1;
					}
					case 3:
					{
						goto IL_0246_1;
					}
					case 4:
					{
						goto IL_0281_1;
					}
				}
			}
			{
				goto IL_02b2_1;
			}

IL_0271_1:
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_59;
				L_59 = Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_inline((&V_5), Enumerator_get_Current_m5CDD305956FDEFA478FF8F1F8D44992132542261_RuntimeMethod_var);
				V_4 = L_59;
				G_B41_0 = ((int32_t)-491109710);
				goto IL_024b_1;
			}

IL_0281_1:
			{
				bool L_60;
				L_60 = Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568((&V_5), Enumerator_MoveNext_m6096A4A06C95B18044A650D3E9AE2AA3D2ECA568_RuntimeMethod_var);
				if (!L_60)
				{
					goto IL_0292_1;
				}
			}
			{
				int32_t L_61 = ((int32_t)-1439010372);
				G_B47_0 = L_61;
				G_B47_1 = L_61;
				goto IL_0298_1;
			}

IL_0292_1:
			{
				int32_t L_62 = ((int32_t)-91718609);
				G_B47_0 = L_62;
				G_B47_1 = L_62;
			}

IL_0298_1:
			{
				G_B41_0 = G_B47_1;
				goto IL_024b_1;
			}

IL_029b_1:
			{
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = V_4;
				il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
				MobileAdsEventExecutor_ExecuteInUpdate_m4D7D863382B3DFA6F791CBCFD275B5F7EE4BA91E(L_63, NULL);
				uint32_t L_64 = V_6;
				G_B41_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, ((int32_t)1268753298)))^((int32_t)-2080384336)));
				goto IL_024b_1;
			}

IL_02b2_1:
			{
				goto IL_02c2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_02c2:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_WaFcB2Wc3oq5XzhrO6IlmokE5dV(GoogleMobileAds.Api.UnifiedNativeAd/Field,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__WaFcB2Wc3oq5XzhrO6IlmokE5dV_mAED46402E6A2D96406C9020E82DF63545156DB94 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, int32_t p0, String_t* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_htCoDo15BcEytEC1AVRv7n8Jb4d__A3hX7UbFLyNbQJvNA7afld0Az0P_m993D87822799C87985FAAC61C1347D2DF4F75BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	{
		_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* L_0 = (_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E*)il2cpp_codegen_object_new(_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_htCoDo15BcEytEC1AVRv7n8Jb4d__ctor_m2F6CA9008AD0969681794CC5BF94B45804A69D15(L_0, NULL);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)1055242347);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)471385806)));
		V_1 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0006;
			}
			case 1:
			{
				goto IL_002c;
			}
			case 2:
			{
				goto IL_005f;
			}
			case 3:
			{
				goto IL_0042;
			}
		}
	}
	{
		goto IL_005f;
	}

IL_002c:
	{
		_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* L_2 = V_0;
		int32_t L_3 = p0;
		NullCheck(L_2);
		L_2->____U7GSq5R56gqBZSf1TL01RmzVC0M_0 = L_3;
		uint32_t L_4 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)2092045289)))^((int32_t)-122954808)));
		goto IL_000b;
	}

IL_0042:
	{
		_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* L_5 = V_0;
		NullCheck(L_5);
		L_5->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2), (void*)__this);
		_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* L_6 = V_0;
		NullCheck(L_6);
		L_6->____ZPlAjOujC9Q2bLSruldqykGcGKP_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____ZPlAjOujC9Q2bLSruldqykGcGKP_1), (void*)__this);
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-2095136637)))^((int32_t)-1656284475)));
		goto IL_000b;
	}

IL_005f:
	{
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A* L_8 = ((MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_StaticFields*)il2cpp_codegen_static_fields_for(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var))->___instance_4;
		String_t* L_9 = p1;
		_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* L_10 = V_0;
		Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33* L_11 = (Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33*)il2cpp_codegen_object_new(Action_1_tD7F74291FAA5A362F4A5F48D4E1CF3ED51FA6A33_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Action_1__ctor_m0D74126D5BBFFF417FDA1881B8AEBD833A833F76(L_11, L_10, (intptr_t)((void*)_htCoDo15BcEytEC1AVRv7n8Jb4d__A3hX7UbFLyNbQJvNA7afld0Az0P_m993D87822799C87985FAAC61C1347D2DF4F75BCD_RuntimeMethod_var), NULL);
		RuntimeObject* L_12;
		L_12 = Utils_LoadImage_m57AB3DA3C3EC55014CB8107983BFB4D2F17EA765(L_9, L_11, NULL);
		NullCheck(L_8);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_8, L_12, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_RH3We0hIpYn560f1nPZUcVJdXag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__RH3We0hIpYn560f1nPZUcVJdXag_m327D9C91B631C1D3C9C61470E6EDD8FD42196646 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		__this->____zNCapvpg6wcO7TEpm9VwpancaXp_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____zNCapvpg6wcO7TEpm9VwpancaXp_2), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1684276903);
	}

IL_000c:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-389508729)));
		V_0 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0059;
			}
			case 1:
			{
				goto IL_0043;
			}
			case 2:
			{
				goto IL_002d;
			}
			case 3:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_002d:
	{
		__this->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3 = (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3), (void*)(List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)NULL);
		uint32_t L_1 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_1, ((int32_t)-1596166783)))^((int32_t)-1143684940)));
		goto IL_000c;
	}

IL_0043:
	{
		__this->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4), (void*)(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)NULL);
		uint32_t L_2 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)-488702195)))^((int32_t)-1584082006)));
		goto IL_000c;
	}

IL_0059:
	{
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::_JwdyFHpHkoJBMuR4UHfqpewDs1f()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd__JwdyFHpHkoJBMuR4UHfqpewDs1f_mBFF64D86D4E993B6550E67362DE5AD0541AD4D41 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<UnityEngine.Texture2D> GoogleMobileAds.Api.UnifiedNativeAd::GetImageTextures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* UnifiedNativeAd_GetImageTextures_mDFF5C02B5DB721174E52B29A0ED9192011BD8F44 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_0 = __this->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
		return L_0;
	}
}
// UnityEngine.Texture2D GoogleMobileAds.Api.UnifiedNativeAd::GetIconTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* UnifiedNativeAd_GetIconTexture_m6D43A02A1E39E0BBEC27CA4FAFDE20DDE0A934BE (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____zNCapvpg6wcO7TEpm9VwpancaXp_2;
		return L_0;
	}
}
// UnityEngine.Texture2D GoogleMobileAds.Api.UnifiedNativeAd::GetAdChoicesLogoTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* UnifiedNativeAd_GetAdChoicesLogoTexture_mB0852600899FE8EC05B90F8DBE471DB9A2C9D934 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4;
		return L_0;
	}
}
// System.Double GoogleMobileAds.Api.UnifiedNativeAd::GetStarRating()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double UnifiedNativeAd_GetStarRating_m1E16B629272F3DB0191BF8885AFF6D5190E97CE8 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		double L_1;
		L_1 = InterfaceFuncInvoker0< double >::Invoke(6 /* System.Double GoogleMobileAds.Common.IUnifiedNativeAdClient::GetStarRating() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetHeadlineText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetHeadlineText_mDDF7B42241BC69DA9FD0A472EF652DA851D14541 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(7 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetHeadline() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetBodyText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetBodyText_mA169DC9E93C74899A9D2AA9123A82718B5B9984D (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(8 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetBody() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetCallToActionText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetCallToActionText_m9A83E8DB33A64CDCB6B10509C33539F36D55E157 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetCallToAction() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetAdvertiserText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetAdvertiserText_m83AE1D9ABABC01DC916F81692DFE386CE87956FE (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAdvertiser() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetPrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetPrice_m000270A382656A03720FA17CDFFE1E28685FE8FB (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(11 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetPrice() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::GetStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_GetStore_m8FBB0F74A484767DB2B89E4A89ADCF9B13B8FE58 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(12 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::GetStore() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.String GoogleMobileAds.Api.UnifiedNativeAd::MedationAdapterClassName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnifiedNativeAd_MedationAdapterClassName_m2B741100D5C155A59D47AA373D403836B29793C7 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(16 /* System.String GoogleMobileAds.Common.IUnifiedNativeAdClient::MediationAdapterClassName() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// ResponseInfo GoogleMobileAds.Api.UnifiedNativeAd::GetResponseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* UnifiedNativeAd_GetResponseInfo_m905072C20FBD0F9674EFC03B833BCC893B726ECE (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(17 /* GoogleMobileAds.Common.IResponseInfoClient GoogleMobileAds.Common.IUnifiedNativeAdClient::GetResponseInfoClient() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A* L_2 = (ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A*)il2cpp_codegen_object_new(ResponseInfo_t5A36C0F9EC61C934EBC731AB562F2C78A44F7F2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ResponseInfo__ctor_m58C47553B21C5F1DDA12613F3536016C2414A63E(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::RegisterImageGameObjects(System.Collections.Generic.List`1<UnityEngine.GameObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_RegisterImageGameObjects_m1C888058CB6D828DBED85B237F9660C8238909D8 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___gameObjects0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		RuntimeObject* L_0 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1;
		L_1 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-1049954052), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		NullCheck(L_1);
		String_t* L_3;
		L_3 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_1, L_2, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		V_0 = L_3;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = ___gameObjects0;
		NullCheck(L_4);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_5;
		L_5 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_4, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_2), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0062_1;
			}

IL_0024_1:
			{
				G_B3_0 = ((int32_t)1962873034);
			}

IL_0029_1:
			{
				int32_t L_6 = ((int32_t)(G_B3_0^((int32_t)238086756)));
				V_3 = L_6;
				switch (((int32_t)((uint32_t)(int32_t)L_6%(uint32_t)(int32_t)4)))
				{
					case 0:
					{
						goto IL_007c_1;
					}
					case 1:
					{
						goto IL_0062_1;
					}
					case 2:
					{
						goto IL_004a_1;
					}
					case 3:
					{
						goto IL_0024_1;
					}
				}
			}
			{
				goto IL_007c_1;
			}

IL_004a_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_2), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_7;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
				String_t* L_9 = V_0;
				bool L_10;
				L_10 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_8, L_9, NULL);
				G_B3_0 = ((int32_t)1362451737);
				goto IL_0029_1;
			}

IL_0062_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_2), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (!L_11)
				{
					goto IL_0073_1;
				}
			}
			{
				int32_t L_12 = ((int32_t)1962873034);
				G_B9_0 = L_12;
				G_B9_1 = L_12;
				goto IL_0079_1;
			}

IL_0073_1:
			{
				int32_t L_13 = ((int32_t)4633672);
				G_B9_0 = L_13;
				G_B9_1 = L_13;
			}

IL_0079_1:
			{
				G_B3_0 = G_B9_1;
				goto IL_0029_1;
			}

IL_007c_1:
			{
				goto IL_008c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008c:
	{
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterIconImageGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterIconImageGameObject_m059ACE28966F460C195408B2AE1F28A6881346C0 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)1623980979), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterAdChoicesLogoGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterAdChoicesLogoGameObject_m2469897C9525193256F1ACA939EA3263BD5FEB38 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-951243512), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterHeadlineTextGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterHeadlineTextGameObject_m959641006A4F07A1BEDC0942E299329A8B682881 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)1844362380), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterBodyTextGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterBodyTextGameObject_m7B5958421F9F20B910C76110DB25CA320EBA5595 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)114922717), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterCallToActionGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterCallToActionGameObject_mC445F2309D54F759AED8821AD2B50CC62FAF754B (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-788602097), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterAdvertiserTextGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterAdvertiserTextGameObject_mBDAD9CFBBD6A22D322685823C5AEC102D17D0619 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-569607098), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterPriceGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterPriceGameObject_mB13D8FD57ACCCCEFC921381F1EF2D75F51C01A32 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-11818430), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::RegisterStoreGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd_RegisterStoreGameObject_m7CAE7E13C7548D529195C84CE7FE4BF46F7E3A4F (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___gameObject0;
		RuntimeObject* L_1 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = InterfaceFuncInvoker0< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(2 /* System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Common.IUnifiedNativeAdClient::GetAssetIDMappings() */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_1);
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-627176459), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_2, L_3, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_5;
		L_5 = UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A(__this, L_0, L_4, NULL);
		return L_5;
	}
}
// System.Boolean GoogleMobileAds.Api.UnifiedNativeAd::_ZHbByj6a1RyOfZF8Kk5lKkkcqeP(UnityEngine.GameObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnifiedNativeAd__ZHbByj6a1RyOfZF8Kk5lKkkcqeP_mA93FD7A686E4FE2CE2A4D9110668AC3534B4300A (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, String_t* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_m65368B3CB1BE2D7C16A84073E04F3CFE18FA93E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m01283FB4A94CC2EEA5028FFAD002CCE963E5F46D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnifiedNativeAd__3yaLVRlhzWn0ZeUuSjlhI5QeaE_mE88D85006B1F26659F45833D76B4930F19FE9C38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnifiedNativeAd__ZEXiQzdBtmY5gv2vlMIpMEnepgW_m584C7F65973C6A2A19B5119D81D0019065BCDF53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_0 = NULL;
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_1 = NULL;
	InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* V_2 = NULL;
	bool V_3 = false;
	uint32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B15_0 = 0;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = p0;
		NullCheck(L_0);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_1;
		L_1 = GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4(L_0, GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-1408801119);
	}

IL_000c:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-571870910)));
		V_4 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_00a3;
			}
			case 3:
			{
				goto IL_007d;
			}
			case 4:
			{
				goto IL_0067;
			}
			case 5:
			{
				goto IL_0007;
			}
		}
	}
	{
		goto IL_00bb;
	}

IL_0039:
	{
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_3 = __this->____N26C46FBVhXAuJypk4XBf4zqIpr_0;
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_4 = V_1;
		NullCheck(L_3);
		List_1_Add_m01283FB4A94CC2EEA5028FFAD002CCE963E5F46D_inline(L_3, L_4, List_1_Add_m01283FB4A94CC2EEA5028FFAD002CCE963E5F46D_RuntimeMethod_var);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_5 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_6, __this, (intptr_t)((void*)UnifiedNativeAd__3yaLVRlhzWn0ZeUuSjlhI5QeaE_mE88D85006B1F26659F45833D76B4930F19FE9C38_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__w2Sy2lfiB69iyGEuBghZnzCwUbf_m1135CAAD69F4F0820BD04A832BEEFCD4B1DC12F3(L_5, L_6, NULL);
		uint32_t L_7 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1510870606)))^((int32_t)-1041680896)));
		goto IL_000c;
	}

IL_0067:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_m6336EBC83591A5DB64EC70C92132824C6E258705(L_8, NULL);
		uint32_t L_9 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-2040327109)))^((int32_t)753397986)));
		goto IL_000c;
	}

IL_007d:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_12 = ((int32_t)897782451);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0094;
	}

IL_008e:
	{
		int32_t L_13 = ((int32_t)2074103547);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0094:
	{
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-771334257)))));
		goto IL_000c;
	}

IL_00a3:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = p0;
		NullCheck(L_15);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_16;
		L_16 = GameObject_AddComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_m65368B3CB1BE2D7C16A84073E04F3CFE18FA93E4(L_15, GameObject_AddComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_m65368B3CB1BE2D7C16A84073E04F3CFE18FA93E4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = p0;
		NullCheck(L_17);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_18;
		L_18 = GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4(L_17, GameObject_GetComponent_Tis_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_mCA3272988708CEDC5327A21AAD68ECA91CFF19C4_RuntimeMethod_var);
		V_1 = L_18;
		G_B2_0 = ((int32_t)-844613291);
		goto IL_000c;
	}

IL_00bb:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_19 = V_1;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_20 = (EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)il2cpp_codegen_object_new(EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EventHandler_1__ctor_m245FC8A60EC0103F44E3F57FCB7628D3C823F452(L_20, __this, (intptr_t)((void*)UnifiedNativeAd__ZEXiQzdBtmY5gv2vlMIpMEnepgW_m584C7F65973C6A2A19B5119D81D0019065BCDF53_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__Unu45vxwiu8h5C3O4Vh8htG7USg_m34D7BD722AFBF85DD8D84AD7E9F6EF03C368B749(L_19, L_20, NULL);
	}
	try
	{// begin try (depth: 1)
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_21 = V_1;
		String_t* L_22 = p1;
		NullCheck(L_21);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eA6IRxzTs3fpotROpQjU9UsL6bD_m5262C5AFDB5C36200A20E11E8264B82F30A9D612(L_21, L_22, NULL);
		goto IL_013b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d6;
		}
		throw e;
	}

CATCH_00d6:
	{// begin catch(System.InvalidOperationException)
		{
			V_2 = ((InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*));
			List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_23 = __this->____N26C46FBVhXAuJypk4XBf4zqIpr_0;
			_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_24 = V_1;
			NullCheck(L_23);
			bool L_25;
			L_25 = List_1_Remove_m557308E222C2A7F1E47B4E31BCFBD727C28226F1(L_23, L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Remove_m557308E222C2A7F1E47B4E31BCFBD727C28226F1_RuntimeMethod_var)));
			_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_26 = V_1;
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)));
			Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_26, NULL);
		}

IL_00ea:
		{
			G_B15_0 = ((int32_t)-1245493147);
		}

IL_00ef:
		{
			int32_t L_27 = ((int32_t)(G_B15_0^((int32_t)-571870910)));
			V_4 = L_27;
			switch (((int32_t)((uint32_t)(int32_t)L_27%(uint32_t)(int32_t)3)))
			{
				case 0:
				{
					goto IL_0139;
				}
				case 1:
				{
					goto IL_010d;
				}
				case 2:
				{
					goto IL_00ea;
				}
			}
		}
		{
			goto IL_0139;
		}

IL_010d:
		{
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var)));
			String_t* L_28;
			L_28 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)-1902112247), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var)));
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_29 = V_2;
			NullCheck(L_29);
			String_t* L_30;
			L_30 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_29);
			String_t* L_31;
			L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, L_30, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_31, NULL);
			V_3 = (bool)0;
			uint32_t L_32 = V_4;
			G_B15_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)-2097701062)))^((int32_t)1326375486)));
			goto IL_00ef;
		}

IL_0139:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_013d;
		}
	}// end catch (depth: 1)

IL_013b:
	{
		return (bool)1;
	}

IL_013d:
	{
		bool L_33 = V_3;
		return L_33;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_Destroy_m0851B48BC695C899B559E8097BB787B484221FE8 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* V_0 = NULL;
	Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = __this->____zNCapvpg6wcO7TEpm9VwpancaXp_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0082;
		}
	}

IL_000e:
	{
		G_B2_0 = ((int32_t)1179071686);
	}

IL_0013:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)463249707)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0056;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_003c;
			}
			case 3:
			{
				goto IL_000e;
			}
			case 4:
			{
				goto IL_0082;
			}
			case 5:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_003c:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = __this->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)1647932605)))^((int32_t)1262718729)));
		goto IL_0013;
	}

IL_0056:
	{
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_5 = __this->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
		if (!L_5)
		{
			goto IL_0117;
		}
	}
	{
		G_B2_0 = ((int32_t)1168931452);
		goto IL_0013;
	}

IL_0068:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_6 = __this->____zNCapvpg6wcO7TEpm9VwpancaXp_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-1923694664)))^((int32_t)1161868969)));
		goto IL_0013;
	}

IL_0082:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_8 = __this->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		int32_t L_10 = ((int32_t)1743479699);
		G_B11_0 = L_10;
		G_B11_1 = L_10;
		goto IL_009e;
	}

IL_0098:
	{
		int32_t L_11 = ((int32_t)1079652489);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
	}

IL_009e:
	{
		G_B2_0 = G_B11_1;
		goto IL_0013;
	}

IL_00a4:
	{
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_12 = __this->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
		NullCheck(L_12);
		Enumerator_tB27E67E9E66FACC8EC96B957B493E37F2885E6F1 L_13;
		L_13 = List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D(L_12, List_1_GetEnumerator_m68D0E2F78D7A7BFC737BE72E4088B86A85F55F6D_RuntimeMethod_var);
		V_1 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245((&V_1), Enumerator_Dispose_m7D8098C50EE0CF157C6B09912310A1FD9474F245_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ed_1;
			}

IL_00b2_1:
			{
				G_B15_0 = ((int32_t)891198230);
			}

IL_00b7_1:
			{
				int32_t L_14 = ((int32_t)(G_B15_0^((int32_t)463249707)));
				V_2 = L_14;
				switch (((int32_t)((uint32_t)(int32_t)L_14%(uint32_t)(int32_t)4)))
				{
					case 0:
					{
						goto IL_00ed_1;
					}
					case 1:
					{
						goto IL_00d8_1;
					}
					case 2:
					{
						goto IL_0107_1;
					}
					case 3:
					{
						goto IL_00b2_1;
					}
				}
			}
			{
				goto IL_0107_1;
			}

IL_00d8_1:
			{
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_15;
				L_15 = Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_inline((&V_1), Enumerator_get_Current_mCF3C7D2E2BA4F0177C908FDCFE7955303CBD5BED_RuntimeMethod_var);
				V_0 = L_15;
				Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_16 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
				G_B15_0 = ((int32_t)1932274059);
				goto IL_00b7_1;
			}

IL_00ed_1:
			{
				bool L_17;
				L_17 = Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35((&V_1), Enumerator_MoveNext_m00711B095CC5BE52F04F5EB7283C8795DB012C35_RuntimeMethod_var);
				if (!L_17)
				{
					goto IL_00fe_1;
				}
			}
			{
				int32_t L_18 = ((int32_t)891198230);
				G_B21_0 = L_18;
				G_B21_1 = L_18;
				goto IL_0104_1;
			}

IL_00fe_1:
			{
				int32_t L_19 = ((int32_t)1443523689);
				G_B21_0 = L_19;
				G_B21_1 = L_19;
			}

IL_0104_1:
			{
				G_B15_0 = G_B21_1;
				goto IL_00b7_1;
			}

IL_0107_1:
			{
				goto IL_0117;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0117:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd_Finalize_m1397D960C82435B06BE7A2375903DDD545265AB7 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnifiedNativeAd__3ftzzXJrcyadoWDuMiS3cPkjHzK_mDE8A988AA145752E8326708E9557E8DA2BD0711B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_0, __this, (intptr_t)((void*)UnifiedNativeAd__3ftzzXJrcyadoWDuMiS3cPkjHzK_mDE8A988AA145752E8326708E9557E8DA2BD0711B_RuntimeMethod_var), NULL);
			il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
			MobileAdsEventExecutor_ExecuteInUpdate_m4D7D863382B3DFA6F791CBCFD275B5F7EE4BA91E(L_0, NULL);
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_3yaLVRlhzWn0ZeUuSjlhI5QeaE(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__3yaLVRlhzWn0ZeUuSjlhI5QeaE_mE88D85006B1F26659F45833D76B4930F19FE9C38 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, RuntimeObject* p0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_2 = NULL;
	Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	{
		RuntimeObject* L_0 = p0;
		if (!((_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*)IsInstSealed((RuntimeObject*)L_0, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var)))
		{
			goto IL_0139;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)-1477889846);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-547263691)));
		V_4 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_000b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_0049;
			}
			case 3:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_0077;
	}

IL_0032:
	{
		RuntimeObject* L_2 = p0;
		V_0 = ((_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*)CastclassSealed((RuntimeObject*)L_2, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var));
		uint32_t L_3 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)-1343298626)))^((int32_t)-104025935)));
		goto IL_0010;
	}

IL_0049:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_4 = V_0;
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_5 = __this->____N26C46FBVhXAuJypk4XBf4zqIpr_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6;
		L_6 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__L4hDCCbfmoPnkGfsKTB8VRqdVKyA_m3BCD1906CD1B4B34DCC118B241464D3FCB18D2B1(L_4, L_5, NULL);
		V_1 = L_6;
		RuntimeObject* L_7 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker1< bool, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(13 /* System.Boolean GoogleMobileAds.Common.IUnifiedNativeAdClient::RecordImpression(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_7, L_8);
		if (!L_9)
		{
			goto IL_0139;
		}
	}
	{
		uint32_t L_10 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-194134751)))^((int32_t)1912451250)));
		goto IL_0010;
	}

IL_0077:
	{
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_11 = __this->____N26C46FBVhXAuJypk4XBf4zqIpr_0;
		NullCheck(L_11);
		Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A L_12;
		L_12 = List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F(L_11, List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F_RuntimeMethod_var);
		V_3 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0((&V_3), Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00d4_1;
			}

IL_0085_1:
			{
				G_B10_0 = ((int32_t)-1098973597);
			}

IL_008a_1:
			{
				int32_t L_13 = ((int32_t)(G_B10_0^((int32_t)-547263691)));
				V_4 = L_13;
				switch (((int32_t)((uint32_t)(int32_t)L_13%(uint32_t)(int32_t)7)))
				{
					case 0:
					{
						goto IL_00ee_1;
					}
					case 1:
					{
						goto IL_00b8_1;
					}
					case 2:
					{
						goto IL_0114_1;
					}
					case 3:
					{
						goto IL_0129_1;
					}
					case 4:
					{
						goto IL_0085_1;
					}
					case 5:
					{
						goto IL_00c7_1;
					}
					case 6:
					{
						goto IL_00d4_1;
					}
				}
			}
			{
				goto IL_0129_1;
			}

IL_00b8_1:
			{
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_14;
				L_14 = Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_inline((&V_3), Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_RuntimeMethod_var);
				V_2 = L_14;
				G_B10_0 = ((int32_t)-1428699559);
				goto IL_008a_1;
			}

IL_00c7_1:
			{
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_15 = V_2;
				NullCheck(L_15);
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iY17y1qd29fBeJArQKErgB8xcSs_mAFBFB2B93CCA009C3EB26D85325B9D06B0E62A2C(L_15, NULL);
				G_B10_0 = ((int32_t)-1603471958);
				goto IL_008a_1;
			}

IL_00d4_1:
			{
				bool L_16;
				L_16 = Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C((&V_3), Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_00e5_1;
				}
			}
			{
				int32_t L_17 = ((int32_t)-1350571434);
				G_B17_0 = L_17;
				G_B17_1 = L_17;
				goto IL_00eb_1;
			}

IL_00e5_1:
			{
				int32_t L_18 = ((int32_t)-1098973597);
				G_B17_0 = L_18;
				G_B17_1 = L_18;
			}

IL_00eb_1:
			{
				G_B10_0 = G_B17_1;
				goto IL_008a_1;
			}

IL_00ee_1:
			{
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_19 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_20;
				L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_20)
				{
					goto IL_00ff_1;
				}
			}
			{
				int32_t L_21 = ((int32_t)699667249);
				G_B21_0 = L_21;
				G_B21_1 = L_21;
				goto IL_0105_1;
			}

IL_00ff_1:
			{
				int32_t L_22 = ((int32_t)1512713223);
				G_B21_0 = L_22;
				G_B21_1 = L_22;
			}

IL_0105_1:
			{
				uint32_t L_23 = V_4;
				G_B10_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-381813344)))));
				goto IL_008a_1;
			}

IL_0114_1:
			{
				goto IL_00d4_1;
			}
			{
				uint32_t L_24 = V_4;
				G_B10_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)1259212746)))^((int32_t)590502319)));
				goto IL_008a_1;
			}

IL_0129_1:
			{
				goto IL_0139;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0139:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_ZEXiQzdBtmY5gv2vlMIpMEnepgW(System.Object,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__ZEXiQzdBtmY5gv2vlMIpMEnepgW_m584C7F65973C6A2A19B5119D81D0019065BCDF53 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, RuntimeObject* p0, _ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_0 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_2 = NULL;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	{
		RuntimeObject* L_0 = p0;
		if (!((_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*)IsInstSealed((RuntimeObject*)L_0, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var)))
		{
			goto IL_00c5;
		}
	}

IL_000b:
	{
		G_B2_0 = ((int32_t)242472435);
	}

IL_0010:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1575818466)));
		V_3 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0088;
			}
			case 3:
			{
				goto IL_00c5;
			}
			case 4:
			{
				goto IL_006d;
			}
			case 5:
			{
				goto IL_000b;
			}
		}
	}
	{
		goto IL_00c5;
	}

IL_003c:
	{
		RuntimeObject* L_2 = p0;
		V_0 = ((_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275*)CastclassSealed((RuntimeObject*)L_2, _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275_il2cpp_TypeInfo_var));
		uint32_t L_3 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1223284794)))^((int32_t)1253005944)));
		goto IL_0010;
	}

IL_0052:
	{
		RuntimeObject* L_4 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_5 = V_2;
		NullCheck(L_4);
		InterfaceActionInvoker1< Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(15 /* System.Void GoogleMobileAds.Common.IUnifiedNativeAdClient::ReportTouchEvent(System.Collections.Generic.Dictionary`2<System.String,System.String>) */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_4, L_5);
		uint32_t L_6 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)1755119326)))^((int32_t)-338380531)));
		goto IL_0010;
	}

IL_006d:
	{
		RuntimeObject* L_7 = __this->____PdbQgPRNu3avbiwZinBxFNm0PTg_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IUnifiedNativeAdClient::PerformClick(System.Collections.Generic.Dictionary`2<System.String,System.Object>) */, IUnifiedNativeAdClient_t7EC256798FF1EE35C45DCE5BBD518E5B902BCD2C_il2cpp_TypeInfo_var, L_7, L_8);
		uint32_t L_9 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1715981049)))^((int32_t)-539065512)));
		goto IL_0010;
	}

IL_0088:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_10 = V_0;
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_11 = __this->____N26C46FBVhXAuJypk4XBf4zqIpr_0;
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_12 = p1;
		NullCheck(L_12);
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_13;
		L_13 = _ONyW98lA5dZsD6Gc6xMqg10C6CR__LBaiSkaw4tGvDESDZVMvkYtjOpk_m9AB1A87431BF12C1A7D4F51C743A5314D23EC1CD_inline(L_12, NULL);
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_14 = p1;
		NullCheck(L_14);
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_15;
		L_15 = _ONyW98lA5dZsD6Gc6xMqg10C6CR__LXmCUeyVgQ1XwITAilfI85Tso2H_m709CB4F2B75F2EF9992B4B2D283256E3D16CB26B_inline(L_14, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16;
		L_16 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__sH531rPWYxNIpSPWc1e36q0vPC_m7D29807D9F75505B3F80BB634742EED60AE64A66(L_10, L_11, L_13, L_15, NULL);
		V_1 = L_16;
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_17 = p1;
		NullCheck(L_17);
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_18;
		L_18 = _ONyW98lA5dZsD6Gc6xMqg10C6CR__LBaiSkaw4tGvDESDZVMvkYtjOpk_m9AB1A87431BF12C1A7D4F51C743A5314D23EC1CD_inline(L_17, NULL);
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_19 = p1;
		NullCheck(L_19);
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_20;
		L_20 = _ONyW98lA5dZsD6Gc6xMqg10C6CR__LXmCUeyVgQ1XwITAilfI85Tso2H_m709CB4F2B75F2EF9992B4B2D283256E3D16CB26B_inline(L_19, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21;
		L_21 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__ubvpgYD1zXsuqsLEBibbVRhCL5C_m70B8AB65FCBE968386C4457904941A62CC7B4360(L_18, L_20, NULL);
		V_2 = L_21;
		uint32_t L_22 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-309758042)))^((int32_t)-2010652510)));
		goto IL_0010;
	}

IL_00c5:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_jBmIXpfVvRPlTuDShdlClpUdvmS(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__jBmIXpfVvRPlTuDShdlClpUdvmS_mA0C689D279AC4A55E51AB9897D437563423D6785 (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, RuntimeObject* p0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* p1, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7;
		if (!L_0)
		{
			goto IL_0046;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)1838954944);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1550083097)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0008;
			}
		}
	}
	{
		goto IL_0046;
	}

IL_002a:
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_2 = __this->____EGlx7neqXuAvzTfKSBXsqW67nKg_7;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_3 = p1;
		NullCheck(L_2);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)360609951)))^((int32_t)18605386)));
		goto IL_000d;
	}

IL_0046:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd::_3ftzzXJrcyadoWDuMiS3cPkjHzK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAd__3ftzzXJrcyadoWDuMiS3cPkjHzK_mDE8A988AA145752E8326708E9557E8DA2BD0711B (UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UnifiedNativeAd_Destroy_m0851B48BC695C899B559E8097BB787B484221FE8(__this, NULL);
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
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__ctor_m4ECCD7186BCF32A09B065301C73C48A52BCD6AD6 (_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::_A3hX7UbFLyNbQJvNA7afld0Az0P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__A3hX7UbFLyNbQJvNA7afld0Az0P_m6C85F92D17A37607D4BC23ABD88DF55366F8849E (_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_0 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		String_t* L_1 = __this->____2DMeyzgFmbWjnpi6StGaWZNQ7qL_0;
		NullCheck(L_0);
		UnifiedNativeAd__WaFcB2Wc3oq5XzhrO6IlmokE5dV_mAED46402E6A2D96406C9020E82DF63545156DB94(L_0, 1, L_1, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb::_3dy2jrZGuy7UMrdbjwHzTjGK7LI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _jKJaNDIEjIKEeHF4Iuc6pQcs1nsb__3dy2jrZGuy7UMrdbjwHzTjGK7LI_m2697567DD366E8E65DBA38EC6DE2C46CEC077496 (_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_0 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		String_t* L_1 = __this->____IjAngXXNeRGCWwHdAm0F24wDgWw_1;
		NullCheck(L_0);
		UnifiedNativeAd__WaFcB2Wc3oq5XzhrO6IlmokE5dV_mAED46402E6A2D96406C9020E82DF63545156DB94(L_0, 2, L_1, NULL);
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
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _4AxCVQ4ihgrDpISFjJIkHf5oHwY__ctor_m230095C7028984A42BD39AF92B606B8B60ACF126 (_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_4AxCVQ4ihgrDpISFjJIkHf5oHwY::_A3hX7UbFLyNbQJvNA7afld0Az0P()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _4AxCVQ4ihgrDpISFjJIkHf5oHwY__A3hX7UbFLyNbQJvNA7afld0Az0P_m1D0FF92A215725F4B4AC3D1172E8B0FAAD562E25 (_4AxCVQ4ihgrDpISFjJIkHf5oHwY_tC024F52CF041D324E9EDD0BADB8B60FB1C9D7442* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_jKJaNDIEjIKEeHF4Iuc6pQcs1nsb_tFD4F22391B3F17D1BDE3134E4BFD658C7E8C1D49* L_0 = __this->____TZlRwee83ZYPWW3A6WmuSRwG8mc_1;
		NullCheck(L_0);
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_1 = L_0->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		String_t* L_2 = __this->____SvCvpL5BOWYqk4DgWPyNgDgw7h_0;
		NullCheck(L_1);
		UnifiedNativeAd__WaFcB2Wc3oq5XzhrO6IlmokE5dV_mAED46402E6A2D96406C9020E82DF63545156DB94(L_1, 0, L_2, NULL);
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
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _htCoDo15BcEytEC1AVRv7n8Jb4d__ctor_m2F6CA9008AD0969681794CC5BF94B45804A69D15 (_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAd/_htCoDo15BcEytEC1AVRv7n8Jb4d::_A3hX7UbFLyNbQJvNA7afld0Az0P(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _htCoDo15BcEytEC1AVRv7n8Jb4d__A3hX7UbFLyNbQJvNA7afld0Az0P_m993D87822799C87985FAAC61C1347D2DF4F75BCD (_htCoDo15BcEytEC1AVRv7n8Jb4d_t9FC0C956E1E5EDFDB971659B10DBB19E6BE8D10E* __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Field_t422266BE6A2611375A9668F13526189CF80FE9FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* V_0 = NULL;
	AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = p0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_031c;
		}
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)1218167707);
	}

IL_0011:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)642269869)));
		V_2 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)24))))
		{
			case 0:
			{
				goto IL_0212;
			}
			case 1:
			{
				goto IL_019d;
			}
			case 2:
			{
				goto IL_0311;
			}
			case 3:
			{
				goto IL_00ba;
			}
			case 4:
			{
				goto IL_015c;
			}
			case 5:
			{
				goto IL_02d0;
			}
			case 6:
			{
				goto IL_0086;
			}
			case 7:
			{
				goto IL_01e4;
			}
			case 8:
			{
				goto IL_0295;
			}
			case 9:
			{
				goto IL_025e;
			}
			case 10:
			{
				goto IL_00db;
			}
			case 11:
			{
				goto IL_033d;
			}
			case 12:
			{
				goto IL_014a;
			}
			case 13:
			{
				goto IL_01bf;
			}
			case 14:
			{
				goto IL_00ed;
			}
			case 15:
			{
				goto IL_024a;
			}
			case 16:
			{
				goto IL_0138;
			}
			case 17:
			{
				goto IL_027f;
			}
			case 18:
			{
				goto IL_000c;
			}
			case 19:
			{
				goto IL_016e;
			}
			case 20:
			{
				goto IL_011a;
			}
			case 21:
			{
				goto IL_02ba;
			}
			case 22:
			{
				goto IL_031c;
			}
			case 23:
			{
				goto IL_02f9;
			}
		}
	}
	{
		goto IL_033d;
	}

IL_0086:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_3 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_3);
		UnifiedNativeAd__RH3We0hIpYn560f1nPZUcVJdXag_m327D9C91B631C1D3C9C61470E6EDD8FD42196646(L_3, NULL);
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_4 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_4);
		bool L_5 = L_4->____1TpEpG7v0SHFHp4GqokJ6B6mOvD_5;
		if (L_5)
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_6 = ((int32_t)23686310);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
		goto IL_00ac;
	}

IL_00a6:
	{
		int32_t L_7 = ((int32_t)815933755);
		G_B7_0 = L_7;
		G_B7_1 = L_7;
	}

IL_00ac:
	{
		uint32_t L_8 = V_2;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)1841802346)))));
		goto IL_0011;
	}

IL_00ba:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_9 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_9);
		bool L_10;
		L_10 = UnifiedNativeAd__JwdyFHpHkoJBMuR4UHfqpewDs1f_mBFF64D86D4E993B6550E67362DE5AD0541AD4D41(L_9, NULL);
		if (!L_10)
		{
			goto IL_00cf;
		}
	}
	{
		int32_t L_11 = ((int32_t)1858316755);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
		goto IL_00d5;
	}

IL_00cf:
	{
		int32_t L_12 = ((int32_t)749758790);
		G_B11_0 = L_12;
		G_B11_1 = L_12;
	}

IL_00d5:
	{
		G_B2_0 = G_B11_1;
		goto IL_0011;
	}

IL_00db:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1542882792)))^((int32_t)-1958708954)));
		goto IL_0011;
	}

IL_00ed:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_14 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_14);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = L_14->____zxop4tzN5gtKAHaORF3dS7CwzwL_8;
		RuntimeObject* L_16 = __this->____ZPlAjOujC9Q2bLSruldqykGcGKP_1;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_17 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_15);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_15, L_16, L_17, NULL);
		uint32_t L_18 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)1771893219)))^((int32_t)389744636)));
		goto IL_0011;
	}

IL_011a:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_19 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_19);
		L_19->____1TpEpG7v0SHFHp4GqokJ6B6mOvD_5 = (bool)1;
		uint32_t L_20 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)1930714425)))^((int32_t)-21239708)));
		goto IL_0011;
	}

IL_0138:
	{
		uint32_t L_21 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)612410417)))^((int32_t)2057451206)));
		goto IL_0011;
	}

IL_014a:
	{
		uint32_t L_22 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, ((int32_t)-1360513048)))^((int32_t)-373567786)));
		goto IL_0011;
	}

IL_015c:
	{
		uint32_t L_23 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)1889822441)))^((int32_t)1968757090)));
		goto IL_0011;
	}

IL_016e:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_24;
		L_24 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)191030246), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		int32_t* L_25 = (&__this->____U7GSq5R56gqBZSf1TL01RmzVC0M_0);
		Il2CppFakeBox<int32_t> L_26(Field_t422266BE6A2611375A9668F13526189CF80FE9FC_il2cpp_TypeInfo_var, L_25);
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		String_t* L_28;
		L_28 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, L_27, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_28, NULL);
		G_B2_0 = ((int32_t)1209747325);
		goto IL_0011;
	}

IL_019d:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_29 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_30 = (List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4*)il2cpp_codegen_object_new(List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28(L_30, List_1__ctor_mD3639440D8DA82147DC9629DE83F253326590E28_RuntimeMethod_var);
		NullCheck(L_29);
		L_29->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&L_29->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3), (void*)L_30);
		uint32_t L_31 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)-234577619)))^((int32_t)-425903961)));
		goto IL_0011;
	}

IL_01bf:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_32 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6;
		NullCheck(L_33);
		L_33->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		uint32_t L_35 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1152264554)))^((int32_t)570278328)));
		goto IL_0011;
	}

IL_01e4:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_36 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_36);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_37 = L_36->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_38 = p0;
		NullCheck(L_37);
		List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_inline(L_37, L_38, List_1_Add_mC6B7A89D831773B30421C937E934D58B64FF61F7_RuntimeMethod_var);
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_39 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_40 = L_39;
		NullCheck(L_40);
		int32_t L_41 = L_40->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6;
		NullCheck(L_40);
		L_40->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		G_B2_0 = ((int32_t)1196905977);
		goto IL_0011;
	}

IL_0212:
	{
		AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* L_42 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)89127281), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		int32_t* L_44 = (&__this->____U7GSq5R56gqBZSf1TL01RmzVC0M_0);
		Il2CppFakeBox<int32_t> L_45(Field_t422266BE6A2611375A9668F13526189CF80FE9FC_il2cpp_TypeInfo_var, L_44);
		String_t* L_46;
		L_46 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_45), NULL);
		String_t* L_47;
		L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_43, L_46, NULL);
		NullCheck(L_42);
		AdFailedToLoadEventArgs_set_Message_m26F5479DCBC01F4F87AE180F3ACF5AF5F548A478_inline(L_42, L_47, NULL);
		uint32_t L_48 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-1232267734)))^((int32_t)-1707077390)));
		goto IL_0011;
	}

IL_024a:
	{
		AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* L_49 = V_1;
		V_0 = L_49;
		uint32_t L_50 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_50, ((int32_t)-1889250166)))^((int32_t)127938367)));
		goto IL_0011;
	}

IL_025e:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_51 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_51);
		List_1_t0F231C3F13EBA1FF9081BD61489D01AA3CBE59D4* L_52 = L_51->____SFC4pV3jfeLBpQJRLkA2H8NAjVp_3;
		if (L_52)
		{
			goto IL_0273;
		}
	}
	{
		int32_t L_53 = ((int32_t)1981121244);
		G_B27_0 = L_53;
		G_B27_1 = L_53;
		goto IL_0279;
	}

IL_0273:
	{
		int32_t L_54 = ((int32_t)215538810);
		G_B27_0 = L_54;
		G_B27_1 = L_54;
	}

IL_0279:
	{
		G_B2_0 = G_B27_1;
		goto IL_0011;
	}

IL_027f:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_55 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_56 = p0;
		NullCheck(L_55);
		L_55->____zNCapvpg6wcO7TEpm9VwpancaXp_2 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&L_55->____zNCapvpg6wcO7TEpm9VwpancaXp_2), (void*)L_56);
		G_B2_0 = ((int32_t)1272266376);
		goto IL_0011;
	}

IL_0295:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_57 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_58 = L_57;
		NullCheck(L_58);
		int32_t L_59 = L_58->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6;
		NullCheck(L_58);
		L_58->____f10vw6gFgPPxvNCDYwdFVq4ly7U_6 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint32_t L_60 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_60, ((int32_t)1434020103)))^((int32_t)510757103)));
		goto IL_0011;
	}

IL_02ba:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_61 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_62 = p0;
		NullCheck(L_61);
		L_61->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4 = L_62;
		Il2CppCodeGenWriteBarrier((void**)(&L_61->____Hcg6LEZlf2uOPG5AOJvz9Y1oiWc_4), (void*)L_62);
		G_B2_0 = ((int32_t)2080411277);
		goto IL_0011;
	}

IL_02d0:
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_63 = __this->____Gc5ExvbcrF7MFmRKb3r4cQssupt_2;
		NullCheck(L_63);
		EventHandler_1_tC463544CD485AA0236E29E5939DD99F22758DEF7* L_64 = L_63->____TtN4RduswHxFwuAuw49VNIwRnyc_9;
		RuntimeObject* L_65 = __this->____ZPlAjOujC9Q2bLSruldqykGcGKP_1;
		AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* L_66 = V_0;
		NullCheck(L_64);
		EventHandler_1_Invoke_mE18D10EA0B92CEB01D552573103CA7BCEBE789FC_inline(L_64, L_65, L_66, NULL);
		uint32_t L_67 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_67, ((int32_t)1353120894)))^((int32_t)-70531327)));
		goto IL_0011;
	}

IL_02f9:
	{
		AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* L_68 = (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		AdFailedToLoadEventArgs__ctor_m677629D332BC959DC0E52E6AF3AC941B09D0C139(L_68, NULL);
		V_1 = L_68;
		uint32_t L_69 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_69, ((int32_t)-1307977164)))^((int32_t)1082325649)));
		goto IL_0011;
	}

IL_0311:
	{
		return;
	}
	// Dead block : IL_0312: ldc.i4 1025152875

IL_031c:
	{
		int32_t L_70 = __this->____U7GSq5R56gqBZSf1TL01RmzVC0M_0;
		switch (L_70)
		{
			case 0:
			{
				goto IL_025e;
			}
			case 1:
			{
				goto IL_027f;
			}
			case 2:
			{
				goto IL_02ba;
			}
		}
	}
	{
		G_B2_0 = ((int32_t)748548897);
		goto IL_0011;
	}

IL_033d:
	{
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
// System.Void GoogleMobileAds.Api.UnifiedNativeAdEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAdEventArgs__ctor_m953317521D5672ABADF36224597D4B71CB8041E2 (UnifiedNativeAdEventArgs_t027E5898FF20392446C5174EEF67F1E13807E75D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.UnifiedNativeAd GoogleMobileAds.Api.UnifiedNativeAdEventArgs::get_nativeAd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* UnifiedNativeAdEventArgs_get_nativeAd_mD9C71FC3BAD97D5C864B4399B629B8A73ED9328D (UnifiedNativeAdEventArgs_t027E5898FF20392446C5174EEF67F1E13807E75D* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_0 = __this->____QJSzrqWtVEvcPLwxjXy3Sjcdo6p_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.UnifiedNativeAdEventArgs::set_nativeAd(GoogleMobileAds.Api.UnifiedNativeAd)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnifiedNativeAdEventArgs_set_nativeAd_mCA31CB3D3C1209679249779CD170AAB2F74D2D95 (UnifiedNativeAdEventArgs_t027E5898FF20392446C5174EEF67F1E13807E75D* __this, UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* ___value0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		UnifiedNativeAd_t1DCB1EBB99212ADA028CA6EC3D0457D68EDBC54B* L_0 = ___value0;
		__this->____QJSzrqWtVEvcPLwxjXy3Sjcdo6p_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____QJSzrqWtVEvcPLwxjXy3Sjcdo6p_1), (void*)L_0);
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
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_ubvpgYD1zXsuqsLEBibbVRhCL5C(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__ubvpgYD1zXsuqsLEBibbVRhCL5C_m70B8AB65FCBE968386C4457904941A62CC7B4360 (_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-1065740119);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-992191364)));
		V_4 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_00a1;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_00e1;
			}
			case 3:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_00e1;
	}

IL_0030:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1483051268), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&(&p1)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_5 = L_4->___x_2;
		float L_6;
		L_6 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_5, NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		NullCheck(L_2);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_2, L_3, L_7, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = V_0;
		String_t* L_9;
		L_9 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)2062235326), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&(&p1)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_11 = L_10->___y_3;
		float L_12;
		L_12 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_11, NULL);
		V_2 = L_12;
		String_t* L_13;
		L_13 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_8);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_8, L_9, L_13, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-1215831030)))^((int32_t)2133197010)));
		goto IL_000b;
	}

IL_00a1:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-467466688), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		float L_17 = (&p1)->____5Dfdtx8BXLdYk23FjVQo5znkyYk_1;
		float L_18 = (&p0)->____5Dfdtx8BXLdYk23FjVQo5znkyYk_1;
		V_3 = ((float)il2cpp_codegen_subtract(L_17, L_18));
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_15);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_15, L_16, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_20 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)-1677903920)))^((int32_t)-594543762)));
		goto IL_000b;
	}

IL_00e1:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = V_0;
		return L_21;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_sH531rPWYxNIpSPWc1e36q0vPC(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G,System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__sH531rPWYxNIpSPWc1e36q0vPC_m7D29807D9F75505B3F80BB634742EED60AE64A66 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p1, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p2, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_6 = NULL;
	uint32_t V_7 = 0;
	int32_t G_B2_0 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1966828092), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_3 = p0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__qaZ9ZcveJzC8SIiIORK6B4bZQhh_m3D20074D7C2C6C2D51684A10E94C33D920A2AFC4_inline(L_3, NULL);
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, L_2, L_4, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
	}

IL_001c:
	{
		G_B2_0 = ((int32_t)-1423247101);
	}

IL_0021:
	{
		int32_t L_5 = ((int32_t)(G_B2_0^((int32_t)-1822195001)));
		V_7 = L_5;
		switch (((int32_t)((uint32_t)(int32_t)L_5%(uint32_t)(int32_t)7)))
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_012f;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_00ae;
			}
			case 4:
			{
				goto IL_001c;
			}
			case 5:
			{
				goto IL_01a6;
			}
			case 6:
			{
				goto IL_00ec;
			}
		}
	}
	{
		goto IL_01a6;
	}

IL_0052:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_6 = p0;
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_7 = p1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8;
		L_8 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__L4hDCCbfmoPnkGfsKTB8VRqdVKyA_m3BCD1906CD1B4B34DCC118B241464D3FCB18D2B1(L_6, L_7, NULL);
		V_6 = L_8;
		uint32_t L_9 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)631795297)))^((int32_t)-428524010)));
		goto IL_0021;
	}

IL_006b:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)1326637256), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&(&p3)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_13 = L_12->___x_2;
		float L_14;
		L_14 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_13, NULL);
		V_4 = L_14;
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_4), NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_10, L_11, L_15, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_16 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)-100332223)))^((int32_t)1004574680)));
		goto IL_0021;
	}

IL_00ae:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)1909074627), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		String_t* L_19;
		L_19 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-754024814), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_17, L_18, L_19, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_0;
		String_t* L_21;
		L_21 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)1358289174), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_20, L_21, L_22, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		uint32_t L_23 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)-1913238809)))^((int32_t)2014554172)));
		goto IL_0021;
	}

IL_00ec:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)2062235326), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (&(&p3)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_27 = L_26->___y_3;
		float L_28;
		L_28 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_27, NULL);
		V_5 = L_28;
		String_t* L_29;
		L_29 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_5), NULL);
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, L_25, L_29, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_30 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)-1483845484)))^((int32_t)1958639391)));
		goto IL_0021;
	}

IL_012f:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_31, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_31;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1693546199), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (&(&p2)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_35 = L_34->___x_2;
		float L_36;
		L_36 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_35, NULL);
		V_2 = L_36;
		String_t* L_37;
		L_37 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_32);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_32, L_33, L_37, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = V_1;
		String_t* L_39;
		L_39 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)553383971), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (&(&p2)->____mrus0IsOU72OIoYVCC985NTmREh_0);
		float L_41 = L_40->___y_3;
		float L_42;
		L_42 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_41, NULL);
		V_3 = L_42;
		String_t* L_43;
		L_43 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_38);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_38, L_39, L_43, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_44 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)1897664683)))^((int32_t)-1501780365)));
		goto IL_0021;
	}

IL_01a6:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_45 = V_6;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-2051907508), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_0;
		NullCheck(L_45);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_45, L_46, L_47, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_48 = V_6;
		return L_48;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_L4hDCCbfmoPnkGfsKTB8VRqdVKyA(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G,System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__L4hDCCbfmoPnkGfsKTB8VRqdVKyA_m3BCD1906CD1B4B34DCC118B241464D3FCB18D2B1 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_1 = NULL;
	float V_2 = 0.0f;
	uint32_t V_3 = 0;
	int32_t G_B2_0 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)861666809);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)313160971)));
		V_3 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_0028;
			}
			case 2:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0028:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_2, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_1 = L_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-244857880), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		String_t* L_5;
		L_5 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1069439421), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_3, L_4, L_5, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_1;
		String_t* L_7;
		L_7 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)2115761555), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_8 = p0;
		NullCheck(L_8);
		float L_9;
		L_9 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eesP3ddQRTjMAScQVJzAg5XCkXg_m2EFC2EC198FDA8323212E65469EADD7619EF9084_inline(L_8, NULL);
		V_2 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_2), NULL);
		NullCheck(L_6);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_6, L_7, L_10, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_11 = V_3;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)759000663)))^((int32_t)125784547)));
		goto IL_000b;
	}

IL_007b:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-861237330), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_1;
		NullCheck(L_12);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_12, L_13, L_14, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = V_0;
		String_t* L_16;
		L_16 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)1759022215), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_17 = p1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18;
		L_18 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__HNeX8xYUuPjcCdzLWpg964jw5lb_mC67F263E292DEBFBFD318942553124CFB5882559(L_17, NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_15, L_16, L_18, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_0;
		return L_19;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_HNeX8xYUuPjcCdzLWpg964jw5lb(System.Collections.Generic.List`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__HNeX8xYUuPjcCdzLWpg964jw5lb_mC67F263E292DEBFBFD318942553124CFB5882559 (List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* V_1 = NULL;
	Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A V_2;
	memset((&V_2), 0, sizeof(V_2));
	uint32_t V_3 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		List_1_t337A202D9649681DE7186A7BE020428AD6BBC505* L_1 = p0;
		NullCheck(L_1);
		Enumerator_t60F1261C292DB84AAF244085431C21C59185FF9A L_2;
		L_2 = List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F(L_1, List_1_GetEnumerator_m5F0176985D41F14ED7DE22C3D61A4F08E2B2E72F_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c1:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0((&V_2), Enumerator_Dispose_m1FDA23E20D46F70A7BCB1C26FF9D67D32B0D19C0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_005a_1;
			}

IL_000f_1:
			{
				G_B3_0 = ((int32_t)86741060);
			}

IL_0014_1:
			{
				int32_t L_3 = ((int32_t)(G_B3_0^((int32_t)688820440)));
				V_3 = L_3;
				switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)7)))
				{
					case 0:
					{
						goto IL_00bf_1;
					}
					case 1:
					{
						goto IL_0099_1;
					}
					case 2:
					{
						goto IL_0041_1;
					}
					case 3:
					{
						goto IL_005a_1;
					}
					case 4:
					{
						goto IL_00ab_1;
					}
					case 5:
					{
						goto IL_0074_1;
					}
					case 6:
					{
						goto IL_000f_1;
					}
				}
			}
			{
				goto IL_00bf_1;
			}

IL_0041_1:
			{
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = V_0;
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_5 = V_1;
				NullCheck(L_5);
				String_t* L_6;
				L_6 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__qaZ9ZcveJzC8SIiIORK6B4bZQhh_m3D20074D7C2C6C2D51684A10E94C33D920A2AFC4_inline(L_5, NULL);
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_7 = V_1;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8;
				L_8 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__aaw7j80kphNUyg0VjzN1dhFvSZf_m99BBBF11CAD672A9D74AAAA3011A11A850B40FE9(L_7, NULL);
				NullCheck(L_4);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_4, L_6, L_8, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				G_B3_0 = ((int32_t)650389890);
				goto IL_0014_1;
			}

IL_005a_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C((&V_2), Enumerator_MoveNext_mEFA432AA137F274005613A56579EF47EA58B748C_RuntimeMethod_var);
				if (!L_9)
				{
					goto IL_006b_1;
				}
			}
			{
				int32_t L_10 = ((int32_t)86741060);
				G_B9_0 = L_10;
				G_B9_1 = L_10;
				goto IL_0071_1;
			}

IL_006b_1:
			{
				int32_t L_11 = ((int32_t)384904615);
				G_B9_0 = L_11;
				G_B9_1 = L_11;
			}

IL_0071_1:
			{
				G_B3_0 = G_B9_1;
				goto IL_0014_1;
			}

IL_0074_1:
			{
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_12 = V_1;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_13)
				{
					goto IL_0085_1;
				}
			}
			{
				int32_t L_14 = ((int32_t)-2077550433);
				G_B13_0 = L_14;
				G_B13_1 = L_14;
				goto IL_008b_1;
			}

IL_0085_1:
			{
				int32_t L_15 = ((int32_t)-842843630);
				G_B13_0 = L_15;
				G_B13_1 = L_15;
			}

IL_008b_1:
			{
				uint32_t L_16 = V_3;
				G_B3_0 = ((int32_t)(G_B13_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)889345545)))));
				goto IL_0014_1;
			}

IL_0099_1:
			{
				_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_17;
				L_17 = Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_inline((&V_2), Enumerator_get_Current_m7DA81734281FE402CD7BDAE892AA9BEB4638799B_RuntimeMethod_var);
				V_1 = L_17;
				G_B3_0 = ((int32_t)1868537173);
				goto IL_0014_1;
			}

IL_00ab_1:
			{
				goto IL_005a_1;
			}
			{
				uint32_t L_18 = V_3;
				G_B3_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-1388898275)))^((int32_t)-2068747571)));
				goto IL_0014_1;
			}

IL_00bf_1:
			{
				goto IL_00cf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cf:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_19 = V_0;
		return L_19;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_aaw7j80kphNUyg0VjzN1dhFvSZf(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__aaw7j80kphNUyg0VjzN1dhFvSZf_m99BBBF11CAD672A9D74AAAA3011A11A850B40FE9 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-125000304);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1344194666)));
		V_5 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)11))))
		{
			case 0:
			{
				goto IL_01bf;
			}
			case 1:
			{
				goto IL_00f3;
			}
			case 2:
			{
				goto IL_017f;
			}
			case 3:
			{
				goto IL_010d;
			}
			case 4:
			{
				goto IL_008f;
			}
			case 5:
			{
				goto IL_0075;
			}
			case 6:
			{
				goto IL_0164;
			}
			case 7:
			{
				goto IL_00ce;
			}
			case 8:
			{
				goto IL_01a6;
			}
			case 9:
			{
				goto IL_004d;
			}
			case 10:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_01bf;
	}

IL_004d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		NullCheck(L_2);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_2, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_5 = ((int32_t)706137255);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0069;
	}

IL_0063:
	{
		int32_t L_6 = ((int32_t)201820328);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0069:
	{
		uint32_t L_7 = V_5;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-717106794)))));
		goto IL_000b;
	}

IL_0075:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_8 = p0;
		NullCheck(L_8);
		_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 L_9;
		L_9 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__pPafBg5kh6SP4KDejfcHVivdJfx_mFC1243E9EAAB619598ADB4429D4E2AD9BE261286(L_8, NULL);
		V_2 = L_9;
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-344735293)))^((int32_t)1449312996)));
		goto IL_000b;
	}

IL_008f:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_12;
		L_12 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-193267008), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14;
		L_14 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__lKDlfYm9opJclAeCGai7qKPm2Zf_m74C96CB4C3B6FDD3CD7AD4A3F03728C3241736C8(L_13, NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_11, L_12, L_14, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_15 = V_0;
		String_t* L_16;
		L_16 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)-1270685183), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_1;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18;
		L_18 = _5D2WKOR9kwjeO2yFRv5RmDvCLvA__qnAG4EvLAZLJzGpmoHz3sWlK4hj_m536E1789810A280F4B39B18EC5F74C92276299D5(L_17, NULL);
		NullCheck(L_15);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_15, L_16, L_18, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		uint32_t L_19 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1280170414)))^((int32_t)-1961346075)));
		goto IL_000b;
	}

IL_00ce:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_1;
		NullCheck(L_20);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21;
		L_21 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_20, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_21, NULL);
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_22, NULL);
		V_4 = L_23;
		uint32_t L_24 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-1162273757)))^((int32_t)763234163)));
		goto IL_000b;
	}

IL_00f3:
	{
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* L_25 = p0;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		V_1 = L_26;
		uint32_t L_27 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)267989344)))^((int32_t)-1825882143)));
		goto IL_000b;
	}

IL_010d:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)296970044), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		float* L_30 = (&(&V_2)->____LluJji3lPXYMtLRNPb6DgWt0mKq_1);
		String_t* L_31;
		L_31 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_30, NULL);
		NullCheck(L_28);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_28, L_29, L_31, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_0;
		String_t* L_33;
		L_33 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)-1152580851), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		float* L_34 = (&(&V_2)->____QJMZoORUjKQAB8cT8KGzUOvdfeP_0);
		String_t* L_35;
		L_35 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_34, NULL);
		NullCheck(L_32);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_32, L_33, L_35, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		uint32_t L_36 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)1561992336)))^((int32_t)1904079151)));
		goto IL_000b;
	}

IL_0164:
	{
		float L_37 = (&V_4)->___a_3;
		V_3 = L_37;
		uint32_t L_38 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_38, ((int32_t)247048071)))^((int32_t)-496597234)));
		goto IL_000b;
	}

IL_017f:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_39 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_40;
		L_40 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-99590779), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_41;
		L_41 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_3), NULL);
		NullCheck(L_39);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_39, L_40, L_41, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		G_B2_0 = ((int32_t)-1058260877);
		goto IL_000b;
	}

IL_01a6:
	{
		V_3 = (-1.0f);
		uint32_t L_42 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_42, ((int32_t)1202115807)))^((int32_t)-1248950386)));
		goto IL_000b;
	}

IL_01bf:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_43 = V_0;
		return L_43;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_lKDlfYm9opJclAeCGai7qKPm2Zf(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__lKDlfYm9opJclAeCGai7qKPm2Zf_m74C96CB4C3B6FDD3CD7AD4A3F03728C3241736C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	uint32_t V_12 = 0;
	int32_t G_B2_0 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 G_B9_0;
	memset((&G_B9_0), 0, sizeof(G_B9_0));
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)509539915);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1284672678)));
		V_12 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)19))))
		{
			case 0:
			{
				goto IL_0278;
			}
			case 1:
			{
				goto IL_02d9;
			}
			case 2:
			{
				goto IL_01e5;
			}
			case 3:
			{
				goto IL_01c5;
			}
			case 4:
			{
				goto IL_0181;
			}
			case 5:
			{
				goto IL_0006;
			}
			case 6:
			{
				goto IL_0080;
			}
			case 7:
			{
				goto IL_0212;
			}
			case 8:
			{
				goto IL_036b;
			}
			case 9:
			{
				goto IL_00ec;
			}
			case 10:
			{
				goto IL_0304;
			}
			case 11:
			{
				goto IL_0148;
			}
			case 12:
			{
				goto IL_006d;
			}
			case 13:
			{
				goto IL_010f;
			}
			case 14:
			{
				goto IL_01a5;
			}
			case 15:
			{
				goto IL_0331;
			}
			case 16:
			{
				goto IL_0227;
			}
			case 17:
			{
				goto IL_024b;
			}
			case 18:
			{
				goto IL_034e;
			}
		}
	}
	{
		goto IL_036b;
	}

IL_006d:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		V_2 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00f9;
		}
	}
	{
		G_B2_0 = ((int32_t)681529578);
		goto IL_000b;
	}

IL_0080:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)1122080510), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		float L_6 = (&V_4)->___x_2;
		float L_7;
		L_7 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_6, NULL);
		V_8 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		NullCheck(L_4);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_4, L_5, L_8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = V_0;
		String_t* L_10;
		L_10 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)1501035835), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		float L_11 = (&V_4)->___y_3;
		float L_12 = V_6;
		float L_13;
		L_13 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(((float)il2cpp_codegen_add(L_11, L_12)), NULL);
		V_9 = L_13;
		String_t* L_14;
		L_14 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		NullCheck(L_9);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_9, L_10, L_14, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_15 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-614865628)))^((int32_t)-520937735)));
		goto IL_000b;
	}

IL_00ec:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = p0;
		NullCheck(L_16);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17;
		L_17 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_16, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		NullCheck(L_17);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_18;
		L_18 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_17, NULL);
		G_B9_0 = L_18;
		goto IL_0104;
	}

IL_00f9:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = p0;
		NullCheck(L_19);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_19, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_20);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_21;
		L_21 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_20, NULL);
		G_B9_0 = L_21;
	}

IL_0104:
	{
		V_3 = G_B9_0;
		G_B2_0 = ((int32_t)458250665);
		goto IL_000b;
	}

IL_010f:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_23;
		L_23 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-2138245302), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		float L_24 = V_7;
		float L_25;
		L_25 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_24, NULL);
		V_10 = L_25;
		String_t* L_26;
		L_26 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_10), NULL);
		NullCheck(L_22);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_22, L_23, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_27 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)1530803246)))^((int32_t)-661677164)));
		goto IL_000b;
	}

IL_0148:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)256387721), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		float L_30 = V_6;
		float L_31;
		L_31 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_30, NULL);
		V_11 = L_31;
		String_t* L_32;
		L_32 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_11), NULL);
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, L_29, L_32, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_33 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)1131241228)))^((int32_t)-1308158530)));
		goto IL_000b;
	}

IL_0181:
	{
		float L_34 = (&V_5)->___y_3;
		float L_35 = (&V_4)->___y_3;
		V_6 = ((float)il2cpp_codegen_subtract(L_34, L_35));
		uint32_t L_36 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_36, ((int32_t)134577258)))^((int32_t)-54345541)));
		goto IL_000b;
	}

IL_01a5:
	{
		bool L_37 = V_1;
		if (!L_37)
		{
			goto IL_01b0;
		}
	}
	{
		int32_t L_38 = ((int32_t)-940871431);
		G_B16_0 = L_38;
		G_B16_1 = L_38;
		goto IL_01b6;
	}

IL_01b0:
	{
		int32_t L_39 = ((int32_t)-320862926);
		G_B16_0 = L_39;
		G_B16_1 = L_39;
	}

IL_01b6:
	{
		uint32_t L_40 = V_12;
		G_B2_0 = ((int32_t)(G_B16_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)-553060233)))));
		goto IL_000b;
	}

IL_01c5:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = p0;
		NullCheck(L_41);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_42;
		L_42 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_41, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_43;
		uint32_t L_44 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)-182211404)))^((int32_t)294866257)));
		goto IL_000b;
	}

IL_01e5:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_45 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_46;
		L_46 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-692552242), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		String_t* L_47;
		L_47 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)87514635), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		NullCheck(L_45);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_45, L_46, L_47, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_48 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)-2037979306)))^((int32_t)892762045)));
		goto IL_000b;
	}

IL_0212:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = V_0;
		return L_49;
	}
	// Dead block : IL_0214: ldloc.s V12

IL_0227:
	{
		float L_50 = (&V_5)->___x_2;
		float L_51 = (&V_4)->___x_2;
		V_7 = ((float)il2cpp_codegen_subtract(L_50, L_51));
		uint32_t L_52 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_52, ((int32_t)769054650)))^((int32_t)-192749456)));
		goto IL_000b;
	}

IL_024b:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_53 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_54;
		L_54 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)256387721), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		String_t* L_55;
		L_55 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-1875727784), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_53);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_53, L_54, L_55, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_56 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_56, ((int32_t)1052124260)))^((int32_t)-92587346)));
		goto IL_000b;
	}

IL_0278:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_57 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_58;
		L_58 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)1122080510), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		String_t* L_59;
		L_59 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)1382719601), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_57);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_57, L_58, L_59, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_60 = V_0;
		String_t* L_61;
		L_61 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)1501035835), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		String_t* L_62;
		L_62 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)1382719601), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_60);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_60, L_61, L_62, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_63 = V_0;
		String_t* L_64;
		L_64 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)1515351951), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		String_t* L_65;
		L_65 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)-1034476519), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		NullCheck(L_63);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_63, L_64, L_65, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_66 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_66, ((int32_t)588364998)))^((int32_t)1178522819)));
		goto IL_000b;
	}

IL_02d9:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = p0;
		NullCheck(L_67);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_68;
		L_68 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_67, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_69;
		L_69 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_68, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_69)
		{
			goto IL_02ef;
		}
	}
	{
		int32_t L_70 = ((int32_t)-356273245);
		G_B27_0 = L_70;
		G_B27_1 = L_70;
		goto IL_02f5;
	}

IL_02ef:
	{
		int32_t L_71 = ((int32_t)-353418071);
		G_B27_0 = L_71;
		G_B27_1 = L_71;
	}

IL_02f5:
	{
		uint32_t L_72 = V_12;
		G_B2_0 = ((int32_t)(G_B27_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_72, ((int32_t)1429309051)))));
		goto IL_000b;
	}

IL_0304:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_74;
		L_74 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-61974058), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_75;
		L_75 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-1940579121), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		NullCheck(L_73);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_73, L_74, L_75, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_76 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_76, ((int32_t)1252534633)))^((int32_t)-1407006307)));
		goto IL_000b;
	}

IL_0331:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = p0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_79 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Utils_GetBoundsMin_mD96D89E8C4E9FF8E93927B9D7FC214F0C249F352(L_77, L_78, L_79, NULL);
		V_4 = L_80;
		uint32_t L_81 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_81, ((int32_t)609445207)))^((int32_t)-265497004)));
		goto IL_000b;
	}

IL_034e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = p0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_83 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_84 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Utils_GetBoundsMax_m82F2CB62C5ACC8841A2A1E87A484C0451EF1755B(L_82, L_83, L_84, NULL);
		V_5 = L_85;
		uint32_t L_86 = V_12;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_86, ((int32_t)1494455444)))^((int32_t)-562961511)));
		goto IL_000b;
	}

IL_036b:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_87 = V_0;
		return L_87;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> _1vxD40oOUsRFcyIsYSdDwOmD5AgA._5D2WKOR9kwjeO2yFRv5RmDvCLvA::_qnAG4EvLAZLJzGpmoHz3sWlK4hj(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* _5D2WKOR9kwjeO2yFRv5RmDvCLvA__qnAG4EvLAZLJzGpmoHz3sWlK4hj_m536E1789810A280F4B39B18EC5F74C92276299D5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	bool V_1 = false;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_2 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	uint32_t V_10 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B25_1 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-1007053120);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1325859279)));
		V_10 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)20))))
		{
			case 0:
			{
				goto IL_0131;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_029d;
			}
			case 3:
			{
				goto IL_0221;
			}
			case 4:
			{
				goto IL_01b7;
			}
			case 5:
			{
				goto IL_0284;
			}
			case 6:
			{
				goto IL_0365;
			}
			case 7:
			{
				goto IL_0301;
			}
			case 8:
			{
				goto IL_0104;
			}
			case 9:
			{
				goto IL_01fb;
			}
			case 10:
			{
				goto IL_00de;
			}
			case 11:
			{
				goto IL_03ac;
			}
			case 12:
			{
				goto IL_0312;
			}
			case 13:
			{
				goto IL_0006;
			}
			case 14:
			{
				goto IL_0194;
			}
			case 15:
			{
				goto IL_02d6;
			}
			case 16:
			{
				goto IL_017a;
			}
			case 17:
			{
				goto IL_0231;
			}
			case 18:
			{
				goto IL_0091;
			}
			case 19:
			{
				goto IL_01db;
			}
		}
	}
	{
		goto IL_03ac;
	}

IL_0071:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = p0;
		NullCheck(L_2);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_2, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		uint32_t L_5 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)1646753414)))^((int32_t)-866761080)));
		goto IL_000b;
	}

IL_0091:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = p0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_8 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Utils_GetBoundsMin_mD96D89E8C4E9FF8E93927B9D7FC214F0C249F352(L_6, L_7, L_8, NULL);
		V_4 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = p0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Utils_GetBoundsMax_m82F2CB62C5ACC8841A2A1E87A484C0451EF1755B(L_10, L_11, L_12, NULL);
		V_5 = L_13;
		int32_t L_14;
		L_14 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_15 = (&V_5)->___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_16;
		L_16 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_14), L_15, NULL);
		float L_17 = (&V_4)->___x_2;
		float L_18;
		L_18 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_17, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(L_16, L_18));
		uint32_t L_19 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1205520006)))^((int32_t)2025339559)));
		goto IL_000b;
	}

IL_00de:
	{
		float L_20 = V_6;
		if ((((float)L_20) <= ((float)(0.0f))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_21 = ((int32_t)-772203686);
		G_B9_0 = L_21;
		G_B9_1 = L_21;
		goto IL_00f5;
	}

IL_00ef:
	{
		int32_t L_22 = ((int32_t)-1395773832);
		G_B9_0 = L_22;
		G_B9_1 = L_22;
	}

IL_00f5:
	{
		uint32_t L_23 = V_10;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_23, ((int32_t)484901639)))));
		goto IL_000b;
	}

IL_0104:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)648189633), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		String_t* L_26;
		L_26 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-1728006616), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, L_25, L_26, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_27 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)622123838)))^((int32_t)-1603563445)));
		goto IL_000b;
	}

IL_0131:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_29;
		L_29 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)256387721), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		String_t* L_30;
		L_30 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-1875727784), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_28);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_28, L_29, L_30, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_0;
		String_t* L_32;
		L_32 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-61974058), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_33;
		L_33 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1146982413), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, L_32, L_33, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34 = V_0;
		return L_34;
	}
	// Dead block : IL_0167: ldloc.s V10

IL_017a:
	{
		V_7 = (0.0f);
		uint32_t L_35 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)940044754)))^((int32_t)1280050137)));
		goto IL_000b;
	}

IL_0194:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = p0;
		NullCheck(L_36);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_37;
		L_37 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_36, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		NullCheck(L_37);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_38;
		L_38 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_37, NULL);
		G_B16_0 = L_38;
		goto IL_01ac;
	}

IL_01a1:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = p0;
		NullCheck(L_39);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_40;
		L_40 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_39, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_40);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_41;
		L_41 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_40, NULL);
		G_B16_0 = L_41;
	}

IL_01ac:
	{
		V_3 = G_B16_0;
		G_B2_0 = ((int32_t)-686702821);
		goto IL_000b;
	}

IL_01b7:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_43;
		L_43 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)1398939157), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_44;
		L_44 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)1382719601), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_42);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_42, L_43, L_44, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		G_B2_0 = ((int32_t)-1434245615);
		goto IL_000b;
	}

IL_01db:
	{
		bool L_45 = V_1;
		if (L_45)
		{
			goto IL_01e6;
		}
	}
	{
		int32_t L_46 = ((int32_t)1075581437);
		G_B21_0 = L_46;
		G_B21_1 = L_46;
		goto IL_01ec;
	}

IL_01e6:
	{
		int32_t L_47 = ((int32_t)1147812473);
		G_B21_0 = L_47;
		G_B21_1 = L_47;
	}

IL_01ec:
	{
		uint32_t L_48 = V_10;
		G_B2_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_48, ((int32_t)911502673)))));
		goto IL_000b;
	}

IL_01fb:
	{
		float L_49 = V_7;
		if ((!(((float)L_49) > ((float)(0.0f)))))
		{
			goto IL_020c;
		}
	}
	{
		int32_t L_50 = ((int32_t)-884381717);
		G_B25_0 = L_50;
		G_B25_1 = L_50;
		goto IL_0212;
	}

IL_020c:
	{
		int32_t L_51 = ((int32_t)-1816844168);
		G_B25_0 = L_51;
		G_B25_1 = L_51;
	}

IL_0212:
	{
		uint32_t L_52 = V_10;
		G_B2_0 = ((int32_t)(G_B25_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_52, ((int32_t)1390812386)))));
		goto IL_000b;
	}

IL_0221:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_53;
		L_53 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		V_2 = L_53;
		G_B2_0 = ((int32_t)-49817452);
		goto IL_000b;
	}

IL_0231:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_54 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_55;
		L_55 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-1764762144), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		float L_56 = V_7;
		float L_57;
		L_57 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_56, NULL);
		V_9 = L_57;
		String_t* L_58;
		L_58 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_9), NULL);
		NullCheck(L_54);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_54, L_55, L_58, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_59 = V_0;
		String_t* L_60;
		L_60 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-61974058), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_61;
		L_61 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)-1616003207), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		NullCheck(L_59);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_59, L_60, L_61, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_62 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_62, ((int32_t)-1194861808)))^((int32_t)-310815206)));
		goto IL_000b;
	}

IL_0284:
	{
		bool L_63 = V_1;
		if (!L_63)
		{
			goto IL_01a1;
		}
	}
	{
		uint32_t L_64 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_64, ((int32_t)461739113)))^((int32_t)2017093090)));
		goto IL_000b;
	}

IL_029d:
	{
		int32_t L_65;
		L_65 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_66 = (&V_5)->___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_67;
		L_67 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_65), L_66, NULL);
		float L_68 = (&V_4)->___y_3;
		float L_69;
		L_69 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_68, NULL);
		V_7 = ((float)il2cpp_codegen_subtract(L_67, L_69));
		uint32_t L_70 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_70, ((int32_t)1928855048)))^((int32_t)975662591)));
		goto IL_000b;
	}

IL_02d6:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = p0;
		NullCheck(L_71);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_72;
		L_72 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_71, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_73)
		{
			goto IL_02ec;
		}
	}
	{
		int32_t L_74 = ((int32_t)-1458856168);
		G_B34_0 = L_74;
		G_B34_1 = L_74;
		goto IL_02f2;
	}

IL_02ec:
	{
		int32_t L_75 = ((int32_t)-165039197);
		G_B34_0 = L_75;
		G_B34_1 = L_75;
	}

IL_02f2:
	{
		uint32_t L_76 = V_10;
		G_B2_0 = ((int32_t)(G_B34_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_76, ((int32_t)947159686)))));
		goto IL_000b;
	}

IL_0301:
	{
		V_6 = (0.0f);
		G_B2_0 = ((int32_t)-159737215);
		goto IL_000b;
	}

IL_0312:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_77 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_78;
		L_78 = U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9(((int32_t)2062235326), U3CModuleU3E_U206EU202AU206DU206AU200CU206FU200EU202DU206EU202AU200CU206BU206AU206FU206BU206DU206DU202AU206BU206CU202BU200DU206CU206CU202DU200FU200BU200BU206CU202CU200DU202BU206EU206BU200DU200CU200CU200BU206CU200EU202E_TisString_t_m3DA65E26C9A40204AC4DFB2B75121DC822D0BCE9_RuntimeMethod_var);
		String_t* L_79;
		L_79 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)-1728006616), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		NullCheck(L_77);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_77, L_78, L_79, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_80 = V_0;
		String_t* L_81;
		L_81 = U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868(((int32_t)-187293493), U3CModuleU3E_U202BU200EU206BU202BU206BU200BU206EU200EU206EU206FU202AU202AU202CU200FU200DU206DU206BU206FU202AU200DU200EU200EU206DU206BU200CU200EU206BU206CU200FU206BU200BU200BU202BU200FU206EU206FU200EU202EU200DU206CU202E_TisString_t_m1397DC0A53EF4461667593C97A0E685861A6B868_RuntimeMethod_var);
		float L_82 = V_6;
		float L_83;
		L_83 = Utils_ConvertPxToDp_m20FFD780C617A10429A908B9F285F628DBF21C23(L_82, NULL);
		V_8 = L_83;
		String_t* L_84;
		L_84 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_8), NULL);
		NullCheck(L_80);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_80, L_81, L_84, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_85 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_85, ((int32_t)-1191947904)))^((int32_t)-1741551052)));
		goto IL_000b;
	}

IL_0365:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_86 = V_0;
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_87;
		L_87 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)988700471), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		String_t* L_88;
		L_88 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-1876090531), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		NullCheck(L_86);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_86, L_87, L_88, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_89 = V_0;
		String_t* L_90;
		L_90 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)1515351951), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		String_t* L_91;
		L_91 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-1875727784), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		NullCheck(L_89);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_89, L_90, L_91, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		uint32_t L_92 = V_10;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_92, ((int32_t)1648001414)))^((int32_t)-835704691)));
		goto IL_000b;
	}

IL_03ac:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_93 = V_0;
		return L_93;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__ctor_m6A07FBEFB7C051475BE79F8141CF70F24EE32F37 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_w2Sy2lfiB69iyGEuBghZnzCwUbf(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__w2Sy2lfiB69iyGEuBghZnzCwUbf_m1135CAAD69F4F0820BD04A832BEEFCD4B1DC12F3 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____lsSp5wNkEu7AwywXobwJZ5buadN_13;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)1235482050);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)2087173141)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____lsSp5wNkEu7AwywXobwJZ5buadN_13);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = p0;
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		G_B2_0 = ((int32_t)336112935);
		goto IL_000c;
	}

IL_004f:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)-360763718);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)-424672504);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-880507620)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_KfgJOMQzLermsdLQsA7gVmXmjvA(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__KfgJOMQzLermsdLQsA7gVmXmjvA_mD330BFAEC34AFA53C251125B011A0543F6350DF2 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->____lsSp5wNkEu7AwywXobwJZ5buadN_13;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)859896301);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)462765735)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_007f;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)800042443);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_3 = (&__this->____lsSp5wNkEu7AwywXobwJZ5buadN_13);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = p0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_3, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_6, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)629509452)))^((int32_t)-2047489079)));
		goto IL_000c;
	}

IL_0062:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_10 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_10) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_11))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = ((int32_t)1949634884);
		G_B9_0 = L_12;
		G_B9_1 = L_12;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_13 = ((int32_t)1076716797);
		G_B9_0 = L_13;
		G_B9_1 = L_13;
	}

IL_0074:
	{
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1835400056)))));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_Unu45vxwiu8h5C3O4Vh8htG7USg(System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__Unu45vxwiu8h5C3O4Vh8htG7USg_m34D7BD722AFBF85DD8D84AD7E9F6EF03C368B749 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* V_0 = NULL;
	EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_0 = __this->____csO422E4cFHyANFhfzoIa6LH7D8_14;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)67273411);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)101500507)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_007f;
	}

IL_0031:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)1679969302);
		goto IL_000c;
	}

IL_003a:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_3 = V_0;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_4 = V_1;
		if ((((RuntimeObject*)(EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)L_3) == ((RuntimeObject*)(EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)L_4)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_5 = ((int32_t)1391521462);
		G_B8_0 = L_5;
		G_B8_1 = L_5;
		goto IL_004c;
	}

IL_0046:
	{
		int32_t L_6 = ((int32_t)1914661952);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
	}

IL_004c:
	{
		uint32_t L_7 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)1034834253)))));
		goto IL_000c;
	}

IL_0057:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0** L_8 = (&__this->____csO422E4cFHyANFhfzoIa6LH7D8_14);
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_9 = V_1;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_10 = p0;
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_12 = V_0;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_13;
		L_13 = InterlockedCompareExchangeImpl<EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*>(L_8, ((EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)Castclass((RuntimeObject*)L_11, EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var)), L_12);
		V_0 = L_13;
		uint32_t L_14 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1546081971)))^((int32_t)1845240901)));
		goto IL_000c;
	}

IL_007f:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_N5O40lQiCfUGzEcufZBeSkS4ypx(System.EventHandler`1<_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__N5O40lQiCfUGzEcufZBeSkS4ypx_mF950960F4147E9BFE6405478CA489FA6F77D22AD (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* V_0 = NULL;
	EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_0 = __this->____csO422E4cFHyANFhfzoIa6LH7D8_14;
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-2094223871);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-804046396)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)4)))
		{
			case 0:
			{
				goto IL_0007;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_002d:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_2 = V_0;
		V_1 = L_2;
		G_B2_0 = ((int32_t)-2142927854);
		goto IL_000c;
	}

IL_0036:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0** L_3 = (&__this->____csO422E4cFHyANFhfzoIa6LH7D8_14);
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_4 = V_1;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_5 = p0;
		Delegate_t* L_6;
		L_6 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_4, L_5, NULL);
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_7 = V_0;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_8;
		L_8 = InterlockedCompareExchangeImpl<EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*>(L_3, ((EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)Castclass((RuntimeObject*)L_6, EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0_il2cpp_TypeInfo_var)), L_7);
		V_0 = L_8;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_9 = V_0;
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_10 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)L_9) == ((RuntimeObject*)(EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0*)L_10))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ((int32_t)1566397419);
		G_B8_0 = L_11;
		G_B8_1 = L_11;
		goto IL_0061;
	}

IL_005b:
	{
		int32_t L_12 = ((int32_t)1477652101);
		G_B8_0 = L_12;
		G_B8_1 = L_12;
	}

IL_0061:
	{
		uint32_t L_13 = V_2;
		G_B2_0 = ((int32_t)(G_B8_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)-1240439738)))));
		goto IL_000c;
	}

IL_006c:
	{
		return;
	}
}
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_eesP3ddQRTjMAScQVJzAg5XCkXg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eesP3ddQRTjMAScQVJzAg5XCkXg_m2EFC2EC198FDA8323212E65469EADD7619EF9084 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		float L_0 = __this->____BImyrxVoGQ3rXfqyfpjwy9yEPFF_6;
		return L_0;
	}
}
// System.String _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_qaZ9ZcveJzC8SIiIORK6B4bZQhh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__qaZ9ZcveJzC8SIiIORK6B4bZQhh_m3D20074D7C2C6C2D51684A10E94C33D920A2AFC4 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		String_t* L_0 = __this->____CVxzVJm7f4wvaR76XDeLdGMD6r_10;
		return L_0;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_Start_mCF8BF47E746EE3051C27BE7BA78D651835B1C46A (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		__this->____kgt7eBuTCnVrim8HseCokmUclDK_7 = (0.0f);
		__this->____Gd8dqsuZTLM9iRRvespGXox49Nj_8 = (bool)0;
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_eA6IRxzTs3fpotROpQjU9UsL6bD(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eA6IRxzTs3fpotROpQjU9UsL6bD_m5262C5AFDB5C36200A20E11E8264B82F30A9D612 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, String_t* p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_0 = NULL;
	uint32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0168;
		}
	}

IL_0011:
	{
		G_B2_0 = ((int32_t)1974375362);
	}

IL_0016:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)1663257615)));
		V_1 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_0125;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_0168;
			}
			case 4:
			{
				goto IL_00a1;
			}
			case 5:
			{
				goto IL_0180;
			}
			case 6:
			{
				goto IL_00df;
			}
			case 7:
			{
				goto IL_007d;
			}
			case 8:
			{
				goto IL_0011;
			}
			case 9:
			{
				goto IL_013e;
			}
			case 10:
			{
				goto IL_010b;
			}
			case 11:
			{
				goto IL_019d;
			}
		}
	}
	{
		goto IL_019d;
	}

IL_005b:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1426218582);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0072;
	}

IL_006c:
	{
		int32_t L_6 = ((int32_t)-1274982040);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0072:
	{
		uint32_t L_7 = V_1;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)-380364132)))));
		goto IL_0016;
	}

IL_007d:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_8 = V_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = Renderer_get_isVisible_mBCDDEB0EF27442FD1D910CD26754135B677B8251(L_8, NULL);
		if (!L_9)
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_10 = ((int32_t)2046180270);
		G_B11_0 = L_10;
		G_B11_1 = L_10;
		goto IL_0093;
	}

IL_008d:
	{
		int32_t L_11 = ((int32_t)500603631);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
	}

IL_0093:
	{
		uint32_t L_12 = V_1;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1595200931)))));
		goto IL_0016;
	}

IL_00a1:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_13;
		L_13 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-1456572419), U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, L_13, (0.0f), (0.100000001f), NULL);
		uint32_t L_14 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)8862116)))^((int32_t)124805890)));
		goto IL_0016;
	}

IL_00cd:
	{
		uint32_t L_15 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)-1267412436)))^((int32_t)1498309240)));
		goto IL_0016;
	}

IL_00df:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_16;
		L_16 = U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6(((int32_t)298109000), U3CModuleU3E_U206BU202CU206DU206AU200BU200FU206FU202CU202EU202BU206CU206CU206EU206EU200CU200FU206BU200CU206EU206BU202EU200DU200BU202AU202EU202BU200EU200EU206DU206EU200BU200BU206CU200BU206AU200DU206BU206DU206EU206EU202E_TisString_t_m6FFF4A2064208E0F6C0B677CF76004C04E988EC6_RuntimeMethod_var);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, L_16, (0.0f), (0.100000001f), NULL);
		uint32_t L_17 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)1267962718)))^((int32_t)-2090659776)));
		goto IL_0016;
	}

IL_010b:
	{
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var)));
		String_t* L_18;
		L_18 = U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797(((int32_t)-2098747305), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CModuleU3E_U202EU202EU206DU206BU200FU206EU200BU202CU202BU206DU206EU202DU206EU206BU206EU200FU202BU200FU202EU200FU200EU206AU206DU202AU202AU206DU200BU200BU202AU202DU200FU206FU202DU206FU200FU206FU200CU200BU206BU200EU202E_TisString_t_mE108C9664FDA57AD4650BE19B2618E7C9963D797_RuntimeMethod_var)));
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_19 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_19);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eA6IRxzTs3fpotROpQjU9UsL6bD_m5262C5AFDB5C36200A20E11E8264B82F30A9D612_RuntimeMethod_var)));
	}
	// Dead block : IL_011b: ldc.i4 1372260916

IL_0125:
	{
		__this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11 = (bool)1;
		uint32_t L_20 = V_1;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)890548350)))^((int32_t)120026382)));
		goto IL_0016;
	}

IL_013e:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_21;
		L_21 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_23 = ((int32_t)-1373121375);
		G_B21_0 = L_23;
		G_B21_1 = L_23;
		goto IL_015a;
	}

IL_0154:
	{
		int32_t L_24 = ((int32_t)-403695577);
		G_B21_0 = L_24;
		G_B21_1 = L_24;
	}

IL_015a:
	{
		uint32_t L_25 = V_1;
		G_B2_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)-406935934)))));
		goto IL_0016;
	}

IL_0168:
	{
		String_t* L_26 = p0;
		__this->____CVxzVJm7f4wvaR76XDeLdGMD6r_10 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____CVxzVJm7f4wvaR76XDeLdGMD6r_10), (void*)L_26);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27;
		L_27 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		V_0 = L_27;
		G_B2_0 = ((int32_t)87343829);
		goto IL_0016;
	}

IL_0180:
	{
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_28 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_30 = ((int32_t)1027315449);
		G_B26_0 = L_30;
		G_B26_1 = L_30;
		goto IL_0197;
	}

IL_0191:
	{
		int32_t L_31 = ((int32_t)595507220);
		G_B26_0 = L_31;
		G_B26_1 = L_31;
	}

IL_0197:
	{
		G_B2_0 = G_B26_1;
		goto IL_0016;
	}

IL_019d:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_Update_mB709FCCD45FAB0E5CCEB49D06B0022BAABE2B8F1 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B38_1 = 0;
	{
		float L_0 = __this->____kgt7eBuTCnVrim8HseCokmUclDK_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_2 = __this->____kgt7eBuTCnVrim8HseCokmUclDK_7;
		__this->____kgt7eBuTCnVrim8HseCokmUclDK_7 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), (0.100000001f)))));
	}

IL_001f:
	{
		G_B2_0 = ((int32_t)595595663);
	}

IL_0024:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)705167613)));
		V_4 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)19))))
		{
			case 0:
			{
				goto IL_01ca;
			}
			case 1:
			{
				goto IL_0247;
			}
			case 2:
			{
				goto IL_0258;
			}
			case 3:
			{
				goto IL_014b;
			}
			case 4:
			{
				goto IL_029e;
			}
			case 5:
			{
				goto IL_0226;
			}
			case 6:
			{
				goto IL_001f;
			}
			case 7:
			{
				goto IL_0115;
			}
			case 8:
			{
				goto IL_02bc;
			}
			case 9:
			{
				goto IL_020b;
			}
			case 10:
			{
				goto IL_00a9;
			}
			case 11:
			{
				goto IL_0279;
			}
			case 12:
			{
				goto IL_00ce;
			}
			case 13:
			{
				goto IL_01a7;
			}
			case 14:
			{
				goto IL_0182;
			}
			case 15:
			{
				goto IL_012f;
			}
			case 16:
			{
				goto IL_0086;
			}
			case 17:
			{
				goto IL_01e9;
			}
			case 18:
			{
				goto IL_00ee;
			}
		}
	}
	{
		goto IL_02bc;
	}

IL_0086:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		int32_t L_5;
		L_5 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__TPkB7q9Bn6qviPHF0dOgADnxQ8V_m75AB446EFAAA10A02C46D7953D8B0CB1F5810CDB(__this, L_4, NULL);
		G_B6_0 = L_5;
		goto IL_009e;
	}

IL_0093:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		int32_t L_7;
		L_7 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__fBcpY7SMOo1hOGIcWOWG1g4B5IO_mA9184C4D752266499769D3F184C106A8FB171F0C(__this, L_6, NULL);
		G_B6_0 = L_7;
	}

IL_009e:
	{
		V_0 = G_B6_0;
		G_B2_0 = ((int32_t)1773840451);
		goto IL_0024;
	}

IL_00a9:
	{
		float L_8;
		L_8 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		(&V_3)->____5Dfdtx8BXLdYk23FjVQo5znkyYk_1 = ((float)il2cpp_codegen_multiply(L_8, (1000.0f)));
		uint32_t L_9 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-1137399093)))^((int32_t)334896530)));
		goto IL_0024;
	}

IL_00ce:
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_10 = __this->____7bLTDbosJLwbDiTxavwPFxzkMFp_9;
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_11 = V_3;
		_EZUY2sDrZ60wiKIRbwJMVaAWZ5G__QvoqGLdqICUWf3DBF66aj6PYrhe_m91B5C95E4F5B8CAB07A618856F683C5861F7F173(__this, L_10, L_11, NULL);
		uint32_t L_12 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-435037695)))^((int32_t)-180031321)));
		goto IL_0024;
	}

IL_00ee:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		(&V_3)->____mrus0IsOU72OIoYVCC985NTmREh_0 = L_13;
		uint32_t L_14 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)-655423436)))^((int32_t)-613550840)));
		goto IL_0024;
	}

IL_0115:
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_15 = V_1;
		__this->____7bLTDbosJLwbDiTxavwPFxzkMFp_9 = L_15;
		uint32_t L_16 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)1566574563)))^((int32_t)-1765346006)));
		goto IL_0024;
	}

IL_012f:
	{
		bool L_17;
		L_17 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (L_17)
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_18 = ((int32_t)1475351910);
		G_B14_0 = L_18;
		G_B14_1 = L_18;
		goto IL_0145;
	}

IL_013f:
	{
		int32_t L_19 = ((int32_t)1450087093);
		G_B14_0 = L_19;
		G_B14_1 = L_19;
	}

IL_0145:
	{
		G_B2_0 = G_B14_1;
		goto IL_0024;
	}

IL_014b:
	{
		float L_20 = __this->____kgt7eBuTCnVrim8HseCokmUclDK_7;
		__this->____BImyrxVoGQ3rXfqyfpjwy9yEPFF_6 = ((float)((1.0f)/L_20));
		bool L_21;
		L_21 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (L_21)
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_22 = ((int32_t)1762852069);
		G_B18_0 = L_22;
		G_B18_1 = L_22;
		goto IL_0173;
	}

IL_016d:
	{
		int32_t L_23 = ((int32_t)1234236145);
		G_B18_0 = L_23;
		G_B18_1 = L_23;
	}

IL_0173:
	{
		uint32_t L_24 = V_4;
		G_B2_0 = ((int32_t)(G_B18_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)1266005156)))));
		goto IL_0024;
	}

IL_0182:
	{
		bool L_25 = __this->____0Qf1T6GfZbknqUyBiPavTMIPFdE_12;
		if (L_25)
		{
			goto IL_0192;
		}
	}
	{
		int32_t L_26 = ((int32_t)-1734665871);
		G_B22_0 = L_26;
		G_B22_1 = L_26;
		goto IL_0198;
	}

IL_0192:
	{
		int32_t L_27 = ((int32_t)-221273206);
		G_B22_0 = L_27;
		G_B22_1 = L_27;
	}

IL_0198:
	{
		uint32_t L_28 = V_4;
		G_B2_0 = ((int32_t)(G_B22_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)1358642449)))));
		goto IL_0024;
	}

IL_01a7:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		int32_t L_30;
		L_30 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__TPkB7q9Bn6qviPHF0dOgADnxQ8V_m75AB446EFAAA10A02C46D7953D8B0CB1F5810CDB(__this, L_29, NULL);
		G_B25_0 = L_30;
		goto IL_01bf;
	}

IL_01b4:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		int32_t L_32;
		L_32 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__fBcpY7SMOo1hOGIcWOWG1g4B5IO_mA9184C4D752266499769D3F184C106A8FB171F0C(__this, L_31, NULL);
		G_B25_0 = L_32;
	}

IL_01bf:
	{
		V_2 = G_B25_0;
		G_B2_0 = ((int32_t)79286459);
		goto IL_0024;
	}

IL_01ca:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		(&V_1)->____mrus0IsOU72OIoYVCC985NTmREh_0 = L_33;
		uint32_t L_34 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)-173669962)))^((int32_t)126734305)));
		goto IL_0024;
	}

IL_01e9:
	{
		__this->____0Qf1T6GfZbknqUyBiPavTMIPFdE_12 = (bool)1;
		il2cpp_codegen_initobj((&V_1), sizeof(_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73));
		uint32_t L_35 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1972591606)))^((int32_t)515331388)));
		goto IL_0024;
	}

IL_020b:
	{
		bool L_36 = __this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
		if (!L_36)
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_37 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)-1616641943)))^((int32_t)2028309640)));
		goto IL_0024;
	}

IL_0226:
	{
		int32_t L_38 = V_2;
		if ((!(((uint32_t)L_38) == ((uint32_t)2))))
		{
			goto IL_0232;
		}
	}
	{
		int32_t L_39 = ((int32_t)316428272);
		G_B33_0 = L_39;
		G_B33_1 = L_39;
		goto IL_0238;
	}

IL_0232:
	{
		int32_t L_40 = ((int32_t)1050422640);
		G_B33_0 = L_40;
		G_B33_1 = L_40;
	}

IL_0238:
	{
		uint32_t L_41 = V_4;
		G_B2_0 = ((int32_t)(G_B33_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_41, ((int32_t)1966749431)))));
		goto IL_0024;
	}

IL_0247:
	{
		__this->____0Qf1T6GfZbknqUyBiPavTMIPFdE_12 = (bool)0;
		G_B2_0 = ((int32_t)1475351910);
		goto IL_0024;
	}

IL_0258:
	{
		int32_t L_42 = V_0;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_0264;
		}
	}
	{
		int32_t L_43 = ((int32_t)-1748156574);
		G_B38_0 = L_43;
		G_B38_1 = L_43;
		goto IL_026a;
	}

IL_0264:
	{
		int32_t L_44 = ((int32_t)-550711235);
		G_B38_0 = L_44;
		G_B38_1 = L_44;
	}

IL_026a:
	{
		uint32_t L_45 = V_4;
		G_B2_0 = ((int32_t)(G_B38_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)-1942705128)))));
		goto IL_0024;
	}

IL_0279:
	{
		float L_46;
		L_46 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		(&V_1)->____5Dfdtx8BXLdYk23FjVQo5znkyYk_1 = ((float)il2cpp_codegen_multiply(L_46, (1000.0f)));
		uint32_t L_47 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_47, ((int32_t)2001604994)))^((int32_t)1412589244)));
		goto IL_0024;
	}

IL_029e:
	{
		bool L_48 = __this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
		if (!L_48)
		{
			goto IL_0093;
		}
	}
	{
		uint32_t L_49 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_49, ((int32_t)-200618342)))^((int32_t)912324245)));
		goto IL_0024;
	}

IL_02bc:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_OnDestroy_m8D0DC7AC4F20C42F8F0C0C02DFFE02D0152D103E (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::OnBecameVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_OnBecameVisible_m8451D3A04993E79006141C83AF5D9E8158E58F35 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	{
		bool L_0 = __this->____Gd8dqsuZTLM9iRRvespGXox49Nj_8;
		if (L_0)
		{
			goto IL_0053;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)-520789730);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1904479327)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)3)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0053;
	}

IL_002a:
	{
		il2cpp_codegen_runtime_class_init_inline(U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55(((int32_t)-1115090440), U3CModuleU3E_U200FU200EU202EU206CU206CU206EU202CU206BU206DU200BU202EU206EU206CU206CU202DU206AU200FU200FU206DU206CU202CU200BU202AU206EU202CU202CU202EU202BU202AU206EU202AU200EU206BU200BU200CU200DU206DU200DU200BU206AU202E_TisString_t_m77EDC7890CE7455E485B1428C75D200860667E55_RuntimeMethod_var);
		MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D(__this, L_2, (0.0f), (0.100000001f), NULL);
		uint32_t L_3 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_3, ((int32_t)1016489443)))^((int32_t)-625141711)));
		goto IL_000d;
	}

IL_0053:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_OnBecameInvisible_mE0D7304BB8D6F01BB2368364E131045AD9B408E2 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_iY17y1qd29fBeJArQKErgB8xcSs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iY17y1qd29fBeJArQKErgB8xcSs_mAFBFB2B93CCA009C3EB26D85325B9D06B0E62A2C (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		MonoBehaviour_CancelInvoke_m177BCBDFCEA3E09C02E3E444BF4FBA648FAE3CFA(__this, NULL);
		__this->____Gd8dqsuZTLM9iRRvespGXox49Nj_8 = (bool)1;
		return;
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._pF4MA33klXwGKWXhSip5Rgr1kDc _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_pPafBg5kh6SP4KDejfcHVivdJfx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__pPafBg5kh6SP4KDejfcHVivdJfx_mFC1243E9EAAB619598ADB4429D4E2AD9BE261286 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	uint32_t V_15 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1* G_B37_0 = NULL;
	_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1* G_B36_0 = NULL;
	float G_B38_0 = 0.0f;
	_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1* G_B38_1 = NULL;
	int32_t G_B44_0 = 0;
	int32_t G_B44_1 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B52_1 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B56_1 = 0;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)1026126271);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)1727797562)));
		V_15 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)27))))
		{
			case 0:
			{
				goto IL_0167;
			}
			case 1:
			{
				goto IL_02b5;
			}
			case 2:
			{
				goto IL_0129;
			}
			case 3:
			{
				goto IL_03ea;
			}
			case 4:
			{
				goto IL_010c;
			}
			case 5:
			{
				goto IL_0378;
			}
			case 6:
			{
				goto IL_039e;
			}
			case 7:
			{
				goto IL_00c4;
			}
			case 8:
			{
				goto IL_022f;
			}
			case 9:
			{
				goto IL_023b;
			}
			case 10:
			{
				goto IL_01f5;
			}
			case 11:
			{
				goto IL_008d;
			}
			case 12:
			{
				goto IL_0006;
			}
			case 13:
			{
				goto IL_032a;
			}
			case 14:
			{
				goto IL_01ca;
			}
			case 15:
			{
				goto IL_02f3;
			}
			case 16:
			{
				goto IL_00ea;
			}
			case 17:
			{
				goto IL_020f;
			}
			case 18:
			{
				goto IL_01b8;
			}
			case 19:
			{
				goto IL_030d;
			}
			case 20:
			{
				goto IL_0192;
			}
			case 21:
			{
				goto IL_0144;
			}
			case 22:
			{
				goto IL_0351;
			}
			case 23:
			{
				goto IL_00b8;
			}
			case 24:
			{
				goto IL_0281;
			}
			case 25:
			{
				goto IL_029b;
			}
			case 26:
			{
				goto IL_03c4;
			}
		}
	}
	{
		goto IL_03ea;
	}

IL_008d:
	{
		(&V_2)->____QJMZoORUjKQAB8cT8KGzUOvdfeP_0 = (0.0f);
		(&V_2)->____LluJji3lPXYMtLRNPb6DgWt0mKq_1 = (0.0f);
		uint32_t L_2 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_2, ((int32_t)329361015)))^((int32_t)-1792964036)));
		goto IL_000b;
	}

IL_00b8:
	{
		_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 L_3 = V_2;
		return L_3;
	}
	// Dead block : IL_00ba: ldc.i4 190485552

IL_00c4:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_00d5;
		}
	}
	{
		int32_t L_6 = ((int32_t)-2083426537);
		G_B10_0 = L_6;
		G_B10_1 = L_6;
		goto IL_00db;
	}

IL_00d5:
	{
		int32_t L_7 = ((int32_t)-899883471);
		G_B10_0 = L_7;
		G_B10_1 = L_7;
	}

IL_00db:
	{
		uint32_t L_8 = V_15;
		G_B2_0 = ((int32_t)(G_B10_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-825866436)))));
		goto IL_000b;
	}

IL_00ea:
	{
		int32_t L_9 = V_11;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_10 = ((int32_t)-16716683);
		G_B14_0 = L_10;
		G_B14_1 = L_10;
		goto IL_00fd;
	}

IL_00f7:
	{
		int32_t L_11 = ((int32_t)-511134704);
		G_B14_0 = L_11;
		G_B14_1 = L_11;
	}

IL_00fd:
	{
		uint32_t L_12 = V_15;
		G_B2_0 = ((int32_t)(G_B14_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)-525961808)))));
		goto IL_000b;
	}

IL_010c:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_14 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_15 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Utils_GetBoundsMin_mD96D89E8C4E9FF8E93927B9D7FC214F0C249F352(L_13, L_14, L_15, NULL);
		V_4 = L_16;
		uint32_t L_17 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)2102021966)))^((int32_t)761198025)));
		goto IL_000b;
	}

IL_0129:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1));
		uint32_t L_18 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)339715959)))^((int32_t)-152237496)));
		goto IL_000b;
	}

IL_0144:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_1;
		NullCheck(L_19);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_20;
		L_20 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_19, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		NullCheck(L_20);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_21;
		L_21 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_20, NULL);
		G_B19_0 = L_21;
		goto IL_015c;
	}

IL_0151:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = V_1;
		NullCheck(L_22);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_22, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		NullCheck(L_23);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_24;
		L_24 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_23, NULL);
		G_B19_0 = L_24;
	}

IL_015c:
	{
		V_3 = G_B19_0;
		G_B2_0 = ((int32_t)1624115636);
		goto IL_000b;
	}

IL_0167:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_1;
		NullCheck(L_25);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_26;
		L_26 = GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4(L_25, GameObject_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_mC88D0354AE206559DA52AA7279AE4CCF1F728FE4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_27)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_28 = ((int32_t)-233808780);
		G_B23_0 = L_28;
		G_B23_1 = L_28;
		goto IL_0183;
	}

IL_017d:
	{
		int32_t L_29 = ((int32_t)-399603195);
		G_B23_0 = L_29;
		G_B23_1 = L_29;
	}

IL_0183:
	{
		uint32_t L_30 = V_15;
		G_B2_0 = ((int32_t)(G_B23_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_30, ((int32_t)1158278138)))));
		goto IL_000b;
	}

IL_0192:
	{
		float L_31 = (&V_4)->___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_32;
		L_32 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_31, NULL);
		V_7 = L_32;
		uint32_t L_33 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_33, ((int32_t)-1292020854)))^((int32_t)1882324284)));
		goto IL_000b;
	}

IL_01b8:
	{
		bool L_34 = __this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
		if (!L_34)
		{
			goto IL_0151;
		}
	}
	{
		G_B2_0 = ((int32_t)483728161);
		goto IL_000b;
	}

IL_01ca:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = V_1;
		NullCheck(L_35);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_36;
		L_36 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_35, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_01e0;
		}
	}
	{
		int32_t L_38 = ((int32_t)-1046549546);
		G_B30_0 = L_38;
		G_B30_1 = L_38;
		goto IL_01e6;
	}

IL_01e0:
	{
		int32_t L_39 = ((int32_t)-1795859562);
		G_B30_0 = L_39;
		G_B30_1 = L_39;
	}

IL_01e6:
	{
		uint32_t L_40 = V_15;
		G_B2_0 = ((int32_t)(G_B30_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)-1781682210)))));
		goto IL_000b;
	}

IL_01f5:
	{
		float L_41 = V_9;
		float L_42 = V_7;
		V_14 = ((float)il2cpp_codegen_subtract(L_41, L_42));
		uint32_t L_43 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)1060797570)))^((int32_t)-1337351408)));
		goto IL_000b;
	}

IL_020f:
	{
		float L_44 = V_12;
		int32_t L_45;
		L_45 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_46;
		L_46 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		(&V_2)->____QJMZoORUjKQAB8cT8KGzUOvdfeP_0 = ((float)(L_44/((float)((int32_t)il2cpp_codegen_multiply(L_45, L_46)))));
		G_B2_0 = ((int32_t)2132968935);
		goto IL_000b;
	}

IL_022f:
	{
		_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 L_47 = V_2;
		return L_47;
	}
	// Dead block : IL_0231: ldc.i4 870937216

IL_023b:
	{
		bool L_48 = __this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
		G_B36_0 = (&V_2);
		if (!L_48)
		{
			G_B37_0 = (&V_2);
			goto IL_0259;
		}
	}
	{
		float L_49 = V_6;
		float L_50 = V_8;
		float L_51 = V_7;
		float L_52 = V_9;
		int32_t L_53 = V_10;
		int32_t L_54 = V_11;
		float L_55;
		L_55 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iwgCOkY2GB9KTiyOGWyvJQOADx7_m776BEC5A6E461E9632565349C05B4B458CD1E011(__this, L_49, L_50, L_51, L_52, L_53, L_54, NULL);
		G_B38_0 = L_55;
		G_B38_1 = G_B36_0;
		goto IL_026b;
	}

IL_0259:
	{
		float L_56 = V_6;
		float L_57 = V_8;
		float L_58 = V_7;
		float L_59 = V_9;
		int32_t L_60 = V_10;
		int32_t L_61 = V_11;
		float L_62;
		L_62 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DyPdmbII3b0VnyC5uDTEMRrtaTl_m2CA12D9591FEA43CEE2D3C70762CF40CA0016E8E(__this, L_56, L_57, L_58, L_59, L_60, L_61, NULL);
		G_B38_0 = L_62;
		G_B38_1 = G_B37_0;
	}

IL_026b:
	{
		G_B38_1->____LluJji3lPXYMtLRNPb6DgWt0mKq_1 = G_B38_0;
		V_12 = (0.0f);
		G_B2_0 = ((int32_t)2093138797);
		goto IL_000b;
	}

IL_0281:
	{
		float L_63 = V_8;
		float L_64 = V_6;
		V_13 = ((float)il2cpp_codegen_subtract(L_63, L_64));
		uint32_t L_65 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_65, ((int32_t)2005908877)))^((int32_t)771398423)));
		goto IL_000b;
	}

IL_029b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		V_1 = L_66;
		uint32_t L_67 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_67, ((int32_t)1019109163)))^((int32_t)1657232041)));
		goto IL_000b;
	}

IL_02b5:
	{
		float L_68 = V_8;
		float L_69 = V_6;
		V_10 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)il2cpp_codegen_subtract(L_68, L_69))/(5.0f))));
		float L_70 = V_9;
		float L_71 = V_7;
		V_11 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(((float)il2cpp_codegen_subtract(L_70, L_71))/(5.0f))));
		int32_t L_72 = V_10;
		if ((((int32_t)L_72) > ((int32_t)0)))
		{
			goto IL_02de;
		}
	}
	{
		int32_t L_73 = ((int32_t)-1018308987);
		G_B44_0 = L_73;
		G_B44_1 = L_73;
		goto IL_02e4;
	}

IL_02de:
	{
		int32_t L_74 = ((int32_t)-1186021423);
		G_B44_0 = L_74;
		G_B44_1 = L_74;
	}

IL_02e4:
	{
		uint32_t L_75 = V_15;
		G_B2_0 = ((int32_t)(G_B44_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_75, ((int32_t)-983984969)))));
		goto IL_000b;
	}

IL_02f3:
	{
		float L_76 = V_13;
		float L_77 = V_14;
		V_12 = ((float)il2cpp_codegen_multiply(L_76, L_77));
		uint32_t L_78 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_78, ((int32_t)-1354369407)))^((int32_t)-1061728979)));
		goto IL_000b;
	}

IL_030d:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_80 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_81 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Utils_GetBoundsMax_m82F2CB62C5ACC8841A2A1E87A484C0451EF1755B(L_79, L_80, L_81, NULL);
		V_5 = L_82;
		uint32_t L_83 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_83, ((int32_t)707405589)))^((int32_t)775689390)));
		goto IL_000b;
	}

IL_032a:
	{
		int32_t L_84;
		L_84 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_85 = (&V_5)->___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_86;
		L_86 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_84), L_85, NULL);
		V_8 = L_86;
		uint32_t L_87 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_87, ((int32_t)50837040)))^((int32_t)1365036848)));
		goto IL_000b;
	}

IL_0351:
	{
		int32_t L_88;
		L_88 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_89 = (&V_5)->___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_90;
		L_90 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_88), L_89, NULL);
		V_9 = L_90;
		uint32_t L_91 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_91, ((int32_t)-870637532)))^((int32_t)2129071218)));
		goto IL_000b;
	}

IL_0378:
	{
		float L_92 = V_14;
		if ((!(((float)L_92) >= ((float)(0.0f)))))
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_93 = ((int32_t)1130641821);
		G_B52_0 = L_93;
		G_B52_1 = L_93;
		goto IL_038f;
	}

IL_0389:
	{
		int32_t L_94 = ((int32_t)852428554);
		G_B52_0 = L_94;
		G_B52_1 = L_94;
	}

IL_038f:
	{
		uint32_t L_95 = V_15;
		G_B2_0 = ((int32_t)(G_B52_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_95, ((int32_t)586040005)))));
		goto IL_000b;
	}

IL_039e:
	{
		float L_96 = V_13;
		if ((!(((float)L_96) >= ((float)(0.0f)))))
		{
			goto IL_03af;
		}
	}
	{
		int32_t L_97 = ((int32_t)206832328);
		G_B56_0 = L_97;
		G_B56_1 = L_97;
		goto IL_03b5;
	}

IL_03af:
	{
		int32_t L_98 = ((int32_t)1163114032);
		G_B56_0 = L_98;
		G_B56_1 = L_98;
	}

IL_03b5:
	{
		uint32_t L_99 = V_15;
		G_B2_0 = ((int32_t)(G_B56_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_99, ((int32_t)121098442)))));
		goto IL_000b;
	}

IL_03c4:
	{
		float L_100 = (&V_4)->___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_101;
		L_101 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_100, NULL);
		V_6 = L_101;
		uint32_t L_102 = V_15;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_102, ((int32_t)598099385)))^((int32_t)-1648955911)));
		goto IL_000b;
	}

IL_03ea:
	{
		_pF4MA33klXwGKWXhSip5Rgr1kDc_t83A7EFEED51FD5685BFC735A198C4AF1F477F7E1 L_103 = V_2;
		return L_103;
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_TPkB7q9Bn6qviPHF0dOgADnxQ8V(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__TPkB7q9Bn6qviPHF0dOgADnxQ8V_m75AB446EFAAA10A02C46D7953D8B0CB1F5810CDB (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_4 = NULL;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_5;
	memset((&V_5), 0, sizeof(V_5));
	RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t V_8 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B26_1 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B30_1 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B36_1 = 0;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = p0;
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		V_2 = L_2;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)1404303171);
	}

IL_0011:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)2121651892)));
		V_8 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_01a9;
			}
			case 1:
			{
				goto IL_0207;
			}
			case 2:
			{
				goto IL_01bb;
			}
			case 3:
			{
				goto IL_01d2;
			}
			case 4:
			{
				goto IL_00fd;
			}
			case 5:
			{
				goto IL_0138;
			}
			case 6:
			{
				goto IL_01f2;
			}
			case 7:
			{
				goto IL_015a;
			}
			case 8:
			{
				goto IL_0122;
			}
			case 9:
			{
				goto IL_010d;
			}
			case 10:
			{
				goto IL_000c;
			}
			case 11:
			{
				goto IL_00d0;
			}
			case 12:
			{
				goto IL_00f1;
			}
			case 13:
			{
				goto IL_0067;
			}
			case 14:
			{
				goto IL_009f;
			}
			case 15:
			{
				goto IL_018d;
			}
		}
	}
	{
		goto IL_0207;
	}

IL_0067:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_4 = V_6;
		int32_t L_5 = V_7;
		NullCheck(L_4);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_6 = (*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))));
		V_5 = L_6;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_7;
		L_7 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_5), NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_10 = ((int32_t)1484761106);
		G_B7_0 = L_10;
		G_B7_1 = L_10;
		goto IL_0099;
	}

IL_0093:
	{
		int32_t L_11 = ((int32_t)619233328);
		G_B7_0 = L_11;
		G_B7_1 = L_11;
	}

IL_0099:
	{
		G_B2_0 = G_B7_1;
		goto IL_0011;
	}

IL_009f:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_12;
		L_12 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_1), NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_13;
		L_13 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, L_13, NULL);
		if (L_14)
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_15 = ((int32_t)-1564257684);
		G_B11_0 = L_15;
		G_B11_1 = L_15;
		goto IL_00c1;
	}

IL_00bb:
	{
		int32_t L_16 = ((int32_t)-1569441063);
		G_B11_0 = L_16;
		G_B11_1 = L_16;
	}

IL_00c1:
	{
		uint32_t L_17 = V_8;
		G_B2_0 = ((int32_t)(G_B11_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)419294660)))));
		goto IL_0011;
	}

IL_00d0:
	{
		float L_18;
		L_18 = RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613((&V_1), NULL);
		float L_19;
		L_19 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		G_B14_0 = ((((int32_t)((!(((float)L_18) >= ((float)L_19)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e6;
	}

IL_00e5:
	{
		G_B14_0 = 0;
	}

IL_00e6:
	{
		V_3 = (bool)G_B14_0;
		G_B2_0 = ((int32_t)1286560375);
		goto IL_0011;
	}

IL_00f1:
	{
		return (int32_t)(1);
	}
	// Dead block : IL_00f3: ldc.i4 1881083604

IL_00fd:
	{
		int32_t L_20 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		G_B2_0 = ((int32_t)1996436283);
		goto IL_0011;
	}

IL_010d:
	{
		return (int32_t)(2);
	}
	// Dead block : IL_010f: ldloc.s V8

IL_0122:
	{
		V_7 = 0;
		uint32_t L_21 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)-2142756171)))^((int32_t)-2061055533)));
		goto IL_0011;
	}

IL_0138:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_22 = V_2;
		bool L_23;
		L_23 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_22, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_23)
		{
			goto IL_00e5;
		}
	}
	{
		uint32_t L_24 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)899569349)))^((int32_t)1283751798)));
		goto IL_0011;
	}

IL_015a:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_25 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_26;
		L_26 = Physics2D_GetRayIntersection_m14FE964631FC806EC3C7D6EBCA461315961492C4(L_25, NULL);
		V_1 = L_26;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_27;
		L_27 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_28)
		{
			goto IL_0178;
		}
	}
	{
		int32_t L_29 = ((int32_t)662168361);
		G_B26_0 = L_29;
		G_B26_1 = L_29;
		goto IL_017e;
	}

IL_0178:
	{
		int32_t L_30 = ((int32_t)71269447);
		G_B26_0 = L_30;
		G_B26_1 = L_30;
	}

IL_017e:
	{
		uint32_t L_31 = V_8;
		G_B2_0 = ((int32_t)(G_B26_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1048720043)))));
		goto IL_0011;
	}

IL_018d:
	{
		int32_t L_32 = V_7;
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_33 = V_6;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_019d;
		}
	}
	{
		int32_t L_34 = ((int32_t)1687788245);
		G_B30_0 = L_34;
		G_B30_1 = L_34;
		goto IL_01a3;
	}

IL_019d:
	{
		int32_t L_35 = ((int32_t)150331513);
		G_B30_0 = L_35;
		G_B30_1 = L_35;
	}

IL_01a3:
	{
		G_B2_0 = G_B30_1;
		goto IL_0011;
	}

IL_01a9:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_37;
		L_37 = Physics2D_GetRayIntersectionAll_mE44882D00E63761758A1C10D8579F5AD5A027C14(L_36, NULL);
		V_4 = L_37;
		G_B2_0 = ((int32_t)575016998);
		goto IL_0011;
	}

IL_01bb:
	{
		RaycastHit2DU5BU5D_t28739C686586993113318B63C84927FD43063FC7* L_38 = V_4;
		V_6 = L_38;
		uint32_t L_39 = V_8;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_39, ((int32_t)-1380532203)))^((int32_t)618088198)));
		goto IL_0011;
	}

IL_01d2:
	{
		bool L_40 = V_3;
		if (L_40)
		{
			goto IL_01dd;
		}
	}
	{
		int32_t L_41 = ((int32_t)-1720940170);
		G_B36_0 = L_41;
		G_B36_1 = L_41;
		goto IL_01e3;
	}

IL_01dd:
	{
		int32_t L_42 = ((int32_t)-1912906733);
		G_B36_0 = L_42;
		G_B36_1 = L_42;
	}

IL_01e3:
	{
		uint32_t L_43 = V_8;
		G_B2_0 = ((int32_t)(G_B36_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_43, ((int32_t)58416201)))));
		goto IL_0011;
	}

IL_01f2:
	{
		return (int32_t)(1);
	}
	// Dead block : IL_01f4: ldloc.s V8

IL_0207:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = p0;
		int32_t L_45;
		L_45 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__R8p5OQ2NMOnDlcHRyRnvDqsnf7H_m4C198006B44BEA102843A04FA7C78A70296C2946(__this, L_44, NULL);
		return L_45;
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_R8p5OQ2NMOnDlcHRyRnvDqsnf7H(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__R8p5OQ2NMOnDlcHRyRnvDqsnf7H_m4C198006B44BEA102843A04FA7C78A70296C2946 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisGraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_mFAA710539C9B50E8A8F733BA0DFFD6751FB81658_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* V_0 = NULL;
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* V_1 = NULL;
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* V_2 = NULL;
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	bool V_6 = false;
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C V_8;
	memset((&V_8), 0, sizeof(V_8));
	uint32_t V_9 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B33_1 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B37_1 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B51_0 = 0;
	int32_t G_B51_1 = 0;
	int32_t G_B55_0 = 0;
	int32_t G_B55_1 = 0;
	{
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_0;
		L_0 = Component_GetComponentInParent_TisGraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_mFAA710539C9B50E8A8F733BA0DFFD6751FB81658(__this, Component_GetComponentInParent_TisGraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_mFAA710539C9B50E8A8F733BA0DFFD6751FB81658_RuntimeMethod_var);
		V_0 = L_0;
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_1;
		L_1 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		V_1 = L_1;
	}

IL_000d:
	{
		G_B2_0 = ((int32_t)-1390387090);
	}

IL_0012:
	{
		int32_t L_2 = ((int32_t)(G_B2_0^((int32_t)-1584583761)));
		V_9 = L_2;
		switch (((int32_t)((uint32_t)(int32_t)L_2%(uint32_t)(int32_t)((int32_t)9))))
		{
			case 0:
			{
				goto IL_00bb;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_008d;
			}
			case 3:
			{
				goto IL_010c;
			}
			case 4:
			{
				goto IL_000d;
			}
			case 5:
			{
				goto IL_006f;
			}
			case 6:
			{
				goto IL_004c;
			}
			case 7:
			{
				goto IL_00c7;
			}
			case 8:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_010c;
	}

IL_004c:
	{
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_4)
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_5 = ((int32_t)-1257941379);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
		goto IL_0063;
	}

IL_005d:
	{
		int32_t L_6 = ((int32_t)-1430097424);
		G_B7_0 = L_6;
		G_B7_1 = L_6;
	}

IL_0063:
	{
		uint32_t L_7 = V_9;
		G_B2_0 = ((int32_t)(G_B7_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_7, ((int32_t)75605736)))));
		goto IL_0012;
	}

IL_006f:
	{
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_8 = (List_1_t8292C421BBB00D7661DC07462822936152BAB446*)il2cpp_codegen_object_new(List_1_t8292C421BBB00D7661DC07462822936152BAB446_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B(L_8, List_1__ctor_m95532062701811F50E0B0270E05E27297B2B3A7B_RuntimeMethod_var);
		V_3 = L_8;
		GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B* L_9 = V_0;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_10 = V_2;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_11 = V_3;
		NullCheck(L_9);
		VirtualActionInvoker2< PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*, List_1_t8292C421BBB00D7661DC07462822936152BAB446* >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_9, L_10, L_11);
		uint32_t L_12 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_12, ((int32_t)1373766131)))^((int32_t)-102101081)));
		goto IL_0012;
	}

IL_008d:
	{
		V_4 = ((int32_t)2147483647LL);
		V_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		uint32_t L_13 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)1412329590)))^((int32_t)2037669881)));
		goto IL_0012;
	}

IL_00aa:
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_14 = V_1;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_15 = (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB*)il2cpp_codegen_object_new(PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		PointerEventData__ctor_m63837790B68893F0022CCEFEF26ADD55A975F71C(L_15, L_14, NULL);
		V_2 = L_15;
		G_B2_0 = ((int32_t)-1571309504);
		goto IL_0012;
	}

IL_00bb:
	{
		return (int32_t)(0);
	}
	// Dead block : IL_00bd: ldc.i4 -1791760298

IL_00c7:
	{
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_17, NULL);
		NullCheck(L_16);
		PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline(L_16, L_18, NULL);
		uint32_t L_19 = V_9;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)1878409309)))^((int32_t)1322161893)));
		goto IL_0012;
	}

IL_00e6:
	{
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_20 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_21)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_22 = ((int32_t)1083036470);
		G_B17_0 = L_22;
		G_B17_1 = L_22;
		goto IL_00fd;
	}

IL_00f7:
	{
		int32_t L_23 = ((int32_t)1930462840);
		G_B17_0 = L_23;
		G_B17_1 = L_23;
	}

IL_00fd:
	{
		uint32_t L_24 = V_9;
		G_B2_0 = ((int32_t)(G_B17_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)-2124681872)))));
		goto IL_0012;
	}

IL_010c:
	{
		V_6 = (bool)0;
		List_1_t8292C421BBB00D7661DC07462822936152BAB446* L_25 = V_3;
		NullCheck(L_25);
		Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C L_26;
		L_26 = List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41(L_25, List_1_GetEnumerator_m5032C7535D90065B4FA0A5942E7F92F4D72B8D41_RuntimeMethod_var);
		V_8 = L_26;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_020d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C((&V_8), Enumerator_Dispose_mE3FB1E26BA0B10EAB4C06CC56F1C78002726865C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01c6_1;
			}

IL_011c_1:
			{
				G_B21_0 = ((int32_t)-463994312);
			}

IL_0121_1:
			{
				int32_t L_27 = ((int32_t)(G_B21_0^((int32_t)-1584583761)));
				V_9 = L_27;
				switch (((int32_t)((uint32_t)(int32_t)L_27%(uint32_t)(int32_t)8)))
				{
					case 0:
					{
						goto IL_011c_1;
					}
					case 1:
					{
						goto IL_0166_1;
					}
					case 2:
					{
						goto IL_020b_1;
					}
					case 3:
					{
						goto IL_0188_1;
					}
					case 4:
					{
						goto IL_01e3_1;
					}
					case 5:
					{
						goto IL_01b0_1;
					}
					case 6:
					{
						goto IL_01c6_1;
					}
					case 7:
					{
						goto IL_0156_1;
					}
				}
			}
			{
				goto IL_020b_1;
			}

IL_0156_1:
			{
				RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_28;
				L_28 = Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_inline((&V_8), Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_RuntimeMethod_var);
				V_7 = L_28;
				G_B21_0 = ((int32_t)-1579349821);
				goto IL_0121_1;
			}

IL_0166_1:
			{
				int32_t L_29 = (&V_7)->___depth_4;
				V_4 = L_29;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
				L_30 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_7), NULL);
				V_5 = L_30;
				uint32_t L_31 = V_9;
				G_B21_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, ((int32_t)1657594721)))^((int32_t)600232101)));
				goto IL_0121_1;
			}

IL_0188_1:
			{
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
				L_32 = RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline((&V_7), NULL);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
				L_33 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_34;
				L_34 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_32, L_33, NULL);
				if (!L_34)
				{
					goto IL_01a4_1;
				}
			}
			{
				int32_t L_35 = ((int32_t)-739443286);
				G_B28_0 = L_35;
				G_B28_1 = L_35;
				goto IL_01aa_1;
			}

IL_01a4_1:
			{
				int32_t L_36 = ((int32_t)-694373223);
				G_B28_0 = L_36;
				G_B28_1 = L_36;
			}

IL_01aa_1:
			{
				G_B21_0 = G_B28_1;
				goto IL_0121_1;
			}

IL_01b0_1:
			{
				V_6 = (bool)1;
				uint32_t L_37 = V_9;
				G_B21_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_37, ((int32_t)-2000783857)))^((int32_t)-1702138670)));
				goto IL_0121_1;
			}

IL_01c6_1:
			{
				bool L_38;
				L_38 = Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C((&V_8), Enumerator_MoveNext_m22E22E0108683303C9E8F060E9C970D6AECF313C_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_01d7_1;
				}
			}
			{
				int32_t L_39 = ((int32_t)-328474011);
				G_B33_0 = L_39;
				G_B33_1 = L_39;
				goto IL_01dd_1;
			}

IL_01d7_1:
			{
				int32_t L_40 = ((int32_t)-463994312);
				G_B33_0 = L_40;
				G_B33_1 = L_40;
			}

IL_01dd_1:
			{
				G_B21_0 = G_B33_1;
				goto IL_0121_1;
			}

IL_01e3_1:
			{
				int32_t L_41 = (&V_7)->___depth_4;
				int32_t L_42 = V_4;
				if ((((int32_t)L_41) >= ((int32_t)L_42)))
				{
					goto IL_01f6_1;
				}
			}
			{
				int32_t L_43 = ((int32_t)572029182);
				G_B37_0 = L_43;
				G_B37_1 = L_43;
				goto IL_01fc_1;
			}

IL_01f6_1:
			{
				int32_t L_44 = ((int32_t)140740180);
				G_B37_0 = L_44;
				G_B37_1 = L_44;
			}

IL_01fc_1:
			{
				uint32_t L_45 = V_9;
				G_B21_0 = ((int32_t)(G_B37_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_45, ((int32_t)-1738696550)))));
				goto IL_0121_1;
			}

IL_020b_1:
			{
				goto IL_021b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_021b:
	{
		bool L_46 = V_6;
		if (!L_46)
		{
			goto IL_0272;
		}
	}

IL_021f:
	{
		G_B42_0 = ((int32_t)-2073197775);
	}

IL_0224:
	{
		int32_t L_47 = ((int32_t)(G_B42_0^((int32_t)-1584583761)));
		V_9 = L_47;
		switch (((int32_t)((uint32_t)(int32_t)L_47%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_02b3;
			}
			case 1:
			{
				goto IL_0272;
			}
			case 2:
			{
				goto IL_0287;
			}
			case 3:
			{
				goto IL_0260;
			}
			case 4:
			{
				goto IL_021f;
			}
			case 5:
			{
				goto IL_024e;
			}
		}
	}
	{
		goto IL_02b3;
	}

IL_024e:
	{
		return (int32_t)(1);
	}
	// Dead block : IL_0250: ldloc.s V9

IL_0260:
	{
		return (int32_t)(2);
	}
	// Dead block : IL_0262: ldloc.s V9

IL_0272:
	{
		bool L_48 = V_6;
		if (L_48)
		{
			goto IL_027e;
		}
	}
	{
		int32_t L_49 = ((int32_t)-233440093);
		G_B51_0 = L_49;
		G_B51_1 = L_49;
		goto IL_0284;
	}

IL_027e:
	{
		int32_t L_50 = ((int32_t)-1908740420);
		G_B51_0 = L_50;
		G_B51_1 = L_50;
	}

IL_0284:
	{
		G_B42_0 = G_B51_1;
		goto IL_0224;
	}

IL_0287:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_53;
		L_53 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_51, L_52, NULL);
		if (!L_53)
		{
			goto IL_029e;
		}
	}
	{
		int32_t L_54 = ((int32_t)1369026234);
		G_B55_0 = L_54;
		G_B55_1 = L_54;
		goto IL_02a4;
	}

IL_029e:
	{
		int32_t L_55 = ((int32_t)779230564);
		G_B55_0 = L_55;
		G_B55_1 = L_55;
	}

IL_02a4:
	{
		uint32_t L_56 = V_9;
		G_B42_0 = ((int32_t)(G_B55_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_56, ((int32_t)-526149700)))));
		goto IL_0224;
	}

IL_02b3:
	{
		return (int32_t)(0);
	}
}
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_iwgCOkY2GB9KTiyOGWyvJQOADx7(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__iwgCOkY2GB9KTiyOGWyvJQOADx7_m776BEC5A6E461E9632565349C05B4B458CD1E011 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, float p0, float p1, float p2, float p3, int32_t p4, int32_t p5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B24_1 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B28_1 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)-375576439);
	}

IL_0011:
	{
		int32_t L_0 = ((int32_t)(G_B2_0^((int32_t)-543007707)));
		V_5 = L_0;
		switch (((int32_t)((uint32_t)(int32_t)L_0%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_0067;
			}
			case 1:
			{
				goto IL_00e6;
			}
			case 2:
			{
				goto IL_00c1;
			}
			case 3:
			{
				goto IL_00f8;
			}
			case 4:
			{
				goto IL_0175;
			}
			case 5:
			{
				goto IL_0153;
			}
			case 6:
			{
				goto IL_008c;
			}
			case 7:
			{
				goto IL_00cd;
			}
			case 8:
			{
				goto IL_00ae;
			}
			case 9:
			{
				goto IL_013b;
			}
			case 10:
			{
				goto IL_010a;
			}
			case 11:
			{
				goto IL_000c;
			}
			case 12:
			{
				goto IL_018e;
			}
			case 13:
			{
				goto IL_01a3;
			}
			case 14:
			{
				goto IL_0074;
			}
			case 15:
			{
				goto IL_0128;
			}
		}
	}
	{
		goto IL_01a3;
	}

IL_0067:
	{
		float L_1 = V_3;
		int32_t L_2 = p5;
		V_3 = ((float)il2cpp_codegen_add(L_1, ((float)L_2)));
		G_B2_0 = ((int32_t)-145272335);
		goto IL_0011;
	}

IL_0074:
	{
		float L_3 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		uint32_t L_4 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-2139257707)))^((int32_t)-1081923261)));
		goto IL_0011;
	}

IL_008c:
	{
		int32_t L_5 = V_4;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_6 = ((int32_t)-804448554);
		G_B9_0 = L_6;
		G_B9_1 = L_6;
		goto IL_009f;
	}

IL_0099:
	{
		int32_t L_7 = ((int32_t)-251456174);
		G_B9_0 = L_7;
		G_B9_1 = L_7;
	}

IL_009f:
	{
		uint32_t L_8 = V_5;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_8, ((int32_t)-1944500301)))));
		goto IL_0011;
	}

IL_00ae:
	{
		uint32_t L_9 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)1665262849)))^((int32_t)158928301)));
		goto IL_0011;
	}

IL_00c1:
	{
		float L_10 = p2;
		V_3 = L_10;
		G_B2_0 = ((int32_t)-145272335);
		goto IL_0011;
	}

IL_00cd:
	{
		float L_11 = V_2;
		int32_t L_12 = p4;
		V_2 = ((float)il2cpp_codegen_add(L_11, ((float)L_12)));
		uint32_t L_13 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_13, ((int32_t)343504968)))^((int32_t)-1860724636)));
		goto IL_0011;
	}

IL_00e6:
	{
		float L_14 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_14, (1.0f)));
		G_B2_0 = ((int32_t)-1470143979);
		goto IL_0011;
	}

IL_00f8:
	{
		float L_15 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_15, (1.0f)));
		G_B2_0 = ((int32_t)-794411429);
		goto IL_0011;
	}

IL_010a:
	{
		float L_16 = V_2;
		float L_17 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_16, L_17, (0.0f), /*hidden argument*/NULL);
		int32_t L_19;
		L_19 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__TPkB7q9Bn6qviPHF0dOgADnxQ8V_m75AB446EFAAA10A02C46D7953D8B0CB1F5810CDB(__this, L_18, NULL);
		V_4 = L_19;
		G_B2_0 = ((int32_t)-1433096749);
		goto IL_0011;
	}

IL_0128:
	{
		uint32_t L_20 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, ((int32_t)730250881)))^((int32_t)653873683)));
		goto IL_0011;
	}

IL_013b:
	{
		float L_21 = V_2;
		float L_22 = p1;
		if ((((float)L_21) <= ((float)L_22)))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_23 = ((int32_t)-1506234696);
		G_B20_0 = L_23;
		G_B20_1 = L_23;
		goto IL_014d;
	}

IL_0147:
	{
		int32_t L_24 = ((int32_t)-1892219721);
		G_B20_0 = L_24;
		G_B20_1 = L_24;
	}

IL_014d:
	{
		G_B2_0 = G_B20_1;
		goto IL_0011;
	}

IL_0153:
	{
		int32_t L_25 = V_4;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			goto IL_0160;
		}
	}
	{
		int32_t L_26 = ((int32_t)437231127);
		G_B24_0 = L_26;
		G_B24_1 = L_26;
		goto IL_0166;
	}

IL_0160:
	{
		int32_t L_27 = ((int32_t)2044080828);
		G_B24_0 = L_27;
		G_B24_1 = L_27;
	}

IL_0166:
	{
		uint32_t L_28 = V_5;
		G_B2_0 = ((int32_t)(G_B24_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_28, ((int32_t)-371826563)))));
		goto IL_0011;
	}

IL_0175:
	{
		float L_29 = V_3;
		float L_30 = p3;
		if ((((float)L_29) > ((float)L_30)))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_31 = ((int32_t)-1749490929);
		G_B28_0 = L_31;
		G_B28_1 = L_31;
		goto IL_0188;
	}

IL_0182:
	{
		int32_t L_32 = ((int32_t)-760021566);
		G_B28_0 = L_32;
		G_B28_1 = L_32;
	}

IL_0188:
	{
		G_B2_0 = G_B28_1;
		goto IL_0011;
	}

IL_018e:
	{
		float L_33 = p0;
		V_2 = L_33;
		uint32_t L_34 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)1888743580)))^((int32_t)339768826)));
		goto IL_0011;
	}

IL_01a3:
	{
		float L_35 = V_0;
		float L_36 = V_1;
		return ((float)(L_35/L_36));
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._XxY0UjDL4Uqhke5ca1v2AFKLriC _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_fBcpY7SMOo1hOGIcWOWG1g4B5IO(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__fBcpY7SMOo1hOGIcWOWG1g4B5IO_mA9184C4D752266499769D3F184C106A8FB171F0C (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 p0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA V_1;
	memset((&V_1), 0, sizeof(V_1));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	uint32_t V_4 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B31_1 = 0;
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = p0;
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		V_2 = L_2;
	}

IL_000c:
	{
		G_B2_0 = ((int32_t)-436230414);
	}

IL_0011:
	{
		int32_t L_3 = ((int32_t)(G_B2_0^((int32_t)-1950447448)));
		V_4 = L_3;
		switch (((int32_t)((uint32_t)(int32_t)L_3%(uint32_t)(int32_t)((int32_t)12))))
		{
			case 0:
			{
				goto IL_00b9;
			}
			case 1:
			{
				goto IL_008b;
			}
			case 2:
			{
				goto IL_00e5;
			}
			case 3:
			{
				goto IL_0126;
			}
			case 4:
			{
				goto IL_0161;
			}
			case 5:
			{
				goto IL_0140;
			}
			case 6:
			{
				goto IL_0192;
			}
			case 7:
			{
				goto IL_0079;
			}
			case 8:
			{
				goto IL_0111;
			}
			case 9:
			{
				goto IL_0057;
			}
			case 10:
			{
				goto IL_000c;
			}
			case 11:
			{
				goto IL_00c5;
			}
		}
	}
	{
		goto IL_0192;
	}

IL_0057:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4;
		L_4 = RaycastHit2D_get_collider_mB56DFCD16B708852EEBDBB490BC8665DBF7487FD((&V_1), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0155;
		}
	}
	{
		uint32_t L_6 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)854452820)))^((int32_t)1496956245)));
		goto IL_0011;
	}

IL_0079:
	{
		return (int32_t)(2);
	}
	// Dead block : IL_007b: ldloc.s V4

IL_008b:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_7);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_7, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9 = V_2;
		NullCheck(L_8);
		bool L_10;
		L_10 = Collider_Raycast_mD7683E94051173B3FFC0862F4A17847E94AEB938(L_8, L_9, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (!L_10)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_11 = ((int32_t)-1013464172);
		G_B11_0 = L_11;
		G_B11_1 = L_11;
		goto IL_00b3;
	}

IL_00ad:
	{
		int32_t L_12 = ((int32_t)-498896470);
		G_B11_0 = L_12;
		G_B11_1 = L_12;
	}

IL_00b3:
	{
		G_B2_0 = G_B11_1;
		goto IL_0011;
	}

IL_00b9:
	{
		return (int32_t)(1);
	}
	// Dead block : IL_00bb: ldc.i4 -787796891

IL_00c5:
	{
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_14 = ((int32_t)-1291730639);
		G_B17_0 = L_14;
		G_B17_1 = L_14;
		goto IL_00d6;
	}

IL_00d0:
	{
		int32_t L_15 = ((int32_t)-262056470);
		G_B17_0 = L_15;
		G_B17_1 = L_15;
	}

IL_00d6:
	{
		uint32_t L_16 = V_4;
		G_B2_0 = ((int32_t)(G_B17_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)344521783)))));
		goto IL_0011;
	}

IL_00e5:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = V_2;
		bool L_18;
		L_18 = Physics_Raycast_m839BA104A76B928A03F075C622923C6FCD2F8685(L_17, (&V_0), (std::numeric_limits<float>::infinity()), NULL);
		if (L_18)
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_19 = ((int32_t)-906918009);
		G_B21_0 = L_19;
		G_B21_1 = L_19;
		goto IL_0102;
	}

IL_00fc:
	{
		int32_t L_20 = ((int32_t)-10188270);
		G_B21_0 = L_20;
		G_B21_1 = L_20;
	}

IL_0102:
	{
		uint32_t L_21 = V_4;
		G_B2_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)2039362645)))));
		goto IL_0011;
	}

IL_0111:
	{
		return (int32_t)(2);
	}
	// Dead block : IL_0113: ldloc.s V4

IL_0126:
	{
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_22 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_23;
		L_23 = Physics2D_GetRayIntersection_m14FE964631FC806EC3C7D6EBCA461315961492C4(L_22, NULL);
		V_1 = L_23;
		uint32_t L_24 = V_4;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_24, ((int32_t)864613161)))^((int32_t)-1540715162)));
		goto IL_0011;
	}

IL_0140:
	{
		float L_25;
		L_25 = RaycastHit2D_get_distance_mD0FE1482E2768CF587AFB65488459697EAB64613((&V_1), NULL);
		float L_26;
		L_26 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_0), NULL);
		G_B27_0 = ((((int32_t)((!(((float)L_25) <= ((float)L_26)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0156;
	}

IL_0155:
	{
		G_B27_0 = 0;
	}

IL_0156:
	{
		V_3 = (bool)G_B27_0;
		G_B2_0 = ((int32_t)-930229629);
		goto IL_0011;
	}

IL_0161:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_27;
		L_27 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_28;
		L_28 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_27, L_28, NULL);
		if (!L_29)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_30 = ((int32_t)-161821941);
		G_B31_0 = L_30;
		G_B31_1 = L_30;
		goto IL_0183;
	}

IL_017d:
	{
		int32_t L_31 = ((int32_t)-1368099387);
		G_B31_0 = L_31;
		G_B31_1 = L_31;
	}

IL_0183:
	{
		uint32_t L_32 = V_4;
		G_B2_0 = ((int32_t)(G_B31_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_32, ((int32_t)316706716)))));
		goto IL_0011;
	}

IL_0192:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = p0;
		int32_t L_34;
		L_34 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__R8p5OQ2NMOnDlcHRyRnvDqsnf7H_m4C198006B44BEA102843A04FA7C78A70296C2946(__this, L_33, NULL);
		return L_34;
	}
}
// System.Single _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_DyPdmbII3b0VnyC5uDTEMRrtaTl(System.Single,System.Single,System.Single,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DyPdmbII3b0VnyC5uDTEMRrtaTl_m2CA12D9591FEA43CEE2D3C70762CF40CA0016E8E (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, float p0, float p1, float p2, float p3, int32_t p4, int32_t p5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	uint32_t V_5 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B29_1 = 0;
	{
		V_0 = (0.0f);
		V_1 = (0.0f);
		float L_0 = p0;
		V_2 = L_0;
		goto IL_0118;
	}

IL_0013:
	{
		G_B2_0 = ((int32_t)-1175799658);
	}

IL_0018:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1189304921)));
		V_5 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)16))))
		{
			case 0:
			{
				goto IL_0156;
			}
			case 1:
			{
				goto IL_0168;
			}
			case 2:
			{
				goto IL_0174;
			}
			case 3:
			{
				goto IL_0093;
			}
			case 4:
			{
				goto IL_0013;
			}
			case 5:
			{
				goto IL_01a8;
			}
			case 6:
			{
				goto IL_0130;
			}
			case 7:
			{
				goto IL_0186;
			}
			case 8:
			{
				goto IL_0118;
			}
			case 9:
			{
				goto IL_007b;
			}
			case 10:
			{
				goto IL_00ff;
			}
			case 11:
			{
				goto IL_00ac;
			}
			case 12:
			{
				goto IL_00bf;
			}
			case 13:
			{
				goto IL_0143;
			}
			case 14:
			{
				goto IL_006e;
			}
			case 15:
			{
				goto IL_00dd;
			}
		}
	}
	{
		goto IL_01a8;
	}

IL_006e:
	{
		float L_2 = V_3;
		int32_t L_3 = p5;
		V_3 = ((float)il2cpp_codegen_add(L_2, ((float)L_3)));
		G_B2_0 = ((int32_t)-1969789836);
		goto IL_0018;
	}

IL_007b:
	{
		float L_4 = V_0;
		V_0 = ((float)il2cpp_codegen_add(L_4, (1.0f)));
		uint32_t L_5 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_5, ((int32_t)-2121238581)))^((int32_t)1129866178)));
		goto IL_0018;
	}

IL_0093:
	{
		float L_6 = V_3;
		float L_7 = p3;
		if ((((float)L_6) <= ((float)L_7)))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_8 = ((int32_t)-1702502659);
		G_B9_0 = L_8;
		G_B9_1 = L_8;
		goto IL_00a6;
	}

IL_00a0:
	{
		int32_t L_9 = ((int32_t)-1383715413);
		G_B9_0 = L_9;
		G_B9_1 = L_9;
	}

IL_00a6:
	{
		G_B2_0 = G_B9_1;
		goto IL_0018;
	}

IL_00ac:
	{
		uint32_t L_10 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-1915635638)))^((int32_t)902515258)));
		goto IL_0018;
	}

IL_00bf:
	{
		float L_11 = V_2;
		float L_12 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), L_11, L_12, (0.0f), /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__fBcpY7SMOo1hOGIcWOWG1g4B5IO_mA9184C4D752266499769D3F184C106A8FB171F0C(__this, L_13, NULL);
		V_4 = L_14;
		G_B2_0 = ((int32_t)-69053768);
		goto IL_0018;
	}

IL_00dd:
	{
		int32_t L_15 = V_4;
		if ((!(((uint32_t)L_15) == ((uint32_t)1))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_16 = ((int32_t)-1762461384);
		G_B15_0 = L_16;
		G_B15_1 = L_16;
		goto IL_00f0;
	}

IL_00ea:
	{
		int32_t L_17 = ((int32_t)-301003873);
		G_B15_0 = L_17;
		G_B15_1 = L_17;
	}

IL_00f0:
	{
		uint32_t L_18 = V_5;
		G_B2_0 = ((int32_t)(G_B15_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-1408330127)))));
		goto IL_0018;
	}

IL_00ff:
	{
		float L_19 = V_2;
		int32_t L_20 = p4;
		V_2 = ((float)il2cpp_codegen_add(L_19, ((float)L_20)));
		uint32_t L_21 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)2052257691)))^((int32_t)-318172943)));
		goto IL_0018;
	}

IL_0118:
	{
		float L_22 = V_2;
		float L_23 = p1;
		if ((((float)L_22) > ((float)L_23)))
		{
			goto IL_0124;
		}
	}
	{
		int32_t L_24 = ((int32_t)-1175799658);
		G_B20_0 = L_24;
		G_B20_1 = L_24;
		goto IL_012a;
	}

IL_0124:
	{
		int32_t L_25 = ((int32_t)-1225133710);
		G_B20_0 = L_25;
		G_B20_1 = L_25;
	}

IL_012a:
	{
		G_B2_0 = G_B20_1;
		goto IL_0018;
	}

IL_0130:
	{
		uint32_t L_26 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_26, ((int32_t)303636395)))^((int32_t)-613725909)));
		goto IL_0018;
	}

IL_0143:
	{
		uint32_t L_27 = V_5;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_27, ((int32_t)-1050005275)))^((int32_t)1082925608)));
		goto IL_0018;
	}

IL_0156:
	{
		float L_28 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_28, (1.0f)));
		G_B2_0 = ((int32_t)-10556823);
		goto IL_0018;
	}

IL_0168:
	{
		float L_29 = p2;
		V_3 = L_29;
		G_B2_0 = ((int32_t)-1391903748);
		goto IL_0018;
	}

IL_0174:
	{
		float L_30 = V_1;
		V_1 = ((float)il2cpp_codegen_add(L_30, (1.0f)));
		G_B2_0 = ((int32_t)-1970319570);
		goto IL_0018;
	}

IL_0186:
	{
		int32_t L_31 = V_4;
		if ((!(((uint32_t)L_31) == ((uint32_t)2))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_32 = ((int32_t)1340835683);
		G_B29_0 = L_32;
		G_B29_1 = L_32;
		goto IL_0199;
	}

IL_0193:
	{
		int32_t L_33 = ((int32_t)1781486252);
		G_B29_0 = L_33;
		G_B29_1 = L_33;
	}

IL_0199:
	{
		uint32_t L_34 = V_5;
		G_B2_0 = ((int32_t)(G_B29_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)754454730)))));
		goto IL_0018;
	}

IL_01a8:
	{
		float L_35 = V_0;
		float L_36 = V_1;
		return ((float)(L_35/L_36));
	}
}
// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_2JXK8GxavPOA0jSe5Ljar3at3xo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__2JXK8GxavPOA0jSe5Ljar3at3xo_m2433A1EFA4059B3BDC679CAC56B94B17640D0C6B (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_10;
	memset((&V_10), 0, sizeof(V_10));
	uint32_t V_11 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B9_1 = 0;
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_0 = L_0;
	}

IL_0007:
	{
		G_B2_0 = ((int32_t)-2061689022);
	}

IL_000c:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1208373438)));
		V_11 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)6)))
		{
			case 0:
			{
				goto IL_0135;
			}
			case 1:
			{
				goto IL_0039;
			}
			case 2:
			{
				goto IL_008a;
			}
			case 3:
			{
				goto IL_0007;
			}
			case 4:
			{
				goto IL_00c5;
			}
			case 5:
			{
				goto IL_004b;
			}
		}
	}
	{
		goto IL_0135;
	}

IL_0039:
	{
		return (bool)1;
	}
	// Dead block : IL_003b: ldloc.s V11

IL_004b:
	{
		float L_2 = V_4;
		float L_3 = V_7;
		float L_4 = (&V_2)->___x_0;
		float L_5 = (&V_2)->___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_10), L_2, L_3, L_4, L_5, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6 = V_10;
		bool L_7;
		L_7 = Rect_Overlaps_m3F0BA2C8BB81491978B21EB21C8A6D3BBED02E41((&V_1), L_6, (bool)0, NULL);
		if (L_7)
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_8 = ((int32_t)425824292);
		G_B9_0 = L_8;
		G_B9_1 = L_8;
		goto IL_007e;
	}

IL_0078:
	{
		int32_t L_9 = ((int32_t)1765371761);
		G_B9_0 = L_9;
		G_B9_1 = L_9;
	}

IL_007e:
	{
		uint32_t L_10 = V_11;
		G_B2_0 = ((int32_t)(G_B9_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_10, ((int32_t)-1045482750)))));
		goto IL_000c;
	}

IL_008a:
	{
		int32_t L_11;
		L_11 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = V_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		V_8 = L_13;
		float L_14 = (&V_8)->___y_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_15 = V_0;
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_15, NULL);
		V_9 = L_16;
		float L_17 = (&V_9)->___y_1;
		V_7 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)L_11), L_14)), L_17));
		uint32_t L_18 = V_11;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)-1922249669)))^((int32_t)376572417)));
		goto IL_000c;
	}

IL_00c5:
	{
		int32_t L_19;
		L_19 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_20;
		L_20 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), (0.0f), (0.0f), ((float)L_19), ((float)L_20), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = V_0;
		NullCheck(L_21);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_22;
		L_22 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_21, NULL);
		V_3 = L_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_24 = V_0;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_23, L_26, NULL);
		V_2 = L_27;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = V_0;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		V_5 = L_29;
		float L_30 = (&V_5)->___x_2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31 = V_0;
		NullCheck(L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_31, NULL);
		V_6 = L_32;
		float L_33 = (&V_6)->___x_0;
		V_4 = ((float)il2cpp_codegen_add(L_30, L_33));
		uint32_t L_34 = V_11;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_34, ((int32_t)1817578805)))^((int32_t)-1586823656)));
		goto IL_000c;
	}

IL_0135:
	{
		return (bool)0;
	}
}
// System.Boolean _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_DVd2cGMkFwGLXuijADZkV4G2WZG()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DVd2cGMkFwGLXuijADZkV4G2WZG_m65919457F286E338D13D5721E6C5557F349BF4B9 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* V_0 = NULL;
	PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* V_1 = NULL;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	uint32_t V_7 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B27_1 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B31_1 = 0;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Utils_GetCamera_mDFAC36AB27908C9D5CBBE926874231BA787A104E(NULL);
		V_0 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-1334606434);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-1073780498)));
		V_7 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)((int32_t)14))))
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_00b0;
			}
			case 2:
			{
				goto IL_00cd;
			}
			case 3:
			{
				goto IL_01b5;
			}
			case 4:
			{
				goto IL_00ef;
			}
			case 5:
			{
				goto IL_0077;
			}
			case 6:
			{
				goto IL_0120;
			}
			case 7:
			{
				goto IL_020b;
			}
			case 8:
			{
				goto IL_0188;
			}
			case 9:
			{
				goto IL_0006;
			}
			case 10:
			{
				goto IL_0114;
			}
			case 11:
			{
				goto IL_0059;
			}
			case 12:
			{
				goto IL_0220;
			}
			case 13:
			{
				goto IL_01da;
			}
		}
	}
	{
		goto IL_0220;
	}

IL_0059:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_3;
		L_3 = Utils_IsRenderedInScreenSpaceOverlayCanvas_m8A8B80DE25AE9E1AC0003CC481F21E06A72B31CE(L_2, NULL);
		if (L_3)
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_4 = ((int32_t)-1171235593);
		G_B7_0 = L_4;
		G_B7_1 = L_4;
		goto IL_0074;
	}

IL_006e:
	{
		int32_t L_5 = ((int32_t)-2071202633);
		G_B7_0 = L_5;
		G_B7_1 = L_5;
	}

IL_0074:
	{
		G_B2_0 = G_B7_1;
		goto IL_000b;
	}

IL_0077:
	{
		int32_t L_6;
		L_6 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_7 = (&V_4)->___x_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_6), L_7, NULL);
		float L_9 = (&V_3)->___x_2;
		float L_10;
		L_10 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_9, NULL);
		V_5 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		uint32_t L_11 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_11, ((int32_t)235024309)))^((int32_t)-1310121595)));
		goto IL_000b;
	}

IL_00b0:
	{
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_12 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_13 = V_2;
		bool L_14;
		L_14 = GeometryUtility_TestPlanesAABB_mC59A5BE75084C86EAEB8E8F0FF6E6C171E0C1012(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_15 = ((int32_t)-560533993);
		G_B12_0 = L_15;
		G_B12_1 = L_15;
		goto IL_00c7;
	}

IL_00c1:
	{
		int32_t L_16 = ((int32_t)-1447206386);
		G_B12_0 = L_16;
		G_B12_1 = L_16;
	}

IL_00c7:
	{
		G_B2_0 = G_B12_1;
		goto IL_000b;
	}

IL_00cd:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_18 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_19 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Utils_GetBoundsMax_m82F2CB62C5ACC8841A2A1E87A484C0451EF1755B(L_17, L_18, L_19, NULL);
		V_4 = L_20;
		uint32_t L_21 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_21, ((int32_t)1099778108)))^((int32_t)-1177804567)));
		goto IL_000b;
	}

IL_00ef:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22 = V_0;
		PlaneU5BU5D_t4EEF66BAA8B0140EFFF34F6183CE7F80546592BE* L_23;
		L_23 = GeometryUtility_CalculateFrustumPlanes_m22E17CF3D80D7CCA2255DB8E54A1C29AD6B92D92(L_22, NULL);
		V_1 = L_23;
		bool L_24 = __this->____BLULIwBvI6ebiTF0iGyFtCXMkEA_11;
		if (!L_24)
		{
			goto IL_01e7;
		}
	}
	{
		uint32_t L_25 = V_7;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, ((int32_t)50771508)))^((int32_t)-1907996193)));
		goto IL_000b;
	}

IL_0114:
	{
		return (bool)0;
	}
	// Dead block : IL_0116: ldc.i4 -1294611131

IL_0120:
	{
		int32_t L_26;
		L_26 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_27 = (&V_4)->___y_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_28;
		L_28 = Math_Min_mE913811A2F7566294BF4649A434282634E7254B3(((float)L_26), L_27, NULL);
		float L_29 = (&V_3)->___y_3;
		float L_30;
		L_30 = Math_Max_mB55ACEA482E7F67E61496C4C7C54FE0BB7BE78EA((0.0f), L_29, NULL);
		V_6 = ((float)il2cpp_codegen_subtract(L_28, L_30));
		float L_31 = V_5;
		int32_t L_32;
		L_32 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		if ((((float)L_31) > ((float)((float)il2cpp_codegen_multiply((0.00999999978f), ((float)L_32))))))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_33 = ((int32_t)1432476546);
		G_B21_0 = L_33;
		G_B21_1 = L_33;
		goto IL_0164;
	}

IL_015e:
	{
		int32_t L_34 = ((int32_t)2065693086);
		G_B21_0 = L_34;
		G_B21_1 = L_34;
	}

IL_0164:
	{
		uint32_t L_35 = V_7;
		G_B2_0 = ((int32_t)(G_B21_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_35, ((int32_t)-1047300607)))));
		goto IL_000b;
	}

IL_0173:
	{
		return (bool)1;
	}
	// Dead block : IL_0175: ldloc.s V7

IL_0188:
	{
		float L_36 = V_6;
		int32_t L_37;
		L_37 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		if ((!(((float)L_36) <= ((float)((float)il2cpp_codegen_multiply((0.00999999978f), ((float)L_37)))))))
		{
			goto IL_01a0;
		}
	}
	{
		int32_t L_38 = ((int32_t)1653466098);
		G_B27_0 = L_38;
		G_B27_1 = L_38;
		goto IL_01a6;
	}

IL_01a0:
	{
		int32_t L_39 = ((int32_t)871118789);
		G_B27_0 = L_39;
		G_B27_1 = L_39;
	}

IL_01a6:
	{
		uint32_t L_40 = V_7;
		G_B2_0 = ((int32_t)(G_B27_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_40, ((int32_t)-527717373)))));
		goto IL_000b;
	}

IL_01b5:
	{
		bool L_41;
		L_41 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__2JXK8GxavPOA0jSe5Ljar3at3xo_m2433A1EFA4059B3BDC679CAC56B94B17640D0C6B(__this, NULL);
		if (L_41)
		{
			goto IL_01c5;
		}
	}
	{
		int32_t L_42 = ((int32_t)1817160339);
		G_B31_0 = L_42;
		G_B31_1 = L_42;
		goto IL_01cb;
	}

IL_01c5:
	{
		int32_t L_43 = ((int32_t)2135310174);
		G_B31_0 = L_43;
		G_B31_1 = L_43;
	}

IL_01cb:
	{
		uint32_t L_44 = V_7;
		G_B2_0 = ((int32_t)(G_B31_1^((int32_t)il2cpp_codegen_multiply((int32_t)L_44, ((int32_t)-2029712124)))));
		goto IL_000b;
	}

IL_01da:
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_45;
		L_45 = Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16(__this, Component_GetComponent_TisCollider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52_m31B1EF4FAA3D2DF8AB87DF54CCC2D9A578468F16_RuntimeMethod_var);
		NullCheck(L_45);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_46;
		L_46 = Collider2D_get_bounds_m74F65CE702BA9D9EED05B870325B4FE3B2401B5E(L_45, NULL);
		G_B34_0 = L_46;
		goto IL_01f2;
	}

IL_01e7:
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_47;
		L_47 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		NullCheck(L_47);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_48;
		L_48 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_47, NULL);
		G_B34_0 = L_48;
	}

IL_01f2:
	{
		V_2 = G_B34_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_50 = V_0;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_51 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Utils_GetBoundsMin_mD96D89E8C4E9FF8E93927B9D7FC214F0C249F352(L_49, L_50, L_51, NULL);
		V_3 = L_52;
		G_B2_0 = ((int32_t)-112928976);
		goto IL_000b;
	}

IL_020b:
	{
		return (bool)1;
	}
	// Dead block : IL_020d: ldloc.s V7

IL_0220:
	{
		return (bool)0;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::CheckForImpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G_CheckForImpression_m830A4DB79FE9B050219AD480F08F4D3533297B35 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		bool L_0 = __this->____Gd8dqsuZTLM9iRRvespGXox49Nj_8;
		if (!L_0)
		{
			goto IL_0052;
		}
	}

IL_0008:
	{
		G_B2_0 = ((int32_t)607875905);
	}

IL_000d:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)980739453)));
		V_0 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0008;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0052;
			}
			case 3:
			{
				goto IL_007b;
			}
			case 4:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0032:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->____lsSp5wNkEu7AwywXobwJZ5buadN_13;
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_3 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
		NullCheck(L_2);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_2, __this, L_3, NULL);
		uint32_t L_4 = V_0;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-509753932)))^((int32_t)-251026322)));
		goto IL_000d;
	}

IL_0052:
	{
		bool L_5;
		L_5 = _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__DVd2cGMkFwGLXuijADZkV4G2WZG_m65919457F286E338D13D5721E6C5557F349BF4B9(__this, NULL);
		if (!L_5)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_6 = ((int32_t)362720420);
		G_B8_0 = L_6;
		G_B8_1 = L_6;
		goto IL_0068;
	}

IL_0062:
	{
		int32_t L_7 = ((int32_t)263015930);
		G_B8_0 = L_7;
		G_B8_1 = L_7;
	}

IL_0068:
	{
		G_B2_0 = G_B8_1;
		goto IL_000d;
	}

IL_006b:
	{
		return;
	}
	// Dead block : IL_006c: ldloc.0

IL_007b:
	{
		return;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._EZUY2sDrZ60wiKIRbwJMVaAWZ5G::_QvoqGLdqICUWf3DBF66aj6PYrhe(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh,_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__QvoqGLdqICUWf3DBF66aj6PYrhe_m91B5C95E4F5B8CAB07A618856F683C5861F7F173 (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* V_0 = NULL;
	_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* V_1 = NULL;
	uint32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	{
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_0 = (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F*)il2cpp_codegen_object_new(_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		_ONyW98lA5dZsD6Gc6xMqg10C6CR__ctor_m005E64DD78FC45775DE4DF353CE054FFBC6076BE(L_0, NULL);
		V_1 = L_0;
	}

IL_0006:
	{
		G_B2_0 = ((int32_t)-542515233);
	}

IL_000b:
	{
		int32_t L_1 = ((int32_t)(G_B2_0^((int32_t)-298098316)));
		V_2 = L_1;
		switch (((int32_t)((uint32_t)(int32_t)L_1%(uint32_t)(int32_t)5)))
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0046;
			}
			case 3:
			{
				goto IL_006d;
			}
			case 4:
			{
				goto IL_0006;
			}
		}
	}
	{
		goto IL_006d;
	}

IL_0030:
	{
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_2 = V_1;
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_3 = p1;
		NullCheck(L_2);
		_ONyW98lA5dZsD6Gc6xMqg10C6CR__baBtPNL08tsXbqgcCXqZCORajOr_m187512D56C838851D18162565428A28C4BE2D6E6_inline(L_2, L_3, NULL);
		uint32_t L_4 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_4, ((int32_t)-585439482)))^((int32_t)1721487351)));
		goto IL_000b;
	}

IL_0046:
	{
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_5 = V_1;
		V_0 = L_5;
		uint32_t L_6 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_6, ((int32_t)-475221465)))^((int32_t)622587481)));
		goto IL_000b;
	}

IL_0057:
	{
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_7 = V_1;
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_8 = p0;
		NullCheck(L_7);
		_ONyW98lA5dZsD6Gc6xMqg10C6CR__AibTA51B5uBATJ3eYgR9gT6PVdJ_mF44EE3F70F5D36A78A5D936D52B8A0A0F7C64745_inline(L_7, L_8, NULL);
		uint32_t L_9 = V_2;
		G_B2_0 = ((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_9, ((int32_t)-2098671841)))^((int32_t)440999305)));
		goto IL_000b;
	}

IL_006d:
	{
		EventHandler_1_t5D3D33E83D93AF7240825E2C25752B3FC3E93ED0* L_10 = __this->____csO422E4cFHyANFhfzoIa6LH7D8_14;
		_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* L_11 = V_0;
		NullCheck(L_10);
		EventHandler_1_Invoke_m77D34C4CE6EE26EC6F7371EF34A4A68199234059_inline(L_10, __this, L_11, NULL);
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
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__ctor_m005E64DD78FC45775DE4DF353CE054FFBC6076BE (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_LXmCUeyVgQ1XwITAilfI85Tso2H()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LXmCUeyVgQ1XwITAilfI85Tso2H_m709CB4F2B75F2EF9992B4B2D283256E3D16CB26B (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = __this->____JzHKEeOvCrir7YSuym1INVQGDfG_1;
		return L_0;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_baBtPNL08tsXbqgcCXqZCORajOr(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__baBtPNL08tsXbqgcCXqZCORajOr_m187512D56C838851D18162565428A28C4BE2D6E6 (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = p0;
		__this->____JzHKEeOvCrir7YSuym1INVQGDfG_1 = L_0;
		return;
	}
}
// _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_LBaiSkaw4tGvDESDZVMvkYtjOpk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LBaiSkaw4tGvDESDZVMvkYtjOpk_m9AB1A87431BF12C1A7D4F51C743A5314D23EC1CD (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = __this->____ANELATAfdLmPNoTLoaM6i0PU8iF_2;
		return L_0;
	}
}
// System.Void _1vxD40oOUsRFcyIsYSdDwOmD5AgA._ONyW98lA5dZsD6Gc6xMqg10C6CR::_AibTA51B5uBATJ3eYgR9gT6PVdJ(_1vxD40oOUsRFcyIsYSdDwOmD5AgA._ZVkic8Y9pKArG9NnMoaOJ1PV5yh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__AibTA51B5uBATJ3eYgR9gT6PVdJ_mF44EE3F70F5D36A78A5D936D52B8A0A0F7C64745 (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = p0;
		__this->____ANELATAfdLmPNoTLoaM6i0PU8iF_2 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AdFailedToLoadEventArgs_get_Message_m0E0DB6551009892740BBFB2BF60C027143E220AD_inline (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LBaiSkaw4tGvDESDZVMvkYtjOpk_m9AB1A87431BF12C1A7D4F51C743A5314D23EC1CD_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = __this->____ANELATAfdLmPNoTLoaM6i0PU8iF_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 _ONyW98lA5dZsD6Gc6xMqg10C6CR__LXmCUeyVgQ1XwITAilfI85Tso2H_m709CB4F2B75F2EF9992B4B2D283256E3D16CB26B_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = __this->____JzHKEeOvCrir7YSuym1INVQGDfG_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_Message_m26F5479DCBC01F4F87AE180F3ACF5AF5F548A478_inline (AdFailedToLoadEventArgs_t2158E091CD8D93EBBCB53F9B9F181B268AF9F2A9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__qaZ9ZcveJzC8SIiIORK6B4bZQhh_m3D20074D7C2C6C2D51684A10E94C33D920A2AFC4_inline (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		String_t* L_0 = __this->____CVxzVJm7f4wvaR76XDeLdGMD6r_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float _EZUY2sDrZ60wiKIRbwJMVaAWZ5G__eesP3ddQRTjMAScQVJzAg5XCkXg_m2EFC2EC198FDA8323212E65469EADD7619EF9084_inline (_EZUY2sDrZ60wiKIRbwJMVaAWZ5G_tB60A51B10CFFA871D863F40806D6CAA5E5A27275* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		float L_0 = __this->____BImyrxVoGQ3rXfqyfpjwy9yEPFF_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m66E8DFE693F550372E6B085C6E2F887FDB092FAA_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___U3CpositionU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* RaycastResult_get_gameObject_m77014B442B9E2D10F2CC3AEEDC07AA95CDE1E2F1_inline (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_GameObject; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_GameObject_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__baBtPNL08tsXbqgcCXqZCORajOr_m187512D56C838851D18162565428A28C4BE2D6E6_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = p0;
		__this->____JzHKEeOvCrir7YSuym1INVQGDfG_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void _ONyW98lA5dZsD6Gc6xMqg10C6CR__AibTA51B5uBATJ3eYgR9gT6PVdJ_mF44EE3F70F5D36A78A5D936D52B8A0A0F7C64745_inline (_ONyW98lA5dZsD6Gc6xMqg10C6CR_tF72D5FCB34F98935833C3BE056D80411BAABCD5F* __this, _ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 p0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		_ZVkic8Y9pKArG9NnMoaOJ1PV5yh_t0F58BEA03692E29518ADB7C860650FDF94559F73 L_0 = p0;
		__this->____ANELATAfdLmPNoTLoaM6i0PU8iF_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 Enumerator_get_Current_m53EF02F206B7F773103FC51D50AC1B974AE692F4_gshared_inline (Enumerator_tFEA671794CD7ED9545DB6E9B1D2E744410E5EB1C* __this, const RuntimeMethod* method) 
{
	{
		RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 L_0 = (RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
