#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<PW.Product,System.Boolean>
struct Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<PW.Product>
struct IEnumerable_1_tB49E297325B886483C29FC37BB35328FC6761919;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// PW.Product[]
struct ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// PW.BasicCameraControl
struct BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04;
// PW.BasicGameEvents
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// PW.CookableProduct
struct CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9;
// PW.CookingGameObject
struct CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// PW.CreateProductOnPlaceHolder
struct CreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SojaExiles.Drawer_Pull_X
struct Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2;
// SojaExiles.Drawer_Pull_Z
struct Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// PW.HeatableProduct
struct HeatableProduct_t7C49458BAA80DA6A8A56C069818180D2E072B824;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// PW.Microwave
struct Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// SojaExiles.MouseLook
struct MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PW.OnClickCoverHelper
struct OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3;
// PW.OrderGenerator
struct OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555;
// UnityEngine.UI.Outline
struct Outline_t9CF146E077DC65F441EDEC463AA6710374108084;
// PW.PanGameObject
struct PanGameObject_t801D0547904579BEAADEFB9C1DD6208D1D9BBF93;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// SojaExiles.PlayerMovement
struct PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D;
// PW.PlayerSlots
struct PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508;
// PW.Product
struct Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4;
// PW.ProductGameObject
struct ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011;
// PW.ProductManager
struct ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE;
// PW.ProductWithCover
struct ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103;
// PW.ProgressHelper
struct ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469;
// PW.ReadyToServe
struct ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SojaExiles.SceneSwitchGen
struct SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D;
// PW.ServeOrder
struct ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30;
// UnityEngine.UI.Shadow
struct Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95;
// PW.SliceHelper
struct SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// PW.StoveGameObject
struct StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// SojaExiles.opencloseDoor
struct opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815;
// SojaExiles.opencloseDoor1
struct opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C;
// SojaExiles.opencloseStallDoor
struct opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1;
// SojaExiles.opencloseWindow
struct opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F;
// SojaExiles.opencloseWindow1
struct opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12;
// PW.BasicGameEvents/OnOrderCancelled
struct OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3;
// PW.BasicGameEvents/OnOrderCompleted
struct OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854;
// PW.BasicGameEvents/OnPlaceHolderRequired
struct OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493;
// PW.BasicGameEvents/OnProductAddedToSlot
struct OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381;
// PW.BasicGameEvents/OnProductDeletedFromSlot
struct OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// SojaExiles.Drawer_Pull_X/<closing>d__6
struct U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2;
// SojaExiles.Drawer_Pull_X/<opening>d__5
struct U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F;
// SojaExiles.Drawer_Pull_Z/<closing>d__6
struct U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A;
// SojaExiles.Drawer_Pull_Z/<opening>d__5
struct U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// PW.Microwave/<Heating>d__14
struct U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2;
// PW.OrderGenerator/<GenerateOrderRoutine>d__11
struct U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C;
// PW.PlayerSlots/<DoEmphasize>d__6
struct U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7;
// PW.ProductGameObject/<AnimateGoingToSlot>d__6
struct U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525;
// PW.ProductGameObject/<MoveToPlace>d__8
struct U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF;
// PW.ProductManager/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19;
// PW.ProductWithCover/<OpenCloseDisplay>d__9
struct U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86;
// PW.ReadyToServe/<AnimateGoingToSlot>d__4
struct U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233;
// PW.ServeOrder/<DoEmphasize>d__9
struct U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362;
// PW.StoveGameObject/<PlayDoorAnim>d__6
struct U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D;
// SojaExiles.opencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA;
// SojaExiles.opencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450;
// SojaExiles.opencloseDoor1/<closing>d__6
struct U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81;
// SojaExiles.opencloseDoor1/<opening>d__5
struct U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B;
// SojaExiles.opencloseStallDoor/<closing>d__6
struct U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238;
// SojaExiles.opencloseStallDoor/<opening>d__5
struct U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894;
// SojaExiles.opencloseWindow/<closing>d__6
struct U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD;
// SojaExiles.opencloseWindow/<opening>d__5
struct U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11;
// SojaExiles.opencloseWindow1/<closing>d__6
struct U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614;
// SojaExiles.opencloseWindow1/<opening>d__5
struct U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04;

IL2CPP_EXTERN_C RuntimeClass* BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1;
IL2CPP_EXTERN_C String_t* _stringLiteral0D7955D7CD14D4D3E9E45365AA7FE246CC51F87B;
IL2CPP_EXTERN_C String_t* _stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE;
IL2CPP_EXTERN_C String_t* _stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5;
IL2CPP_EXTERN_C String_t* _stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58;
IL2CPP_EXTERN_C String_t* _stringLiteral3B7B04F8EB29633E9566B45A573FC0A895842AB0;
IL2CPP_EXTERN_C String_t* _stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8;
IL2CPP_EXTERN_C String_t* _stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808;
IL2CPP_EXTERN_C String_t* _stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781;
IL2CPP_EXTERN_C String_t* _stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1;
IL2CPP_EXTERN_C String_t* _stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B;
IL2CPP_EXTERN_C String_t* _stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32;
IL2CPP_EXTERN_C String_t* _stringLiteral92873158F8EA0C6A8F900B67C838305C1944365A;
IL2CPP_EXTERN_C String_t* _stringLiteral959CF7126A3C168B5A25816EEFF815B55EEA20FF;
IL2CPP_EXTERN_C String_t* _stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F;
IL2CPP_EXTERN_C String_t* _stringLiteralA54D7A1E1081CD333E34C6EDF9E98631BABB2B1F;
IL2CPP_EXTERN_C String_t* _stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7;
IL2CPP_EXTERN_C String_t* _stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0;
IL2CPP_EXTERN_C String_t* _stringLiteralB2B771ED8F639EE0F8CC5EC2CBA5A3F0B1A4EF53;
IL2CPP_EXTERN_C String_t* _stringLiteralB2FF596868CCC9F09DEF52DF6E80E1562CD11F97;
IL2CPP_EXTERN_C String_t* _stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082;
IL2CPP_EXTERN_C String_t* _stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908;
IL2CPP_EXTERN_C String_t* _stringLiteralD376069D46E56C55ED5623DF80F2491B3330FF05;
IL2CPP_EXTERN_C String_t* _stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD485A77E753B159725E52C6F950C5ED02DCC1B;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687;
IL2CPP_EXTERN_C String_t* _stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m193BF0C82C2FB1444EA2418492EF40994169EE40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3_m7E8A799CC625B1440FA3A1A3078D6CCF752D5C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Count_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mEFB0F3D142E6065B569A41F90EB9112E725C3DBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m1BA3A15E3CAAD7ED3F291BB3D67B99D9ED102AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mB023319FF967A3431252C9A5275A2CCCCDD2C0CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA_m12724265CBFFDC3E8FB088C863DD56A7D097F498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30_m256C3175CADEAC65C21132E8D5A24EC55D6A427F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisOrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555_m59598AB0B9C2C466AFDA1D1322AC663EBAE575BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateGoingToSlotU3Ed__4_System_Collections_IEnumerator_Reset_mCBFBB6AF12B01D67891781827C02EB9EE3D0E095_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimateGoingToSlotU3Ed__6_System_Collections_IEnumerator_Reset_m75198CC6DB8F330A8D0CD09192DD67BDD3B26221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoEmphasizeU3Ed__6_System_Collections_IEnumerator_Reset_m1766D561AA5D3F587F7E13F00A5E71EF865C7AC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDoEmphasizeU3Ed__9_System_Collections_IEnumerator_Reset_mE041ADE182384DA5E9124EF16BFB74069DDBB56E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGenerateOrderRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mA6287E3DC5B7D6B63CA2A7AB61D665046EB5F20A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHeatingU3Ed__14_System_Collections_IEnumerator_Reset_mA62BF73547B0A1F6E7FD5CE3CC27B792B0665EC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveToPlaceU3Ed__8_System_Collections_IEnumerator_Reset_m41AD8AE3E01C10A67DAEB596796A93A1FCF40051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COpenCloseDisplayU3Ed__9_System_Collections_IEnumerator_Reset_m1889E541D87F29D4A212D20800502374ABC2C5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayDoorAnimU3Ed__6_System_Collections_IEnumerator_Reset_m07FD0F8134565B4AB799F96F3D8CCFE9CB464FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CRemoveProductU3Eb__0_m04D3F4ECF8A1810775F6F84E1B9E9B237F5C05BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m541DFE8DDD091300FC8BD444B66A68BD2183700C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7591D4C7B980907DBCE7764A1B4577D912374D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// SojaExiles.Drawer_Pull_X/<closing>d__6
struct U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_X/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_X SojaExiles.Drawer_Pull_X/<closing>d__6::<>4__this
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_X/<opening>d__5
struct U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_X/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_X SojaExiles.Drawer_Pull_X/<opening>d__5::<>4__this
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Z/<closing>d__6
struct U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Z/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Z SojaExiles.Drawer_Pull_Z/<closing>d__6::<>4__this
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* ___U3CU3E4__this_2;
};

// SojaExiles.Drawer_Pull_Z/<opening>d__5
struct U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD  : public RuntimeObject
{
	// System.Int32 SojaExiles.Drawer_Pull_Z/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.Drawer_Pull_Z SojaExiles.Drawer_Pull_Z/<opening>d__5::<>4__this
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* ___U3CU3E4__this_2;
};

// PW.Microwave/<Heating>d__14
struct U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2  : public RuntimeObject
{
	// System.Int32 PW.Microwave/<Heating>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.Microwave/<Heating>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.Microwave PW.Microwave/<Heating>d__14::<>4__this
	Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* ___U3CU3E4__this_2;
	// System.Single PW.Microwave/<Heating>d__14::<curProcess>5__2
	float ___U3CcurProcessU3E5__2_3;
};

// PW.OrderGenerator/<GenerateOrderRoutine>d__11
struct U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C  : public RuntimeObject
{
	// System.Int32 PW.OrderGenerator/<GenerateOrderRoutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.OrderGenerator/<GenerateOrderRoutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.OrderGenerator PW.OrderGenerator/<GenerateOrderRoutine>d__11::<>4__this
	OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* ___U3CU3E4__this_2;
	// System.Single PW.OrderGenerator/<GenerateOrderRoutine>d__11::intervalTime
	float ___intervalTime_3;
};

// PW.ProductManager/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19  : public RuntimeObject
{
	// System.Int32 PW.ProductManager/<>c__DisplayClass6_0::orderID
	int32_t ___orderID_0;
};

// PW.ReadyToServe/<AnimateGoingToSlot>d__4
struct U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233  : public RuntimeObject
{
	// System.Int32 PW.ReadyToServe/<AnimateGoingToSlot>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.ReadyToServe/<AnimateGoingToSlot>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.ReadyToServe PW.ReadyToServe/<AnimateGoingToSlot>d__4::<>4__this
	ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* ___U3CU3E4__this_2;
};

// PW.StoveGameObject/<PlayDoorAnim>d__6
struct U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D  : public RuntimeObject
{
	// System.Int32 PW.StoveGameObject/<PlayDoorAnim>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.StoveGameObject/<PlayDoorAnim>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.StoveGameObject PW.StoveGameObject/<PlayDoorAnim>d__6::<>4__this
	StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* ___U3CU3E4__this_2;
	// System.Boolean PW.StoveGameObject/<PlayDoorAnim>d__6::open
	bool ___open_3;
	// System.Boolean PW.StoveGameObject/<PlayDoorAnim>d__6::alsoReverse
	bool ___alsoReverse_4;
	// System.Single PW.StoveGameObject/<PlayDoorAnim>d__6::<totalTime>5__2
	float ___U3CtotalTimeU3E5__2_5;
	// System.Single PW.StoveGameObject/<PlayDoorAnim>d__6::<curTime>5__3
	float ___U3CcurTimeU3E5__3_6;
	// System.Single PW.StoveGameObject/<PlayDoorAnim>d__6::<totalAngle>5__4
	float ___U3CtotalAngleU3E5__4_7;
	// System.Single PW.StoveGameObject/<PlayDoorAnim>d__6::<multiplier>5__5
	float ___U3CmultiplierU3E5__5_8;
	// System.Single PW.StoveGameObject/<PlayDoorAnim>d__6::<finalAngle>5__6
	float ___U3CfinalAngleU3E5__6_9;
};

// SojaExiles.opencloseDoor/<closing>d__6
struct U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor SojaExiles.opencloseDoor/<closing>d__6::<>4__this
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor/<opening>d__5
struct U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor SojaExiles.opencloseDoor/<opening>d__5::<>4__this
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor1/<closing>d__6
struct U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor1/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor1/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor1 SojaExiles.opencloseDoor1/<closing>d__6::<>4__this
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseDoor1/<opening>d__5
struct U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseDoor1/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseDoor1/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseDoor1 SojaExiles.opencloseDoor1/<opening>d__5::<>4__this
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseStallDoor/<closing>d__6
struct U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseStallDoor/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseStallDoor/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseStallDoor SojaExiles.opencloseStallDoor/<closing>d__6::<>4__this
	opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseStallDoor/<opening>d__5
struct U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseStallDoor/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseStallDoor/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseStallDoor SojaExiles.opencloseStallDoor/<opening>d__5::<>4__this
	opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow/<closing>d__6
struct U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow SojaExiles.opencloseWindow/<closing>d__6::<>4__this
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow/<opening>d__5
struct U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow SojaExiles.opencloseWindow/<opening>d__5::<>4__this
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow1/<closing>d__6
struct U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow1/<closing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow1/<closing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow1 SojaExiles.opencloseWindow1/<closing>d__6::<>4__this
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* ___U3CU3E4__this_2;
};

// SojaExiles.opencloseWindow1/<opening>d__5
struct U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04  : public RuntimeObject
{
	// System.Int32 SojaExiles.opencloseWindow1/<opening>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SojaExiles.opencloseWindow1/<opening>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SojaExiles.opencloseWindow1 SojaExiles.opencloseWindow1/<opening>d__5::<>4__this
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
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

// PW.Product
struct Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4  : public RuntimeObject
{
	// UnityEngine.GameObject PW.Product::productPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___productPrefab_0;
	// System.Int32 PW.Product::orderID
	int32_t ___orderID_1;
	// System.String PW.Product::productName
	String_t* ___productName_2;
	// System.Single PW.Product::productPrice
	float ___productPrice_3;
	// ProductType PW.Product::productType
	int32_t ___productType_4;
	// System.Boolean PW.Product::addToPlateBeforeServed
	bool ___addToPlateBeforeServed_5;
	// System.Boolean PW.Product::dontIncludeInThisScene
	bool ___dontIncludeInThisScene_6;
	// UnityEngine.GameObject PW.Product::servedAsDifferentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___servedAsDifferentGameObject_7;
	// UnityEngine.Vector3 PW.Product::plateOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___plateOffset_8;
	// System.Boolean PW.Product::RegenerateProduct
	bool ___RegenerateProduct_9;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// PW.PlayerSlots/<DoEmphasize>d__6
struct U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7  : public RuntimeObject
{
	// System.Int32 PW.PlayerSlots/<DoEmphasize>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.PlayerSlots/<DoEmphasize>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.PlayerSlots PW.PlayerSlots/<DoEmphasize>d__6::<>4__this
	PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* ___U3CU3E4__this_2;
	// System.Int32 PW.PlayerSlots/<DoEmphasize>d__6::index
	int32_t ___index_3;
	// UnityEngine.UI.Image PW.PlayerSlots/<DoEmphasize>d__6::<uiImage>5__2
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___U3CuiImageU3E5__2_4;
	// UnityEngine.UI.Outline PW.PlayerSlots/<DoEmphasize>d__6::<outline>5__3
	Outline_t9CF146E077DC65F441EDEC463AA6710374108084* ___U3CoutlineU3E5__3_5;
	// UnityEngine.Color PW.PlayerSlots/<DoEmphasize>d__6::<outlineColor>5__4
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CoutlineColorU3E5__4_6;
	// System.Single PW.PlayerSlots/<DoEmphasize>d__6::<totalTime>5__5
	float ___U3CtotalTimeU3E5__5_7;
	// System.Single PW.PlayerSlots/<DoEmphasize>d__6::<curTime>5__6
	float ___U3CcurTimeU3E5__6_8;
	// System.Single PW.PlayerSlots/<DoEmphasize>d__6::<alphaVal>5__7
	float ___U3CalphaValU3E5__7_9;
};

// PW.ProductGameObject/<AnimateGoingToSlot>d__6
struct U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525  : public RuntimeObject
{
	// System.Int32 PW.ProductGameObject/<AnimateGoingToSlot>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.ProductGameObject/<AnimateGoingToSlot>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.ProductGameObject PW.ProductGameObject/<AnimateGoingToSlot>d__6::<>4__this
	ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* ___U3CU3E4__this_2;
	// System.Single PW.ProductGameObject/<AnimateGoingToSlot>d__6::<curTime>5__2
	float ___U3CcurTimeU3E5__2_3;
	// UnityEngine.Vector3 PW.ProductGameObject/<AnimateGoingToSlot>d__6::<totalDist>5__3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtotalDistU3E5__3_4;
};

// PW.ProductGameObject/<MoveToPlace>d__8
struct U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF  : public RuntimeObject
{
	// System.Int32 PW.ProductGameObject/<MoveToPlace>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.ProductGameObject/<MoveToPlace>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Vector3 PW.ProductGameObject/<MoveToPlace>d__8::targetPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPos_2;
	// PW.ProductGameObject PW.ProductGameObject/<MoveToPlace>d__8::<>4__this
	ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* ___U3CU3E4__this_3;
	// System.Single PW.ProductGameObject/<MoveToPlace>d__8::<totalTime>5__2
	float ___U3CtotalTimeU3E5__2_4;
	// System.Single PW.ProductGameObject/<MoveToPlace>d__8::<curTime>5__3
	float ___U3CcurTimeU3E5__3_5;
	// UnityEngine.Vector3 PW.ProductGameObject/<MoveToPlace>d__8::<totalDist>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtotalDistU3E5__4_6;
};

// PW.ProductWithCover/<OpenCloseDisplay>d__9
struct U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86  : public RuntimeObject
{
	// System.Int32 PW.ProductWithCover/<OpenCloseDisplay>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.ProductWithCover/<OpenCloseDisplay>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.ProductWithCover PW.ProductWithCover/<OpenCloseDisplay>d__9::<>4__this
	ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* ___U3CU3E4__this_2;
	// System.Boolean PW.ProductWithCover/<OpenCloseDisplay>d__9::open
	bool ___open_3;
	// System.Boolean PW.ProductWithCover/<OpenCloseDisplay>d__9::alsoReverse
	bool ___alsoReverse_4;
	// System.Single PW.ProductWithCover/<OpenCloseDisplay>d__9::<totalTime>5__2
	float ___U3CtotalTimeU3E5__2_5;
	// System.Single PW.ProductWithCover/<OpenCloseDisplay>d__9::<curTime>5__3
	float ___U3CcurTimeU3E5__3_6;
	// UnityEngine.Vector3 PW.ProductWithCover/<OpenCloseDisplay>d__9::<totalDist>5__4
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CtotalDistU3E5__4_7;
	// UnityEngine.Vector3 PW.ProductWithCover/<OpenCloseDisplay>d__9::<finalPos>5__5
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CfinalPosU3E5__5_8;
};

// PW.ServeOrder/<DoEmphasize>d__9
struct U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362  : public RuntimeObject
{
	// System.Int32 PW.ServeOrder/<DoEmphasize>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PW.ServeOrder/<DoEmphasize>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PW.ServeOrder PW.ServeOrder/<DoEmphasize>d__9::<>4__this
	ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* ___U3CU3E4__this_2;
	// UnityEngine.UI.Outline PW.ServeOrder/<DoEmphasize>d__9::<outline>5__2
	Outline_t9CF146E077DC65F441EDEC463AA6710374108084* ___U3CoutlineU3E5__2_3;
	// UnityEngine.Color PW.ServeOrder/<DoEmphasize>d__9::<outlineColor>5__3
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CoutlineColorU3E5__3_4;
	// System.Single PW.ServeOrder/<DoEmphasize>d__9::<totalTime>5__4
	float ___U3CtotalTimeU3E5__4_5;
	// System.Single PW.ServeOrder/<DoEmphasize>d__9::<curTime>5__5
	float ___U3CcurTimeU3E5__5_6;
	// System.Single PW.ServeOrder/<DoEmphasize>d__9::<alphaVal>5__6
	float ___U3CalphaValU3E5__6_7;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<PW.Product,System.Boolean>
struct Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// PW.BasicGameEvents/OnOrderCancelled
struct OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3  : public MulticastDelegate_t
{
};

// PW.BasicGameEvents/OnOrderCompleted
struct OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854  : public MulticastDelegate_t
{
};

// PW.BasicGameEvents/OnPlaceHolderRequired
struct OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493  : public MulticastDelegate_t
{
};

// PW.BasicGameEvents/OnProductAddedToSlot
struct OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381  : public MulticastDelegate_t
{
};

// PW.BasicGameEvents/OnProductDeletedFromSlot
struct OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// PW.BasicCameraControl
struct BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PW.BasicCameraControl::rotateSpeed
	float ___rotateSpeed_4;
	// System.Single PW.BasicCameraControl::scrollSmooth
	float ___scrollSmooth_5;
};

// PW.BasicGameEvents
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PW.BasicGameEvents::placeholderPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeholderPrefab_4;
};

// PW.CookingGameObject
struct CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 PW.CookingGameObject::cookingSpot
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cookingSpot_4;
	// UnityEngine.Vector3 PW.CookingGameObject::startingPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startingPositionOffset_5;
	// PW.CookableProduct PW.CookingGameObject::currentProduct
	CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9* ___currentProduct_6;
	// UnityEngine.GameObject PW.CookingGameObject::progressHelperprefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressHelperprefab_7;
	// PW.ProgressHelper PW.CookingGameObject::m_progressHelper
	ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* ___m_progressHelper_8;
	// System.Single PW.CookingGameObject::doorAnimTime
	float ___doorAnimTime_9;
	// System.Single PW.CookingGameObject::cookingProcess
	float ___cookingProcess_10;
	// UnityEngine.Collider PW.CookingGameObject::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_11;
};

// PW.CreateProductOnPlaceHolder
struct CreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PW.CreateProductOnPlaceHolder::objectToGenerate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToGenerate_4;
};

// SojaExiles.Drawer_Pull_X
struct Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.Drawer_Pull_X::pull_01
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___pull_01_4;
	// System.Boolean SojaExiles.Drawer_Pull_X::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.Drawer_Pull_X::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.Drawer_Pull_Z
struct Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.Drawer_Pull_Z::pull
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___pull_4;
	// System.Boolean SojaExiles.Drawer_Pull_Z::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.Drawer_Pull_Z::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// PW.Microwave
struct Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PW.HeatableProduct PW.Microwave::currentProduct
	HeatableProduct_t7C49458BAA80DA6A8A56C069818180D2E072B824* ___currentProduct_4;
	// System.Boolean PW.Microwave::doorIsOpen
	bool ___doorIsOpen_5;
	// UnityEngine.Transform PW.Microwave::door
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___door_6;
	// UnityEngine.Transform PW.Microwave::beginEnteringSpot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___beginEnteringSpot_7;
	// UnityEngine.Transform PW.Microwave::cookingSpot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cookingSpot_8;
	// UnityEngine.GameObject PW.Microwave::progressHelperprefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___progressHelperprefab_9;
	// PW.ProgressHelper PW.Microwave::m_progressHelper
	ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* ___m_progressHelper_10;
	// System.Single PW.Microwave::heatingProcess
	float ___heatingProcess_11;
};

// SojaExiles.MouseLook
struct MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single SojaExiles.MouseLook::mouseXSensitivity
	float ___mouseXSensitivity_4;
	// UnityEngine.Transform SojaExiles.MouseLook::playerBody
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerBody_5;
	// System.Single SojaExiles.MouseLook::xRotation
	float ___xRotation_6;
};

// PW.OnClickCoverHelper
struct OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent PW.OnClickCoverHelper::methodToCall
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___methodToCall_4;
	// UnityEngine.Collider PW.OnClickCoverHelper::m_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_collider_5;
};

// PW.OrderGenerator
struct OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PW.OrderGenerator::MaxConcurrentOrder
	int32_t ___MaxConcurrentOrder_4;
	// System.Int32 PW.OrderGenerator::currentOrderCount
	int32_t ___currentOrderCount_5;
	// UnityEngine.Sprite[] PW.OrderGenerator::orderSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___orderSprites_6;
	// System.Int32[] PW.OrderGenerator::orderedProducts
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___orderedProducts_7;
	// UnityEngine.Transform PW.OrderGenerator::UIParentForOrders
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___UIParentForOrders_8;
	// UnityEngine.GameObject PW.OrderGenerator::orderRepPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___orderRepPrefab_9;
};

// SojaExiles.PlayerMovement
struct PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController SojaExiles.PlayerMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// System.Single SojaExiles.PlayerMovement::speed
	float ___speed_5;
	// System.Single SojaExiles.PlayerMovement::gravity
	float ___gravity_6;
	// UnityEngine.Vector3 SojaExiles.PlayerMovement::velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___velocity_7;
	// System.Boolean SojaExiles.PlayerMovement::isGrounded
	bool ___isGrounded_8;
};

// PW.PlayerSlots
struct PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PW.PlayerSlots::slotCount
	int32_t ___slotCount_4;
	// System.Int32[] PW.PlayerSlots::slotItems
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___slotItems_5;
	// UnityEngine.UI.Image[] PW.PlayerSlots::slotUIObjects
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___slotUIObjects_6;
};

// PW.ProductGameObject
struct ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PW.ProductGameObject::serveAsDifferentGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___serveAsDifferentGameObject_5;
	// System.Int32 PW.ProductGameObject::orderID
	int32_t ___orderID_6;
	// System.Boolean PW.ProductGameObject::AddToPlateBeforeServed
	bool ___AddToPlateBeforeServed_7;
	// UnityEngine.Vector3 PW.ProductGameObject::plateOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___plateOffset_8;
	// System.Boolean PW.ProductGameObject::RegenerateProduct
	bool ___RegenerateProduct_9;
};

// PW.ProductManager
struct ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PW.Product[] PW.ProductManager::Products
	ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* ___Products_4;
	// System.String PW.ProductManager::ProductScreenshotsPath
	String_t* ___ProductScreenshotsPath_5;
	// UnityEngine.GameObject PW.ProductManager::placeholderPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placeholderPrefab_6;
};

// PW.ProductWithCover
struct ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Collider PW.ProductWithCover::m_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_collider_4;
	// UnityEngine.Transform PW.ProductWithCover::coverObject
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___coverObject_5;
	// UnityEngine.Vector3 PW.ProductWithCover::openCoverOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___openCoverOffset_6;
	// System.Boolean PW.ProductWithCover::autoCloseCover
	bool ___autoCloseCover_7;
	// System.Boolean PW.ProductWithCover::IsAnimating
	bool ___IsAnimating_9;
};

// PW.ProgressHelper
struct ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image PW.ProgressHelper::m_Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Image_4;
};

// SojaExiles.SceneSwitchGen
struct SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// PW.ServeOrder
struct ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PW.ServeOrder::order_count
	int32_t ___order_count_4;
	// System.Int32 PW.ServeOrder::total_order_served
	int32_t ___total_order_served_5;
	// System.Single PW.ServeOrder::totalServingTime
	float ___totalServingTime_6;
	// System.Single PW.ServeOrder::curServeTime
	float ___curServeTime_7;
	// UnityEngine.UI.Image PW.ServeOrder::m_Image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_Image_8;
	// System.Int32 PW.ServeOrder::orderID
	int32_t ___orderID_9;
	// UnityEngine.UI.Image PW.ServeOrder::serveTimeRepresentation
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___serveTimeRepresentation_10;
};

// PW.SliceHelper
struct SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PW.SliceHelper::slicePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___slicePrefab_4;
	// System.Int32 PW.SliceHelper::sliceCount
	int32_t ___sliceCount_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SojaExiles.opencloseDoor
struct opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseDoor::openandclose
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose_4;
	// System.Boolean SojaExiles.opencloseDoor::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseDoor::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseDoor1
struct opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseDoor1::openandclose1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose1_4;
	// System.Boolean SojaExiles.opencloseDoor1::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseDoor1::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseStallDoor
struct opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseStallDoor::openandclose
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclose_4;
	// System.Boolean SojaExiles.opencloseStallDoor::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseStallDoor::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseWindow
struct opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseWindow::openandclosewindow
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow_4;
	// System.Boolean SojaExiles.opencloseWindow::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseWindow::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// SojaExiles.opencloseWindow1
struct opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator SojaExiles.opencloseWindow1::openandclosewindow1
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___openandclosewindow1_4;
	// System.Boolean SojaExiles.opencloseWindow1::open
	bool ___open_5;
	// UnityEngine.Transform SojaExiles.opencloseWindow1::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_6;
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// PW.CookableProduct
struct CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9  : public ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011
{
	// UnityEngine.Collider PW.CookableProduct::m_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_collider_10;
	// UnityEngine.Vector3 PW.CookableProduct::initialPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialPosition_11;
	// PW.CookingGameObject PW.CookableProduct::cookingObject
	CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E* ___cookingObject_12;
	// UnityEngine.GameObject PW.CookableProduct::platePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platePrefab_13;
	// System.Single PW.CookableProduct::cookingTimeForProduct
	float ___cookingTimeForProduct_14;
	// System.Boolean PW.CookableProduct::IsCooked
	bool ___IsCooked_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// PW.PanGameObject
struct PanGameObject_t801D0547904579BEAADEFB9C1DD6208D1D9BBF93  : public CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E
{
};

// PW.ReadyToServe
struct ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867  : public ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011
{
	// UnityEngine.GameObject PW.ReadyToServe::platePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platePrefab_10;
	// UnityEngine.Collider PW.ReadyToServe::m_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_collider_11;
};

// PW.StoveGameObject
struct StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1  : public CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E
{
	// UnityEngine.Transform PW.StoveGameObject::doorTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___doorTransform_12;
	// UnityEngine.Vector3 PW.StoveGameObject::progressHelperOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___progressHelperOffset_13;
	// System.Boolean PW.StoveGameObject::doorIsOpen
	bool ___doorIsOpen_14;
	// System.Boolean PW.StoveGameObject::isAnimating
	bool ___isAnimating_15;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Shadow
struct Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
	// UnityEngine.Color UnityEngine.UI.Shadow::m_EffectColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_EffectColor_5;
	// UnityEngine.Vector2 UnityEngine.UI.Shadow::m_EffectDistance
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_EffectDistance_6;
	// System.Boolean UnityEngine.UI.Shadow::m_UseGraphicAlpha
	bool ___m_UseGraphicAlpha_7;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Outline
struct Outline_t9CF146E077DC65F441EDEC463AA6710374108084  : public Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95
{
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// SojaExiles.Drawer_Pull_X/<closing>d__6

// SojaExiles.Drawer_Pull_X/<closing>d__6

// SojaExiles.Drawer_Pull_X/<opening>d__5

// SojaExiles.Drawer_Pull_X/<opening>d__5

// SojaExiles.Drawer_Pull_Z/<closing>d__6

// SojaExiles.Drawer_Pull_Z/<closing>d__6

// SojaExiles.Drawer_Pull_Z/<opening>d__5

// SojaExiles.Drawer_Pull_Z/<opening>d__5

// PW.Microwave/<Heating>d__14

// PW.Microwave/<Heating>d__14

// PW.OrderGenerator/<GenerateOrderRoutine>d__11

// PW.OrderGenerator/<GenerateOrderRoutine>d__11

// PW.ProductManager/<>c__DisplayClass6_0

// PW.ProductManager/<>c__DisplayClass6_0

// PW.ReadyToServe/<AnimateGoingToSlot>d__4

// PW.ReadyToServe/<AnimateGoingToSlot>d__4

// PW.StoveGameObject/<PlayDoorAnim>d__6

// PW.StoveGameObject/<PlayDoorAnim>d__6

// SojaExiles.opencloseDoor/<closing>d__6

// SojaExiles.opencloseDoor/<closing>d__6

// SojaExiles.opencloseDoor/<opening>d__5

// SojaExiles.opencloseDoor/<opening>d__5

// SojaExiles.opencloseDoor1/<closing>d__6

// SojaExiles.opencloseDoor1/<closing>d__6

// SojaExiles.opencloseDoor1/<opening>d__5

// SojaExiles.opencloseDoor1/<opening>d__5

// SojaExiles.opencloseStallDoor/<closing>d__6

// SojaExiles.opencloseStallDoor/<closing>d__6

// SojaExiles.opencloseStallDoor/<opening>d__5

// SojaExiles.opencloseStallDoor/<opening>d__5

// SojaExiles.opencloseWindow/<closing>d__6

// SojaExiles.opencloseWindow/<closing>d__6

// SojaExiles.opencloseWindow/<opening>d__5

// SojaExiles.opencloseWindow/<opening>d__5

// SojaExiles.opencloseWindow1/<closing>d__6

// SojaExiles.opencloseWindow1/<closing>d__6

// SojaExiles.opencloseWindow1/<opening>d__5

// SojaExiles.opencloseWindow1/<opening>d__5

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForEndOfFrame

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_0;
};

// <PrivateImplementationDetails>

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// PW.Product

// PW.Product

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// PW.PlayerSlots/<DoEmphasize>d__6

// PW.PlayerSlots/<DoEmphasize>d__6

// PW.ProductGameObject/<AnimateGoingToSlot>d__6

// PW.ProductGameObject/<AnimateGoingToSlot>d__6

// PW.ProductGameObject/<MoveToPlace>d__8

// PW.ProductGameObject/<MoveToPlace>d__8

// PW.ProductWithCover/<OpenCloseDisplay>d__9

// PW.ProductWithCover/<OpenCloseDisplay>d__9

// PW.ServeOrder/<DoEmphasize>d__9

// PW.ServeOrder/<DoEmphasize>d__9

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.Func`2<PW.Product,System.Boolean>

// System.Func`2<PW.Product,System.Boolean>

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Transform

// UnityEngine.Transform

// PW.BasicGameEvents/OnOrderCancelled

// PW.BasicGameEvents/OnOrderCancelled

// PW.BasicGameEvents/OnOrderCompleted

// PW.BasicGameEvents/OnOrderCompleted

// PW.BasicGameEvents/OnPlaceHolderRequired

// PW.BasicGameEvents/OnPlaceHolderRequired

// PW.BasicGameEvents/OnProductAddedToSlot

// PW.BasicGameEvents/OnProductAddedToSlot

// PW.BasicGameEvents/OnProductDeletedFromSlot

// PW.BasicGameEvents/OnProductDeletedFromSlot

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// PW.BasicCameraControl

// PW.BasicCameraControl

// PW.BasicGameEvents
struct BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields
{
	// PW.BasicGameEvents/OnOrderCancelled PW.BasicGameEvents::onOrderCancelled
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___onOrderCancelled_5;
	// PW.BasicGameEvents/OnOrderCompleted PW.BasicGameEvents::onOrderCompleted
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___onOrderCompleted_6;
	// PW.BasicGameEvents/OnProductAddedToSlot PW.BasicGameEvents::onProductAddedToSlot
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___onProductAddedToSlot_7;
	// PW.BasicGameEvents/OnProductDeletedFromSlot PW.BasicGameEvents::onProductDeletedFromSlot
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___onProductDeletedFromSlot_8;
	// PW.BasicGameEvents/OnPlaceHolderRequired PW.BasicGameEvents::onPlaceHolderRequired
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___onPlaceHolderRequired_9;
};

// PW.BasicGameEvents

// PW.CookingGameObject

// PW.CookingGameObject

// PW.CreateProductOnPlaceHolder

// PW.CreateProductOnPlaceHolder

// SojaExiles.Drawer_Pull_X

// SojaExiles.Drawer_Pull_X

// SojaExiles.Drawer_Pull_Z

// SojaExiles.Drawer_Pull_Z

// PW.Microwave

// PW.Microwave

// SojaExiles.MouseLook

// SojaExiles.MouseLook

// PW.OnClickCoverHelper

// PW.OnClickCoverHelper

// PW.OrderGenerator

// PW.OrderGenerator

// SojaExiles.PlayerMovement

// SojaExiles.PlayerMovement

// PW.PlayerSlots

// PW.PlayerSlots

// PW.ProductGameObject

// PW.ProductGameObject

// PW.ProductManager

// PW.ProductManager

// PW.ProductWithCover

// PW.ProductWithCover

// PW.ProgressHelper

// PW.ProgressHelper

// SojaExiles.SceneSwitchGen

// SojaExiles.SceneSwitchGen

// PW.ServeOrder

// PW.ServeOrder

// PW.SliceHelper

// PW.SliceHelper

// SojaExiles.opencloseDoor

// SojaExiles.opencloseDoor

// SojaExiles.opencloseDoor1

// SojaExiles.opencloseDoor1

// SojaExiles.opencloseStallDoor

// SojaExiles.opencloseStallDoor

// SojaExiles.opencloseWindow

// SojaExiles.opencloseWindow

// SojaExiles.opencloseWindow1

// SojaExiles.opencloseWindow1

// PW.CookableProduct

// PW.CookableProduct

// PW.PanGameObject

// PW.PanGameObject

// PW.ReadyToServe

// PW.ReadyToServe

// PW.StoveGameObject

// PW.StoveGameObject

// UnityEngine.UI.Shadow

// UnityEngine.UI.Shadow

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Outline

// UnityEngine.UI.Outline
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// PW.Product[]
struct ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920  : public RuntimeArray
{
	ALIGN_FIELD (8) Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* m_Items[1];

	inline Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void PW.ProgressHelper::ToggleHelper(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHelper_ToggleHelper_m38701100C1E8DB89D517DB5C10E228D3C238E3EA (ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void PW.ProgressHelper::UpdateProcessUI(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHelper_UpdateProcessUI_mF8B00E2038C279D8952A794DDE1B51E0EFF03BA5 (ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* __this, float ___0_curAmount, float ___1_totalProcess, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnOrderCancelled::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled__ctor_mF032F851C8585E69E27ED7A7850C4932B9A646B4 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::add_onOrderCancelled(PW.BasicGameEvents/OnOrderCancelled)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCancelled_m38509E2701FC60C1F728AA68F37030EECBC5D93E (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnOrderCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted__ctor_m03B5422CAC165D6B4737FDA68344B3B2E790EF92 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::add_onOrderCompleted(PW.BasicGameEvents/OnOrderCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCompleted_mB5789734C8152A8629E52C1DC59C8BC8D64C367F (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::remove_onOrderCancelled(PW.BasicGameEvents/OnOrderCancelled)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCancelled_m4F0FC7F85E2B4A20A6E1233F3DC90984AA507765 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::remove_onOrderCompleted(PW.BasicGameEvents/OnOrderCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCompleted_m99980DC1CEF7B6F38F560EE79C00E476CD12DB9C (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.OrderGenerator::GenerateOrderRoutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderGenerator_GenerateOrderRoutine_mD8CD4F228F949959C26152E31048C6D6495959FA (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, float ___0_intervalTime, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void PW.OrderGenerator/<GenerateOrderRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateOrderRoutineU3Ed__11__ctor_m198D0C1D1A8B6C98C329FBF0DDEFA2A75A24CBBC (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<PW.ServeOrder>()
inline ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* GameObject_GetComponent_TisServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30_m256C3175CADEAC65C21132E8D5A24EC55D6A427F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void PW.ServeOrder::SetOrder(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_SetOrder_m5840AF15E45156B63DB631F74072B3F64C293110 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, int32_t ___0_ID, float ___1_serveTime, const RuntimeMethod* method) ;
// System.Void PW.ServeOrder::SetSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_SetSprite_mAF225D0245B68C781F3EE8D81CA9F6A26B5679CF (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Int32>(T[],T)
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_gshared)(___0_array, ___1_value, method);
}
// System.Void PW.OrderGenerator::GenerateOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_GenerateOrder_m4C699751B3C7F93845A839304D3A0C233E13A457 (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void PW.CookingGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookingGameObject__ctor_m1396236A333A207991B2F18B5D1015C6CA2AABA8 (CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnProductAddedToSlot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot__ctor_mFB35C4601A92249E50E1B7119D9E805F6D08699B (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::add_onProductAddedToSlot(PW.BasicGameEvents/OnProductAddedToSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductAddedToSlot_m7A95E79212287B2A53D3B29354111709F581AA28 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnProductDeletedFromSlot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot__ctor_mDF8370623788671109BF3E133329AF55A5F03F14 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::add_onProductDeletedFromSlot(PW.BasicGameEvents/OnProductDeletedFromSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductDeletedFromSlot_mDF102E17AAC799C986D821E156521221D44C27D3 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PW.OrderGenerator>()
inline OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* Object_FindObjectOfType_TisOrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555_m59598AB0B9C2C466AFDA1D1322AC663EBAE575BD (const RuntimeMethod* method)
{
	return ((  OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// UnityEngine.Sprite PW.OrderGenerator::GetSpriteForOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* OrderGenerator_GetSpriteForOrder_m7357C137692CF48A99F0519FC93007C1A135642A (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, int32_t ___0_orderID, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.PlayerSlots::DoEmphasize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerSlots_DoEmphasize_m21F266DB698F0AEA67E16AB0C31FF394B8CC340D (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void PW.PlayerSlots/<DoEmphasize>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__6__ctor_m47F5E6CB605E6FDE17AC9AA92CEEBF2BE5C31A82 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::remove_onProductAddedToSlot(PW.BasicGameEvents/OnProductAddedToSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductAddedToSlot_m78BDF72AAC02D690B7B0201B4F5F7B1FCE26184D (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::remove_onProductDeletedFromSlot(PW.BasicGameEvents/OnProductDeletedFromSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductDeletedFromSlot_m089E2179B14FA531B9A7C13DE9F5686704E03917 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Outline>()
inline Outline_t9CF146E077DC65F441EDEC463AA6710374108084* Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Outline_t9CF146E077DC65F441EDEC463AA6710374108084* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Shadow_get_effectColor_m6E7751BB8792C85BE9DAD0D133D787317D9CF59B_inline (Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1 (Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void PW.ProductGameObject/<AnimateGoingToSlot>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__6__ctor_m5FBFCD97E5B6FCBB42950667EC277741AB5D996C (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<PW.PlayerSlots>()
inline PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33 (const RuntimeMethod* method)
{
	return ((  PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean PW.PlayerSlots::CanHoldItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSlots_CanHoldItem_m61924EF3CC74127DB40E2EE8E1413A98782B9295 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_orderID, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::RaiseOnProductAddedToSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnProductAddedToSlot_m40CEC2748EF5B29A546BC9B214BAD678538D6338 (int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void PW.ProductGameObject/<MoveToPlace>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToPlaceU3Ed__8__ctor_m01576655B126086265192EE72C27558F232BC8B9 (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_nearClipPlane()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m5F38AE6B74636F569647D545E365C5579E5F59CE_gshared)(___0_original, ___1_position, ___2_rotation, ___3_parent, method);
}
// T UnityEngine.GameObject::GetComponent<PW.CreateProductOnPlaceHolder>()
inline CreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA* GameObject_GetComponent_TisCreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA_m12724265CBFFDC3E8FB088C863DD56A7D097F498 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnPlaceHolderRequired::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired__ctor_mCA70F750633D199CAEBB4B9967DD416BEC2EC803 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::add_onPlaceHolderRequired(PW.BasicGameEvents/OnPlaceHolderRequired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onPlaceHolderRequired_mAC31AE207AA792B5F6CCE028A34A70CEDFF5C235 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::remove_onPlaceHolderRequired(PW.BasicGameEvents/OnPlaceHolderRequired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onPlaceHolderRequired_m9452F0B44B3FCCD76CD4CB9B3B1391A5E3CF415D (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) ;
// System.Void PW.ProductManager/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m2F3C6325773FC7FAB353B9DA8299FB5BA3251EB5 (U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<PW.Product,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m16EBF1555C7798149FE230DABE7C76117E913F2D (Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<PW.Product>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mB023319FF967A3431252C9A5275A2CCCCDD2C0CC (RuntimeObject* ___0_source, Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___0_source, ___1_predicate, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Int32 System.Linq.Enumerable::Count<PW.Product>(System.Collections.Generic.IEnumerable`1<TSource>)
inline int32_t Enumerable_Count_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mEFB0F3D142E6065B569A41F90EB9112E725C3DBD (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mA9FCB8ECCFE8FABC5AA2F8D46F82ACD52279930B_gshared)(___0_source, method);
}
// TSource System.Linq.Enumerable::First<PW.Product>(System.Collections.Generic.IEnumerable`1<TSource>)
inline Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* Enumerable_First_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m1BA3A15E3CAAD7ED3F291BB3D67B99D9ED102AC5 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
// System.Int32 System.Array::IndexOf<PW.Product>(T[],T)
inline int32_t Array_IndexOf_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m193BF0C82C2FB1444EA2418492EF40994169EE40 (ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* ___0_array, Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920*, Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared)(___0_array, ___1_value, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.ProductWithCover::OpenCloseDisplay(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductWithCover_OpenCloseDisplay_m6DBB4D15F3CCB847184FE08FF3FBEA370AB7F050 (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, bool ___0_open, bool ___1_alsoReverse, const RuntimeMethod* method) ;
// System.Void PW.ProductWithCover/<OpenCloseDisplay>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseDisplayU3Ed__9__ctor_m1A4341FA641B7472C06FD095560628D69D4992CF (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PW.OnClickCoverHelper>()
inline OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* Component_GetComponent_TisOnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3_m7E8A799CC625B1440FA3A1A3078D6CCF752D5C0E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PW.OnClickCoverHelper::ActivateCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickCoverHelper_ActivateCollider_m84D7536878BA7EFA0C79ADB1D13C0832219F869D (OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean PW.ProductGameObject::CanGoPlayerSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductGameObject_CanGoPlayerSlot_m229CDC0878E97E795E1312A207EDF5D8AE18810F (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::RaiseInstantiatePlaceHolder(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseInstantiatePlaceHolder_mD21089052205D67F4985B0F8B64AFD0378781C4F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) ;
// System.Void PW.ReadyToServe/<AnimateGoingToSlot>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__4__ctor_m5460DF2427802D1E72E4EE164B25C8EBE31B67BF (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PW.ProductGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductGameObject__ctor_m76BC962FC16CD4F9A5D8756281127FD3C1B7EE41 (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.ProductGameObject::AnimateGoingToSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductGameObject_AnimateGoingToSlot_m117A33A4E7AD26813AEB88647D632D9725D370E6 (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.ReadyToServe::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadyToServe_U3CU3En__0_mEB7F8A17472A9E93E040DB70DEBBBBFF619407F5 (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) ;
// System.Boolean PW.PlayerSlots::HoldsItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSlots_HoldsItem_mADED3B2858DD66E3C268E0D8DB7A2255B5AC0836 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_orderID, const RuntimeMethod* method) ;
// System.Void PW.ServeOrder::OrderCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_OrderCompleted_mE97748C8F780C1B3B46BD0EEFDACBCE1E893BBF7 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents::RaiseOnOrderCompleted(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCompleted_mF29A8772748E7A07BAD7505AB14A3C6E36DED2ED (int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.ServeOrder::DoEmphasize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServeOrder_DoEmphasize_mF4B0036684A2AFFA2A6001D6CAD1F2B732C3614E (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) ;
// System.Void PW.ServeOrder/<DoEmphasize>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__9__ctor_m4ECB7CDF7C1F55E4481C977AF7E0CD1E4F490783 (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void PW.BasicGameEvents::RaiseOnOrderCancelled(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCancelled_mA92233A4E1FA7331707E9BDAA18DE58380698EA7 (int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void PW.CookingGameObject::DoDoorAnimationsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookingGameObject_DoDoorAnimationsIfNeeded_mAE0C5623664A8ADAF52194835866E98092BA66EA (CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator PW.StoveGameObject::PlayDoorAnim(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoveGameObject_PlayDoorAnim_m727447CC6B1000FEB4A4DF2C59FC01F525D20A20 (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, bool ___0_open, bool ___1_alsoReverse, const RuntimeMethod* method) ;
// System.Void PW.CookingGameObject::StartCooking(PW.CookableProduct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookingGameObject_StartCooking_m2E3F2CF0111C7736EBD1565F921D80EFB892365D (CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E* __this, CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9* ___0_product, const RuntimeMethod* method) ;
// System.Void PW.StoveGameObject/<PlayDoorAnim>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayDoorAnimU3Ed__6__ctor_m73CD25431474B87FE24908859F89355F82A49A99 (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void PW.CookingGameObject::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CookingGameObject_OnMouseDown_mB1666607191D2A29798281FFDFABD127A506E8FD (CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, int32_t ___1_relativeTo, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnOrderCancelled::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnOrderCompleted::Invoke(System.Int32,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnProductAddedToSlot::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnProductDeletedFromSlot::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) ;
// System.Void PW.BasicGameEvents/OnPlaceHolderRequired::Invoke(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseStallDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseStallDoor_opening_mC009492152B01D720D2C21358B5B1EB364CFD267 (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseStallDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseStallDoor_closing_m32F68FE792B67E81B075022BB0ED56A01C6D2DDF (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseStallDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m70C20308FCB83EF314AA5D67E59C5EA4C62F2F6E (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseStallDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mFFB75B5BFAFDDBE20C45DDD57C3115958C7B4F76 (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PW.Microwave/<Heating>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHeatingU3Ed__14__ctor_m58FA3FD9B3B2BBBFFC825C6FE952B9B53E161C4E (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.Microwave/<Heating>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHeatingU3Ed__14_System_IDisposable_Dispose_mDE11C1265C111B1316BA7A62A966C6E3D92A9688 (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.Microwave/<Heating>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHeatingU3Ed__14_MoveNext_m9A6AE9D6B4E352FE14B2A3624CE9B062B111F2DA (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// m_progressHelper.ToggleHelper(true);
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_4 = V_1;
		NullCheck(L_4);
		ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* L_5 = L_4->___m_progressHelper_10;
		NullCheck(L_5);
		ProgressHelper_ToggleHelper_m38701100C1E8DB89D517DB5C10E228D3C238E3EA(L_5, (bool)1, NULL);
		// float curProcess = heatingProcess;
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___heatingProcess_11;
		__this->___U3CcurProcessU3E5__2_3 = L_7;
		goto IL_0078;
	}

IL_0038:
	{
		// curProcess -= Time.deltaTime;
		float L_8 = __this->___U3CcurProcessU3E5__2_3;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurProcessU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// m_progressHelper.UpdateProcessUI(curProcess, heatingProcess);
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_10 = V_1;
		NullCheck(L_10);
		ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* L_11 = L_10->___m_progressHelper_10;
		float L_12 = __this->___U3CcurProcessU3E5__2_3;
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___heatingProcess_11;
		NullCheck(L_11);
		ProgressHelper_UpdateProcessUI_mF8B00E2038C279D8952A794DDE1B51E0EFF03BA5(L_11, L_12, L_14, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0078:
	{
		// while (curProcess > 0)
		float L_15 = __this->___U3CcurProcessU3E5__2_3;
		if ((((float)L_15) > ((float)(0.0f))))
		{
			goto IL_0038;
		}
	}
	{
		// m_progressHelper.ToggleHelper(false);
		Microwave_t84A2E415DE369875A2CAE0EB0DDE15A6EA8DA8EE* L_16 = V_1;
		NullCheck(L_16);
		ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* L_17 = L_16->___m_progressHelper_10;
		NullCheck(L_17);
		ProgressHelper_ToggleHelper_m38701100C1E8DB89D517DB5C10E228D3C238E3EA(L_17, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PW.Microwave/<Heating>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHeatingU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m315B0A8B73D7854AF74B889B7B34351FB3F4D376 (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.Microwave/<Heating>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHeatingU3Ed__14_System_Collections_IEnumerator_Reset_mA62BF73547B0A1F6E7FD5CE3CC27B792B0665EC8 (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHeatingU3Ed__14_System_Collections_IEnumerator_Reset_mA62BF73547B0A1F6E7FD5CE3CC27B792B0665EC8_RuntimeMethod_var)));
	}
}
// System.Object PW.Microwave/<Heating>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CHeatingU3Ed__14_System_Collections_IEnumerator_get_Current_mB26C6EF480B8C4006D2C948C25A4CB93587133ED (U3CHeatingU3Ed__14_t15955D9AD16B142EFE4EC01CC97A570FC472F7F2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.OnClickCoverHelper::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickCoverHelper_OnEnable_m72CA0C827CDC4545E530C5602C4005550D322366 (OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___m_collider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_collider_5), (void*)L_0);
		// m_collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___m_collider_5;
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PW.OnClickCoverHelper::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickCoverHelper_OnMouseDown_mE4809DCE7BFAA2AE8ED8B3282710B78E6FDA76A2 (OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* __this, const RuntimeMethod* method) 
{
	{
		// if (methodToCall != null)
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___methodToCall_4;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// methodToCall.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_1 = __this->___methodToCall_4;
		NullCheck(L_1);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_1, NULL);
		// m_collider.enabled = false;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___m_collider_5;
		NullCheck(L_2);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_2, (bool)0, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void PW.OnClickCoverHelper::ActivateCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickCoverHelper_ActivateCollider_m84D7536878BA7EFA0C79ADB1D13C0832219F869D (OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* __this, const RuntimeMethod* method) 
{
	{
		// m_collider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->___m_collider_5;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PW.OnClickCoverHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnClickCoverHelper__ctor_m6482AAC78FA66BFCC4D2654E95A00038B596026D (OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.OrderGenerator::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_OnEnable_m65248CB8BF28E3EC028F603C2C7C93D277EBE96D (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.onOrderCancelled += BasicGameEvents_onOrderCancelled;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)il2cpp_codegen_object_new(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnOrderCancelled__ctor_mF032F851C8585E69E27ED7A7850C4932B9A646B4(L_0, __this, (intptr_t)((void*)OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B_RuntimeMethod_var), NULL);
		BasicGameEvents_add_onOrderCancelled_m38509E2701FC60C1F728AA68F37030EECBC5D93E(L_0, NULL);
		// BasicGameEvents.onOrderCompleted += BasicGameEvents_onOrderCompleted;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)il2cpp_codegen_object_new(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnOrderCompleted__ctor_m03B5422CAC165D6B4737FDA68344B3B2E790EF92(L_1, __this, (intptr_t)((void*)OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E_RuntimeMethod_var), NULL);
		BasicGameEvents_add_onOrderCompleted_mB5789734C8152A8629E52C1DC59C8BC8D64C367F(L_1, NULL);
		// }
		return;
	}
}
// System.Void PW.OrderGenerator::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_OnDisable_m8D8FBC82B19BBA1FF4024FE90477F246F478BD69 (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.onOrderCancelled -= BasicGameEvents_onOrderCancelled;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)il2cpp_codegen_object_new(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnOrderCancelled__ctor_mF032F851C8585E69E27ED7A7850C4932B9A646B4(L_0, __this, (intptr_t)((void*)OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B_RuntimeMethod_var), NULL);
		BasicGameEvents_remove_onOrderCancelled_m4F0FC7F85E2B4A20A6E1233F3DC90984AA507765(L_0, NULL);
		// BasicGameEvents.onOrderCompleted -= BasicGameEvents_onOrderCompleted;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)il2cpp_codegen_object_new(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnOrderCompleted__ctor_m03B5422CAC165D6B4737FDA68344B3B2E790EF92(L_1, __this, (intptr_t)((void*)OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E_RuntimeMethod_var), NULL);
		BasicGameEvents_remove_onOrderCompleted_m99980DC1CEF7B6F38F560EE79C00E476CD12DB9C(L_1, NULL);
		// }
		return;
	}
}
// System.Void PW.OrderGenerator::BasicGameEvents_onOrderCancelled(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_BasicGameEvents_onOrderCancelled_mDFCF8A5D4BAF050A52BC6AC9791BF8AB0039D47B (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	{
		// currentOrderCount--;
		int32_t L_0 = __this->___currentOrderCount_5;
		__this->___currentOrderCount_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void PW.OrderGenerator::BasicGameEvents_onOrderCompleted(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_BasicGameEvents_onOrderCompleted_mED94FB79877EF1AF2C743E723371BFF2F078E56E (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, int32_t ___0_ID, float ___1_percentageSucccess, const RuntimeMethod* method) 
{
	{
		// currentOrderCount--;
		int32_t L_0 = __this->___currentOrderCount_5;
		__this->___currentOrderCount_5 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// }
		return;
	}
}
// System.Void PW.OrderGenerator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_Start_m0F9DCCF6BCAF003C25CB7F8443642637ACD768EC (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GenerateOrderRoutine(3f));
		RuntimeObject* L_0;
		L_0 = OrderGenerator_GenerateOrderRoutine_mD8CD4F228F949959C26152E31048C6D6495959FA(__this, (3.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.OrderGenerator::GenerateOrderRoutine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderGenerator_GenerateOrderRoutine_mD8CD4F228F949959C26152E31048C6D6495959FA (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, float ___0_intervalTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* L_0 = (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C*)il2cpp_codegen_object_new(U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGenerateOrderRoutineU3Ed__11__ctor_m198D0C1D1A8B6C98C329FBF0DDEFA2A75A24CBBC(L_0, 0, NULL);
		U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* L_2 = L_1;
		float L_3 = ___0_intervalTime;
		NullCheck(L_2);
		L_2->___intervalTime_3 = L_3;
		return L_2;
	}
}
// System.Void PW.OrderGenerator::GenerateOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator_GenerateOrder_m4C699751B3C7F93845A839304D3A0C233E13A457 (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30_m256C3175CADEAC65C21132E8D5A24EC55D6A427F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD485A77E753B159725E52C6F950C5ED02DCC1B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Debug.Log("Generating order");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralEBD485A77E753B159725E52C6F950C5ED02DCC1B, NULL);
		// int spriteIndex = Random.Range(0, orderSprites.Length);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = __this->___orderSprites_6;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_0)->max_length)), NULL);
		V_0 = L_1;
		// int orderID = orderedProducts[spriteIndex];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___orderedProducts_7;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// var newOrder = GameObject.Instantiate(orderRepPrefab, UIParentForOrders).GetComponent<ServeOrder>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___orderRepPrefab_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___UIParentForOrders_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_8);
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_9;
		L_9 = GameObject_GetComponent_TisServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30_m256C3175CADEAC65C21132E8D5A24EC55D6A427F(L_8, GameObject_GetComponent_TisServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30_m256C3175CADEAC65C21132E8D5A24EC55D6A427F_RuntimeMethod_var);
		// newOrder.SetOrder(orderID,Random.Range(5f,40f));
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_10 = L_9;
		int32_t L_11 = V_1;
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((5.0f), (40.0f), NULL);
		NullCheck(L_10);
		ServeOrder_SetOrder_m5840AF15E45156B63DB631F74072B3F64C293110(L_10, L_11, L_12, NULL);
		// newOrder.SetSprite(orderSprites[spriteIndex]);
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_13 = __this->___orderSprites_6;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_10);
		ServeOrder_SetSprite_mAF225D0245B68C781F3EE8D81CA9F6A26B5679CF(L_10, L_16, NULL);
		// currentOrderCount++;
		int32_t L_17 = __this->___currentOrderCount_5;
		__this->___currentOrderCount_5 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		// }
		return;
	}
}
// UnityEngine.Sprite PW.OrderGenerator::GetSpriteForOrder(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* OrderGenerator_GetSpriteForOrder_m7357C137692CF48A99F0519FC93007C1A135642A (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, int32_t ___0_orderID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var spriteIndex = Array.IndexOf(orderedProducts, orderID);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___orderedProducts_7;
		int32_t L_1 = ___0_orderID;
		int32_t L_2;
		L_2 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_0, L_1, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_0 = L_2;
		// if (spriteIndex<0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// return null;
		return (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL;
	}

IL_0013:
	{
		// return orderSprites[spriteIndex];
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_4 = __this->___orderSprites_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}
}
// System.Void PW.OrderGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderGenerator__ctor_m88EA0085E585C50ECE16C54F717A6F72FFF603ED (OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* __this, const RuntimeMethod* method) 
{
	{
		// public int MaxConcurrentOrder=4;
		__this->___MaxConcurrentOrder_4 = 4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.OrderGenerator/<GenerateOrderRoutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateOrderRoutineU3Ed__11__ctor_m198D0C1D1A8B6C98C329FBF0DDEFA2A75A24CBBC (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.OrderGenerator/<GenerateOrderRoutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateOrderRoutineU3Ed__11_System_IDisposable_Dispose_m19536EC50B60FB9CDCC1E049D7C163C7E24F1BDB (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.OrderGenerator/<GenerateOrderRoutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGenerateOrderRoutineU3Ed__11_MoveNext_m699F83C0DECB30E288ED8557BF35A25E9EFD901B (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0057;
			}
			case 2:
			{
				goto IL_0074;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// if (currentOrderCount < MaxConcurrentOrder)
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->___currentOrderCount_5;
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___MaxConcurrentOrder_4;
		if ((((int32_t)L_4) >= ((int32_t)L_6)))
		{
			goto IL_0060;
		}
	}
	{
		// GenerateOrder();
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_7 = V_1;
		NullCheck(L_7);
		OrderGenerator_GenerateOrder_m4C699751B3C7F93845A839304D3A0C233E13A457(L_7, NULL);
		// yield return new WaitForSeconds(intervalTime);
		float L_8 = __this->___intervalTime_3;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_9 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_9, L_8, NULL);
		__this->___U3CU3E2__current_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0057:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0029;
	}

IL_0060:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_10 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_10, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0074:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0029;
	}
}
// System.Object PW.OrderGenerator/<GenerateOrderRoutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGenerateOrderRoutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m31A50C29268C0CB68C77E839AE8476F7C9F0AD14 (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.OrderGenerator/<GenerateOrderRoutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGenerateOrderRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mA6287E3DC5B7D6B63CA2A7AB61D665046EB5F20A (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGenerateOrderRoutineU3Ed__11_System_Collections_IEnumerator_Reset_mA6287E3DC5B7D6B63CA2A7AB61D665046EB5F20A_RuntimeMethod_var)));
	}
}
// System.Object PW.OrderGenerator/<GenerateOrderRoutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGenerateOrderRoutineU3Ed__11_System_Collections_IEnumerator_get_Current_mD2AA62DD3D224F86D1949357935499985C88E92C (U3CGenerateOrderRoutineU3Ed__11_t6D86BC9D0B281E30D54EE586F033C7F87E67961C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.PanGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PanGameObject__ctor_m51981FD29F760556759C19EA5E138089E2D6C0EC (PanGameObject_t801D0547904579BEAADEFB9C1DD6208D1D9BBF93* __this, const RuntimeMethod* method) 
{
	{
		CookingGameObject__ctor_m1396236A333A207991B2F18B5D1015C6CA2AABA8(__this, NULL);
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
// System.Void PW.PlayerSlots::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSlots_OnEnable_m4C4CFFBB180D5F0E8A56FC49370C8C79D23111E9 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (slotItems == null)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___slotItems_5;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		// slotItems = new int[3] { -1, -1, -1 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = L_1;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_3 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_2, L_3, NULL);
		__this->___slotItems_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slotItems_5), (void*)L_2);
	}

IL_001f:
	{
		// BasicGameEvents.onProductAddedToSlot += BasicGameEvents_onProductAddedToSlot;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_4 = (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)il2cpp_codegen_object_new(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OnProductAddedToSlot__ctor_mFB35C4601A92249E50E1B7119D9E805F6D08699B(L_4, __this, (intptr_t)((void*)PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4_RuntimeMethod_var), NULL);
		BasicGameEvents_add_onProductAddedToSlot_m7A95E79212287B2A53D3B29354111709F581AA28(L_4, NULL);
		// BasicGameEvents.onProductDeletedFromSlot += BasicGameEvents_onProductDeletedFromSlot;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_5 = (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)il2cpp_codegen_object_new(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		OnProductDeletedFromSlot__ctor_mDF8370623788671109BF3E133329AF55A5F03F14(L_5, __this, (intptr_t)((void*)PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B_RuntimeMethod_var), NULL);
		BasicGameEvents_add_onProductDeletedFromSlot_mDF102E17AAC799C986D821E156521221D44C27D3(L_5, NULL);
		// }
		return;
	}
}
// System.Void PW.PlayerSlots::BasicGameEvents_onProductDeletedFromSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	{
		// if(slotItems!=null && slotItems.Length>0)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___slotItems_5;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___slotItems_5;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_001a;
		}
	}
	{
		// slotItems[ID]=-1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->___slotItems_5;
		int32_t L_3 = ___0_ID;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)(-1));
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void PW.PlayerSlots::BasicGameEvents_onProductAddedToSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_orderID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisOrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555_m59598AB0B9C2C466AFDA1D1322AC663EBAE575BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var orderGenerator = FindObjectOfType<OrderGenerator>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_0;
		L_0 = Object_FindObjectOfType_TisOrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555_m59598AB0B9C2C466AFDA1D1322AC663EBAE575BD(Object_FindObjectOfType_TisOrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555_m59598AB0B9C2C466AFDA1D1322AC663EBAE575BD_RuntimeMethod_var);
		V_0 = L_0;
		// var emptyIndex = Array.IndexOf(slotItems, -1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___slotItems_5;
		int32_t L_2;
		L_2 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_1, (-1), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_1 = L_2;
		// slotItems[emptyIndex]=orderID;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___slotItems_5;
		int32_t L_4 = V_1;
		int32_t L_5 = ___0_orderID;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (int32_t)L_5);
		// slotUIObjects[emptyIndex].sprite = orderGenerator.GetSpriteForOrder(orderID);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_6 = __this->___slotUIObjects_6;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		OrderGenerator_t64DD8B1F9251160E7DF1FB97B3BC016E29230555* L_10 = V_0;
		int32_t L_11 = ___0_orderID;
		NullCheck(L_10);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = OrderGenerator_GetSpriteForOrder_m7357C137692CF48A99F0519FC93007C1A135642A(L_10, L_11, NULL);
		NullCheck(L_9);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_12, NULL);
		// StartCoroutine(DoEmphasize(emptyIndex));
		int32_t L_13 = V_1;
		RuntimeObject* L_14;
		L_14 = PlayerSlots_DoEmphasize_m21F266DB698F0AEA67E16AB0C31FF394B8CC340D(__this, L_13, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_15;
		L_15 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_14, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.PlayerSlots::DoEmphasize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlayerSlots_DoEmphasize_m21F266DB698F0AEA67E16AB0C31FF394B8CC340D (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* L_0 = (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7*)il2cpp_codegen_object_new(U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoEmphasizeU3Ed__6__ctor_m47F5E6CB605E6FDE17AC9AA92CEEBF2BE5C31A82(L_0, 0, NULL);
		U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* L_2 = L_1;
		int32_t L_3 = ___0_index;
		NullCheck(L_2);
		L_2->___index_3 = L_3;
		return L_2;
	}
}
// System.Void PW.PlayerSlots::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSlots_OnDisable_m93BE4E18F5BA58758F1AC3A89C46115073391FD1 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.onProductAddedToSlot -= BasicGameEvents_onProductAddedToSlot;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)il2cpp_codegen_object_new(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnProductAddedToSlot__ctor_mFB35C4601A92249E50E1B7119D9E805F6D08699B(L_0, __this, (intptr_t)((void*)PlayerSlots_BasicGameEvents_onProductAddedToSlot_mC9E61C79529FB30887C7FF4B2688C665421136C4_RuntimeMethod_var), NULL);
		BasicGameEvents_remove_onProductAddedToSlot_m78BDF72AAC02D690B7B0201B4F5F7B1FCE26184D(L_0, NULL);
		// BasicGameEvents.onProductDeletedFromSlot -= BasicGameEvents_onProductDeletedFromSlot;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)il2cpp_codegen_object_new(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OnProductDeletedFromSlot__ctor_mDF8370623788671109BF3E133329AF55A5F03F14(L_1, __this, (intptr_t)((void*)PlayerSlots_BasicGameEvents_onProductDeletedFromSlot_m257EE7310BE616BFF6A83DB344E5BEBE402F123B_RuntimeMethod_var), NULL);
		BasicGameEvents_remove_onProductDeletedFromSlot_m089E2179B14FA531B9A7C13DE9F5686704E03917(L_1, NULL);
		// }
		return;
	}
}
// System.Boolean PW.PlayerSlots::CanHoldItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSlots_CanHoldItem_m61924EF3CC74127DB40E2EE8E1413A98782B9295 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_orderID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var emptyIndex = Array.IndexOf(slotItems, -1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___slotItems_5;
		int32_t L_1;
		L_1 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_0, (-1), Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		// return emptyIndex >= 0;
		return (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean PW.PlayerSlots::HoldsItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerSlots_HoldsItem_mADED3B2858DD66E3C268E0D8DB7A2255B5AC0836 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, int32_t ___0_orderID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int indexofOrder = Array.IndexOf(slotItems, orderID);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___slotItems_5;
		int32_t L_1 = ___0_orderID;
		int32_t L_2;
		L_2 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F(L_0, L_1, Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m697B633D0C1EECAC6C493EC797FC44416F706F4F_RuntimeMethod_var);
		V_0 = L_2;
		// if (indexofOrder == -1)
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0013;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0013:
	{
		// slotUIObjects[indexofOrder].sprite = null;
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_4 = __this->___slotUIObjects_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*)NULL, NULL);
		// slotItems[indexofOrder] = -1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___slotItems_5;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (int32_t)(-1));
		// return true;
		return (bool)1;
	}
}
// System.Void PW.PlayerSlots::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerSlots__ctor_mE084FE0E502C68DC78E1A553C2682676A107A229 (PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.PlayerSlots/<DoEmphasize>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__6__ctor_m47F5E6CB605E6FDE17AC9AA92CEEBF2BE5C31A82 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.PlayerSlots/<DoEmphasize>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__6_System_IDisposable_Dispose_m172ACC62445FDAFD1FDBBF265080CD00BC2631AA (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.PlayerSlots/<DoEmphasize>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoEmphasizeU3Ed__6_MoveNext_m9C53E480F6988BE9C4734FBB9B2AAC83542D4001 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0152;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var uiImage = slotUIObjects[index];
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_4 = V_1;
		NullCheck(L_4);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_5 = L_4->___slotUIObjects_6;
		int32_t L_6 = __this->___index_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		__this->___U3CuiImageU3E5__2_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CuiImageU3E5__2_4), (void*)L_8);
		// var outline = uiImage.GetComponent<Outline>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___U3CuiImageU3E5__2_4;
		NullCheck(L_9);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_10;
		L_10 = Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26(L_9, Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26_RuntimeMethod_var);
		__this->___U3CoutlineU3E5__3_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutlineU3E5__3_5), (void*)L_10);
		// Color outlineColor = outline.effectColor;
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_11 = __this->___U3CoutlineU3E5__3_5;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Shadow_get_effectColor_m6E7751BB8792C85BE9DAD0D133D787317D9CF59B_inline(L_11, NULL);
		__this->___U3CoutlineColorU3E5__4_6 = L_12;
		// float totalTime = .6f;
		__this->___U3CtotalTimeU3E5__5_7 = (0.600000024f);
		// float curTime = totalTime;
		float L_13 = __this->___U3CtotalTimeU3E5__5_7;
		__this->___U3CcurTimeU3E5__6_8 = L_13;
		// var alphaVal = 1f;
		__this->___U3CalphaValU3E5__7_9 = (1.0f);
		goto IL_0159;
	}

IL_007d:
	{
		// curTime -= Time.deltaTime;
		float L_14 = __this->___U3CcurTimeU3E5__6_8;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurTimeU3E5__6_8 = ((float)il2cpp_codegen_subtract(L_14, L_15));
		// uiImage.transform.localScale += Vector3.one * 0.1f * -1f * Mathf.Sin(totalTime - 2 * curTime);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___U3CuiImageU3E5__2_4;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, (-1.0f), NULL);
		float L_23 = __this->___U3CtotalTimeU3E5__5_7;
		float L_24 = __this->___U3CcurTimeU3E5__6_8;
		float L_25;
		L_25 = sinf(((float)il2cpp_codegen_subtract(L_23, ((float)il2cpp_codegen_multiply((2.0f), L_24)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_26, NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_27, NULL);
		// alphaVal+= 0.1f * -1f * Mathf.Sin(totalTime - 2 * curTime);
		float L_28 = __this->___U3CalphaValU3E5__7_9;
		float L_29 = __this->___U3CtotalTimeU3E5__5_7;
		float L_30 = __this->___U3CcurTimeU3E5__6_8;
		float L_31;
		L_31 = sinf(((float)il2cpp_codegen_subtract(L_29, ((float)il2cpp_codegen_multiply((2.0f), L_30)))));
		__this->___U3CalphaValU3E5__7_9 = ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply((-0.100000001f), L_31))));
		// outline.effectColor = new Color(outlineColor.r, outlineColor.g, outlineColor.b, alphaVal);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_32 = __this->___U3CoutlineU3E5__3_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_34 = L_33->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_36 = L_35->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_38 = L_37->___b_2;
		float L_39 = __this->___U3CalphaValU3E5__7_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_40), L_34, L_36, L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_32);
		Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1(L_32, L_40, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0152:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0159:
	{
		// while (curTime > 0)
		float L_41 = __this->___U3CcurTimeU3E5__6_8;
		if ((((float)L_41) > ((float)(0.0f))))
		{
			goto IL_007d;
		}
	}
	{
		// uiImage.transform.localScale = Vector3.one;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___U3CuiImageU3E5__2_4;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_43);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_43, L_44, NULL);
		// outline.effectColor = new Color(outlineColor.r,outlineColor.g,outlineColor.b,0f);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_45 = __this->___U3CoutlineU3E5__3_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_46 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_47 = L_46->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_48 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_49 = L_48->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = (&__this->___U3CoutlineColorU3E5__4_6);
		float L_51 = L_50->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52;
		memset((&L_52), 0, sizeof(L_52));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_52), L_47, L_49, L_51, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_45);
		Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1(L_45, L_52, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PW.PlayerSlots/<DoEmphasize>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoEmphasizeU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEF6B1259A7A1F7B7F2729E46A9BDE69C3278468 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.PlayerSlots/<DoEmphasize>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__6_System_Collections_IEnumerator_Reset_m1766D561AA5D3F587F7E13F00A5E71EF865C7AC5 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoEmphasizeU3Ed__6_System_Collections_IEnumerator_Reset_m1766D561AA5D3F587F7E13F00A5E71EF865C7AC5_RuntimeMethod_var)));
	}
}
// System.Object PW.PlayerSlots/<DoEmphasize>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoEmphasizeU3Ed__6_System_Collections_IEnumerator_get_Current_mDB83930F54F4FCD4593F8432B12F107E2B6711F2 (U3CDoEmphasizeU3Ed__6_t27FEA5B6F721AE01BA51C07300BD61916F48C4E7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.Product::.ctor(System.Int32,System.String,ProductType,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Product__ctor_m5647B0C74E26A1451203B6D5EC7498AB33A9F36A (Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* __this, int32_t ___0_ID, String_t* ___1_name, int32_t ___2__type, float ___3_price, const RuntimeMethod* method) 
{
	{
		// public float productPrice=10;
		__this->___productPrice_3 = (10.0f);
		// public bool addToPlateBeforeServed = true;
		__this->___addToPlateBeforeServed_5 = (bool)1;
		// public Product(int ID,string name,ProductType _type, float price)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// orderID = ID;
		int32_t L_0 = ___0_ID;
		__this->___orderID_1 = L_0;
		// productName = name;
		String_t* L_1 = ___1_name;
		__this->___productName_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___productName_2), (void*)L_1);
		// productType = _type;
		int32_t L_2 = ___2__type;
		__this->___productType_4 = L_2;
		// productPrice = price;
		float L_3 = ___3_price;
		__this->___productPrice_3 = L_3;
		// dontIncludeInThisScene = false;
		__this->___dontIncludeInThisScene_6 = (bool)0;
		// plateOffset = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___plateOffset_8 = L_4;
		// RegenerateProduct = false;
		__this->___RegenerateProduct_9 = (bool)0;
		// }
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
// System.Collections.IEnumerator PW.ProductGameObject::AnimateGoingToSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductGameObject_AnimateGoingToSlot_m117A33A4E7AD26813AEB88647D632D9725D370E6 (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* L_0 = (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525*)il2cpp_codegen_object_new(U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateGoingToSlotU3Ed__6__ctor_m5FBFCD97E5B6FCBB42950667EC277741AB5D996C(L_0, 0, NULL);
		U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean PW.ProductGameObject::CanGoPlayerSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductGameObject_CanGoPlayerSlot_m229CDC0878E97E795E1312A207EDF5D8AE18810F (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var PlayerSlots = FindObjectOfType<PlayerSlots>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33(Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33_RuntimeMethod_var);
		// if (PlayerSlots.CanHoldItem(orderID))
		int32_t L_1 = __this->___orderID_6;
		NullCheck(L_0);
		bool L_2;
		L_2 = PlayerSlots_CanHoldItem_m61924EF3CC74127DB40E2EE8E1413A98782B9295(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// BasicGameEvents.RaiseOnProductAddedToSlot(orderID);
		int32_t L_3 = __this->___orderID_6;
		BasicGameEvents_RaiseOnProductAddedToSlot_m40CEC2748EF5B29A546BC9B214BAD678538D6338(L_3, NULL);
		// return true;
		return (bool)1;
	}

IL_001f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator PW.ProductGameObject::MoveToPlace(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductGameObject_MoveToPlace_mBA554E360AC594ACFCE88FC874B691A7C2801CE5 (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_targetPos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* L_0 = (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF*)il2cpp_codegen_object_new(U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CMoveToPlaceU3Ed__8__ctor_m01576655B126086265192EE72C27558F232BC8B9(L_0, 0, NULL);
		U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_targetPos;
		NullCheck(L_2);
		L_2->___targetPos_2 = L_3;
		return L_2;
	}
}
// System.Void PW.ProductGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductGameObject__ctor_m76BC962FC16CD4F9A5D8756281127FD3C1B7EE41 (ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.ProductGameObject/<AnimateGoingToSlot>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__6__ctor_m5FBFCD97E5B6FCBB42950667EC277741AB5D996C (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.ProductGameObject/<AnimateGoingToSlot>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__6_System_IDisposable_Dispose_m4E319A8D244DC00A12BC43EA9A79B06DD65125F1 (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.ProductGameObject/<AnimateGoingToSlot>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateGoingToSlotU3Ed__6_MoveNext_m7B90325EFAF4003277FC5D404D9EE610C3C4CD1F (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0128;
			}
			case 2:
			{
				goto IL_014c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (serveAsDifferentGameObject != null)
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_3 = V_1;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___serveAsDifferentGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0084;
		}
	}
	{
		// for (int i = 0; i < transform.childCount; i++)
		V_4 = 0;
		goto IL_005a;
	}

IL_003c:
	{
		// transform.GetChild(i).gameObject.SetActive(false);
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_6 = V_1;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		int32_t L_8 = V_4;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_7, L_8, NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_005a:
	{
		// for (int i = 0; i < transform.childCount; i++)
		int32_t L_12 = V_4;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_13 = V_1;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_14, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_15)))
		{
			goto IL_003c;
		}
	}
	{
		// var go = Instantiate(serveAsDifferentGameObject, transform);
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_16 = V_1;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = L_16->___serveAsDifferentGameObject_5;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_17, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// go.transform.SetAsFirstSibling();
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		NullCheck(L_21);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_21, NULL);
	}

IL_0084:
	{
		// float curTime = totalTimeGoingToSlot;
		__this->___U3CcurTimeU3E5__2_3 = (0.400000006f);
		// Vector3 viewPositionOfSlots = new Vector3(0.5f, 0f, Camera.main.nearClipPlane + 2f);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_22;
		L_22 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_22);
		float L_23;
		L_23 = Camera_get_nearClipPlane_m5E8FAF84326E3192CB036BD29DCCDAF6A9861013(L_22, NULL);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.5f), (0.0f), ((float)il2cpp_codegen_add(L_23, (2.0f))), NULL);
		// Vector3 centerPos = Camera.main.ViewportToWorldPoint(viewPositionOfSlots);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_24;
		L_24 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Camera_ViewportToWorldPoint_m9D76494E8B695ADF7690BAF7953B89B152D96E71(L_24, L_25, NULL);
		V_3 = L_26;
		// Vector3 totalDist = (centerPos - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_28 = V_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_30, NULL);
		__this->___U3CtotalDistU3E5__3_4 = L_31;
		goto IL_012f;
	}

IL_00d5:
	{
		// float timePassed = Time.deltaTime;
		float L_32;
		L_32 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_5 = L_32;
		// transform.position += timePassed * totalDist / totalTimeGoingToSlot;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_33 = V_1;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		float L_37 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = __this->___U3CtotalDistU3E5__3_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_39, (0.400000006f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_40, NULL);
		NullCheck(L_35);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_41, NULL);
		// curTime -= timePassed;
		float L_42 = __this->___U3CcurTimeU3E5__2_3;
		float L_43 = V_5;
		__this->___U3CcurTimeU3E5__2_3 = ((float)il2cpp_codegen_subtract(L_42, L_43));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0128:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_012f:
	{
		// while (curTime > 0)
		float L_44 = __this->___U3CcurTimeU3E5__2_3;
		if ((((float)L_44) > ((float)(0.0f))))
		{
			goto IL_00d5;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_014c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PW.ProductGameObject/<AnimateGoingToSlot>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateGoingToSlotU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEC5D01FE6024D3B3E902F33B36D1F6C7DBA0C080 (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.ProductGameObject/<AnimateGoingToSlot>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__6_System_Collections_IEnumerator_Reset_m75198CC6DB8F330A8D0CD09192DD67BDD3B26221 (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateGoingToSlotU3Ed__6_System_Collections_IEnumerator_Reset_m75198CC6DB8F330A8D0CD09192DD67BDD3B26221_RuntimeMethod_var)));
	}
}
// System.Object PW.ProductGameObject/<AnimateGoingToSlot>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateGoingToSlotU3Ed__6_System_Collections_IEnumerator_get_Current_mBA1ACC13A9B786C4CEB383D6C0E6F9CA87D9F560 (U3CAnimateGoingToSlotU3Ed__6_tC49557D1D118EDB1760047C61A332214F555E525* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.ProductGameObject/<MoveToPlace>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToPlaceU3Ed__8__ctor_m01576655B126086265192EE72C27558F232BC8B9 (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.ProductGameObject/<MoveToPlace>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToPlaceU3Ed__8_System_IDisposable_Dispose_mE4F35501BBCD480FE86167C6C347F13BB3BB7C59 (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.ProductGameObject/<MoveToPlace>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveToPlaceU3Ed__8_MoveNext_m497E90157E14A8CB01612E8072684E9D123510AF (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00af;
			}
			case 2:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float totalTime = 1f;
		__this->___U3CtotalTimeU3E5__2_4 = (1.0f);
		// float curTime = totalTime;
		float L_3 = __this->___U3CtotalTimeU3E5__2_4;
		__this->___U3CcurTimeU3E5__3_5 = L_3;
		// var totalDist = (targetPos - transform.position);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___targetPos_2;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_5 = V_1;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_4, L_7, NULL);
		__this->___U3CtotalDistU3E5__4_6 = L_8;
		goto IL_00b6;
	}

IL_005e:
	{
		// var timePassed = Time.deltaTime;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = L_9;
		// transform.position += timePassed * totalDist / totalTime;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_10 = V_1;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___U3CtotalDistU3E5__4_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_14, L_15, NULL);
		float L_17 = __this->___U3CtotalTimeU3E5__2_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_16, L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_18, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_19, NULL);
		// curTime -= timePassed;
		float L_20 = __this->___U3CcurTimeU3E5__3_5;
		float L_21 = V_2;
		__this->___U3CcurTimeU3E5__3_5 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00af:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00b6:
	{
		// while (curTime > 0)
		float L_22 = __this->___U3CcurTimeU3E5__3_5;
		if ((((float)L_22) > ((float)(0.0f))))
		{
			goto IL_005e;
		}
	}
	{
		// transform.position = targetPos;
		ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011* L_23 = V_1;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___targetPos_2;
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_25, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object PW.ProductGameObject/<MoveToPlace>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveToPlaceU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE243D65C6D04449E63C62F0E6DBFFD8F0BB69ABC (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.ProductGameObject/<MoveToPlace>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveToPlaceU3Ed__8_System_Collections_IEnumerator_Reset_m41AD8AE3E01C10A67DAEB596796A93A1FCF40051 (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveToPlaceU3Ed__8_System_Collections_IEnumerator_Reset_m41AD8AE3E01C10A67DAEB596796A93A1FCF40051_RuntimeMethod_var)));
	}
}
// System.Object PW.ProductGameObject/<MoveToPlace>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveToPlaceU3Ed__8_System_Collections_IEnumerator_get_Current_m950C3C5728C3C3AB2DFA46A6E2C0DAC6554B0875 (U3CMoveToPlaceU3Ed__8_t53CCEFDC1B46DC62F68029F5E53FCEDFC5CA33BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.ProductManager::InstantiatePlaceHolder(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A (ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA_m12724265CBFFDC3E8FB088C863DD56A7D097F498_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD376069D46E56C55ED5623DF80F2491B3330FF05);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (placeholderPrefab != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___placeholderPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// var placeGo = Instantiate(placeholderPrefab, pos, Quaternion.identity,parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___placeholderPrefab_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_pos;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_parent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181(L_2, L_3, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mD136E37F696C00A3A1D4F65724ACAE903E385181_RuntimeMethod_var);
		// placeGo.GetComponent<CreateProductOnPlaceHolder>().objectToGenerate = go;
		NullCheck(L_6);
		CreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA* L_7;
		L_7 = GameObject_GetComponent_TisCreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA_m12724265CBFFDC3E8FB088C863DD56A7D097F498(L_6, GameObject_GetComponent_TisCreateProductOnPlaceHolder_t2C8543024E30296891A24622E8130D2E64E031FA_m12724265CBFFDC3E8FB088C863DD56A7D097F498_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___2_go;
		NullCheck(L_7);
		L_7->___objectToGenerate_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___objectToGenerate_4), (void*)L_8);
		return;
	}

IL_002c:
	{
		// Debug.LogError("You are using this feature on the products but you didn't assign a prefab");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralD376069D46E56C55ED5623DF80F2491B3330FF05, NULL);
		// }
		return;
	}
}
// System.Void PW.ProductManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductManager_OnEnable_m7C5DEAD34B8285582E7C7CA97BA00068570E41FB (ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.onPlaceHolderRequired += InstantiatePlaceHolder;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)il2cpp_codegen_object_new(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnPlaceHolderRequired__ctor_mCA70F750633D199CAEBB4B9967DD416BEC2EC803(L_0, __this, (intptr_t)((void*)ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A_RuntimeMethod_var), NULL);
		BasicGameEvents_add_onPlaceHolderRequired_mAC31AE207AA792B5F6CCE028A34A70CEDFF5C235(L_0, NULL);
		// }
		return;
	}
}
// System.Void PW.ProductManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductManager_OnDisable_m53B70DEA6E030E4000A0BEF68A8C8D136E11556C (ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.onPlaceHolderRequired -= InstantiatePlaceHolder;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)il2cpp_codegen_object_new(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OnPlaceHolderRequired__ctor_mCA70F750633D199CAEBB4B9967DD416BEC2EC803(L_0, __this, (intptr_t)((void*)ProductManager_InstantiatePlaceHolder_m435F9737C238595DF18EC7BB2B527136CECD614A_RuntimeMethod_var), NULL);
		BasicGameEvents_remove_onPlaceHolderRequired_m9452F0B44B3FCCD76CD4CB9B3B1391A5E3CF415D(L_0, NULL);
		// }
		return;
	}
}
// System.Boolean PW.ProductManager::RemoveProduct(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProductManager_RemoveProduct_mD5D04AE35D06BF9DB7528691BEBA67D4F2C9AD26 (ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE* __this, int32_t ___0_orderID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m193BF0C82C2FB1444EA2418492EF40994169EE40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Count_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mEFB0F3D142E6065B569A41F90EB9112E725C3DBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m1BA3A15E3CAAD7ED3F291BB3D67B99D9ED102AC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mB023319FF967A3431252C9A5275A2CCCCDD2C0CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CRemoveProductU3Eb__0_m04D3F4ECF8A1810775F6F84E1B9E9B237F5C05BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B7B04F8EB29633E9566B45A573FC0A895842AB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA54D7A1E1081CD333E34C6EDF9E98631BABB2B1F);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* V_2 = NULL;
	int32_t V_3 = 0;
	ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* L_0 = (U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_m2F3C6325773FC7FAB353B9DA8299FB5BA3251EB5(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* L_1 = V_0;
		int32_t L_2 = ___0_orderID;
		NullCheck(L_1);
		L_1->___orderID_0 = L_2;
		// var query = from x in Products where x.orderID == orderID select x ;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_3 = __this->___Products_4;
		U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* L_4 = V_0;
		Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D* L_5 = (Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D*)il2cpp_codegen_object_new(Func_2_tC9C2B4219353A7A68D333148E0EABA6781AB688D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m16EBF1555C7798149FE230DABE7C76117E913F2D(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CRemoveProductU3Eb__0_m04D3F4ECF8A1810775F6F84E1B9E9B237F5C05BB_RuntimeMethod_var), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mB023319FF967A3431252C9A5275A2CCCCDD2C0CC((RuntimeObject*)L_3, L_5, Enumerable_Where_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mB023319FF967A3431252C9A5275A2CCCCDD2C0CC_RuntimeMethod_var);
		V_1 = L_6;
		// Debug.Log("Trying to remove product with ID : " + orderID);
		U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* L_7 = V_0;
		NullCheck(L_7);
		int32_t* L_8 = (&L_7->___orderID_0);
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_8, NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralA54D7A1E1081CD333E34C6EDF9E98631BABB2B1F, L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		// if (query.Count() > 0)
		RuntimeObject* L_11 = V_1;
		int32_t L_12;
		L_12 = Enumerable_Count_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mEFB0F3D142E6065B569A41F90EB9112E725C3DBD(L_11, Enumerable_Count_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_mEFB0F3D142E6065B569A41F90EB9112E725C3DBD_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		// var FoundProduct = query.First();
		RuntimeObject* L_13 = V_1;
		Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* L_14;
		L_14 = Enumerable_First_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m1BA3A15E3CAAD7ED3F291BB3D67B99D9ED102AC5(L_13, Enumerable_First_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m1BA3A15E3CAAD7ED3F291BB3D67B99D9ED102AC5_RuntimeMethod_var);
		V_2 = L_14;
		// var indexOfProduct = Array.IndexOf(Products,FoundProduct);
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_15 = __this->___Products_4;
		Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* L_16 = V_2;
		int32_t L_17;
		L_17 = Array_IndexOf_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m193BF0C82C2FB1444EA2418492EF40994169EE40(L_15, L_16, Array_IndexOf_TisProduct_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4_m193BF0C82C2FB1444EA2418492EF40994169EE40_RuntimeMethod_var);
		V_3 = L_17;
		// Products[indexOfProduct] = null;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_18 = __this->___Products_4;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, NULL);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4*)NULL);
		// var tempArr = new Product[Products.Length -1];
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_20 = __this->___Products_4;
		NullCheck(L_20);
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_21 = (ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920*)(ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920*)SZArrayNew(ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)));
		V_4 = L_21;
		// var newIndex = 0;
		V_5 = 0;
		// for (int i = 0; i < Products.Length; i++)
		V_6 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		// if (Products[i] != null)
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_22 = __this->___Products_4;
		int32_t L_23 = V_6;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		// tempArr[newIndex] = Products[i];
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_26 = V_4;
		int32_t L_27 = V_5;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_28 = __this->___Products_4;
		int32_t L_29 = V_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4*)L_31);
		// if (newIndex < Products.Length-2)
		int32_t L_32 = V_5;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_33 = __this->___Products_4;
		NullCheck(L_33);
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2)))))
		{
			goto IL_00ae;
		}
	}
	{
		// newIndex++;
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ae:
	{
		// for (int i = 0; i < Products.Length; i++)
		int32_t L_35 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < Products.Length; i++)
		int32_t L_36 = V_6;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_37 = __this->___Products_4;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_0081;
		}
	}
	{
		// Products = new Product[tempArr.Length];
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_38 = V_4;
		NullCheck(L_38);
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_39 = (ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920*)(ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920*)SZArrayNew(ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)));
		__this->___Products_4 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Products_4), (void*)L_39);
		// Array.Copy(tempArr, Products, tempArr.Length);
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_40 = V_4;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_41 = __this->___Products_4;
		ProductU5BU5D_t43FCCECDF03ACE141268985EA3F7358784CEE920* L_42 = V_4;
		NullCheck(L_42);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_40, (RuntimeArray*)L_41, ((int32_t)(((RuntimeArray*)L_42)->max_length)), NULL);
		// return true;
		return (bool)1;
	}

IL_00e2:
	{
		// Debug.Log("But couldn't found one matchinng");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3B7B04F8EB29633E9566B45A573FC0A895842AB0, NULL);
		// return false;
		return (bool)0;
	}
}
// System.Void PW.ProductManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductManager__ctor_m16ECC2B795D688D82BEC444EC8266CC1F2379D14 (ProductManager_tAD80313E4C8F277881B27D63991321241418FBCE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.ProductManager/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m2F3C6325773FC7FAB353B9DA8299FB5BA3251EB5 (U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean PW.ProductManager/<>c__DisplayClass6_0::<RemoveProduct>b__0(PW.Product)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CRemoveProductU3Eb__0_m04D3F4ECF8A1810775F6F84E1B9E9B237F5C05BB (U3CU3Ec__DisplayClass6_0_t2CBA28A751DF6FEB484554653AFF6BAD965BBB19* __this, Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* ___0_x, const RuntimeMethod* method) 
{
	{
		// var query = from x in Products where x.orderID == orderID select x ;
		Product_t65A0D3000C2F88EB781E9B24C54F64EFF16117D4* L_0 = ___0_x;
		NullCheck(L_0);
		int32_t L_1 = L_0->___orderID_1;
		int32_t L_2 = __this->___orderID_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
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
// System.Void PW.ProductWithCover::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductWithCover_OnEnable_m9E312BC420860043C98C79CF952AD94A33E7F4A6 (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___m_collider_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_collider_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PW.ProductWithCover::HandleCoverCloseClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductWithCover_HandleCoverCloseClick_m64F60F104B4F4FB965CEB21D6267DCDFF199C6DC (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, const RuntimeMethod* method) 
{
	{
		// if (IsAnimating)
		bool L_0 = __this->___IsAnimating_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// StartCoroutine(OpenCloseDisplay(false, false));
		RuntimeObject* L_1;
		L_1 = ProductWithCover_OpenCloseDisplay_m6DBB4D15F3CCB847184FE08FF3FBEA370AB7F050(__this, (bool)0, (bool)0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void PW.ProductWithCover::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductWithCover_OnMouseDown_mE32486CBB85F8510C948F4075AEDB222C51DB38E (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, const RuntimeMethod* method) 
{
	{
		// if (IsAnimating)
		bool L_0 = __this->___IsAnimating_9;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// StartCoroutine(OpenCloseDisplay(true, autoCloseCover));
		bool L_1 = __this->___autoCloseCover_7;
		RuntimeObject* L_2;
		L_2 = ProductWithCover_OpenCloseDisplay_m6DBB4D15F3CCB847184FE08FF3FBEA370AB7F050(__this, (bool)1, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.ProductWithCover::OpenCloseDisplay(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProductWithCover_OpenCloseDisplay_m6DBB4D15F3CCB847184FE08FF3FBEA370AB7F050 (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, bool ___0_open, bool ___1_alsoReverse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* L_0 = (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86*)il2cpp_codegen_object_new(U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3COpenCloseDisplayU3Ed__9__ctor_m1A4341FA641B7472C06FD095560628D69D4992CF(L_0, 0, NULL);
		U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* L_2 = L_1;
		bool L_3 = ___0_open;
		NullCheck(L_2);
		L_2->___open_3 = L_3;
		U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* L_4 = L_2;
		bool L_5 = ___1_alsoReverse;
		NullCheck(L_4);
		L_4->___alsoReverse_4 = L_5;
		return L_4;
	}
}
// System.Void PW.ProductWithCover::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProductWithCover__ctor_m4FCBE9E9EC27B5CDAB7D70F4C1F10DC3142B7183 (ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.ProductWithCover/<OpenCloseDisplay>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseDisplayU3Ed__9__ctor_m1A4341FA641B7472C06FD095560628D69D4992CF (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.ProductWithCover/<OpenCloseDisplay>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseDisplayU3Ed__9_System_IDisposable_Dispose_mB6AFE25DEF3FD1764EF7162DBB65E558BD2956C7 (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.ProductWithCover/<OpenCloseDisplay>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3COpenCloseDisplayU3Ed__9_MoveNext_m4D3D425235D8BD9C19FA5F407CB392C411980FB6 (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3_m7E8A799CC625B1440FA3A1A3078D6CCF752D5C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* V_1 = NULL;
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0124;
			}
			case 2:
			{
				goto IL_017e;
			}
			case 3:
			{
				goto IL_01ae;
			}
			case 4:
			{
				goto IL_01da;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// IsAnimating = true;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_3 = V_1;
		NullCheck(L_3);
		L_3->___IsAnimating_9 = (bool)1;
		// float totalTime = 1f;
		__this->___U3CtotalTimeU3E5__2_5 = (1.0f);
		// float curTime = totalTime;
		float L_4 = __this->___U3CtotalTimeU3E5__2_5;
		__this->___U3CcurTimeU3E5__3_6 = L_4;
		// var totalDist = (openCoverOffset);
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_5 = V_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___openCoverOffset_6;
		__this->___U3CtotalDistU3E5__4_7 = L_6;
		// var finalPos = coverObject.position + openCoverOffset;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_7 = V_1;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = L_7->___coverObject_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_10 = V_1;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___openCoverOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_11, NULL);
		__this->___U3CfinalPosU3E5__5_8 = L_12;
		// if (!open)
		bool L_13 = __this->___open_3;
		if (L_13)
		{
			goto IL_012b;
		}
	}
	{
		// totalDist = -openCoverOffset;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_14 = V_1;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___openCoverOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
		__this->___U3CtotalDistU3E5__4_7 = L_16;
		// finalPos = coverObject.position - openCoverOffset;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_17 = V_1;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = L_17->___coverObject_5;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_20 = V_1;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___openCoverOffset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_19, L_21, NULL);
		__this->___U3CfinalPosU3E5__5_8 = L_22;
		goto IL_012b;
	}

IL_00b1:
	{
		// var amount = Time.deltaTime;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = L_23;
		// var eulerTemp = coverObject.transform.rotation.eulerAngles;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_24 = V_1;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = L_24->___coverObject_5;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(L_26);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		V_3 = L_27;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		// coverObject.transform.position += (totalDist * amount) / totalTime;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_29 = V_1;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = L_29->___coverObject_5;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = L_31;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = __this->___U3CtotalDistU3E5__4_7;
		float L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_35, NULL);
		float L_37 = __this->___U3CtotalTimeU3E5__2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_38, NULL);
		NullCheck(L_32);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_32, L_39, NULL);
		// curTime -= Time.deltaTime;
		float L_40 = __this->___U3CcurTimeU3E5__3_6;
		float L_41;
		L_41 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurTimeU3E5__3_6 = ((float)il2cpp_codegen_subtract(L_40, L_41));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0124:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_012b:
	{
		// while (curTime > 0)
		float L_42 = __this->___U3CcurTimeU3E5__3_6;
		if ((((float)L_42) > ((float)(0.0f))))
		{
			goto IL_00b1;
		}
	}
	{
		// m_collider.enabled = !open;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_43 = V_1;
		NullCheck(L_43);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_44 = L_43->___m_collider_4;
		bool L_45 = __this->___open_3;
		NullCheck(L_44);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_44, (bool)((((int32_t)L_45) == ((int32_t)0))? 1 : 0), NULL);
		// coverObject.transform.position = finalPos;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_46 = V_1;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47 = L_46->___coverObject_5;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_47, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___U3CfinalPosU3E5__5_8;
		NullCheck(L_48);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_48, L_49, NULL);
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_50 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_50, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_50);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_017e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (alsoReverse)
		bool L_51 = __this->___alsoReverse_4;
		if (!L_51)
		{
			goto IL_01e3;
		}
	}
	{
		// if (autoCloseCover)
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_52 = V_1;
		NullCheck(L_52);
		bool L_53 = L_52->___autoCloseCover_7;
		if (!L_53)
		{
			goto IL_01b5;
		}
	}
	{
		// yield return new WaitForSeconds(k_AutoCloseCoverTime);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_54 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_54, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_54);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01ae:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01b5:
	{
		// yield return StartCoroutine(OpenCloseDisplay(!open, false));
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_55 = V_1;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_56 = V_1;
		bool L_57 = __this->___open_3;
		NullCheck(L_56);
		RuntimeObject* L_58;
		L_58 = ProductWithCover_OpenCloseDisplay_m6DBB4D15F3CCB847184FE08FF3FBEA370AB7F050(L_56, (bool)((((int32_t)L_57) == ((int32_t)0))? 1 : 0), (bool)0, NULL);
		NullCheck(L_55);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_59;
		L_59 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_55, L_58, NULL);
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_01da:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield break;
		return (bool)0;
	}

IL_01e3:
	{
		// m_collider.enabled = !open;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_60 = V_1;
		NullCheck(L_60);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_61 = L_60->___m_collider_4;
		bool L_62 = __this->___open_3;
		NullCheck(L_61);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_61, (bool)((((int32_t)L_62) == ((int32_t)0))? 1 : 0), NULL);
		// if (open)
		bool L_63 = __this->___open_3;
		if (!L_63)
		{
			goto IL_020f;
		}
	}
	{
		// coverObject.GetComponent<OnClickCoverHelper>().ActivateCollider();
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_64 = V_1;
		NullCheck(L_64);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_65 = L_64->___coverObject_5;
		NullCheck(L_65);
		OnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3* L_66;
		L_66 = Component_GetComponent_TisOnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3_m7E8A799CC625B1440FA3A1A3078D6CCF752D5C0E(L_65, Component_GetComponent_TisOnClickCoverHelper_t7D6207E3DD137F57AA4B292A98FA92F6402B56B3_m7E8A799CC625B1440FA3A1A3078D6CCF752D5C0E_RuntimeMethod_var);
		NullCheck(L_66);
		OnClickCoverHelper_ActivateCollider_m84D7536878BA7EFA0C79ADB1D13C0832219F869D(L_66, NULL);
	}

IL_020f:
	{
		// IsAnimating = false;
		ProductWithCover_tDB4441FC1B929989AA7EDDD116F02665DB1EE103* L_67 = V_1;
		NullCheck(L_67);
		L_67->___IsAnimating_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object PW.ProductWithCover/<OpenCloseDisplay>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenCloseDisplayU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA2C2A4B4FFD46C93D601FB195C0DD00C1B714EDF (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.ProductWithCover/<OpenCloseDisplay>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COpenCloseDisplayU3Ed__9_System_Collections_IEnumerator_Reset_m1889E541D87F29D4A212D20800502374ABC2C5A3 (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3COpenCloseDisplayU3Ed__9_System_Collections_IEnumerator_Reset_m1889E541D87F29D4A212D20800502374ABC2C5A3_RuntimeMethod_var)));
	}
}
// System.Object PW.ProductWithCover/<OpenCloseDisplay>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3COpenCloseDisplayU3Ed__9_System_Collections_IEnumerator_get_Current_mA2081CC28629488E1E109471FCFB2AE3E044A5BC (U3COpenCloseDisplayU3Ed__9_t9C75239BF9729DCA858287FA29BABC9A93789D86* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.ProgressHelper::UpdateProcessUI(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHelper_UpdateProcessUI_mF8B00E2038C279D8952A794DDE1B51E0EFF03BA5 (ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* __this, float ___0_curAmount, float ___1_totalProcess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Image != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___m_Image_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// m_Image.fillAmount = curAmount / totalProcess;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_Image_4;
		float L_3 = ___0_curAmount;
		float L_4 = ___1_totalProcess;
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, ((float)(L_3/L_4)), NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void PW.ProgressHelper::ToggleHelper(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHelper_ToggleHelper_m38701100C1E8DB89D517DB5C10E228D3C238E3EA (ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* __this, bool ___0_result, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(result);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_result;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// m_Image.fillAmount = 0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___m_Image_4;
		NullCheck(L_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void PW.ProgressHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressHelper__ctor_mF7C45D2595C04F230DB8553C903E1DFA150D8200 (ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.ReadyToServe::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyToServe_Awake_m4F566975C4653D8686E0DFEE34ACAB809ACD1C96 (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___m_collider_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_collider_11), (void*)L_0);
		// m_collider.enabled = true;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___m_collider_11;
		NullCheck(L_1);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PW.ReadyToServe::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyToServe_OnMouseDown_mB04EE72C791D73F6E00858447019078F63BBF692 (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if (!base.CanGoPlayerSlot())
		bool L_0;
		L_0 = ProductGameObject_CanGoPlayerSlot_m229CDC0878E97E795E1312A207EDF5D8AE18810F(__this, NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (AddToPlateBeforeServed)
		bool L_1 = ((ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011*)__this)->___AddToPlateBeforeServed_7;
		if (!L_1)
		{
			goto IL_006c;
		}
	}
	{
		// var plate = GameObject.Instantiate(platePrefab, transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___platePrefab_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_0 = L_6;
		// plate.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_9, NULL);
		// if (plateOffset.magnitude > 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&((ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011*)__this)->___plateOffset_8);
		float L_11;
		L_11 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_10, NULL);
		if ((!(((float)L_11) > ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// plate.transform.localPosition = plateOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011*)__this)->___plateOffset_8;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
	}

IL_0061:
	{
		// plate.transform.SetAsFirstSibling();//so we know what to delete later
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_16, NULL);
	}

IL_006c:
	{
		// if (RegenerateProduct)
		bool L_17 = ((ProductGameObject_tE2BC4CB39651AF47760A2CDC668A28BDB9A76011*)__this)->___RegenerateProduct_9;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// BasicGameEvents.RaiseInstantiatePlaceHolder(transform.parent, transform.position, gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		BasicGameEvents_RaiseInstantiatePlaceHolder_mD21089052205D67F4985B0F8B64AFD0378781C4F(L_19, L_21, L_22, NULL);
	}

IL_0095:
	{
		// StartCoroutine(AnimateGoingToSlot());
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.IEnumerator PW.ProductGameObject::AnimateGoingToSlot() */, __this);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_24;
		L_24 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_23, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.ReadyToServe::AnimateGoingToSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadyToServe_AnimateGoingToSlot_m0F3ACECF0313BA019C3B1BAD7BB41CF614B80EDA (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* L_0 = (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233*)il2cpp_codegen_object_new(U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAnimateGoingToSlotU3Ed__4__ctor_m5460DF2427802D1E72E4EE164B25C8EBE31B67BF(L_0, 0, NULL);
		U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PW.ReadyToServe::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadyToServe__ctor_mAE30808AFDEA56FB2222DC8B8DED7D34D650B2E8 (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) 
{
	{
		ProductGameObject__ctor_m76BC962FC16CD4F9A5D8756281127FD3C1B7EE41(__this, NULL);
		return;
	}
}
// System.Collections.IEnumerator PW.ReadyToServe::<>n__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadyToServe_U3CU3En__0_mEB7F8A17472A9E93E040DB70DEBBBBFF619407F5 (ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ProductGameObject_AnimateGoingToSlot_m117A33A4E7AD26813AEB88647D632D9725D370E6(__this, NULL);
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
// System.Void PW.ReadyToServe/<AnimateGoingToSlot>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__4__ctor_m5460DF2427802D1E72E4EE164B25C8EBE31B67BF (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.ReadyToServe/<AnimateGoingToSlot>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__4_System_IDisposable_Dispose_m0732F9E25892ACFBD974573453F4F6982FC9024D (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.ReadyToServe/<AnimateGoingToSlot>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimateGoingToSlotU3Ed__4_MoveNext_m1EC3A87ACE589FA40B27AA77E4C9D84B574DB9D4 (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return base.AnimateGoingToSlot();
		ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ReadyToServe_U3CU3En__0_mEB7F8A17472A9E93E040DB70DEBBBBFF619407F5(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0033:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		ReadyToServe_t471256A83D0E86C0CC1DEEC3AFBDE5FCFBE93867* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PW.ReadyToServe/<AnimateGoingToSlot>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateGoingToSlotU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD1733903575DC6B12AC472ECF868C8A56506E688 (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.ReadyToServe/<AnimateGoingToSlot>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimateGoingToSlotU3Ed__4_System_Collections_IEnumerator_Reset_mCBFBB6AF12B01D67891781827C02EB9EE3D0E095 (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAnimateGoingToSlotU3Ed__4_System_Collections_IEnumerator_Reset_mCBFBB6AF12B01D67891781827C02EB9EE3D0E095_RuntimeMethod_var)));
	}
}
// System.Object PW.ReadyToServe/<AnimateGoingToSlot>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAnimateGoingToSlotU3Ed__4_System_Collections_IEnumerator_get_Current_m9A01F59D52712803F122835F61192CD5FA21EC60 (U3CAnimateGoingToSlotU3Ed__4_t9BB07FD98271F129F63C328344CCC8D40B7C8233* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.ServeOrder::ServeMe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_ServeMe_mBF3AF682543FE9E13A39D9CD06C018C376200140 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D7955D7CD14D4D3E9E45365AA7FE246CC51F87B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2B771ED8F639EE0F8CC5EC2CBA5A3F0B1A4EF53);
		s_Il2CppMethodInitialized = true;
	}
	PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* V_0 = NULL;
	{
		// var PlayerSlots = FindObjectOfType<PlayerSlots>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_0;
		L_0 = Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33(Object_FindObjectOfType_TisPlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508_m459370CD3BF6634DAD007532BB41866E23829C33_RuntimeMethod_var);
		V_0 = L_0;
		// if (PlayerSlots != null)
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_1 = V_0;
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// if (!PlayerSlots.HoldsItem(orderID))
		PlayerSlots_t9ACB68E0686BD97247ABB9ABAFD440D739F69508* L_3 = V_0;
		int32_t L_4 = __this->___orderID_9;
		NullCheck(L_3);
		bool L_5;
		L_5 = PlayerSlots_HoldsItem_mADED3B2858DD66E3C268E0D8DB7A2255B5AC0836(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// total_order_served++;
		int32_t L_6 = __this->___total_order_served_5;
		__this->___total_order_served_5 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// Debug.Log("Served one thing");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB2B771ED8F639EE0F8CC5EC2CBA5A3F0B1A4EF53, NULL);
		// if (order_count == total_order_served)
		int32_t L_7 = __this->___order_count_4;
		int32_t L_8 = __this->___total_order_served_5;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0054;
		}
	}
	{
		// Debug.Log("customer is happy");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0D7955D7CD14D4D3E9E45365AA7FE246CC51F87B, NULL);
		// OrderCompleted();
		ServeOrder_OrderCompleted_mE97748C8F780C1B3B46BD0EEFDACBCE1E893BBF7(__this, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void PW.ServeOrder::OrderCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_OrderCompleted_mE97748C8F780C1B3B46BD0EEFDACBCE1E893BBF7 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float success = curServeTime / totalServingTime;
		float L_0 = __this->___curServeTime_7;
		float L_1 = __this->___totalServingTime_6;
		V_0 = ((float)(L_0/L_1));
		// BasicGameEvents.RaiseOnOrderCompleted(orderID, success);
		int32_t L_2 = __this->___orderID_9;
		float L_3 = V_0;
		BasicGameEvents_RaiseOnOrderCompleted_mF29A8772748E7A07BAD7505AB14A3C6E36DED2ED(L_2, L_3, NULL);
		// StartCoroutine(DoEmphasize());
		RuntimeObject* L_4;
		L_4 = ServeOrder_DoEmphasize_mF4B0036684A2AFFA2A6001D6CAD1F2B732C3614E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.ServeOrder::DoEmphasize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServeOrder_DoEmphasize_mF4B0036684A2AFFA2A6001D6CAD1F2B732C3614E (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* L_0 = (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362*)il2cpp_codegen_object_new(U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDoEmphasizeU3Ed__9__ctor_m4ECB7CDF7C1F55E4481C977AF7E0CD1E4F490783(L_0, 0, NULL);
		U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void PW.ServeOrder::SetOrder(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_SetOrder_m5840AF15E45156B63DB631F74072B3F64C293110 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, int32_t ___0_ID, float ___1_serveTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2FF596868CCC9F09DEF52DF6E80E1562CD11F97);
		s_Il2CppMethodInitialized = true;
	}
	{
		// orderID = ID;
		int32_t L_0 = ___0_ID;
		__this->___orderID_9 = L_0;
		// totalServingTime = serveTime;
		float L_1 = ___1_serveTime;
		__this->___totalServingTime_6 = L_1;
		// curServeTime = totalServingTime;
		float L_2 = __this->___totalServingTime_6;
		__this->___curServeTime_7 = L_2;
		// Invoke("CancelOrder", serveTime);
		float L_3 = ___1_serveTime;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB2FF596868CCC9F09DEF52DF6E80E1562CD11F97, L_3, NULL);
		// }
		return;
	}
}
// System.Void PW.ServeOrder::SetSprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_SetSprite_mAF225D0245B68C781F3EE8D81CA9F6A26B5679CF (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Image = transform.GetChild(0).GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_1, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___m_Image_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_8), (void*)L_2);
		// m_Image.sprite = sprite;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___m_Image_8;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = ___0_sprite;
		NullCheck(L_3);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void PW.ServeOrder::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_Update_mD2C2EE6E121750165A1F65E210BA8205EAF872BC (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// curServeTime -= Time.deltaTime;
		float L_0 = __this->___curServeTime_7;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___curServeTime_7 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (serveTimeRepresentation != null)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___serveTimeRepresentation_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// serveTimeRepresentation.fillAmount = curServeTime / totalServingTime;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___serveTimeRepresentation_10;
		float L_5 = __this->___curServeTime_7;
		float L_6 = __this->___totalServingTime_6;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, ((float)(L_5/L_6)), NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void PW.ServeOrder::CancelOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder_CancelOrder_m5A5FDA12C6B6615D4F1816B89667F6CC4E0671D5 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BasicGameEvents.RaiseOnOrderCancelled(orderID);
		int32_t L_0 = __this->___orderID_9;
		BasicGameEvents_RaiseOnOrderCancelled_mA92233A4E1FA7331707E9BDAA18DE58380698EA7(L_0, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
		// }
		return;
	}
}
// System.Void PW.ServeOrder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServeOrder__ctor_mE87E4FA667474321B80B0ED5E60D077DC74DA153 (ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* __this, const RuntimeMethod* method) 
{
	{
		// int order_count = 1;
		__this->___order_count_4 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.ServeOrder/<DoEmphasize>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__9__ctor_m4ECB7CDF7C1F55E4481C977AF7E0CD1E4F490783 (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.ServeOrder/<DoEmphasize>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__9_System_IDisposable_Dispose_mDFA6F3DBC548AC3C44B04450C76E6210D1ED4B9A (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.ServeOrder/<DoEmphasize>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDoEmphasizeU3Ed__9_MoveNext_m6EF8EBE47F79014C77EF74731DBC2347310F61A9 (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_013a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var outline = m_Image.GetComponent<Outline>();
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_4 = V_1;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4->___m_Image_8;
		NullCheck(L_5);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_6;
		L_6 = Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26(L_5, Component_GetComponent_TisOutline_t9CF146E077DC65F441EDEC463AA6710374108084_m49421169E9442671C41B58D7B2B2CF2E50EFCD26_RuntimeMethod_var);
		__this->___U3CoutlineU3E5__2_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CoutlineU3E5__2_3), (void*)L_6);
		// Color outlineColor = outline.effectColor;
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_7 = __this->___U3CoutlineU3E5__2_3;
		NullCheck(L_7);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Shadow_get_effectColor_m6E7751BB8792C85BE9DAD0D133D787317D9CF59B_inline(L_7, NULL);
		__this->___U3CoutlineColorU3E5__3_4 = L_8;
		// float totalTime = .6f;
		__this->___U3CtotalTimeU3E5__4_5 = (0.600000024f);
		// float curTime = totalTime;
		float L_9 = __this->___U3CtotalTimeU3E5__4_5;
		__this->___U3CcurTimeU3E5__5_6 = L_9;
		// var alphaVal = 1f;
		__this->___U3CalphaValU3E5__6_7 = (1.0f);
		goto IL_0141;
	}

IL_006a:
	{
		// curTime -= Time.deltaTime;
		float L_10 = __this->___U3CcurTimeU3E5__5_6;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurTimeU3E5__5_6 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// transform.localScale += Vector3.one * 0.1f * -1f * Mathf.Sin(totalTime - 2 * curTime);
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, (0.100000001f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (-1.0f), NULL);
		float L_19 = __this->___U3CtotalTimeU3E5__4_5;
		float L_20 = __this->___U3CcurTimeU3E5__5_6;
		float L_21;
		L_21 = sinf(((float)il2cpp_codegen_subtract(L_19, ((float)il2cpp_codegen_multiply((2.0f), L_20)))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_22, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_23, NULL);
		// alphaVal += 0.1f * -1f * Mathf.Sin(totalTime - 2 * curTime);
		float L_24 = __this->___U3CalphaValU3E5__6_7;
		float L_25 = __this->___U3CtotalTimeU3E5__4_5;
		float L_26 = __this->___U3CcurTimeU3E5__5_6;
		float L_27;
		L_27 = sinf(((float)il2cpp_codegen_subtract(L_25, ((float)il2cpp_codegen_multiply((2.0f), L_26)))));
		__this->___U3CalphaValU3E5__6_7 = ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply((-0.100000001f), L_27))));
		// outline.effectColor = new Color(outlineColor.r, outlineColor.g, outlineColor.b, alphaVal);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_28 = __this->___U3CoutlineU3E5__2_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_30 = L_29->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_32 = L_31->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_34 = L_33->___b_2;
		float L_35 = __this->___U3CalphaValU3E5__6_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_36), L_30, L_32, L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_28);
		Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1(L_28, L_36, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_013a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0141:
	{
		// while (curTime > 0)
		float L_37 = __this->___U3CcurTimeU3E5__5_6;
		if ((((float)L_37) > ((float)(0.0f))))
		{
			goto IL_006a;
		}
	}
	{
		// transform.localScale = Vector3.one;
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_38 = V_1;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_39);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_39, L_40, NULL);
		// outline.effectColor = new Color(outlineColor.r, outlineColor.g, outlineColor.b, 0f);
		Outline_t9CF146E077DC65F441EDEC463AA6710374108084* L_41 = __this->___U3CoutlineU3E5__2_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_42 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_43 = L_42->___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_44 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_45 = L_44->___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_46 = (&__this->___U3CoutlineColorU3E5__3_4);
		float L_47 = L_46->___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), L_43, L_45, L_47, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		Shadow_set_effectColor_mCCC5DB6B7D09C5DEE0C677DEB3B9B0C578F05AF1(L_41, L_48, NULL);
		// Destroy(gameObject);
		ServeOrder_tC3400DE0124BF8F724EC0CBC23700DB332C76A30* L_49 = V_1;
		NullCheck(L_49);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_50, NULL);
		// }
		return (bool)0;
	}
}
// System.Object PW.ServeOrder/<DoEmphasize>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoEmphasizeU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB74B6175EF27207C707CE720527CC6D54F83A035 (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.ServeOrder/<DoEmphasize>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDoEmphasizeU3Ed__9_System_Collections_IEnumerator_Reset_mE041ADE182384DA5E9124EF16BFB74069DDBB56E (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDoEmphasizeU3Ed__9_System_Collections_IEnumerator_Reset_mE041ADE182384DA5E9124EF16BFB74069DDBB56E_RuntimeMethod_var)));
	}
}
// System.Object PW.ServeOrder/<DoEmphasize>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDoEmphasizeU3Ed__9_System_Collections_IEnumerator_get_Current_mDE8F62E974A87EDC67452E8F86FB0CFC33620566 (U3CDoEmphasizeU3Ed__9_tA556BCA728BB93E19FE6894E41E6F106D32DF362* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.StoveGameObject::DoDoorAnimationsIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoveGameObject_DoDoorAnimationsIfNeeded_mF7AF29FAD713721DAD2F701E9468941B809F393F (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, const RuntimeMethod* method) 
{
	{
		// base.DoDoorAnimationsIfNeeded();
		CookingGameObject_DoDoorAnimationsIfNeeded_mAE0C5623664A8ADAF52194835866E98092BA66EA(__this, NULL);
		// if(!isAnimating)
		bool L_0 = __this->___isAnimating_15;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// StartCoroutine(PlayDoorAnim(true, true));
		RuntimeObject* L_1;
		L_1 = StoveGameObject_PlayDoorAnim_m727447CC6B1000FEB4A4DF2C59FC01F525D20A20(__this, (bool)1, (bool)1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PW.StoveGameObject::StartCooking(PW.CookableProduct)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoveGameObject_StartCooking_m824D97312F26FF200776D142D9402D56854C524F (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9* ___0_product, const RuntimeMethod* method) 
{
	{
		// base.StartCooking(product);
		CookableProduct_t27DCD72813FD75D317E2D0CDA20C8C88DB0A2AC9* L_0 = ___0_product;
		CookingGameObject_StartCooking_m2E3F2CF0111C7736EBD1565F921D80EFB892365D(__this, L_0, NULL);
		// m_progressHelper.transform.position +=progressHelperOffset;
		ProgressHelper_t99435CC1BFDDD2BF74478C6E61ECB6827C080469* L_1 = ((CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E*)__this)->___m_progressHelper_8;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = L_2;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___progressHelperOffset_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_4, L_5, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator PW.StoveGameObject::PlayDoorAnim(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StoveGameObject_PlayDoorAnim_m727447CC6B1000FEB4A4DF2C59FC01F525D20A20 (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, bool ___0_open, bool ___1_alsoReverse, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* L_0 = (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D*)il2cpp_codegen_object_new(U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayDoorAnimU3Ed__6__ctor_m73CD25431474B87FE24908859F89355F82A49A99(L_0, 0, NULL);
		U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* L_2 = L_1;
		bool L_3 = ___0_open;
		NullCheck(L_2);
		L_2->___open_3 = L_3;
		U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* L_4 = L_2;
		bool L_5 = ___1_alsoReverse;
		NullCheck(L_4);
		L_4->___alsoReverse_4 = L_5;
		return L_4;
	}
}
// System.Void PW.StoveGameObject::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoveGameObject_OnMouseDown_m624AF76ED2C442A977D912A3B78CBF29C6AC5D09 (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, const RuntimeMethod* method) 
{
	{
		// base.OnMouseDown();
		CookingGameObject_OnMouseDown_mB1666607191D2A29798281FFDFABD127A506E8FD(__this, NULL);
		// }
		return;
	}
}
// System.Void PW.StoveGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StoveGameObject__ctor_mBD5FE2677B66D1B342388680E4C6EF4572B21C26 (StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* __this, const RuntimeMethod* method) 
{
	{
		// private Vector3 progressHelperOffset = new Vector3(0f, 0.8f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.800000012f), (0.0f), /*hidden argument*/NULL);
		__this->___progressHelperOffset_13 = L_0;
		CookingGameObject__ctor_m1396236A333A207991B2F18B5D1015C6CA2AABA8(__this, NULL);
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
// System.Void PW.StoveGameObject/<PlayDoorAnim>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayDoorAnimU3Ed__6__ctor_m73CD25431474B87FE24908859F89355F82A49A99 (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PW.StoveGameObject/<PlayDoorAnim>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayDoorAnimU3Ed__6_System_IDisposable_Dispose_m83DAC6CC43BC1C2F8FE99D4F8982653BD81472DA (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PW.StoveGameObject/<PlayDoorAnim>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayDoorAnimU3Ed__6_MoveNext_m3808DAE84402D229590274037E335C3EC60B8B8F (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* V_1 = NULL;
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0109;
			}
			case 2:
			{
				goto IL_0165;
			}
			case 3:
			{
				goto IL_0199;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// doorIsOpen = open;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_3 = V_1;
		bool L_4 = __this->___open_3;
		NullCheck(L_3);
		L_3->___doorIsOpen_14 = L_4;
		// isAnimating = true;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_5 = V_1;
		NullCheck(L_5);
		L_5->___isAnimating_15 = (bool)1;
		// float totalTime = doorAnimTime;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = ((CookingGameObject_tC7CE5AEA79715239D6CD2AA6015BE5ECC0DFE96E*)L_6)->___doorAnimTime_9;
		__this->___U3CtotalTimeU3E5__2_5 = L_7;
		// float curTime = totalTime;
		float L_8 = __this->___U3CtotalTimeU3E5__2_5;
		__this->___U3CcurTimeU3E5__3_6 = L_8;
		// float totalAngle = 66;
		__this->___U3CtotalAngleU3E5__4_7 = (66.0f);
		// float multiplier = 1f;
		__this->___U3CmultiplierU3E5__5_8 = (1.0f);
		// float finalAngle = 66;
		__this->___U3CfinalAngleU3E5__6_9 = (66.0f);
		// if (!open)
		bool L_9 = __this->___open_3;
		if (L_9)
		{
			goto IL_0110;
		}
	}
	{
		// finalAngle = 0;
		__this->___U3CfinalAngleU3E5__6_9 = (0.0f);
		// multiplier = -1f;
		__this->___U3CmultiplierU3E5__5_8 = (-1.0f);
		goto IL_0110;
	}

IL_009c:
	{
		// var amount = Time.deltaTime;
		float L_10;
		L_10 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_2 = L_10;
		// var eulerTemp = doorTransform.rotation.eulerAngles;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11->___doorTransform_12;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		V_3 = L_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_3), NULL);
		// doorTransform.Rotate(new Vector3( (multiplier * totalAngle) * amount / totalTime,0f, 0f),Space.Self);
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = L_15->___doorTransform_12;
		float L_17 = __this->___U3CmultiplierU3E5__5_8;
		float L_18 = __this->___U3CtotalAngleU3E5__4_7;
		float L_19 = V_2;
		float L_20 = __this->___U3CtotalTimeU3E5__2_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_18)), L_19))/L_20)), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_16, L_21, 1, NULL);
		// curTime -= Time.deltaTime;
		float L_22 = __this->___U3CcurTimeU3E5__3_6;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CcurTimeU3E5__3_6 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0109:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0110:
	{
		// while (curTime > 0)
		float L_24 = __this->___U3CcurTimeU3E5__3_6;
		if ((((float)L_24) > ((float)(0.0f))))
		{
			goto IL_009c;
		}
	}
	{
		// doorTransform.localRotation= Quaternion.Euler(new Vector3(finalAngle,0f, 0f));
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_25 = V_1;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = L_25->___doorTransform_12;
		float L_27 = __this->___U3CfinalAngleU3E5__6_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_27, (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_28, NULL);
		NullCheck(L_26);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_26, L_29, NULL);
		// doorIsOpen = false;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_30 = V_1;
		NullCheck(L_30);
		L_30->___doorIsOpen_14 = (bool)0;
		// yield return new WaitForSeconds(.2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, (0.200000003f), NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0165:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (alsoReverse)
		bool L_32 = __this->___alsoReverse_4;
		if (!L_32)
		{
			goto IL_01a9;
		}
	}
	{
		// yield return StartCoroutine(PlayDoorAnim(!open, false));
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_33 = V_1;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_34 = V_1;
		bool L_35 = __this->___open_3;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = StoveGameObject_PlayDoorAnim_m727447CC6B1000FEB4A4DF2C59FC01F525D20A20(L_34, (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0), (bool)0, NULL);
		NullCheck(L_33);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_37;
		L_37 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_33, L_36, NULL);
		__this->___U3CU3E2__current_1 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_37);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0199:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isAnimating = false;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_38 = V_1;
		NullCheck(L_38);
		L_38->___isAnimating_15 = (bool)0;
		goto IL_01b0;
	}

IL_01a9:
	{
		// isAnimating = false;
		StoveGameObject_t60DB9BA20178D8177199C2B8CCECB35E520DCDA1* L_39 = V_1;
		NullCheck(L_39);
		L_39->___isAnimating_15 = (bool)0;
	}

IL_01b0:
	{
		// }
		return (bool)0;
	}
}
// System.Object PW.StoveGameObject/<PlayDoorAnim>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayDoorAnimU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF55B0B53AA06655DC68155F11D95B1424EA45D75 (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PW.StoveGameObject/<PlayDoorAnim>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayDoorAnimU3Ed__6_System_Collections_IEnumerator_Reset_m07FD0F8134565B4AB799F96F3D8CCFE9CB464FF2 (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayDoorAnimU3Ed__6_System_Collections_IEnumerator_Reset_m07FD0F8134565B4AB799F96F3D8CCFE9CB464FF2_RuntimeMethod_var)));
	}
}
// System.Object PW.StoveGameObject/<PlayDoorAnim>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayDoorAnimU3Ed__6_System_Collections_IEnumerator_get_Current_m236A2BE70F5D1032BE95557DD601CAF447FE701F (U3CPlayDoorAnimU3Ed__6_t5BCB4F9F18FF190B15F3AFA7BE76778B9443425D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void PW.BasicCameraControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl_Update_m3EDB55A0971045938B92E70EEDE61445BFD6AB26 (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// float delta = Input.GetAxis("Mouse ScrollWheel");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		V_0 = L_0;
		// if (Mathf.Abs(delta) > Mathf.Epsilon)
		float L_1 = V_0;
		float L_2;
		L_2 = fabsf(L_1);
		float L_3 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_00ca;
		}
	}
	{
		// Ray ray = this.transform.GetComponent<Camera>().ScreenPointToRay(Input.mousePosition);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(L_4, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_5);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_5, L_6, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// desiredPosition = hit.point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		V_2 = L_9;
		goto IL_0069;
	}

IL_0043:
	{
		// desiredPosition = transform.localPosition + transform.forward*5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, (5.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_14, NULL);
		V_2 = L_15;
	}

IL_0069:
	{
		// float curDir = Vector3.Distance(desiredPosition, transform.localPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_17, NULL);
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_16, L_18, NULL);
		// Vector3 direction = Vector3.Normalize(desiredPosition - transform.localPosition) * (delta);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_23, NULL);
		float L_25 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, L_25, NULL);
		V_3 = L_26;
		// transform.localPosition += direction.normalized * scrollSmooth * Time.deltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = L_27;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		float L_31 = __this->___scrollSmooth_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_30, L_31, NULL);
		float L_33;
		L_33 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_34, NULL);
		NullCheck(L_28);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_28, L_35, NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void PW.BasicCameraControl::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl_LateUpdate_mB862A9C300B781C2CCB0FD511C91B07AE98A34E4 (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Vector3 eulerRotation = transform.localRotation.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_0, NULL);
		V_1 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_1), NULL);
		V_0 = L_2;
		// eulerRotation.z = 0f;
		(&V_0)->___z_4 = (0.0f);
		// if (Input.GetMouseButton(1))
		bool L_3;
		L_3 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_3)
		{
			goto IL_0065;
		}
	}
	{
		// float rot_x = Input.GetAxis("Mouse X");
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		V_2 = L_4;
		// float rot_y = -Input.GetAxis("Mouse Y");
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		V_3 = ((-L_5));
		// eulerRotation.x += rot_y * rotateSpeed;
		float* L_6 = (&(&V_0)->___x_2);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = V_3;
		float L_10 = __this->___rotateSpeed_4;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		// eulerRotation.y += rot_x * rotateSpeed;
		float* L_11 = (&(&V_0)->___y_3);
		float* L_12 = L_11;
		float L_13 = *((float*)L_12);
		float L_14 = V_2;
		float L_15 = __this->___rotateSpeed_4;
		*((float*)L_12) = (float)((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15))));
	}

IL_0065:
	{
		// transform.localRotation = Quaternion.Euler(eulerRotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_17, NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void PW.BasicCameraControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicCameraControl__ctor_m9CFF652C274B4BD867EF139ABD57CE23D28517DA (BasicCameraControl_t06699E83504BCA9DF583E4912B8E523E9E42EC04* __this, const RuntimeMethod* method) 
{
	{
		// public float rotateSpeed = 2f;
		__this->___rotateSpeed_4 = (2.0f);
		// public float scrollSmooth = 2f;
		__this->___scrollSmooth_5 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PW.BasicGameEvents::add_onOrderCancelled(PW.BasicGameEvents/OnOrderCancelled)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCancelled_m38509E2701FC60C1F728AA68F37030EECBC5D93E (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_0 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_1 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_2 = NULL;
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = V_0;
		V_1 = L_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_2 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)CastclassSealed((RuntimeObject*)L_4, OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var));
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_5 = V_2;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_6 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5), L_5, L_6);
		V_0 = L_7;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_8 = V_0;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_8) == ((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::remove_onOrderCancelled(PW.BasicGameEvents/OnOrderCancelled)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCancelled_m4F0FC7F85E2B4A20A6E1233F3DC90984AA507765 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_0 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_1 = NULL;
	OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* V_2 = NULL;
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = V_0;
		V_1 = L_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_2 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)CastclassSealed((RuntimeObject*)L_4, OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3_il2cpp_TypeInfo_var));
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_5 = V_2;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_6 = V_1;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5), L_5, L_6);
		V_0 = L_7;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_8 = V_0;
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_8) == ((RuntimeObject*)(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::RaiseOnOrderCancelled(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCancelled_mA92233A4E1FA7331707E9BDAA18DE58380698EA7 (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onOrderCancelled != null)
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// onOrderCancelled.Invoke(ID);
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCancelled_5;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void PW.BasicGameEvents::add_onOrderCompleted(PW.BasicGameEvents/OnOrderCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onOrderCompleted_mB5789734C8152A8629E52C1DC59C8BC8D64C367F (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_0 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_1 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_2 = NULL;
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = V_0;
		V_1 = L_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_2 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)CastclassSealed((RuntimeObject*)L_4, OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var));
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_5 = V_2;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_6 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6), L_5, L_6);
		V_0 = L_7;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_8 = V_0;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_8) == ((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::remove_onOrderCompleted(PW.BasicGameEvents/OnOrderCompleted)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onOrderCompleted_m99980DC1CEF7B6F38F560EE79C00E476CD12DB9C (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_0 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_1 = NULL;
	OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* V_2 = NULL;
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6;
		V_0 = L_0;
	}

IL_0006:
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = V_0;
		V_1 = L_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_2 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)CastclassSealed((RuntimeObject*)L_4, OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854_il2cpp_TypeInfo_var));
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_5 = V_2;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_6 = V_1;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6), L_5, L_6);
		V_0 = L_7;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_8 = V_0;
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_8) == ((RuntimeObject*)(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::RaiseOnOrderCompleted(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnOrderCompleted_mF29A8772748E7A07BAD7505AB14A3C6E36DED2ED (int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onOrderCompleted != null)
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// onOrderCompleted.Invoke(ID,percentageSuccess);
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onOrderCompleted_6;
		int32_t L_2 = ___0_ID;
		float L_3 = ___1_percentageSuccess;
		NullCheck(L_1);
		OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline(L_1, L_2, L_3, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void PW.BasicGameEvents::add_onProductAddedToSlot(PW.BasicGameEvents/OnProductAddedToSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductAddedToSlot_m7A95E79212287B2A53D3B29354111709F581AA28 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_0 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_1 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_2 = NULL;
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = V_0;
		V_1 = L_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_2 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)CastclassSealed((RuntimeObject*)L_4, OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var));
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_5 = V_2;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_6 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7), L_5, L_6);
		V_0 = L_7;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_8 = V_0;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_8) == ((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::remove_onProductAddedToSlot(PW.BasicGameEvents/OnProductAddedToSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductAddedToSlot_m78BDF72AAC02D690B7B0201B4F5F7B1FCE26184D (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_0 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_1 = NULL;
	OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* V_2 = NULL;
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = V_0;
		V_1 = L_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_2 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)CastclassSealed((RuntimeObject*)L_4, OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381_il2cpp_TypeInfo_var));
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_5 = V_2;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_6 = V_1;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7), L_5, L_6);
		V_0 = L_7;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_8 = V_0;
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_8) == ((RuntimeObject*)(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::RaiseOnProductAddedToSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnProductAddedToSlot_m40CEC2748EF5B29A546BC9B214BAD678538D6338 (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onProductAddedToSlot != null)
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// onProductAddedToSlot.Invoke(ID);
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductAddedToSlot_7;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void PW.BasicGameEvents::add_onProductDeletedFromSlot(PW.BasicGameEvents/OnProductDeletedFromSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onProductDeletedFromSlot_mDF102E17AAC799C986D821E156521221D44C27D3 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_0 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_1 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_2 = NULL;
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = V_0;
		V_1 = L_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_2 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)CastclassSealed((RuntimeObject*)L_4, OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var));
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_5 = V_2;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_6 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8), L_5, L_6);
		V_0 = L_7;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_8 = V_0;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_8) == ((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::remove_onProductDeletedFromSlot(PW.BasicGameEvents/OnProductDeletedFromSlot)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onProductDeletedFromSlot_m089E2179B14FA531B9A7C13DE9F5686704E03917 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_0 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_1 = NULL;
	OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* V_2 = NULL;
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8;
		V_0 = L_0;
	}

IL_0006:
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = V_0;
		V_1 = L_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_2 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)CastclassSealed((RuntimeObject*)L_4, OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A_il2cpp_TypeInfo_var));
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_5 = V_2;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_6 = V_1;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8), L_5, L_6);
		V_0 = L_7;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_8 = V_0;
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_8) == ((RuntimeObject*)(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::RaiseOnProductDeletedFromSlot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseOnProductDeletedFromSlot_mEBDB08BFC5C0C000A30D764769D48B60006139DF (int32_t ___0_ID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onProductDeletedFromSlot != null)
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// onProductDeletedFromSlot.Invoke(ID);
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onProductDeletedFromSlot_8;
		int32_t L_2 = ___0_ID;
		NullCheck(L_1);
		OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void PW.BasicGameEvents::add_onPlaceHolderRequired(PW.BasicGameEvents/OnPlaceHolderRequired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_add_onPlaceHolderRequired_mAC31AE207AA792B5F6CCE028A34A70CEDFF5C235 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_0 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_1 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_2 = NULL;
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9;
		V_0 = L_0;
	}

IL_0006:
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = V_0;
		V_1 = L_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_2 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)CastclassSealed((RuntimeObject*)L_4, OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var));
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_5 = V_2;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_6 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9), L_5, L_6);
		V_0 = L_7;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_8 = V_0;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_8) == ((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::remove_onPlaceHolderRequired(PW.BasicGameEvents/OnPlaceHolderRequired)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_remove_onPlaceHolderRequired_m9452F0B44B3FCCD76CD4CB9B3B1391A5E3CF415D (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_0 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_1 = NULL;
	OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* V_2 = NULL;
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9;
		V_0 = L_0;
	}

IL_0006:
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = V_0;
		V_1 = L_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_2 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)CastclassSealed((RuntimeObject*)L_4, OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493_il2cpp_TypeInfo_var));
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_5 = V_2;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_6 = V_1;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_7;
		L_7 = InterlockedCompareExchangeImpl<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>((&((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9), L_5, L_6);
		V_0 = L_7;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_8 = V_0;
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_9 = V_1;
		if ((!(((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_8) == ((RuntimeObject*)(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void PW.BasicGameEvents::RaiseInstantiatePlaceHolder(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents_RaiseInstantiatePlaceHolder_mD21089052205D67F4985B0F8B64AFD0378781C4F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (onPlaceHolderRequired != null)
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_0 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// onPlaceHolderRequired.Invoke(parent,pos,go);
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* L_1 = ((BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_StaticFields*)il2cpp_codegen_static_fields_for(BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A_il2cpp_TypeInfo_var))->___onPlaceHolderRequired_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_parent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___2_go;
		NullCheck(L_1);
		OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline(L_1, L_2, L_3, L_4, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void PW.BasicGameEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGameEvents__ctor_m02376F6DEDAA4620349247E93549669A64DA6F26 (BasicGameEvents_tF2B783EE2D8EDFBEB4F4FE9E334727312A07389A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_Multicast(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* currentDelegate = reinterpret_cast<OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenInst(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStatic(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStaticInvoker(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ID);
}
void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_ClosedStaticInvoker(OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ID);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ID);

}
// System.Void PW.BasicGameEvents/OnOrderCancelled::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled__ctor_mF032F851C8585E69E27ED7A7850C4932B9A646B4 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_Multicast;
}
// System.Void PW.BasicGameEvents/OnOrderCancelled::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5 (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PW.BasicGameEvents/OnOrderCancelled::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOrderCancelled_BeginInvoke_mB430EDFF54E9D9C276C8E9E818539C0BDBA18B4F (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void PW.BasicGameEvents/OnOrderCancelled::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCancelled_EndInvoke_m43A17E4635CB5043A78475264EFA150960D6CEDE (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_Multicast(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* currentDelegate = reinterpret_cast<OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenInst(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, ___1_percentageSuccess, method);
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStatic(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, ___1_percentageSuccess, method);
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStaticInvoker(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ID, ___1_percentageSuccess);
}
void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_ClosedStaticInvoker(OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ID, ___1_percentageSuccess);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ID, ___1_percentageSuccess);

}
// System.Void PW.BasicGameEvents/OnOrderCompleted::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted__ctor_m03B5422CAC165D6B4737FDA68344B3B2E790EF92 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_Multicast;
}
// System.Void PW.BasicGameEvents/OnOrderCompleted::Invoke(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PW.BasicGameEvents/OnOrderCompleted::BeginInvoke(System.Int32,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOrderCompleted_BeginInvoke_m447A12F1D9E0D5D520541476B68B7C8E3F0DFA6B (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	__d_args[1] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___1_percentageSuccess);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void PW.BasicGameEvents/OnOrderCompleted::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOrderCompleted_EndInvoke_m560667A0F3D665EA0940D03FBFFA071D6340C110 (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_Multicast(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* currentDelegate = reinterpret_cast<OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenInst(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStatic(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStaticInvoker(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ID);
}
void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_ClosedStaticInvoker(OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ID);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ID);

}
// System.Void PW.BasicGameEvents/OnProductAddedToSlot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot__ctor_mFB35C4601A92249E50E1B7119D9E805F6D08699B (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_Multicast;
}
// System.Void PW.BasicGameEvents/OnProductAddedToSlot::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472 (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PW.BasicGameEvents/OnProductAddedToSlot::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProductAddedToSlot_BeginInvoke_m928D2B4C211D24036612BFE32ADCA9663C545C6B (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void PW.BasicGameEvents/OnProductAddedToSlot::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductAddedToSlot_EndInvoke_mE23636E6E4885A690FD0530F25672F3CC35033EC (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_Multicast(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* currentDelegate = reinterpret_cast<OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenInst(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStatic(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_ID, method);
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStaticInvoker(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_ID);
}
void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_ClosedStaticInvoker(OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_ID);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_ID);

}
// System.Void PW.BasicGameEvents/OnProductDeletedFromSlot::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot__ctor_mDF8370623788671109BF3E133329AF55A5F03F14 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_Multicast;
}
// System.Void PW.BasicGameEvents/OnProductDeletedFromSlot::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PW.BasicGameEvents/OnProductDeletedFromSlot::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnProductDeletedFromSlot_BeginInvoke_m69CC86787C55B32C575E54AFBC949406E14C8459 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_ID);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void PW.BasicGameEvents/OnProductDeletedFromSlot::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_EndInvoke_m397399989A72C1F973CC67A9CECA289A5AD8BDE3 (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_Multicast(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* currentDelegate = reinterpret_cast<OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInst(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_pos, ___2_go, method);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStatic(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_parent, ___1_pos, ___2_go, method);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStaticInvoker(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	InvokerActionInvoker3< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_ClosedStaticInvoker(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenVirtual(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	VirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInterface(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	InterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericVirtual(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericVirtualActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___0_parent, ___1_pos, ___2_go);
}
void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericInterface(OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method)
{
	NullCheck(___0_parent);
	GenericInterfaceActionInvoker2< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(method, ___0_parent, ___1_pos, ___2_go);
}
// System.Void PW.BasicGameEvents/OnPlaceHolderRequired::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired__ctor_mCA70F750633D199CAEBB4B9967DD416BEC2EC803 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_Multicast;
}
// System.Void PW.BasicGameEvents/OnPlaceHolderRequired::Invoke(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PW.BasicGameEvents/OnPlaceHolderRequired::BeginInvoke(UnityEngine.Transform,UnityEngine.Vector3,UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPlaceHolderRequired_BeginInvoke_mF60F811D7EB81A0AA70A814431E64B211D8F11D4 (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_parent;
	__d_args[1] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___1_pos);
	__d_args[2] = ___2_go;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void PW.BasicGameEvents/OnPlaceHolderRequired::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_EndInvoke_m75DA679C1B98A7EC86E86163B36A4AAAE1B4CA6C (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PW.SliceHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliceHelper__ctor_m545D86008EC90C178914453F94BA793B7A7FD0E3 (SliceHelper_t695F49C4F4DB1DF0317D652676704FFEC121C05B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor_Start_m349DEB469468E5A3EFB077B4D219D68BA31123C6 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseDoor::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor_OnMouseOver_m2FBD1B18AA7E1464C02B73002681BD340EC5A12D (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_opening_m3A88F6A82AAC2A74846C8BCE81DC78490FD7A120 (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* L_0 = (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496(L_0, 0, NULL);
		U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor_closing_m2AFC0C1FD7625F4E3AD981284E6E16857ECF19DD (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* L_0 = (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B(L_0, 0, NULL);
		U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor__ctor_m67478D0D4DE4F58EEF9B4B3E322E950D5A13815E (opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mCDF0A79CB5510376A1A2FD8F924BC6194D0F7496 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m25537565BBE1085EB1A607F0D2C8175A4E6AD422 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mB1C9B1D6DF1CC96B61FF8FEED8B58C317924510E (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// openandclose.Play("Opening");
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralF91D27828858E0E934FC7DADAF6886D7611EF3E8, NULL);
		// open = true;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDBE073C0BF7823C303720F0B804054C33356FF75 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m2ADFAF116A418924AA6A5F95464CA8E3126C0B1E_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m965915D3E8D1F5321F4F5938FD14AEF1EBA75936 (U3CopeningU3Ed__5_t2810B98DE432C6629BD88B5C438F0A2C95E85450* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m96DC57FE7A932BE7344E42FC98D81E1A7A9E450B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m94450355214F74315ADB59A329552C8A69B354F5 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m7CC5B7CFF89B7BE297796E7A2F35F4B1DF85B322 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// openandclose.Play("Closing");
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralDAB2EF6A513D0DA1F97A043466EEE33AC438423E, NULL);
		// open = false;
		opencloseDoor_tAA72245263A2303CDFC84B87DB88EF5EA9502815* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D21AFC66443347D46ADDC2972BC41B1B5EC1BB0 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333 (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mABF6E9F31D654229EF462C3B9C6B6A3108E16333_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m98909D7087F09121D4DCF6D278443A75A616C12B (U3CclosingU3Ed__6_t5AFACD3EF103B8731C7B4918A56FE9E7CC1BB5CA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseDoor1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1_Start_mAFB666FAC59494ACF95C237114328042C4B46F14 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1_OnMouseOver_mE19BF4DA9E2BDCEC7566B525B662C267785705D8 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_opening_m1D810DEB61DC5E0F497D98F129F2D7E6C698780B (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* L_0 = (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A(L_0, 0, NULL);
		U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseDoor1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseDoor1_closing_m508AF39CB92E6A3C670EF38A854FE66B8D294FC5 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* L_0 = (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE(L_0, 0, NULL);
		U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseDoor1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseDoor1__ctor_m3617C6EE154EBB86425D61F84ED1C85276E44465 (opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_mC92AC40C55474F732A07EB4186D06FD241EE849A (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m67AE37A63FCB34D71B9D01102444E664EC510387 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor1/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mC873FD48B125776E73DEC1F233B4EFC6C91714F1 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// openandclose1.Play("Opening 1");
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral109F5A6B52D92F2F8FF0B5B430CB41B73B99B119, NULL);
		// open = true;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6D44FECFB00308D54AB2CC1D1001AFE8C65BB498 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26 (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mC3402E24902781283F53834B88C0837CB2610D26_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor1/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m4A6FA172066BC71DAAC4C7714CB6F19C0FECA04B (U3CopeningU3Ed__5_tAA2480BC2A019A4A9077E092F4F91A3C2C12F41B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7F32E33676159DDCCA16833C58560F9DD124A1AE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m211E98CCA27EF443A78AF2185BE35CE23B64A443 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseDoor1/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m80349AAA0F5131C878CA7FA58E6DDA7F6E6CD1EE (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// openandclose1.Play("Closing 1");
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral7F3F3886383FDEDF8965C8E930CA0DE3CA08E32C, NULL);
		// open = false;
		opencloseDoor1_t64EF6EAFFF44D6CF6E12947E74D563EA00064E9C* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6C93C7C4C95774A2BB8F0EDAB991FC76705BE63C (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m1CF7C289DF87B534BA5FB5C6A4A9B0C94C797677_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseDoor1/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mE7B4B02045C067CA36A439A8EE6D453BA434F626 (U3CclosingU3Ed__6_tF2538F168B353906D17769880BF49F4EB3A37D81* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseStallDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseStallDoor_Start_m8BB7A3B646665BC7708878789D8F2195B1CA1F97 (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseStallDoor::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseStallDoor_OnMouseOver_m7EDEF666AFB27671A5F7787D62E50549E3F577B6 (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseStallDoor_opening_mC009492152B01D720D2C21358B5B1EB364CFD267(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseStallDoor_closing_m32F68FE792B67E81B075022BB0ED56A01C6D2DDF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseStallDoor::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseStallDoor_opening_mC009492152B01D720D2C21358B5B1EB364CFD267 (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* L_0 = (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m70C20308FCB83EF314AA5D67E59C5EA4C62F2F6E(L_0, 0, NULL);
		U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseStallDoor::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseStallDoor_closing_m32F68FE792B67E81B075022BB0ED56A01C6D2DDF (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* L_0 = (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_mFFB75B5BFAFDDBE20C45DDD57C3115958C7B4F76(L_0, 0, NULL);
		U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseStallDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseStallDoor__ctor_m177E60871848602F812A57DE6C0E374F20A74D8B (opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseStallDoor/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m70C20308FCB83EF314AA5D67E59C5EA4C62F2F6E (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseStallDoor/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m6DEF2CDE3987679C6A0CD52BE42634BD2E9E1C96 (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseStallDoor/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m8976018F5A1DE231260D5361C460D72824128749 (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92873158F8EA0C6A8F900B67C838305C1944365A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// openandclose.Play("OpeningStall");
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral92873158F8EA0C6A8F900B67C838305C1944365A, NULL);
		// open = true;
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseStallDoor/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C8B3020183CA34DDAC41656DCE957ABE03EE3C8 (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseStallDoor/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7591D4C7B980907DBCE7764A1B4577D912374D46 (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m7591D4C7B980907DBCE7764A1B4577D912374D46_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseStallDoor/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mF6311FE297E39480D339592A8766F3B6ABB177A2 (U3CopeningU3Ed__5_t28AC0349B0813F1F0BFAE145855EE7F365847894* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseStallDoor/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_mFFB75B5BFAFDDBE20C45DDD57C3115958C7B4F76 (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseStallDoor/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m6812C625B3F1EA4F389F2D07E0ECFD739060E45A (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseStallDoor/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mB3D67CB7AD6F3933AE3F69413E3E0B61D0CE4284 (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral959CF7126A3C168B5A25816EEFF815B55EEA20FF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// openandclose.Play("ClosingStall");
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclose_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral959CF7126A3C168B5A25816EEFF815B55EEA20FF, NULL);
		// open = false;
		opencloseStallDoor_tA14F81BF83AC1BB5EA4ADA3E1616ED3E944CECC1* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseStallDoor/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB7F469BC96C281DFE0EE1048B6958963E9CDAD12 (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseStallDoor/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m541DFE8DDD091300FC8BD444B66A68BD2183700C (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m541DFE8DDD091300FC8BD444B66A68BD2183700C_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseStallDoor/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m994BA32D3F21D7C4C1C5990367FF67FE2E72C292 (U3CclosingU3Ed__6_t7376EC9A4EC0BD0FA8264AFC57543EA30E23D238* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.Drawer_Pull_X::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X_Start_mF3043644D731DDE8F820531426E9632BE967C3C7 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X_OnMouseOver_m818AA4C15C25E4AC79336607D4B4798DC6946D01 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 10)
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// print("object name");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687, NULL);
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_0057:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_opening_m0879ADF27877BE167FAA597539B2BE51ECEAE48C (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* L_0 = (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84(L_0, 0, NULL);
		U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_X::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_X_closing_m1C1FAF2F11F44618EC24E1024DB7FEA352615095 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* L_0 = (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16(L_0, 0, NULL);
		U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.Drawer_Pull_X::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_X__ctor_mF607B4A1F1E12DDCB5E233DE1142C495F42A7AA1 (Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m4C85BD4C1EBDC9109D9D777B251A474B393C0F84 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mA0EFA7409A06DBF4D93E734DB9D8637225D07935 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_X/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m8A5D07E697B5A1D84A9037BC22D52BD22AFB5C39 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// pull_01.Play("openpull_01");
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_01_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralFB6A7C80E1017EC35DBFE2CF7268C25730B94A7F, NULL);
		// open = true;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAB8710A7F23969A9BF9B1D75F63DB16702799A5A (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13 (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mFFFAFF2555FC8785260F4E6430EF6BA4B08B8D13_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m4CB6C7B2E2B41B84B7E3793EF5881515890857DC (U3CopeningU3Ed__5_t9CB37EB847D5382D2456233C250F7F8172FA370F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m063A0DBFF58FE57440316F5E1D215FD9CCF14D16 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m1C84E01B0523CE46845557788CB8CC3B6191743D (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_X/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_m6B37AABC2159D233231F0E4245D9203C38CA077A (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// pull_01.Play("closepush_01");
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_01_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral8DB46F804A221B05881E2D7D919F77DB08A24B32, NULL);
		// open = false;
		Drawer_Pull_X_t6EF16AB776C1B7532B8D11AD10C57226468BE2B2* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m394695C55D02DCF1208D7AC71FF607F604B3BFD0 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_m0DAFF4556E1EE512D96E1AFB2A60F4B9308EF53D_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_X/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m58401076106CACE9D5F1B27AD8CBD69B6137AA23 (U3CclosingU3Ed__6_t0A258D7C1F772ABB5AB94539D159D65DEC4A86C2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.Drawer_Pull_Z::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z_Start_mA6C0EAE04DBDB6E34800E414FF0F7C10D440A3A3 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z_OnMouseOver_m3BF1C8EA19E57ABA59523128557C2AC77C0B89B1 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0074;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 10)
		if ((!(((float)L_6) < ((float)(10.0f)))))
		{
			goto IL_0074;
		}
	}
	{
		// print("object name");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralF3A75D921A32532B9A0A2F8A4018127ABD2C0687, NULL);
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_0057;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_0057:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_0074;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_opening_m04374C1EE8736ED27E0666AC852A5573547AF8B0 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* L_0 = (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE(L_0, 0, NULL);
		U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.Drawer_Pull_Z::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Drawer_Pull_Z_closing_mD2B8593C2497D480C5B61373D12FC70C0635A4F2 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* L_0 = (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A(L_0, 0, NULL);
		U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Drawer_Pull_Z__ctor_m02FB80A25F100FB3C0C4103F929547A990E84CA8 (Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m824B17F8CD1ADB27AFECB99A9D405F4E631C89BE (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_mB18EB3444E1488B0C61E0107EEFAD22BAE2C57EA (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Z/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m480DE56B34EB87E0FD1D9EC6BAE797E4F426C273 (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral22C446C7E5E3265EDDBA27BFE391935857CD98BE, NULL);
		// pull.Play("openpull");
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralCEC6EACB0EC6BEF0C62E54C19D8F90E01DE0C908, NULL);
		// open = true;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m807A6AC6DD3C8E95D8FBAD329E9358A5487BFE6E (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20 (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m92F3A640FB35F9CAE67200AC68BCAC34178F3D20_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_mBB801F09FCD6A3BF46D511ABA6FED06E2733784F (U3CopeningU3Ed__5_t80AAF1C1F38375FCA3AFF7417F840CF12A64C7AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m33301F56B392CBB60438C6241C9D16BE17C87B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m6AD9244B8BBD3E5639D7121BC36C805E13C46680 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.Drawer_Pull_Z/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mFC0B84DCE0CDC1CA224BDAD2913054A8BAD6A494 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the door");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral28ED81CF5AD6FE392326D7F88BC350380E97CAC5, NULL);
		// pull.Play("closepush");
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___pull_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral23BC23743CA78CCF7AA374847689BBDC815DD7B2, NULL);
		// open = false;
		Drawer_Pull_Z_t67A22F1C2582D525BF6BAFAAA3FE352827B0A542* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF50C3E517FC06BFA8B0459464D55B7C6F7D7C423 (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mA9A68B4C592F955D54C7C21457234107AE6B9B5A_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.Drawer_Pull_Z/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mB44A3B97720ACEEAE3C8964CB14240DB60728FDA (U3CclosingU3Ed__6_t02B44885F276B1D4EDC280EE331AB247A05D3B9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_mAED465021CC67B5CA5918EE9849F646078CE0DFC (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m507B72FBDDEDBA9B71068C583A0BEF25613EE5EE (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseXSensitivity * Time.deltaTime;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_1 = __this->___mouseXSensitivity_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseXSensitivity * Time.deltaTime;
		float L_3;
		L_3 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_4 = __this->___mouseXSensitivity_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_3, L_4)), L_5));
		// xRotation -= mouseY;
		float L_6 = __this->___xRotation_6;
		float L_7 = V_1;
		__this->___xRotation_6 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_8 = __this->___xRotation_6;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_8, (-90.0f), (90.0f), NULL);
		__this->___xRotation_6 = L_9;
		// transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_11 = __this->___xRotation_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_11, (0.0f), (0.0f), NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_12, NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___playerBody_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_13, L_16, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mE4D9E506B0A6A47171F0458801A624CD97109A52 (MouseLook_tC23F7E839420EA476CD0FD1194A98C3304860D16* __this, const RuntimeMethod* method) 
{
	{
		// public float mouseXSensitivity = 100f;
		__this->___mouseXSensitivity_4 = (100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mD9D3F70D4433B230EF6027FE013AAF00A46FECE7 (PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float x = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float z = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_2, NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_6, NULL);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_9, NULL);
		V_2 = L_10;
		// controller.Move(move * speed * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		float L_13 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_11);
		int32_t L_17;
		L_17 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_11, L_16, NULL);
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&__this->___velocity_7);
		float* L_19 = (&L_18->___y_3);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22 = __this->___gravity_6;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, ((float)il2cpp_codegen_multiply(L_22, L_23))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_24 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___velocity_7;
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_24);
		int32_t L_28;
		L_28 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_24, L_27, NULL);
		// }
		return;
	}
}
// System.Void SojaExiles.PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mC4896AC8FE448922AEAB330410FD5A274CA773C7 (PlayerMovement_tDE6A0E9E0CC3347F30021417F6ED4FA6A533734D* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f;
		__this->___speed_5 = (5.0f);
		// public float gravity = -15f;
		__this->___gravity_6 = (-15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.SceneSwitchGen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen_Start_mF3DEFB1E92605C73566A7A6E9EDD6A4C41EEAA9F (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SojaExiles.SceneSwitchGen::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen_Update_m282E48D9A535163007A59B926BB85B88B65CAAE1 (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Alpha1))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)49), NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// SceneManager.LoadScene("Structure_01");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral47FAEBE5EC379397CF8B55738A695B6AC8818808, NULL);
	}

IL_0013:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha2))
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)50), NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SceneManager.LoadScene("Structure_02");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral0561A578F08EC273CC9F9E211D782DC093FD62B1, NULL);
	}

IL_0026:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha3))
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)51), NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// SceneManager.LoadScene("Structure_03");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral892592B1C2CE8A81762451C62622E4CD5FEA587B, NULL);
	}

IL_0039:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha4))
		bool L_3;
		L_3 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)52), NULL);
		if (!L_3)
		{
			goto IL_004c;
		}
	}
	{
		// SceneManager.LoadScene("Structure_04");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral4847371B759FDF692A434C86CB9CFEE40508E781, NULL);
	}

IL_004c:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha5))
		bool L_4;
		L_4 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)53), NULL);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		// SceneManager.LoadScene("Structure_05");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralB121005DC90DD3C413CC8D629A257458F59C6CB0, NULL);
	}

IL_005f:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha6))
		bool L_5;
		L_5 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)54), NULL);
		if (!L_5)
		{
			goto IL_0072;
		}
	}
	{
		// SceneManager.LoadScene("Structure_06");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteralC2AB32CC9B83B9D140DB6263F664E20DF3DB0082, NULL);
	}

IL_0072:
	{
		// if (Input.GetKeyDown(KeyCode.Alpha7))
		bool L_6;
		L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)55), NULL);
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// SceneManager.LoadScene("Props Furniture Showcase");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral6F3D9BE4D9B1B08BF5AFE1CA9BCD257AF0EA166D, NULL);
	}

IL_0085:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_7;
		L_7 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_7)
		{
			goto IL_0093;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0093:
	{
		// }
		return;
	}
}
// System.Void SojaExiles.SceneSwitchGen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneSwitchGen__ctor_m01A00DF094F9009CD95A838E9D3D897D604D7E32 (SceneSwitchGen_tA7C5751FB40D835ECBBC648C7DCF329367578B6D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseWindow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow_Start_mE0041090CAF590E34DBF3039E7A5706C593E3B1D (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseWindow::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow_OnMouseOver_m2A473179FC1A28651D1B69752C8EFD295DDD749E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_opening_m09B5901E2E515EC387DA7FAF3F28D3D839CC408A (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* L_0 = (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409(L_0, 0, NULL);
		U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow_closing_mD4F8D977E411902A11F26EC5544D0EAB0C89531E (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* L_0 = (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F(L_0, 0, NULL);
		U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow__ctor_m6E91630386003EC29946265DE4D4E571538589D8 (opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseWindow/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m6AD388059C7731018ACD71A794B9DC43E5CDC409 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m09A131D0BE1464D78C6C35D6C419769DA9E898C0 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_m1820D887C42B22E549AF0439C06C0D75F2FC21A1 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow.Play("Openingwindow");
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralD5F4565D879A5EE081D0C86E94468CA47F45179F, NULL);
		// open = true;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6569F0A91C04390ED72BF318D792A1EB757CB2F5 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_mEF1E94F83DA516ECFD272ADF2276CA0924A4954D_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m11A20B22C0BB3B4645DDBC20440158139FDF3953 (U3CopeningU3Ed__5_tA1F4D2478CC61970B403F5D210B27AF360BA4F11* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseWindow/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m93C7D4E9A1D08BBF2843D92401E99E6AB836C89F (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_m92E86AD6BE64671523FEA6C85C4AA75DC7A496F5 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mA48FA813DA2D55C43E505A7809DADD3A0A2C58C5 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow.Play("Closingwindow");
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral437D4B096877A1450EC9D7A7C4C35431EA2B2FC8, NULL);
		// open = false;
		opencloseWindow_t0B7B93F4A3675CE48DC578137E0973CD84D5736F* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7A03D9EE0273C34A7ABA1314DED3682BB0D27A61 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mD30975A8C4205DEFD6B3E90F6E3323714AA8D615_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_m514F4211197478BAF907812E5CACBD4FB83085E7 (U3CclosingU3Ed__6_t7A0C0CDD11AD8C2DA56544813AF88C3A39E33CCD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseWindow1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1_Start_m2418A549F71923514DE00ACEF62A64AADC30D22C (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	{
		// open = false;
		__this->___open_5 = (bool)0;
		// }
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1_OnMouseOver_mC1DC9DA7F674AD3FA92AA49F028D05FD99BEA041 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Player)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// float dist = Vector3.Distance(Player.position, transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Player_6;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6;
		L_6 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_3, L_5, NULL);
		// if (dist < 15)
		if ((!(((float)L_6) < ((float)(15.0f)))))
		{
			goto IL_006a;
		}
	}
	{
		// if (open == false)
		bool L_7 = __this->___open_5;
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_8;
		L_8 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(opening());
		RuntimeObject* L_9;
		L_9 = opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
		return;
	}

IL_004d:
	{
		// if (open == true)
		bool L_11 = __this->___open_5;
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_12)
		{
			goto IL_006a;
		}
	}
	{
		// StartCoroutine(closing());
		RuntimeObject* L_13;
		L_13 = opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::opening()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_opening_m3A409887BE45E31A4F4778BFB781D2BA33A0E3A3 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* L_0 = (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04*)il2cpp_codegen_object_new(U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316(L_0, 0, NULL);
		U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator SojaExiles.opencloseWindow1::closing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencloseWindow1_closing_m5D7A2FCD93A4B4B81E7F86C943570F8ABA40205E (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* L_0 = (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614*)il2cpp_codegen_object_new(U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B(L_0, 0, NULL);
		U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SojaExiles.opencloseWindow1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencloseWindow1__ctor_m9C7C1028A7A8ED4B59AE6A57D178550500ECA941 (opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5__ctor_m467901284533702DBAB445C2634BD9C099777316 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_IDisposable_Dispose_m74CC1ADDDCF854ABC5AC7F13F50E379F4E5E8B85 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow1/<opening>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CopeningU3Ed__5_MoveNext_mC64117C143618A9F2A35D3A610856CCE23CD577A (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are opening the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral2C77DF174D758CF558C6CC300CB509AD9B27AD58, NULL);
		// openandclosewindow1.Play("Openingwindow 1");
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteral59EFA2332155424C07015805E9D5F807DD21B3E1, NULL);
		// open = true;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)1;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6BF49B13B3AEA89BDE8C06A39C64F52CDDA6770B (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CopeningU3Ed__5_System_Collections_IEnumerator_Reset_m012A9CBE69059A1EE21B0EB45D3CB59675CC4A0E_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow1/<opening>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CopeningU3Ed__5_System_Collections_IEnumerator_get_Current_m7DE53FEB321C4930699C6DD1990874E90E1CDA82 (U3CopeningU3Ed__5_t88CE2BBAD12959DC2145E144FD4978F63E539E04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6__ctor_m7EA2A71415F1399115F925A87AD229B03DFB793B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_IDisposable_Dispose_mA150505CC489CBB502B17F9CEB21F8A897E5CBCF (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SojaExiles.opencloseWindow1/<closing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CclosingU3Ed__6_MoveNext_mACB071C14C84D164C29F58BE7FD6789C1B97F121 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// print("you are closing the Window");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteral9EA7FA3E82B407E3083259451D6608D8247A3C5F, NULL);
		// openandclosewindow1.Play("Closingwindow 1");
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_4 = V_1;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = L_4->___openandclosewindow1_4;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, _stringLiteralA860EF323F0B7701FB8C8E4116345741D4FFA0D7, NULL);
		// open = false;
		opencloseWindow1_tD18288FF5E0C1FE0747490D0F65950FABA8ACB12* L_6 = V_1;
		NullCheck(L_6);
		L_6->___open_5 = (bool)0;
		// yield return new WaitForSeconds(.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF6C14E666284433C92F65A2C95BEE6F290A1E21B (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CclosingU3Ed__6_System_Collections_IEnumerator_Reset_mCD5D6F2064E4B2D85B86CF138AE68EE891962390_RuntimeMethod_var)));
	}
}
// System.Object SojaExiles.opencloseWindow1/<closing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CclosingU3Ed__6_System_Collections_IEnumerator_get_Current_mC74E615B67D4D11BA760CC1EAAE1AEB52294A908 (U3CclosingU3Ed__6_tF0C084DECCB87CE511E9B96E9262592615C19614* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Shadow_get_effectColor_m6E7751BB8792C85BE9DAD0D133D787317D9CF59B_inline (Shadow_tCAA59FE9D6B0DC6DCC505E8E22D8D3C05BE6DE95* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_EffectColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_EffectColor_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCancelled_Invoke_m155453EE081E04ECDCE766A95CEF163771D348F5_inline (OnOrderCancelled_t2E913C055B0B9B69F1529DF076D33EF0ABA814C3* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOrderCompleted_Invoke_m551F4DC241C943D63B3F16E19C2C680A360E03D0_inline (OnOrderCompleted_t32F2E47CDFE18D499A2E2C5869C847C5D96FE854* __this, int32_t ___0_ID, float ___1_percentageSuccess, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, ___1_percentageSuccess, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductAddedToSlot_Invoke_m0CA5576864E5B068069E25567E4320468CC5F472_inline (OnProductAddedToSlot_t6E89D675BEB0512A325DA0C8E7F4707F9A50C381* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnProductDeletedFromSlot_Invoke_m5317593E62E4633443A46CC41E48149BEE9EC62C_inline (OnProductDeletedFromSlot_t62F10DC6573C41AAF6971911C3091126E76E7F1A* __this, int32_t ___0_ID, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_ID, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnPlaceHolderRequired_Invoke_m01376F4744A488C163BDF3E915726C4B0C47388B_inline (OnPlaceHolderRequired_tF15B3DFBCD3CD6F1267B73BA3681F8E15D857493* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_pos, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___2_go, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_parent, ___1_pos, ___2_go, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
