#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_tA1998BD309D36A531FCABB9A6BE08237AEB22560;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A;
// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<NodeObject>
struct List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F;
// System.Collections.Generic.Queue`1<NodeObject>
struct Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.List`1<System.Int32>[]
struct List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// NodeObject[]
struct NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BFS
struct BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34;
// BFS2
struct BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// FoodRenderer
struct FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10;
// GBFS
struct GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744;
// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191;
// GameHandler
struct GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t95FF063A5295003D96C3C680EDF773DDF830DBF9;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961;
// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuToLevel
struct MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NodeObject
struct NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E;
// NodeType
struct NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8;
// QuitGame
struct QuitGame_t80B704BD0C5444093731B42317E6BD1D82361C53;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreWindow
struct ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A;
// System.Security.SecureString
struct SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// SnakeBodyDirection
struct SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323;
// SnakeHeadDirection
struct SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6;
// SnakeTailDirection
struct SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F;
// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// StartSnakeRenderer
struct StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.IO.StreamWriter
struct StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UserInfo
struct UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// WallRenderer
struct WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// Loader/<AsyncLoad>d__3
struct U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86;
IL2CPP_EXTERN_C String_t* _stringLiteral283E7529944E78CD50A766736A02EA0D371DF92C;
IL2CPP_EXTERN_C String_t* _stringLiteral34968043B7D239162598508E2E369507008583B5;
IL2CPP_EXTERN_C String_t* _stringLiteral38105FACFE518ABF757DC81C89B1183C903DE691;
IL2CPP_EXTERN_C String_t* _stringLiteral3855FE6159234F581329E16AD867120557C5464B;
IL2CPP_EXTERN_C String_t* _stringLiteral43B2C2308FB41B3D1DE4E2B86D95F5D6796B8E12;
IL2CPP_EXTERN_C String_t* _stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C;
IL2CPP_EXTERN_C String_t* _stringLiteral50CD88A8260F8C6C8564FB1F440B7667AB887031;
IL2CPP_EXTERN_C String_t* _stringLiteral512008258C3C756F6AA5B0D211FE1D72F6061C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral54C840D36AD067A9EA2BE5297A2A17E2834F7DF1;
IL2CPP_EXTERN_C String_t* _stringLiteral56594ADEFA3D18D2C78FB5F3C52FC8916C29EB9F;
IL2CPP_EXTERN_C String_t* _stringLiteral5ADDE0621EE965EAC99A864663B536E288B7AC53;
IL2CPP_EXTERN_C String_t* _stringLiteral5C216BFE9A9BB53AA96337DC2E2CAB852C7AF212;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF5A10192986D361CCC871536ECD9A7618299DE;
IL2CPP_EXTERN_C String_t* _stringLiteral65C90630B231041FE7B4E57ABD65B5DE0C354E67;
IL2CPP_EXTERN_C String_t* _stringLiteral6D1A6B4B55F80855A51E53BD7F7F6A6243B91DE5;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral79B82D9E142F5569AB7130B9BD336892C18E3DB4;
IL2CPP_EXTERN_C String_t* _stringLiteral810633021F0DC0F0DC98A2F0D4AB3C0BB14EA096;
IL2CPP_EXTERN_C String_t* _stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D;
IL2CPP_EXTERN_C String_t* _stringLiteral89E58F0CFC840E37BFC058BF03B25E48E88F8C03;
IL2CPP_EXTERN_C String_t* _stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861;
IL2CPP_EXTERN_C String_t* _stringLiteral9134E651013CB96FAB8C95E68F3B9C73721CA87E;
IL2CPP_EXTERN_C String_t* _stringLiteral93CA85788408DC959977CDF46B88B3416689112A;
IL2CPP_EXTERN_C String_t* _stringLiteral9D4C280F3A4ECFCFD1D55DE838404FF94DF074FB;
IL2CPP_EXTERN_C String_t* _stringLiteral9E6B7641264D2BD8546CB5510337A662E05607FF;
IL2CPP_EXTERN_C String_t* _stringLiteralA345CE3068B710C57CB80BDA753ACFEE12A90D6C;
IL2CPP_EXTERN_C String_t* _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7A6CE5F0807A612D9F35270247E47F709FAE1BD;
IL2CPP_EXTERN_C String_t* _stringLiteralB0D794076E65681A7ECD1C294541B966D5EBB7A6;
IL2CPP_EXTERN_C String_t* _stringLiteralB890FAF03B988E225E071FEA3A9306E0F4D45E58;
IL2CPP_EXTERN_C String_t* _stringLiteralC67B883FAF8EB8F4E455388BDFC7E2CBB78690E6;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C String_t* _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0DFA047D69884FE56F5169A1AD8DDAE5428970;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB83266916F25981EAF31B685F0939B2688C774A;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_m5183CC7C9C06B65F269EF77B062B89C2B1232F97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mA88253875B32BF67D9E653F28D441E2226CC47AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2998F2DB9EDF3DF6F580F7E4C2A77EDFF1D00BCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m3E59DD720B791615E831DA0746ACEF3C7B0A84FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_mCF871CE263296FD47D40887D07168C47674BD0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m67583A6683BBD4EA3B86E17A672F78BFA690B60A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m43D13796D624C614140D9E1C89CCA71088BE52D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m559ACFA7A22AED554F2913619728C27A59CDFFB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mFA419B212A3BA0A339239EF76F8C2356EECB2773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mE4F481DE6615C3D6B33426930F4CD8F29E6FF227_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mC43AB16D28B79632192F43BD637B1301047A6555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6F08888F973B5A373D12B1F58C80057D92161D80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m60253A590E0CE55FF9E382E64C3B686F5C89873B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAsyncLoadU3Ed__3_System_Collections_IEnumerator_Reset_m481F7EE03ADDA260BB90A659A26F2CB15BF7586A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>
struct List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A, ____items_1)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get__items_1() const { return ____items_1; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_StaticFields, ____emptyArray_5)); }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(List_1U5BU5D_tABF499D891C900D1171501E0545AD96030B3877C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.AudioSource>
struct List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B, ____items_1)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get__items_1() const { return ____items_1; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B_StaticFields, ____emptyArray_5)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<NodeObject>
struct List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98, ____items_1)); }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* get__items_1() const { return ____items_1; }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98_StaticFields, ____emptyArray_5)); }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____items_1)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get__items_1() const { return ____items_1; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_StaticFields, ____emptyArray_5)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<NodeObject>
struct Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____array_0)); }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* get__array_0() const { return ____array_0; }
	inline NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(NodeObjectU5BU5D_t798B677E0E66D6E514A1D2576418D6EBE6768204* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// BFS
struct BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34  : public RuntimeObject
{
public:
	// System.Int32 BFS::WIDTH
	int32_t ___WIDTH_0;
	// System.Int32 BFS::HEIGHT
	int32_t ___HEIGHT_1;
	// System.Int32 BFS::moveCount
	int32_t ___moveCount_2;
	// System.Int32 BFS::nodesLeftInLayer
	int32_t ___nodesLeftInLayer_3;
	// System.Int32 BFS::nodesInNextLayer
	int32_t ___nodesInNextLayer_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> BFS::visited
	List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___visited_5;
	// System.Int32[] BFS::rowDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___rowDirection_6;
	// System.Int32[] BFS::colDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___colDirection_7;
	// System.Collections.Generic.Queue`1<System.Int32> BFS::rowQueue
	Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * ___rowQueue_8;
	// System.Collections.Generic.Queue`1<System.Int32> BFS::colQueue
	Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * ___colQueue_9;

public:
	inline static int32_t get_offset_of_WIDTH_0() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___WIDTH_0)); }
	inline int32_t get_WIDTH_0() const { return ___WIDTH_0; }
	inline int32_t* get_address_of_WIDTH_0() { return &___WIDTH_0; }
	inline void set_WIDTH_0(int32_t value)
	{
		___WIDTH_0 = value;
	}

	inline static int32_t get_offset_of_HEIGHT_1() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___HEIGHT_1)); }
	inline int32_t get_HEIGHT_1() const { return ___HEIGHT_1; }
	inline int32_t* get_address_of_HEIGHT_1() { return &___HEIGHT_1; }
	inline void set_HEIGHT_1(int32_t value)
	{
		___HEIGHT_1 = value;
	}

	inline static int32_t get_offset_of_moveCount_2() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___moveCount_2)); }
	inline int32_t get_moveCount_2() const { return ___moveCount_2; }
	inline int32_t* get_address_of_moveCount_2() { return &___moveCount_2; }
	inline void set_moveCount_2(int32_t value)
	{
		___moveCount_2 = value;
	}

	inline static int32_t get_offset_of_nodesLeftInLayer_3() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___nodesLeftInLayer_3)); }
	inline int32_t get_nodesLeftInLayer_3() const { return ___nodesLeftInLayer_3; }
	inline int32_t* get_address_of_nodesLeftInLayer_3() { return &___nodesLeftInLayer_3; }
	inline void set_nodesLeftInLayer_3(int32_t value)
	{
		___nodesLeftInLayer_3 = value;
	}

	inline static int32_t get_offset_of_nodesInNextLayer_4() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___nodesInNextLayer_4)); }
	inline int32_t get_nodesInNextLayer_4() const { return ___nodesInNextLayer_4; }
	inline int32_t* get_address_of_nodesInNextLayer_4() { return &___nodesInNextLayer_4; }
	inline void set_nodesInNextLayer_4(int32_t value)
	{
		___nodesInNextLayer_4 = value;
	}

	inline static int32_t get_offset_of_visited_5() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___visited_5)); }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * get_visited_5() const { return ___visited_5; }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A ** get_address_of_visited_5() { return &___visited_5; }
	inline void set_visited_5(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * value)
	{
		___visited_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visited_5), (void*)value);
	}

	inline static int32_t get_offset_of_rowDirection_6() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___rowDirection_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_rowDirection_6() const { return ___rowDirection_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_rowDirection_6() { return &___rowDirection_6; }
	inline void set_rowDirection_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___rowDirection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowDirection_6), (void*)value);
	}

	inline static int32_t get_offset_of_colDirection_7() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___colDirection_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_colDirection_7() const { return ___colDirection_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_colDirection_7() { return &___colDirection_7; }
	inline void set_colDirection_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___colDirection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colDirection_7), (void*)value);
	}

	inline static int32_t get_offset_of_rowQueue_8() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___rowQueue_8)); }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * get_rowQueue_8() const { return ___rowQueue_8; }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F ** get_address_of_rowQueue_8() { return &___rowQueue_8; }
	inline void set_rowQueue_8(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * value)
	{
		___rowQueue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowQueue_8), (void*)value);
	}

	inline static int32_t get_offset_of_colQueue_9() { return static_cast<int32_t>(offsetof(BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34, ___colQueue_9)); }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * get_colQueue_9() const { return ___colQueue_9; }
	inline Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F ** get_address_of_colQueue_9() { return &___colQueue_9; }
	inline void set_colQueue_9(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * value)
	{
		___colQueue_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colQueue_9), (void*)value);
	}
};


// BFS2
struct BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63  : public RuntimeObject
{
public:
	// System.Int32 BFS2::WIDTH
	int32_t ___WIDTH_0;
	// System.Int32 BFS2::HEIGHT
	int32_t ___HEIGHT_1;
	// System.Int32 BFS2::moveCount
	int32_t ___moveCount_2;
	// System.Int32 BFS2::nodesLeftInLayer
	int32_t ___nodesLeftInLayer_3;
	// System.Int32 BFS2::nodesInNextLayer
	int32_t ___nodesInNextLayer_4;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> BFS2::visited
	List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___visited_5;
	// System.Int32[] BFS2::rowDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___rowDirection_6;
	// System.Int32[] BFS2::colDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___colDirection_7;
	// System.Collections.Generic.Queue`1<NodeObject> BFS2::queue
	Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * ___queue_8;

public:
	inline static int32_t get_offset_of_WIDTH_0() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___WIDTH_0)); }
	inline int32_t get_WIDTH_0() const { return ___WIDTH_0; }
	inline int32_t* get_address_of_WIDTH_0() { return &___WIDTH_0; }
	inline void set_WIDTH_0(int32_t value)
	{
		___WIDTH_0 = value;
	}

	inline static int32_t get_offset_of_HEIGHT_1() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___HEIGHT_1)); }
	inline int32_t get_HEIGHT_1() const { return ___HEIGHT_1; }
	inline int32_t* get_address_of_HEIGHT_1() { return &___HEIGHT_1; }
	inline void set_HEIGHT_1(int32_t value)
	{
		___HEIGHT_1 = value;
	}

	inline static int32_t get_offset_of_moveCount_2() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___moveCount_2)); }
	inline int32_t get_moveCount_2() const { return ___moveCount_2; }
	inline int32_t* get_address_of_moveCount_2() { return &___moveCount_2; }
	inline void set_moveCount_2(int32_t value)
	{
		___moveCount_2 = value;
	}

	inline static int32_t get_offset_of_nodesLeftInLayer_3() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___nodesLeftInLayer_3)); }
	inline int32_t get_nodesLeftInLayer_3() const { return ___nodesLeftInLayer_3; }
	inline int32_t* get_address_of_nodesLeftInLayer_3() { return &___nodesLeftInLayer_3; }
	inline void set_nodesLeftInLayer_3(int32_t value)
	{
		___nodesLeftInLayer_3 = value;
	}

	inline static int32_t get_offset_of_nodesInNextLayer_4() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___nodesInNextLayer_4)); }
	inline int32_t get_nodesInNextLayer_4() const { return ___nodesInNextLayer_4; }
	inline int32_t* get_address_of_nodesInNextLayer_4() { return &___nodesInNextLayer_4; }
	inline void set_nodesInNextLayer_4(int32_t value)
	{
		___nodesInNextLayer_4 = value;
	}

	inline static int32_t get_offset_of_visited_5() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___visited_5)); }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * get_visited_5() const { return ___visited_5; }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A ** get_address_of_visited_5() { return &___visited_5; }
	inline void set_visited_5(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * value)
	{
		___visited_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visited_5), (void*)value);
	}

	inline static int32_t get_offset_of_rowDirection_6() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___rowDirection_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_rowDirection_6() const { return ___rowDirection_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_rowDirection_6() { return &___rowDirection_6; }
	inline void set_rowDirection_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___rowDirection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowDirection_6), (void*)value);
	}

	inline static int32_t get_offset_of_colDirection_7() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___colDirection_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_colDirection_7() const { return ___colDirection_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_colDirection_7() { return &___colDirection_7; }
	inline void set_colDirection_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___colDirection_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colDirection_7), (void*)value);
	}

	inline static int32_t get_offset_of_queue_8() { return static_cast<int32_t>(offsetof(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63, ___queue_8)); }
	inline Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * get_queue_8() const { return ___queue_8; }
	inline Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 ** get_address_of_queue_8() { return &___queue_8; }
	inline void set_queue_8(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * value)
	{
		___queue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_8), (void*)value);
	}
};


// GBFS
struct GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744  : public RuntimeObject
{
public:
	// System.Int32 GBFS::WIDTH
	int32_t ___WIDTH_0;
	// System.Int32 GBFS::HEIGHT
	int32_t ___HEIGHT_1;
	// System.Int32 GBFS::nodesLeftInLayer
	int32_t ___nodesLeftInLayer_2;
	// System.Int32 GBFS::nodesInNextLayer
	int32_t ___nodesInNextLayer_3;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> GBFS::visited
	List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___visited_4;
	// System.Int32[] GBFS::rowDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___rowDirection_5;
	// System.Int32[] GBFS::colDirection
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___colDirection_6;
	// System.Collections.Generic.List`1<NodeObject> GBFS::queue
	List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * ___queue_7;

public:
	inline static int32_t get_offset_of_WIDTH_0() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___WIDTH_0)); }
	inline int32_t get_WIDTH_0() const { return ___WIDTH_0; }
	inline int32_t* get_address_of_WIDTH_0() { return &___WIDTH_0; }
	inline void set_WIDTH_0(int32_t value)
	{
		___WIDTH_0 = value;
	}

	inline static int32_t get_offset_of_HEIGHT_1() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___HEIGHT_1)); }
	inline int32_t get_HEIGHT_1() const { return ___HEIGHT_1; }
	inline int32_t* get_address_of_HEIGHT_1() { return &___HEIGHT_1; }
	inline void set_HEIGHT_1(int32_t value)
	{
		___HEIGHT_1 = value;
	}

	inline static int32_t get_offset_of_nodesLeftInLayer_2() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___nodesLeftInLayer_2)); }
	inline int32_t get_nodesLeftInLayer_2() const { return ___nodesLeftInLayer_2; }
	inline int32_t* get_address_of_nodesLeftInLayer_2() { return &___nodesLeftInLayer_2; }
	inline void set_nodesLeftInLayer_2(int32_t value)
	{
		___nodesLeftInLayer_2 = value;
	}

	inline static int32_t get_offset_of_nodesInNextLayer_3() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___nodesInNextLayer_3)); }
	inline int32_t get_nodesInNextLayer_3() const { return ___nodesInNextLayer_3; }
	inline int32_t* get_address_of_nodesInNextLayer_3() { return &___nodesInNextLayer_3; }
	inline void set_nodesInNextLayer_3(int32_t value)
	{
		___nodesInNextLayer_3 = value;
	}

	inline static int32_t get_offset_of_visited_4() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___visited_4)); }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * get_visited_4() const { return ___visited_4; }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A ** get_address_of_visited_4() { return &___visited_4; }
	inline void set_visited_4(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * value)
	{
		___visited_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___visited_4), (void*)value);
	}

	inline static int32_t get_offset_of_rowDirection_5() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___rowDirection_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_rowDirection_5() const { return ___rowDirection_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_rowDirection_5() { return &___rowDirection_5; }
	inline void set_rowDirection_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___rowDirection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rowDirection_5), (void*)value);
	}

	inline static int32_t get_offset_of_colDirection_6() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___colDirection_6)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_colDirection_6() const { return ___colDirection_6; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_colDirection_6() { return &___colDirection_6; }
	inline void set_colDirection_6(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___colDirection_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colDirection_6), (void*)value);
	}

	inline static int32_t get_offset_of_queue_7() { return static_cast<int32_t>(offsetof(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744, ___queue_7)); }
	inline List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * get_queue_7() const { return ___queue_7; }
	inline List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 ** get_address_of_queue_7() { return &___queue_7; }
	inline void set_queue_7(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * value)
	{
		___queue_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_7), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NodeObject
struct NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E  : public RuntimeObject
{
public:
	// System.Single NodeObject::value
	float ___value_0;
	// System.Int32 NodeObject::row
	int32_t ___row_1;
	// System.Int32 NodeObject::col
	int32_t ___col_2;
	// NodeObject NodeObject::parent
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___parent_3;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E, ___value_0)); }
	inline float get_value_0() const { return ___value_0; }
	inline float* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(float value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_row_1() { return static_cast<int32_t>(offsetof(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E, ___row_1)); }
	inline int32_t get_row_1() const { return ___row_1; }
	inline int32_t* get_address_of_row_1() { return &___row_1; }
	inline void set_row_1(int32_t value)
	{
		___row_1 = value;
	}

	inline static int32_t get_offset_of_col_2() { return static_cast<int32_t>(offsetof(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E, ___col_2)); }
	inline int32_t get_col_2() const { return ___col_2; }
	inline int32_t* get_address_of_col_2() { return &___col_2; }
	inline void set_col_2(int32_t value)
	{
		___col_2 = value;
	}

	inline static int32_t get_offset_of_parent_3() { return static_cast<int32_t>(offsetof(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E, ___parent_3)); }
	inline NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * get_parent_3() const { return ___parent_3; }
	inline NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E ** get_address_of_parent_3() { return &___parent_3; }
	inline void set_parent_3(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * value)
	{
		___parent_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_3), (void*)value);
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Loader/<AsyncLoad>d__3
struct U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28  : public RuntimeObject
{
public:
	// System.Int32 Loader/<AsyncLoad>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Loader/<AsyncLoad>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 Loader/<AsyncLoad>d__3::sceneBuildIndex
	int32_t ___sceneBuildIndex_2;
	// Loader Loader/<AsyncLoad>d__3::<>4__this
	Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation Loader/<AsyncLoad>d__3::<operation>5__2
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___U3CoperationU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneBuildIndex_2() { return static_cast<int32_t>(offsetof(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28, ___sceneBuildIndex_2)); }
	inline int32_t get_sceneBuildIndex_2() const { return ___sceneBuildIndex_2; }
	inline int32_t* get_address_of_sceneBuildIndex_2() { return &___sceneBuildIndex_2; }
	inline void set_sceneBuildIndex_2(int32_t value)
	{
		___sceneBuildIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28, ___U3CU3E4__this_3)); }
	inline Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28, ___U3CoperationU3E5__2_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_U3CoperationU3E5__2_4() const { return ___U3CoperationU3E5__2_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_U3CoperationU3E5__2_4() { return &___U3CoperationU3E5__2_4; }
	inline void set_U3CoperationU3E5__2_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___U3CoperationU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__2_4), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 
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
		uint8_t __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66__padding[16];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7 
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
		uint8_t __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7__padding[48];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE
	__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016
	__StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7  ___DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1;

public:
	inline static int32_t get_offset_of_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0)); }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  get_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0() const { return ___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0; }
	inline __StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66 * get_address_of_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0() { return &___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0; }
	inline void set_BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0(__StaticArrayInitTypeSizeU3D16_tFDEEE4051A26433A5996232ADC3414625654DA66  value)
	{
		___BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0 = value;
	}

	inline static int32_t get_offset_of_DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1)); }
	inline __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7  get_DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1() const { return ___DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1; }
	inline __StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7 * get_address_of_DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1() { return &___DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1; }
	inline void set_DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1(__StaticArrayInitTypeSizeU3D48_tFD8B246DD801288DF862F996D7F0915222433AD7  value)
	{
		___DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Diagnostics.ProcessWindowStyle
struct ProcessWindowStyle_t2063386325823A518ACF38C982BD40C68ADC1224 
{
public:
	// System.Int32 System.Diagnostics.ProcessWindowStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ProcessWindowStyle_t2063386325823A518ACF38C982BD40C68ADC1224, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// UnityEngine.TouchPhase
struct TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Process/StreamReadMode
struct StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A 
{
public:
	// System.Int32 System.Diagnostics.Process/StreamReadMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamReadMode_t619359082CA49700EEF5D5E49F297C00588E357A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.Diagnostics.Process
struct Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * ___startInfo_15;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_16;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_17;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___onExited_18;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_19;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_20;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_21;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_22;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_23;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * ___registeredWaitHandle_24;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * ___waitHandle_25;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_26;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardOutput_27;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * ___standardInput_28;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___standardError_29;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_30;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_31;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_32;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_33;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___output_34;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * ___error_35;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_36;

public:
	inline static int32_t get_offset_of_haveProcessId_4() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessId_4)); }
	inline bool get_haveProcessId_4() const { return ___haveProcessId_4; }
	inline bool* get_address_of_haveProcessId_4() { return &___haveProcessId_4; }
	inline void set_haveProcessId_4(bool value)
	{
		___haveProcessId_4 = value;
	}

	inline static int32_t get_offset_of_processId_5() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___processId_5)); }
	inline int32_t get_processId_5() const { return ___processId_5; }
	inline int32_t* get_address_of_processId_5() { return &___processId_5; }
	inline void set_processId_5(int32_t value)
	{
		___processId_5 = value;
	}

	inline static int32_t get_offset_of_haveProcessHandle_6() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveProcessHandle_6)); }
	inline bool get_haveProcessHandle_6() const { return ___haveProcessHandle_6; }
	inline bool* get_address_of_haveProcessHandle_6() { return &___haveProcessHandle_6; }
	inline void set_haveProcessHandle_6(bool value)
	{
		___haveProcessHandle_6 = value;
	}

	inline static int32_t get_offset_of_m_processHandle_7() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processHandle_7)); }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * get_m_processHandle_7() const { return ___m_processHandle_7; }
	inline SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C ** get_address_of_m_processHandle_7() { return &___m_processHandle_7; }
	inline void set_m_processHandle_7(SafeProcessHandle_t7329AD2620D5F279CD510088EB4D9DB33319964C * value)
	{
		___m_processHandle_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_processHandle_7), (void*)value);
	}

	inline static int32_t get_offset_of_isRemoteMachine_8() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___isRemoteMachine_8)); }
	inline bool get_isRemoteMachine_8() const { return ___isRemoteMachine_8; }
	inline bool* get_address_of_isRemoteMachine_8() { return &___isRemoteMachine_8; }
	inline void set_isRemoteMachine_8(bool value)
	{
		___isRemoteMachine_8 = value;
	}

	inline static int32_t get_offset_of_machineName_9() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___machineName_9)); }
	inline String_t* get_machineName_9() const { return ___machineName_9; }
	inline String_t** get_address_of_machineName_9() { return &___machineName_9; }
	inline void set_machineName_9(String_t* value)
	{
		___machineName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___machineName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_processAccess_10() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___m_processAccess_10)); }
	inline int32_t get_m_processAccess_10() const { return ___m_processAccess_10; }
	inline int32_t* get_address_of_m_processAccess_10() { return &___m_processAccess_10; }
	inline void set_m_processAccess_10(int32_t value)
	{
		___m_processAccess_10 = value;
	}

	inline static int32_t get_offset_of_threads_11() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___threads_11)); }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * get_threads_11() const { return ___threads_11; }
	inline ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 ** get_address_of_threads_11() { return &___threads_11; }
	inline void set_threads_11(ProcessThreadCollection_t933E50A1F8B7F6294FC743D7CAE864D36EDD6DC8 * value)
	{
		___threads_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___threads_11), (void*)value);
	}

	inline static int32_t get_offset_of_modules_12() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___modules_12)); }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * get_modules_12() const { return ___modules_12; }
	inline ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 ** get_address_of_modules_12() { return &___modules_12; }
	inline void set_modules_12(ProcessModuleCollection_t42ACCF1BC88B6A694EE6841DEE9CD906EE1A46B1 * value)
	{
		___modules_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___modules_12), (void*)value);
	}

	inline static int32_t get_offset_of_haveWorkingSetLimits_13() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveWorkingSetLimits_13)); }
	inline bool get_haveWorkingSetLimits_13() const { return ___haveWorkingSetLimits_13; }
	inline bool* get_address_of_haveWorkingSetLimits_13() { return &___haveWorkingSetLimits_13; }
	inline void set_haveWorkingSetLimits_13(bool value)
	{
		___haveWorkingSetLimits_13 = value;
	}

	inline static int32_t get_offset_of_havePriorityClass_14() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___havePriorityClass_14)); }
	inline bool get_havePriorityClass_14() const { return ___havePriorityClass_14; }
	inline bool* get_address_of_havePriorityClass_14() { return &___havePriorityClass_14; }
	inline void set_havePriorityClass_14(bool value)
	{
		___havePriorityClass_14 = value;
	}

	inline static int32_t get_offset_of_startInfo_15() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___startInfo_15)); }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * get_startInfo_15() const { return ___startInfo_15; }
	inline ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 ** get_address_of_startInfo_15() { return &___startInfo_15; }
	inline void set_startInfo_15(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * value)
	{
		___startInfo_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startInfo_15), (void*)value);
	}

	inline static int32_t get_offset_of_watchForExit_16() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchForExit_16)); }
	inline bool get_watchForExit_16() const { return ___watchForExit_16; }
	inline bool* get_address_of_watchForExit_16() { return &___watchForExit_16; }
	inline void set_watchForExit_16(bool value)
	{
		___watchForExit_16 = value;
	}

	inline static int32_t get_offset_of_watchingForExit_17() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___watchingForExit_17)); }
	inline bool get_watchingForExit_17() const { return ___watchingForExit_17; }
	inline bool* get_address_of_watchingForExit_17() { return &___watchingForExit_17; }
	inline void set_watchingForExit_17(bool value)
	{
		___watchingForExit_17 = value;
	}

	inline static int32_t get_offset_of_onExited_18() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___onExited_18)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_onExited_18() const { return ___onExited_18; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_onExited_18() { return &___onExited_18; }
	inline void set_onExited_18(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___onExited_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onExited_18), (void*)value);
	}

	inline static int32_t get_offset_of_exited_19() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exited_19)); }
	inline bool get_exited_19() const { return ___exited_19; }
	inline bool* get_address_of_exited_19() { return &___exited_19; }
	inline void set_exited_19(bool value)
	{
		___exited_19 = value;
	}

	inline static int32_t get_offset_of_exitCode_20() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___exitCode_20)); }
	inline int32_t get_exitCode_20() const { return ___exitCode_20; }
	inline int32_t* get_address_of_exitCode_20() { return &___exitCode_20; }
	inline void set_exitCode_20(int32_t value)
	{
		___exitCode_20 = value;
	}

	inline static int32_t get_offset_of_signaled_21() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___signaled_21)); }
	inline bool get_signaled_21() const { return ___signaled_21; }
	inline bool* get_address_of_signaled_21() { return &___signaled_21; }
	inline void set_signaled_21(bool value)
	{
		___signaled_21 = value;
	}

	inline static int32_t get_offset_of_haveExitTime_22() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___haveExitTime_22)); }
	inline bool get_haveExitTime_22() const { return ___haveExitTime_22; }
	inline bool* get_address_of_haveExitTime_22() { return &___haveExitTime_22; }
	inline void set_haveExitTime_22(bool value)
	{
		___haveExitTime_22 = value;
	}

	inline static int32_t get_offset_of_raisedOnExited_23() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___raisedOnExited_23)); }
	inline bool get_raisedOnExited_23() const { return ___raisedOnExited_23; }
	inline bool* get_address_of_raisedOnExited_23() { return &___raisedOnExited_23; }
	inline void set_raisedOnExited_23(bool value)
	{
		___raisedOnExited_23 = value;
	}

	inline static int32_t get_offset_of_registeredWaitHandle_24() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___registeredWaitHandle_24)); }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * get_registeredWaitHandle_24() const { return ___registeredWaitHandle_24; }
	inline RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F ** get_address_of_registeredWaitHandle_24() { return &___registeredWaitHandle_24; }
	inline void set_registeredWaitHandle_24(RegisteredWaitHandle_t52523298EBA66F0BF8B4C6BE53B74A0848199D7F * value)
	{
		___registeredWaitHandle_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___registeredWaitHandle_24), (void*)value);
	}

	inline static int32_t get_offset_of_waitHandle_25() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___waitHandle_25)); }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * get_waitHandle_25() const { return ___waitHandle_25; }
	inline WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 ** get_address_of_waitHandle_25() { return &___waitHandle_25; }
	inline void set_waitHandle_25(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * value)
	{
		___waitHandle_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitHandle_25), (void*)value);
	}

	inline static int32_t get_offset_of_synchronizingObject_26() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___synchronizingObject_26)); }
	inline RuntimeObject* get_synchronizingObject_26() const { return ___synchronizingObject_26; }
	inline RuntimeObject** get_address_of_synchronizingObject_26() { return &___synchronizingObject_26; }
	inline void set_synchronizingObject_26(RuntimeObject* value)
	{
		___synchronizingObject_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___synchronizingObject_26), (void*)value);
	}

	inline static int32_t get_offset_of_standardOutput_27() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardOutput_27)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardOutput_27() const { return ___standardOutput_27; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardOutput_27() { return &___standardOutput_27; }
	inline void set_standardOutput_27(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardOutput_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutput_27), (void*)value);
	}

	inline static int32_t get_offset_of_standardInput_28() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardInput_28)); }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * get_standardInput_28() const { return ___standardInput_28; }
	inline StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 ** get_address_of_standardInput_28() { return &___standardInput_28; }
	inline void set_standardInput_28(StreamWriter_t3E267B7F3C9522AF936C26ABF158398BB779FAF6 * value)
	{
		___standardInput_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardInput_28), (void*)value);
	}

	inline static int32_t get_offset_of_standardError_29() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___standardError_29)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_standardError_29() const { return ___standardError_29; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_standardError_29() { return &___standardError_29; }
	inline void set_standardError_29(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___standardError_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardError_29), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_30() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___disposed_30)); }
	inline bool get_disposed_30() const { return ___disposed_30; }
	inline bool* get_address_of_disposed_30() { return &___disposed_30; }
	inline void set_disposed_30(bool value)
	{
		___disposed_30 = value;
	}

	inline static int32_t get_offset_of_outputStreamReadMode_31() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___outputStreamReadMode_31)); }
	inline int32_t get_outputStreamReadMode_31() const { return ___outputStreamReadMode_31; }
	inline int32_t* get_address_of_outputStreamReadMode_31() { return &___outputStreamReadMode_31; }
	inline void set_outputStreamReadMode_31(int32_t value)
	{
		___outputStreamReadMode_31 = value;
	}

	inline static int32_t get_offset_of_errorStreamReadMode_32() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___errorStreamReadMode_32)); }
	inline int32_t get_errorStreamReadMode_32() const { return ___errorStreamReadMode_32; }
	inline int32_t* get_address_of_errorStreamReadMode_32() { return &___errorStreamReadMode_32; }
	inline void set_errorStreamReadMode_32(int32_t value)
	{
		___errorStreamReadMode_32 = value;
	}

	inline static int32_t get_offset_of_inputStreamReadMode_33() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___inputStreamReadMode_33)); }
	inline int32_t get_inputStreamReadMode_33() const { return ___inputStreamReadMode_33; }
	inline int32_t* get_address_of_inputStreamReadMode_33() { return &___inputStreamReadMode_33; }
	inline void set_inputStreamReadMode_33(int32_t value)
	{
		___inputStreamReadMode_33 = value;
	}

	inline static int32_t get_offset_of_output_34() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___output_34)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_output_34() const { return ___output_34; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_output_34() { return &___output_34; }
	inline void set_output_34(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___output_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___output_34), (void*)value);
	}

	inline static int32_t get_offset_of_error_35() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___error_35)); }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * get_error_35() const { return ___error_35; }
	inline AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C ** get_address_of_error_35() { return &___error_35; }
	inline void set_error_35(AsyncStreamReader_t729FEF214B9427B18DB824BD7BA980026F4FA07C * value)
	{
		___error_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_35), (void*)value);
	}

	inline static int32_t get_offset_of_process_name_36() { return static_cast<int32_t>(offsetof(Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671, ___process_name_36)); }
	inline String_t* get_process_name_36() const { return ___process_name_36; }
	inline String_t** get_address_of_process_name_36() { return &___process_name_36; }
	inline void set_process_name_36(String_t* value)
	{
		___process_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___process_name_36), (void*)value);
	}
};


// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.ProcessStartInfo::fileName
	String_t* ___fileName_0;
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_1;
	// System.String System.Diagnostics.ProcessStartInfo::directory
	String_t* ___directory_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::windowStyle
	int32_t ___windowStyle_4;
	// System.Boolean System.Diagnostics.ProcessStartInfo::errorDialog
	bool ___errorDialog_5;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::errorDialogParentHandle
	intptr_t ___errorDialogParentHandle_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::useShellExecute
	bool ___useShellExecute_7;
	// System.String System.Diagnostics.ProcessStartInfo::userName
	String_t* ___userName_8;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_9;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * ___password_10;
	// System.String System.Diagnostics.ProcessStartInfo::passwordInClearText
	String_t* ___passwordInClearText_11;
	// System.Boolean System.Diagnostics.ProcessStartInfo::loadUserProfile
	bool ___loadUserProfile_12;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardInput
	bool ___redirectStandardInput_13;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardOutput
	bool ___redirectStandardOutput_14;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardError
	bool ___redirectStandardError_15;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardOutputEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardOutputEncoding_16;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardErrorEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardErrorEncoding_17;
	// System.Boolean System.Diagnostics.ProcessStartInfo::createNoWindow
	bool ___createNoWindow_18;
	// System.WeakReference System.Diagnostics.ProcessStartInfo::weakParentProcess
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakParentProcess_19;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::environmentVariables
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___environmentVariables_20;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Diagnostics.ProcessStartInfo::environment
	RuntimeObject* ___environment_21;

public:
	inline static int32_t get_offset_of_fileName_0() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___fileName_0)); }
	inline String_t* get_fileName_0() const { return ___fileName_0; }
	inline String_t** get_address_of_fileName_0() { return &___fileName_0; }
	inline void set_fileName_0(String_t* value)
	{
		___fileName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileName_0), (void*)value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___arguments_1)); }
	inline String_t* get_arguments_1() const { return ___arguments_1; }
	inline String_t** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(String_t* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arguments_1), (void*)value);
	}

	inline static int32_t get_offset_of_directory_2() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___directory_2)); }
	inline String_t* get_directory_2() const { return ___directory_2; }
	inline String_t** get_address_of_directory_2() { return &___directory_2; }
	inline void set_directory_2(String_t* value)
	{
		___directory_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___directory_2), (void*)value);
	}

	inline static int32_t get_offset_of_verb_3() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___verb_3)); }
	inline String_t* get_verb_3() const { return ___verb_3; }
	inline String_t** get_address_of_verb_3() { return &___verb_3; }
	inline void set_verb_3(String_t* value)
	{
		___verb_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___verb_3), (void*)value);
	}

	inline static int32_t get_offset_of_windowStyle_4() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___windowStyle_4)); }
	inline int32_t get_windowStyle_4() const { return ___windowStyle_4; }
	inline int32_t* get_address_of_windowStyle_4() { return &___windowStyle_4; }
	inline void set_windowStyle_4(int32_t value)
	{
		___windowStyle_4 = value;
	}

	inline static int32_t get_offset_of_errorDialog_5() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___errorDialog_5)); }
	inline bool get_errorDialog_5() const { return ___errorDialog_5; }
	inline bool* get_address_of_errorDialog_5() { return &___errorDialog_5; }
	inline void set_errorDialog_5(bool value)
	{
		___errorDialog_5 = value;
	}

	inline static int32_t get_offset_of_errorDialogParentHandle_6() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___errorDialogParentHandle_6)); }
	inline intptr_t get_errorDialogParentHandle_6() const { return ___errorDialogParentHandle_6; }
	inline intptr_t* get_address_of_errorDialogParentHandle_6() { return &___errorDialogParentHandle_6; }
	inline void set_errorDialogParentHandle_6(intptr_t value)
	{
		___errorDialogParentHandle_6 = value;
	}

	inline static int32_t get_offset_of_useShellExecute_7() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___useShellExecute_7)); }
	inline bool get_useShellExecute_7() const { return ___useShellExecute_7; }
	inline bool* get_address_of_useShellExecute_7() { return &___useShellExecute_7; }
	inline void set_useShellExecute_7(bool value)
	{
		___useShellExecute_7 = value;
	}

	inline static int32_t get_offset_of_userName_8() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___userName_8)); }
	inline String_t* get_userName_8() const { return ___userName_8; }
	inline String_t** get_address_of_userName_8() { return &___userName_8; }
	inline void set_userName_8(String_t* value)
	{
		___userName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userName_8), (void*)value);
	}

	inline static int32_t get_offset_of_domain_9() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___domain_9)); }
	inline String_t* get_domain_9() const { return ___domain_9; }
	inline String_t** get_address_of_domain_9() { return &___domain_9; }
	inline void set_domain_9(String_t* value)
	{
		___domain_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___domain_9), (void*)value);
	}

	inline static int32_t get_offset_of_password_10() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___password_10)); }
	inline SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * get_password_10() const { return ___password_10; }
	inline SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 ** get_address_of_password_10() { return &___password_10; }
	inline void set_password_10(SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * value)
	{
		___password_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___password_10), (void*)value);
	}

	inline static int32_t get_offset_of_passwordInClearText_11() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___passwordInClearText_11)); }
	inline String_t* get_passwordInClearText_11() const { return ___passwordInClearText_11; }
	inline String_t** get_address_of_passwordInClearText_11() { return &___passwordInClearText_11; }
	inline void set_passwordInClearText_11(String_t* value)
	{
		___passwordInClearText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___passwordInClearText_11), (void*)value);
	}

	inline static int32_t get_offset_of_loadUserProfile_12() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___loadUserProfile_12)); }
	inline bool get_loadUserProfile_12() const { return ___loadUserProfile_12; }
	inline bool* get_address_of_loadUserProfile_12() { return &___loadUserProfile_12; }
	inline void set_loadUserProfile_12(bool value)
	{
		___loadUserProfile_12 = value;
	}

	inline static int32_t get_offset_of_redirectStandardInput_13() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___redirectStandardInput_13)); }
	inline bool get_redirectStandardInput_13() const { return ___redirectStandardInput_13; }
	inline bool* get_address_of_redirectStandardInput_13() { return &___redirectStandardInput_13; }
	inline void set_redirectStandardInput_13(bool value)
	{
		___redirectStandardInput_13 = value;
	}

	inline static int32_t get_offset_of_redirectStandardOutput_14() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___redirectStandardOutput_14)); }
	inline bool get_redirectStandardOutput_14() const { return ___redirectStandardOutput_14; }
	inline bool* get_address_of_redirectStandardOutput_14() { return &___redirectStandardOutput_14; }
	inline void set_redirectStandardOutput_14(bool value)
	{
		___redirectStandardOutput_14 = value;
	}

	inline static int32_t get_offset_of_redirectStandardError_15() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___redirectStandardError_15)); }
	inline bool get_redirectStandardError_15() const { return ___redirectStandardError_15; }
	inline bool* get_address_of_redirectStandardError_15() { return &___redirectStandardError_15; }
	inline void set_redirectStandardError_15(bool value)
	{
		___redirectStandardError_15 = value;
	}

	inline static int32_t get_offset_of_standardOutputEncoding_16() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___standardOutputEncoding_16)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_standardOutputEncoding_16() const { return ___standardOutputEncoding_16; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_standardOutputEncoding_16() { return &___standardOutputEncoding_16; }
	inline void set_standardOutputEncoding_16(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___standardOutputEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardOutputEncoding_16), (void*)value);
	}

	inline static int32_t get_offset_of_standardErrorEncoding_17() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___standardErrorEncoding_17)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_standardErrorEncoding_17() const { return ___standardErrorEncoding_17; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_standardErrorEncoding_17() { return &___standardErrorEncoding_17; }
	inline void set_standardErrorEncoding_17(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___standardErrorEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standardErrorEncoding_17), (void*)value);
	}

	inline static int32_t get_offset_of_createNoWindow_18() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___createNoWindow_18)); }
	inline bool get_createNoWindow_18() const { return ___createNoWindow_18; }
	inline bool* get_address_of_createNoWindow_18() { return &___createNoWindow_18; }
	inline void set_createNoWindow_18(bool value)
	{
		___createNoWindow_18 = value;
	}

	inline static int32_t get_offset_of_weakParentProcess_19() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___weakParentProcess_19)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_weakParentProcess_19() const { return ___weakParentProcess_19; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_weakParentProcess_19() { return &___weakParentProcess_19; }
	inline void set_weakParentProcess_19(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___weakParentProcess_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weakParentProcess_19), (void*)value);
	}

	inline static int32_t get_offset_of_environmentVariables_20() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___environmentVariables_20)); }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * get_environmentVariables_20() const { return ___environmentVariables_20; }
	inline StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 ** get_address_of_environmentVariables_20() { return &___environmentVariables_20; }
	inline void set_environmentVariables_20(StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * value)
	{
		___environmentVariables_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environmentVariables_20), (void*)value);
	}

	inline static int32_t get_offset_of_environment_21() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199, ___environment_21)); }
	inline RuntimeObject* get_environment_21() const { return ___environment_21; }
	inline RuntimeObject** get_address_of_environment_21() { return &___environment_21; }
	inline void set_environment_21(RuntimeObject* value)
	{
		___environment_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___environment_21), (void*)value);
	}
};

struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_StaticFields
{
public:
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___empty_22;

public:
	inline static int32_t get_offset_of_empty_22() { return static_cast<int32_t>(offsetof(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_StaticFields, ___empty_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_empty_22() const { return ___empty_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_empty_22() { return &___empty_22; }
	inline void set_empty_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___empty_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___empty_22), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshaled_pinvoke
{
	char* ___fileName_0;
	char* ___arguments_1;
	char* ___directory_2;
	char* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	char* ___userName_8;
	char* ___domain_9;
	SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * ___password_10;
	char* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardOutputEncoding_16;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakParentProcess_19;
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___environmentVariables_20;
	RuntimeObject* ___environment_21;
};
// Native definition for COM marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_marshaled_com
{
	Il2CppChar* ___fileName_0;
	Il2CppChar* ___arguments_1;
	Il2CppChar* ___directory_2;
	Il2CppChar* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	Il2CppChar* ___userName_8;
	Il2CppChar* ___domain_9;
	SecureString_t19F65D6480BBCE2D5F24F21B7F4E6C7841698D94 * ___password_10;
	Il2CppChar* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardOutputEncoding_16;
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakParentProcess_19;
	StringDictionary_t0E59841BF2F9514E354A1DF32028F3EF79535E79 * ___environmentVariables_20;
	RuntimeObject* ___environment_21;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// FoodRenderer
struct FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera FoodRenderer::mainCamera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___mainCamera_4;
	// GameHandler FoodRenderer::gameHandler
	GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * ___gameHandler_5;
	// UnityEngine.GameObject FoodRenderer::GameMap
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameMap_6;
	// UnityEngine.Vector2 FoodRenderer::touchPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___touchPosition_7;
	// UnityEngine.Vector2 FoodRenderer::fixedPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___fixedPosition_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> FoodRenderer::FoodList
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___FoodList_9;

public:
	inline static int32_t get_offset_of_mainCamera_4() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___mainCamera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_mainCamera_4() const { return ___mainCamera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_mainCamera_4() { return &___mainCamera_4; }
	inline void set_mainCamera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___mainCamera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainCamera_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameHandler_5() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___gameHandler_5)); }
	inline GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * get_gameHandler_5() const { return ___gameHandler_5; }
	inline GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 ** get_address_of_gameHandler_5() { return &___gameHandler_5; }
	inline void set_gameHandler_5(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * value)
	{
		___gameHandler_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameHandler_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameMap_6() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___GameMap_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameMap_6() const { return ___GameMap_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameMap_6() { return &___GameMap_6; }
	inline void set_GameMap_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_touchPosition_7() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___touchPosition_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_touchPosition_7() const { return ___touchPosition_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_touchPosition_7() { return &___touchPosition_7; }
	inline void set_touchPosition_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___touchPosition_7 = value;
	}

	inline static int32_t get_offset_of_fixedPosition_8() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___fixedPosition_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_fixedPosition_8() const { return ___fixedPosition_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_fixedPosition_8() { return &___fixedPosition_8; }
	inline void set_fixedPosition_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___fixedPosition_8 = value;
	}

	inline static int32_t get_offset_of_FoodList_9() { return static_cast<int32_t>(offsetof(FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10, ___FoodList_9)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_FoodList_9() const { return ___FoodList_9; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_FoodList_9() { return &___FoodList_9; }
	inline void set_FoodList_9(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___FoodList_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FoodList_9), (void*)value);
	}
};


// GameAssets
struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite GameAssets::GameWalls
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___GameWalls_5;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameAssets::Foods
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___Foods_6;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameAssets::SnakeHead
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeHead_7;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameAssets::SnakeBody
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeBody_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameAssets::SnakeTail
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeTail_9;

public:
	inline static int32_t get_offset_of_GameWalls_5() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___GameWalls_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_GameWalls_5() const { return ___GameWalls_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_GameWalls_5() { return &___GameWalls_5; }
	inline void set_GameWalls_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___GameWalls_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameWalls_5), (void*)value);
	}

	inline static int32_t get_offset_of_Foods_6() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___Foods_6)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_Foods_6() const { return ___Foods_6; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_Foods_6() { return &___Foods_6; }
	inline void set_Foods_6(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___Foods_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Foods_6), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeHead_7() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___SnakeHead_7)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeHead_7() const { return ___SnakeHead_7; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeHead_7() { return &___SnakeHead_7; }
	inline void set_SnakeHead_7(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeHead_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeHead_7), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeBody_8() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___SnakeBody_8)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeBody_8() const { return ___SnakeBody_8; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeBody_8() { return &___SnakeBody_8; }
	inline void set_SnakeBody_8(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeBody_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeBody_8), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeTail_9() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191, ___SnakeTail_9)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeTail_9() const { return ___SnakeTail_9; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeTail_9() { return &___SnakeTail_9; }
	inline void set_SnakeTail_9(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeTail_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeTail_9), (void*)value);
	}
};

struct GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields
{
public:
	// GameAssets GameAssets::instance
	GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields, ___instance_4)); }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * get_instance_4() const { return ___instance_4; }
	inline GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// GameHandler
struct GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameHandler::mapDebug
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___mapDebug_4;
	// BFS2 GameHandler::bfs2
	BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * ___bfs2_7;
	// GBFS GameHandler::gbfs
	GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * ___gbfs_8;
	// System.Int32 GameHandler::rSnakeHead
	int32_t ___rSnakeHead_9;
	// System.Int32 GameHandler::cSnakeHead
	int32_t ___cSnakeHead_10;
	// System.Int32 GameHandler::rFoodPos
	int32_t ___rFoodPos_11;
	// System.Int32 GameHandler::cFoodPos
	int32_t ___cFoodPos_12;
	// UnityEngine.GameObject GameHandler::loseUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loseUI_15;
	// UnityEngine.GameObject GameHandler::winUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___winUI_16;
	// UnityEngine.GameObject GameHandler::GameMap
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameMap_17;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>> GameHandler::mapToPass
	List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___mapToPass_18;
	// UnityEngine.GameObject GameHandler::snakeHead
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___snakeHead_19;
	// UnityEngine.GameObject GameHandler::snakeBodyContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___snakeBodyContainer_20;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameHandler::snakeBody
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___snakeBody_21;
	// UnityEngine.GameObject GameHandler::snakeTail
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___snakeTail_22;
	// System.Int32 GameHandler::oldSnakeHeadDirection
	int32_t ___oldSnakeHeadDirection_23;
	// System.Int32 GameHandler::newSnakeHeadDirection
	int32_t ___newSnakeHeadDirection_24;
	// System.String GameHandler::destType
	String_t* ___destType_25;
	// UnityEngine.GameObject GameHandler::food
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___food_26;
	// UnityEngine.GameObject GameHandler::foodRenderer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___foodRenderer_27;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameHandler::snakeHeadSprites
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___snakeHeadSprites_28;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameHandler::snakeBodySprites
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___snakeBodySprites_29;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> GameHandler::snakeTailSprites
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___snakeTailSprites_30;

public:
	inline static int32_t get_offset_of_mapDebug_4() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___mapDebug_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_mapDebug_4() const { return ___mapDebug_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_mapDebug_4() { return &___mapDebug_4; }
	inline void set_mapDebug_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___mapDebug_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapDebug_4), (void*)value);
	}

	inline static int32_t get_offset_of_bfs2_7() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___bfs2_7)); }
	inline BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * get_bfs2_7() const { return ___bfs2_7; }
	inline BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 ** get_address_of_bfs2_7() { return &___bfs2_7; }
	inline void set_bfs2_7(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * value)
	{
		___bfs2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bfs2_7), (void*)value);
	}

	inline static int32_t get_offset_of_gbfs_8() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___gbfs_8)); }
	inline GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * get_gbfs_8() const { return ___gbfs_8; }
	inline GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 ** get_address_of_gbfs_8() { return &___gbfs_8; }
	inline void set_gbfs_8(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * value)
	{
		___gbfs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gbfs_8), (void*)value);
	}

	inline static int32_t get_offset_of_rSnakeHead_9() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___rSnakeHead_9)); }
	inline int32_t get_rSnakeHead_9() const { return ___rSnakeHead_9; }
	inline int32_t* get_address_of_rSnakeHead_9() { return &___rSnakeHead_9; }
	inline void set_rSnakeHead_9(int32_t value)
	{
		___rSnakeHead_9 = value;
	}

	inline static int32_t get_offset_of_cSnakeHead_10() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___cSnakeHead_10)); }
	inline int32_t get_cSnakeHead_10() const { return ___cSnakeHead_10; }
	inline int32_t* get_address_of_cSnakeHead_10() { return &___cSnakeHead_10; }
	inline void set_cSnakeHead_10(int32_t value)
	{
		___cSnakeHead_10 = value;
	}

	inline static int32_t get_offset_of_rFoodPos_11() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___rFoodPos_11)); }
	inline int32_t get_rFoodPos_11() const { return ___rFoodPos_11; }
	inline int32_t* get_address_of_rFoodPos_11() { return &___rFoodPos_11; }
	inline void set_rFoodPos_11(int32_t value)
	{
		___rFoodPos_11 = value;
	}

	inline static int32_t get_offset_of_cFoodPos_12() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___cFoodPos_12)); }
	inline int32_t get_cFoodPos_12() const { return ___cFoodPos_12; }
	inline int32_t* get_address_of_cFoodPos_12() { return &___cFoodPos_12; }
	inline void set_cFoodPos_12(int32_t value)
	{
		___cFoodPos_12 = value;
	}

	inline static int32_t get_offset_of_loseUI_15() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___loseUI_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loseUI_15() const { return ___loseUI_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loseUI_15() { return &___loseUI_15; }
	inline void set_loseUI_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loseUI_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loseUI_15), (void*)value);
	}

	inline static int32_t get_offset_of_winUI_16() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___winUI_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_winUI_16() const { return ___winUI_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_winUI_16() { return &___winUI_16; }
	inline void set_winUI_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___winUI_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___winUI_16), (void*)value);
	}

	inline static int32_t get_offset_of_GameMap_17() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___GameMap_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameMap_17() const { return ___GameMap_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameMap_17() { return &___GameMap_17; }
	inline void set_GameMap_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameMap_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameMap_17), (void*)value);
	}

	inline static int32_t get_offset_of_mapToPass_18() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___mapToPass_18)); }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * get_mapToPass_18() const { return ___mapToPass_18; }
	inline List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A ** get_address_of_mapToPass_18() { return &___mapToPass_18; }
	inline void set_mapToPass_18(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * value)
	{
		___mapToPass_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapToPass_18), (void*)value);
	}

	inline static int32_t get_offset_of_snakeHead_19() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeHead_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_snakeHead_19() const { return ___snakeHead_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_snakeHead_19() { return &___snakeHead_19; }
	inline void set_snakeHead_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___snakeHead_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeHead_19), (void*)value);
	}

	inline static int32_t get_offset_of_snakeBodyContainer_20() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeBodyContainer_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_snakeBodyContainer_20() const { return ___snakeBodyContainer_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_snakeBodyContainer_20() { return &___snakeBodyContainer_20; }
	inline void set_snakeBodyContainer_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___snakeBodyContainer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeBodyContainer_20), (void*)value);
	}

	inline static int32_t get_offset_of_snakeBody_21() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeBody_21)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_snakeBody_21() const { return ___snakeBody_21; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_snakeBody_21() { return &___snakeBody_21; }
	inline void set_snakeBody_21(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___snakeBody_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeBody_21), (void*)value);
	}

	inline static int32_t get_offset_of_snakeTail_22() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeTail_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_snakeTail_22() const { return ___snakeTail_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_snakeTail_22() { return &___snakeTail_22; }
	inline void set_snakeTail_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___snakeTail_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeTail_22), (void*)value);
	}

	inline static int32_t get_offset_of_oldSnakeHeadDirection_23() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___oldSnakeHeadDirection_23)); }
	inline int32_t get_oldSnakeHeadDirection_23() const { return ___oldSnakeHeadDirection_23; }
	inline int32_t* get_address_of_oldSnakeHeadDirection_23() { return &___oldSnakeHeadDirection_23; }
	inline void set_oldSnakeHeadDirection_23(int32_t value)
	{
		___oldSnakeHeadDirection_23 = value;
	}

	inline static int32_t get_offset_of_newSnakeHeadDirection_24() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___newSnakeHeadDirection_24)); }
	inline int32_t get_newSnakeHeadDirection_24() const { return ___newSnakeHeadDirection_24; }
	inline int32_t* get_address_of_newSnakeHeadDirection_24() { return &___newSnakeHeadDirection_24; }
	inline void set_newSnakeHeadDirection_24(int32_t value)
	{
		___newSnakeHeadDirection_24 = value;
	}

	inline static int32_t get_offset_of_destType_25() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___destType_25)); }
	inline String_t* get_destType_25() const { return ___destType_25; }
	inline String_t** get_address_of_destType_25() { return &___destType_25; }
	inline void set_destType_25(String_t* value)
	{
		___destType_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___destType_25), (void*)value);
	}

	inline static int32_t get_offset_of_food_26() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___food_26)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_food_26() const { return ___food_26; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_food_26() { return &___food_26; }
	inline void set_food_26(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___food_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___food_26), (void*)value);
	}

	inline static int32_t get_offset_of_foodRenderer_27() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___foodRenderer_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_foodRenderer_27() const { return ___foodRenderer_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_foodRenderer_27() { return &___foodRenderer_27; }
	inline void set_foodRenderer_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___foodRenderer_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___foodRenderer_27), (void*)value);
	}

	inline static int32_t get_offset_of_snakeHeadSprites_28() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeHeadSprites_28)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_snakeHeadSprites_28() const { return ___snakeHeadSprites_28; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_snakeHeadSprites_28() { return &___snakeHeadSprites_28; }
	inline void set_snakeHeadSprites_28(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___snakeHeadSprites_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeHeadSprites_28), (void*)value);
	}

	inline static int32_t get_offset_of_snakeBodySprites_29() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeBodySprites_29)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_snakeBodySprites_29() const { return ___snakeBodySprites_29; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_snakeBodySprites_29() { return &___snakeBodySprites_29; }
	inline void set_snakeBodySprites_29(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___snakeBodySprites_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeBodySprites_29), (void*)value);
	}

	inline static int32_t get_offset_of_snakeTailSprites_30() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26, ___snakeTailSprites_30)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_snakeTailSprites_30() const { return ___snakeTailSprites_30; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_snakeTailSprites_30() { return &___snakeTailSprites_30; }
	inline void set_snakeTailSprites_30(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___snakeTailSprites_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___snakeTailSprites_30), (void*)value);
	}
};

struct GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields
{
public:
	// GameHandler GameHandler::instance
	GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * ___instance_6;
	// System.Int32 GameHandler::remainingFood
	int32_t ___remainingFood_13;
	// System.String GameHandler::userInfo
	String_t* ___userInfo_14;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields, ___instance_6)); }
	inline GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * get_instance_6() const { return ___instance_6; }
	inline GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_6), (void*)value);
	}

	inline static int32_t get_offset_of_remainingFood_13() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields, ___remainingFood_13)); }
	inline int32_t get_remainingFood_13() const { return ___remainingFood_13; }
	inline int32_t* get_address_of_remainingFood_13() { return &___remainingFood_13; }
	inline void set_remainingFood_13(int32_t value)
	{
		___remainingFood_13 = value;
	}

	inline static int32_t get_offset_of_userInfo_14() { return static_cast<int32_t>(offsetof(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields, ___userInfo_14)); }
	inline String_t* get_userInfo_14() const { return ___userInfo_14; }
	inline String_t** get_address_of_userInfo_14() { return &___userInfo_14; }
	inline void set_userInfo_14(String_t* value)
	{
		___userInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfo_14), (void*)value);
	}
};


// LevelManager
struct LevelManager_t010B312A2B35B45291F58195216ABB5673174961  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Loader
struct Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Slider Loader::progressSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___progressSlider_4;
	// UnityEngine.UI.Text Loader::progressText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___progressText_5;

public:
	inline static int32_t get_offset_of_progressSlider_4() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182, ___progressSlider_4)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_progressSlider_4() const { return ___progressSlider_4; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_progressSlider_4() { return &___progressSlider_4; }
	inline void set_progressSlider_4(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___progressSlider_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressSlider_4), (void*)value);
	}

	inline static int32_t get_offset_of_progressText_5() { return static_cast<int32_t>(offsetof(Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182, ___progressText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_progressText_5() const { return ___progressText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_progressText_5() { return &___progressText_5; }
	inline void set_progressText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___progressText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___progressText_5), (void*)value);
	}
};


// MenuToLevel
struct MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> MenuToLevel::LevelButtons
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___LevelButtons_4;
	// UnityEngine.GameObject MenuToLevel::LevelBackground
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LevelBackground_5;
	// UnityEngine.GameObject MenuToLevel::levelUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___levelUI_6;

public:
	inline static int32_t get_offset_of_LevelButtons_4() { return static_cast<int32_t>(offsetof(MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4, ___LevelButtons_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_LevelButtons_4() const { return ___LevelButtons_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_LevelButtons_4() { return &___LevelButtons_4; }
	inline void set_LevelButtons_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___LevelButtons_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelButtons_4), (void*)value);
	}

	inline static int32_t get_offset_of_LevelBackground_5() { return static_cast<int32_t>(offsetof(MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4, ___LevelBackground_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LevelBackground_5() const { return ___LevelBackground_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LevelBackground_5() { return &___LevelBackground_5; }
	inline void set_LevelBackground_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LevelBackground_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LevelBackground_5), (void*)value);
	}

	inline static int32_t get_offset_of_levelUI_6() { return static_cast<int32_t>(offsetof(MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4, ___levelUI_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_levelUI_6() const { return ___levelUI_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_levelUI_6() { return &___levelUI_6; }
	inline void set_levelUI_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___levelUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___levelUI_6), (void*)value);
	}
};


// NodeType
struct NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String NodeType::nodeType
	String_t* ___nodeType_4;

public:
	inline static int32_t get_offset_of_nodeType_4() { return static_cast<int32_t>(offsetof(NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C, ___nodeType_4)); }
	inline String_t* get_nodeType_4() const { return ___nodeType_4; }
	inline String_t** get_address_of_nodeType_4() { return &___nodeType_4; }
	inline void set_nodeType_4(String_t* value)
	{
		___nodeType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeType_4), (void*)value);
	}
};


// QuitGame
struct QuitGame_t80B704BD0C5444093731B42317E6BD1D82361C53  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScoreWindow
struct ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreWindow::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}
};


// SnakeBodyDirection
struct SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SnakeBodyDirection::direction
	int32_t ___direction_4;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}
};


// SnakeHeadDirection
struct SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SnakeHeadDirection::direction
	int32_t ___direction_4;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}
};


// SnakeTailDirection
struct SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 SnakeTailDirection::direction
	int32_t ___direction_4;

public:
	inline static int32_t get_offset_of_direction_4() { return static_cast<int32_t>(offsetof(SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F, ___direction_4)); }
	inline int32_t get_direction_4() const { return ___direction_4; }
	inline int32_t* get_address_of_direction_4() { return &___direction_4; }
	inline void set_direction_4(int32_t value)
	{
		___direction_4 = value;
	}
};


// SoundManager
struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AudioSource> SoundManager::SnakeMovementSounds
	List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * ___SnakeMovementSounds_5;
	// UnityEngine.AudioSource SoundManager::SnakeBiteSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___SnakeBiteSound_6;
	// UnityEngine.AudioSource SoundManager::ThemeSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___ThemeSound_7;
	// UnityEngine.AudioSource SoundManager::LoseSFX
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___LoseSFX_8;
	// UnityEngine.AudioSource SoundManager::LoseSong
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___LoseSong_9;
	// UnityEngine.AudioSource SoundManager::WinSong
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___WinSong_10;

public:
	inline static int32_t get_offset_of_SnakeMovementSounds_5() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___SnakeMovementSounds_5)); }
	inline List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * get_SnakeMovementSounds_5() const { return ___SnakeMovementSounds_5; }
	inline List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B ** get_address_of_SnakeMovementSounds_5() { return &___SnakeMovementSounds_5; }
	inline void set_SnakeMovementSounds_5(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * value)
	{
		___SnakeMovementSounds_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeMovementSounds_5), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeBiteSound_6() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___SnakeBiteSound_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_SnakeBiteSound_6() const { return ___SnakeBiteSound_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_SnakeBiteSound_6() { return &___SnakeBiteSound_6; }
	inline void set_SnakeBiteSound_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___SnakeBiteSound_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeBiteSound_6), (void*)value);
	}

	inline static int32_t get_offset_of_ThemeSound_7() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___ThemeSound_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_ThemeSound_7() const { return ___ThemeSound_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_ThemeSound_7() { return &___ThemeSound_7; }
	inline void set_ThemeSound_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___ThemeSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ThemeSound_7), (void*)value);
	}

	inline static int32_t get_offset_of_LoseSFX_8() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___LoseSFX_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_LoseSFX_8() const { return ___LoseSFX_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_LoseSFX_8() { return &___LoseSFX_8; }
	inline void set_LoseSFX_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___LoseSFX_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoseSFX_8), (void*)value);
	}

	inline static int32_t get_offset_of_LoseSong_9() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___LoseSong_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_LoseSong_9() const { return ___LoseSong_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_LoseSong_9() { return &___LoseSong_9; }
	inline void set_LoseSong_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___LoseSong_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LoseSong_9), (void*)value);
	}

	inline static int32_t get_offset_of_WinSong_10() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62, ___WinSong_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_WinSong_10() const { return ___WinSong_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_WinSong_10() { return &___WinSong_10; }
	inline void set_WinSong_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___WinSong_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WinSong_10), (void*)value);
	}
};

struct SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields, ___instance_4)); }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * get_instance_4() const { return ___instance_4; }
	inline SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// StartSnakeRenderer
struct StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single[] StartSnakeRenderer::RAND_COOR
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___RAND_COOR_4;
	// System.Int32[] StartSnakeRenderer::RAND_SNAKE_DIR
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___RAND_SNAKE_DIR_5;
	// UnityEngine.GameObject StartSnakeRenderer::GameMap
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameMap_6;
	// UnityEngine.GameObject StartSnakeRenderer::SnakeContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SnakeContainer_7;
	// UnityEngine.GameObject StartSnakeRenderer::SnakeBodyContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SnakeBodyContainer_8;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> StartSnakeRenderer::SnakeHeadDirection
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeHeadDirection_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> StartSnakeRenderer::SnakeBodyDirection
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeBodyDirection_10;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> StartSnakeRenderer::SnakeTailDirection
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___SnakeTailDirection_11;
	// System.Int32 StartSnakeRenderer::startDirection
	int32_t ___startDirection_12;
	// UnityEngine.Vector2 StartSnakeRenderer::startPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPosition_13;

public:
	inline static int32_t get_offset_of_RAND_COOR_4() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___RAND_COOR_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_RAND_COOR_4() const { return ___RAND_COOR_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_RAND_COOR_4() { return &___RAND_COOR_4; }
	inline void set_RAND_COOR_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___RAND_COOR_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RAND_COOR_4), (void*)value);
	}

	inline static int32_t get_offset_of_RAND_SNAKE_DIR_5() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___RAND_SNAKE_DIR_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_RAND_SNAKE_DIR_5() const { return ___RAND_SNAKE_DIR_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_RAND_SNAKE_DIR_5() { return &___RAND_SNAKE_DIR_5; }
	inline void set_RAND_SNAKE_DIR_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___RAND_SNAKE_DIR_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RAND_SNAKE_DIR_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameMap_6() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___GameMap_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameMap_6() const { return ___GameMap_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameMap_6() { return &___GameMap_6; }
	inline void set_GameMap_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameMap_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameMap_6), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeContainer_7() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___SnakeContainer_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SnakeContainer_7() const { return ___SnakeContainer_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SnakeContainer_7() { return &___SnakeContainer_7; }
	inline void set_SnakeContainer_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SnakeContainer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeContainer_7), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeBodyContainer_8() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___SnakeBodyContainer_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SnakeBodyContainer_8() const { return ___SnakeBodyContainer_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SnakeBodyContainer_8() { return &___SnakeBodyContainer_8; }
	inline void set_SnakeBodyContainer_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SnakeBodyContainer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeBodyContainer_8), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeHeadDirection_9() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___SnakeHeadDirection_9)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeHeadDirection_9() const { return ___SnakeHeadDirection_9; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeHeadDirection_9() { return &___SnakeHeadDirection_9; }
	inline void set_SnakeHeadDirection_9(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeHeadDirection_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeHeadDirection_9), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeBodyDirection_10() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___SnakeBodyDirection_10)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeBodyDirection_10() const { return ___SnakeBodyDirection_10; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeBodyDirection_10() { return &___SnakeBodyDirection_10; }
	inline void set_SnakeBodyDirection_10(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeBodyDirection_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeBodyDirection_10), (void*)value);
	}

	inline static int32_t get_offset_of_SnakeTailDirection_11() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___SnakeTailDirection_11)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_SnakeTailDirection_11() const { return ___SnakeTailDirection_11; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_SnakeTailDirection_11() { return &___SnakeTailDirection_11; }
	inline void set_SnakeTailDirection_11(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___SnakeTailDirection_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SnakeTailDirection_11), (void*)value);
	}

	inline static int32_t get_offset_of_startDirection_12() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___startDirection_12)); }
	inline int32_t get_startDirection_12() const { return ___startDirection_12; }
	inline int32_t* get_address_of_startDirection_12() { return &___startDirection_12; }
	inline void set_startDirection_12(int32_t value)
	{
		___startDirection_12 = value;
	}

	inline static int32_t get_offset_of_startPosition_13() { return static_cast<int32_t>(offsetof(StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37, ___startPosition_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPosition_13() const { return ___startPosition_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPosition_13() { return &___startPosition_13; }
	inline void set_startPosition_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPosition_13 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UserInfo
struct UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text UserInfo::userInfoText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___userInfoText_4;

public:
	inline static int32_t get_offset_of_userInfoText_4() { return static_cast<int32_t>(offsetof(UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F, ___userInfoText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_userInfoText_4() const { return ___userInfoText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_userInfoText_4() { return &___userInfoText_4; }
	inline void set_userInfoText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___userInfoText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___userInfoText_4), (void*)value);
	}
};


// WallRenderer
struct WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WallRenderer::GameMap
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameMap_4;
	// UnityEngine.GameObject WallRenderer::WallsContainer
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WallsContainer_5;
	// System.Single WallRenderer::X_COOR
	float ___X_COOR_6;
	// System.Single WallRenderer::Y_COOR
	float ___Y_COOR_7;
	// System.Int32 WallRenderer::MAX_GRID
	int32_t ___MAX_GRID_8;

public:
	inline static int32_t get_offset_of_GameMap_4() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6, ___GameMap_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameMap_4() const { return ___GameMap_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameMap_4() { return &___GameMap_4; }
	inline void set_GameMap_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameMap_4), (void*)value);
	}

	inline static int32_t get_offset_of_WallsContainer_5() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6, ___WallsContainer_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WallsContainer_5() const { return ___WallsContainer_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WallsContainer_5() { return &___WallsContainer_5; }
	inline void set_WallsContainer_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WallsContainer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WallsContainer_5), (void*)value);
	}

	inline static int32_t get_offset_of_X_COOR_6() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6, ___X_COOR_6)); }
	inline float get_X_COOR_6() const { return ___X_COOR_6; }
	inline float* get_address_of_X_COOR_6() { return &___X_COOR_6; }
	inline void set_X_COOR_6(float value)
	{
		___X_COOR_6 = value;
	}

	inline static int32_t get_offset_of_Y_COOR_7() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6, ___Y_COOR_7)); }
	inline float get_Y_COOR_7() const { return ___Y_COOR_7; }
	inline float* get_address_of_Y_COOR_7() { return &___Y_COOR_7; }
	inline void set_Y_COOR_7(float value)
	{
		___Y_COOR_7 = value;
	}

	inline static int32_t get_offset_of_MAX_GRID_8() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6, ___MAX_GRID_8)); }
	inline int32_t get_MAX_GRID_8() const { return ___MAX_GRID_8; }
	inline int32_t* get_address_of_MAX_GRID_8() { return &___MAX_GRID_8; }
	inline void set_MAX_GRID_8(int32_t value)
	{
		___MAX_GRID_8 = value;
	}
};

struct WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_StaticFields
{
public:
	// UnityEngine.Sprite WallRenderer::wall
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___wall_9;

public:
	inline static int32_t get_offset_of_wall_9() { return static_cast<int32_t>(offsetof(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_StaticFields, ___wall_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_wall_9() const { return ___wall_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_wall_9() { return &___wall_9; }
	inline void set_wall_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___wall_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall_9), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
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


// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_gshared (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___item1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void BFS::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS_SetupVariables_m03F1C7162565E95537CAE8F1CF8BD6E76DDDF599 (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Enqueue(!0)
inline void Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, int32_t, const RuntimeMethod*))Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::get_Item(System.Int32)
inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * (*) (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, int32_t, const RuntimeMethod*))List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_gshared)(__this, ___index0, ___value1, method);
}
// !0 System.Collections.Generic.Queue`1<System.Int32>::Dequeue()
inline int32_t Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2 (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_gshared)(__this, method);
}
// System.Void BFS::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS_Expand_mB4D3BC0B7CD7F6F3856B9711F7CA10854424D42D (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___parR1, int32_t ___parC2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Int32>::get_Count()
inline int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::Add(!0)
inline void List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::Clear()
inline void Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142 (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3 (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Int32>::.ctor()
inline void Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *, const RuntimeMethod*))Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void BFS2::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2_SetupVariables_mB1B323238FFC8054C10D8B84AEFC173D703F4300 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, const RuntimeMethod* method);
// System.Void NodeObject::.ctor(System.Single,System.Int32,System.Int32,NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, float ___value0, int32_t ___row1, int32_t ___col2, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___parent3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<NodeObject>::Enqueue(!0)
inline void Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8 (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *, const RuntimeMethod*))Queue_1_Enqueue_mCACF312F04BD04D69E3FBA7D779B5DBF39BB3728_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<NodeObject>::Dequeue()
inline NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * Queue_1_Dequeue_mC43AB16D28B79632192F43BD637B1301047A6555 (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * __this, const RuntimeMethod* method)
{
	return ((  NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * (*) (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *, const RuntimeMethod*))Queue_1_Dequeue_mE9A2A69E86A7EDA9FBCEA675542F01A6D8677A14_gshared)(__this, method);
}
// System.Int32 NodeObject::GetNodeObjectRow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method);
// System.Int32 NodeObject::GetNodeObjectCol()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method);
// System.Int32 BFS2::FindHeadDirection(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS2_FindHeadDirection_m9E6AE907467EB447E289436BC8CFD95E26A82EE3 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___food0, const RuntimeMethod* method);
// System.Void BFS2::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2_Expand_mFEE9421655F3DABD713DD3F1671E88D606D0814E (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___curr1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<NodeObject>::get_Count()
inline int32_t Queue_1_get_Count_m60253A590E0CE55FF9E382E64C3B686F5C89873B_inline (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *, const RuntimeMethod*))Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<NodeObject>::Clear()
inline void Queue_1_Clear_mE4F481DE6615C3D6B33426930F4CD8F29E6FF227 (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *, const RuntimeMethod*))Queue_1_Clear_m123D9273AFF968BD5C248D721870170B26FBEF6C_gshared)(__this, method);
}
// NodeObject NodeObject::GetNodeObjectParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<NodeObject>::.ctor()
inline void Queue_1__ctor_m6F08888F973B5A373D12B1F58C80057D92161D80 (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *, const RuntimeMethod*))Queue_1__ctor_m065613451660A1479E4D6D00878FB7630AFE4E11_gshared)(__this, method);
}
// System.Void GameHandler::InitializeUserInfo(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameHandler_InitializeUserInfo_m5187DD2F4A3DAFF40E0ADF52C7C2C1BE5269E7D6_inline (String_t* ___startInfo0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Boolean FoodRenderer::CheckValidPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FoodRenderer_CheckValidPosition_mE4DA8626D7CA7685E68F7AA67DDF53CCA40F804C (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rawPosition0, const RuntimeMethod* method);
// System.Void FoodRenderer::SpawnFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_SpawnFood_mFE2EA6F68E66F60EF30CE9726256D2961586522A (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<NodeType>()
inline NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String NodeType::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// UnityEngine.Sprite FoodRenderer::ChooseFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * FoodRenderer_ChooseFood_mDADAF3082D9608B4C18EAF6353BB9BC3229B9205 (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method);
// System.Void FoodRenderer::DrawFood(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_DrawFood_m7197CFC4962E00EFCE5DF9D22B74F45301D631BF (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___food0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_sortingLayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void FoodRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_SetObjectInMap_mD3B5664C8C656D06C6330369C00FAF2F0833A6CC (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method);
// System.Void NodeType::set_Type(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void GBFS::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_SetupVariables_m3FA327399E88A391E2437FD07FC8C12321A1C7C0 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method);
// System.Void GBFS::Enqueue(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_Enqueue_mAD03918F83928599E25CE1EA4622FD4F3BD17DBE (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___newNode0, const RuntimeMethod* method);
// NodeObject GBFS::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * GBFS_Dequeue_m2739CF06486C6B80D72F9DF01324AF4421DF5A26 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method);
// System.Int32 GBFS::FindHeadDirection(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GBFS_FindHeadDirection_m50009A41DCB362AF96AA260B4D7FDD4482743B44 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___food0, const RuntimeMethod* method);
// System.Void GBFS::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,NodeObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_Expand_m1F1B99D3D35240D5DA2F0EE046CDEB280296C3F9 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___curr1, int32_t ___endR2, int32_t ___endC3, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<NodeObject>::get_Count()
inline int32_t List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_inline (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Single GBFS::SetHeuristics(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GBFS_SetHeuristics_m85A2EB6E38D2F59D587E60DEA8E41EB01E532B15 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, int32_t ___foodRow0, int32_t ___foodCol1, int32_t ___nodeRow2, int32_t ___nodeCol3, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// System.Single NodeObject::GetNodeObjectVal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NodeObject_GetNodeObjectVal_mD622639CA15A7F16710994470C24F524DB474F12_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<NodeObject>::Add(!0)
inline void List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<NodeObject>::get_Item(System.Int32)
inline NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_inline (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<NodeObject>::Insert(System.Int32,!0)
inline void List_1_Insert_mCF871CE263296FD47D40887D07168C47674BD0C3 (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, int32_t ___index0, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, int32_t, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *, const RuntimeMethod*))List_1_Insert_mFC500A19C486C8ED4E9F3BDBA9B079602D647741_gshared)(__this, ___index0, ___item1, method);
}
// System.Void System.Collections.Generic.List`1<NodeObject>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m67583A6683BBD4EA3B86E17A672F78BFA690B60A (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<NodeObject>::Clear()
inline void List_1_Clear_m2998F2DB9EDF3DF6F580F7E4C2A77EDFF1D00BCD (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<NodeObject>::.ctor()
inline void List_1__ctor_m559ACFA7A22AED554F2913619728C27A59CDFFB4 (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<FoodRenderer>()
inline FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void GameHandler::FetchGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchGameObjects_m38DA6C693BC953DB1BD8D89859FA89AF3622C20D (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::FetchSnakeBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchSnakeBodies_mB094A5323C30D6ECA9A1D51FD24F7CAE3C8EE8BB (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::FetchHeadDirections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchHeadDirections_m3DEB62A95AD380B0CA9EF1171964B9B9BEF11077 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::SetMapToPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetMapToPass_m34702874B4C3F1F4C163FCDBED4BD39E58EC73A9 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::FindGBFSDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FindGBFSDirection_m513F447BB5A7172485B3E8A894432781F9E4083D (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::GetDestType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_GetDestType_mF4B4095B9CB92527CCBAC1449F87F3CFF81981C0 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::MoveSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeTail_mEBCB2F63B262CCE8B45DF75FDA5FBA278ABF31B3 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::MoveSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeBody_mB80D331A16B56A76ED6DE40BBE549B54A00468F7 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// System.Void GameHandler::MoveSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeHead_mE41691A04C161AD56BB4C524D548848B5224B643 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessStartInfo__ctor_mF3E954609281B15A18DFA30FA7614A85A28BFF2D (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_FileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_FileName_mC6BAAFFE1EF1B04AA7016AF1AEF504F4D95D4ABA_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_Arguments(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_Arguments_m635581BF6F0A9B0AB6D1906AD3EBF54A6155F137_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_UseShellExecute(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_UseShellExecute_m2AACDFAC98807AB1B63017B6C6702EE7BB6FA10D_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_CreateNoWindow(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_CreateNoWindow_mC255F2F45422A1C8B918A163F6CBC0E9120803B8_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardOutput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardOutput_m64D957AFEB6240BBB680555A3E151456FEF4BBE7_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Diagnostics.ProcessStartInfo::set_RedirectStandardError(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardError_m85790A47968728D48519D3EFB308764F20C19A00_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method);
// System.Diagnostics.Process System.Diagnostics.Process::Start(System.Diagnostics.ProcessStartInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * Process_Start_m1D784F6C4E5162F07CA76E1C5F5AF2461B6D1006 (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * ___startInfo0, const RuntimeMethod* method);
// System.IO.StreamReader System.Diagnostics.Process::get_StandardError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * Process_get_StandardError_mA7F99DCE952C672449F5C11623955B698A464129 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.IO.StreamReader System.Diagnostics.Process::get_StandardOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * Process_get_StandardOutput_m24BB4DBF4A723F0A67FD12DD6ADB46D4FDBCD958 (Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * __this, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void GBFS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS__ctor_mAFC9DA6D93CC2A99A0D6DE4C95812A2B8F5F171B (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method);
// System.Int32 GBFS::FindPath(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GBFS_FindPath_m8D692F50683FC8234D228BAE75BE88449345A57D (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___startR1, int32_t ___startC2, int32_t ___endR3, int32_t ___endC4, const RuntimeMethod* method);
// System.Void BFS2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2__ctor_m4D3D12F0E51F415D2D05EF6DB71159F5784310AA (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, const RuntimeMethod* method);
// System.Int32 BFS2::FindPath(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS2_FindPath_m62A158D379B2471F015A4E38D27625796D369055 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___startR1, int32_t ___startC2, int32_t ___endR3, int32_t ___endC4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// !!0[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Transform>()
inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6662AE3C936281A25097CCBD9098A9F85C69279A_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SnakeHeadDirection>()
inline SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>::Clear()
inline void List_1_Clear_m3E59DD720B791615E831DA0746ACEF3C7B0A84FE (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void GameHandler::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SnakeBodyDirection>()
inline SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<SnakeTailDirection>()
inline SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<SnakeBodyDirection>()
inline SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void GameHandler::SetRemainingFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetRemainingFood_m41CAEB1BCA9F5EAF1BCA1D62141C663D76F46238 (const RuntimeMethod* method);
// System.Int32 GameHandler::GetRemainingFood()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameHandler_GetRemainingFood_m4F8EF878B056E1BB74EF07329CB2E915F5E7023A_inline (const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.AudioSource>::get_Item(System.Int32)
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * List_1_get_Item_mFA419B212A3BA0A339239EF76F8C2356EECB2773_inline (List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void GameHandler::InitializeRemainingFood(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameHandler_InitializeRemainingFood_m04A42B5FB017997691C28EE2D45C759885B2C2A2_inline (int32_t ___givenFood0, const RuntimeMethod* method);
// System.Collections.IEnumerator Loader::AsyncLoad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loader_AsyncLoad_mBB5E380629F7C39BC006106A5CA1D4B9C5C86E2B (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void Loader/<AsyncLoad>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadU3Ed__3__ctor_m5213D9CDB4F7310547B2C5EE19991606651E1975 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.AudioSource>::.ctor()
inline void List_1__ctor_m43D13796D624C614140D9E1C89CCA71088BE52D3 (List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void StartSnakeRenderer::FetchSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeHead_m84435E09AE82E0FEF0CD1A59C3E360E4D84AC502 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::FetchSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeBody_mC142683325FC529CD0CF6BB0BB5D18132F9410F0 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::FetchSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeTail_m780A2EB0E838B5A50A8DDAACA70A813374A54F23 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::PickRandStartDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PickRandStartDir_mFD7B4C949A9514098DFFADB5F7E5F07352AD9765 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::PickRandPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PickRandPos_mFCFB12DB443DF76165E74BE6D4569CD609DB2148 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::PrepareContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PrepareContainer_m85F193EE8CD47E4572F9F87D2E6DBD9D1FC39250 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::PrepareSnake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PrepareSnake_m091460685D2BBE11F24F5C4BB8D7398C8D89A763 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void StartSnakeRenderer::DrawSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeHead_mAC0E878E998F5930CD0196F06B1C35AD294D6CB9 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::DrawSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeBody_m4A0234D49FEB3BA887FFEE0590B5C9182B2040CF (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::DrawSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeTail_mF398DA4FA498686EEA05A6F727F9693B500836DB (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<SnakeHeadDirection>()
inline SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * GameObject_AddComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_m5183CC7C9C06B65F269EF77B062B89C2B1232F97 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void StartSnakeRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_SetObjectInMap_m2EA302499A83B3C47C25FBB442D84CD535ABE3EC (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<SnakeTailDirection>()
inline SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * GameObject_AddComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mA88253875B32BF67D9E653F28D441E2226CC47AA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.String GameHandler::GetUserInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameHandler_GetUserInfo_m6575305204F8ED4F1E57C9F4802DFBD46432CE09_inline (const RuntimeMethod* method);
// System.Void WallRenderer::PrepareContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_PrepareContainer_m2BE3832087F40F468FF08827357507C2A8DD9012 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method);
// System.Void WallRenderer::PrepareWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_PrepareWalls_m70CEF3796C530AAF340F35D5EA79F887635858C8 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method);
// System.Void WallRenderer::DrawWalls(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_DrawWalls_mCA020F93E44120A8F9C60887A10D42D55C3431F2 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, int32_t ___xIndex0, int32_t ___yIndex1, const RuntimeMethod* method);
// System.Void WallRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_SetObjectInMap_mFD74D418682921ED0AF8E43A28869997C032BDE4 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Int32 BFS::FindPath(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS_FindPath_m905847890C0965FFEF7F1B8198E0F1F967F1157E (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___startR1, int32_t ___startC2, int32_t ___endR3, int32_t ___endC4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// SetupVariables();
		BFS_SetupVariables_m03F1C7162565E95537CAE8F1CF8BD6E76DDDF599(__this, /*hidden argument*/NULL);
		// rowQueue.Enqueue(startR);
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_0 = __this->get_rowQueue_8();
		int32_t L_1 = ___startR1;
		NullCheck(L_0);
		Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC(L_0, L_1, /*hidden argument*/Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		// colQueue.Enqueue(startC);
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_2 = __this->get_colQueue_9();
		int32_t L_3 = ___startC2;
		NullCheck(L_2);
		Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		// visited[startR][startC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_4 = __this->get_visited_5();
		int32_t L_5 = ___startR1;
		NullCheck(L_4);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6;
		L_6 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_7 = ___startC2;
		NullCheck(L_6);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_6, L_7, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		goto IL_009c;
	}

IL_0033:
	{
		// int currR = rowQueue.Dequeue();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_8 = __this->get_rowQueue_8();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_8, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		V_0 = L_9;
		// int currC = colQueue.Dequeue();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_10 = __this->get_colQueue_9();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2(L_10, /*hidden argument*/Queue_1_Dequeue_mFDBF1CEA9D4C711CA7A74581CBB98D146CB1F2C2_RuntimeMethod_var);
		V_1 = L_11;
		// if (currR == endR && currC == endC)
		int32_t L_12 = V_0;
		int32_t L_13 = ___endR3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15 = ___endC4;
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_005c;
		}
	}
	{
		// return moveCount;
		int32_t L_16 = __this->get_moveCount_2();
		return L_16;
	}

IL_005c:
	{
		// Expand(gameMap, currR, currC);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_17 = ___gameMap0;
		int32_t L_18 = V_0;
		int32_t L_19 = V_1;
		BFS_Expand_mB4D3BC0B7CD7F6F3856B9711F7CA10854424D42D(__this, L_17, L_18, L_19, /*hidden argument*/NULL);
		// nodesLeftInLayer--;
		int32_t L_20 = __this->get_nodesLeftInLayer_3();
		__this->set_nodesLeftInLayer_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)));
		// if (nodesLeftInLayer == 0)
		int32_t L_21 = __this->get_nodesLeftInLayer_3();
		if (L_21)
		{
			goto IL_009c;
		}
	}
	{
		// nodesLeftInLayer = nodesInNextLayer;
		int32_t L_22 = __this->get_nodesInNextLayer_4();
		__this->set_nodesLeftInLayer_3(L_22);
		// nodesInNextLayer = 0;
		__this->set_nodesInNextLayer_4(0);
		// moveCount++;
		int32_t L_23 = __this->get_moveCount_2();
		__this->set_moveCount_2(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
	}

IL_009c:
	{
		// while (rowQueue.Count > 0 || colQueue.Count > 0)
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_24 = __this->get_rowQueue_8();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline(L_24, /*hidden argument*/Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_26 = __this->get_colQueue_9();
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_inline(L_26, /*hidden argument*/Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_RuntimeMethod_var);
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Void BFS::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS_Expand_mB4D3BC0B7CD7F6F3856B9711F7CA10854424D42D (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___parR1, int32_t ___parC2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_0099;
	}

IL_0007:
	{
		// int adjR = parR + rowDirection[i];
		int32_t L_0 = ___parR1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_rowDirection_6();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_4));
		// int adjC = parC + colDirection[i];
		int32_t L_5 = ___parC2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_colDirection_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)L_9));
		// if (adjR < 0 || adjC < 0) continue;
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0095;
		}
	}
	{
		// if (adjR >= WIDTH || adjC >= HEIGHT) continue;
		int32_t L_12 = V_1;
		int32_t L_13 = __this->get_WIDTH_0();
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_14 = V_2;
		int32_t L_15 = __this->get_HEIGHT_1();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0095;
		}
	}
	{
		// if (visited[adjR][adjC] == 1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_16 = __this->get_visited_5();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_18;
		L_18 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_0095;
		}
	}
	{
		// if (gameMap[adjR][adjC] == -1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_21 = ___gameMap0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23;
		L_23 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_24 = V_2;
		NullCheck(L_23);
		int32_t L_25;
		L_25 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_25) == ((int32_t)(-1))))
		{
			goto IL_0095;
		}
	}
	{
		// rowQueue.Enqueue(adjR);
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_26 = __this->get_rowQueue_8();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC(L_26, L_27, /*hidden argument*/Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		// colQueue.Enqueue(adjC);
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_28 = __this->get_colQueue_9();
		int32_t L_29 = V_2;
		NullCheck(L_28);
		Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC(L_28, L_29, /*hidden argument*/Queue_1_Enqueue_m8FE6785C5E6CFAE21062A14D87962B521D644FEC_RuntimeMethod_var);
		// visited[adjR][adjC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_30 = __this->get_visited_5();
		int32_t L_31 = V_1;
		NullCheck(L_30);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_32;
		L_32 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_33 = V_2;
		NullCheck(L_32);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_32, L_33, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// nodesInNextLayer++;
		int32_t L_34 = __this->get_nodesInNextLayer_4();
		__this->set_nodesInNextLayer_4(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
	}

IL_0095:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_0099:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BFS::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS_SetupVariables_m03F1C7162565E95537CAE8F1CF8BD6E76DDDF599 (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < WIDTH; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// List<int> data = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_0;
		// for (int j = 0; j < HEIGHT; j++)
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// data.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_1;
		NullCheck(L_1);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0019:
	{
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_3 = V_2;
		int32_t L_4 = __this->get_HEIGHT_1();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		// visited.Add(data);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_5 = __this->get_visited_5();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED(L_5, L_6, /*hidden argument*/List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_WIDTH_0();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// rowQueue.Clear();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_10 = __this->get_rowQueue_8();
		NullCheck(L_10);
		Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142(L_10, /*hidden argument*/Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_RuntimeMethod_var);
		// colQueue.Clear();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_11 = __this->get_colQueue_9();
		NullCheck(L_11);
		Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142(L_11, /*hidden argument*/Queue_1_Clear_mCA5B5FB0A29D86F6784C29F2F076F4D4A66E3142_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 BFS::FindHeadDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS_FindHeadDirection_mCA348595F76F75C1B969AB57E90EDDBDE433A366 (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, const RuntimeMethod* method)
{
	{
		// int direction = 0;
		// return direction;
		return 0;
	}
}
// System.Void BFS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS__ctor_mB277C5F7945036353F3D9FD808FFBA6683B07622 (BFS_tB49C45B8D09D4D82A90BF98CA9C069F6198ECB34 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int WIDTH = 20;
		__this->set_WIDTH_0(((int32_t)20));
		// private readonly int HEIGHT = 20;
		__this->set_HEIGHT_1(((int32_t)20));
		// private int nodesLeftInLayer = 1;
		__this->set_nodesLeftInLayer_3(1);
		// private List<List<int>> visited = new List<List<int>>();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_0 = (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *)il2cpp_codegen_object_new(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3(L_0, /*hidden argument*/List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		__this->set_visited_5(L_0);
		// private readonly int[] rowDirection = { -1, 1, 0, 0 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->set_rowDirection_6(L_3);
		// private readonly int[] colDirection = { 0, 0, 1, -1 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		__this->set_colDirection_7(L_6);
		// private Queue<int> rowQueue = new Queue<int>();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_7 = (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *)il2cpp_codegen_object_new(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D(L_7, /*hidden argument*/Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var);
		__this->set_rowQueue_8(L_7);
		// private Queue<int> colQueue = new Queue<int>();
		Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * L_8 = (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F *)il2cpp_codegen_object_new(Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F_il2cpp_TypeInfo_var);
		Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D(L_8, /*hidden argument*/Queue_1__ctor_mAF21CEAD55C8D16F8DCAEF21864939658136AA4D_RuntimeMethod_var);
		__this->set_colQueue_9(L_8);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Int32 BFS2::FindPath(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS2_FindPath_m62A158D379B2471F015A4E38D27625796D369055 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___startR1, int32_t ___startC2, int32_t ___endR3, int32_t ___endC4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mC43AB16D28B79632192F43BD637B1301047A6555_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m60253A590E0CE55FF9E382E64C3B686F5C89873B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_0 = NULL;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_1 = NULL;
	{
		// SetupVariables();
		BFS2_SetupVariables_mB1B323238FFC8054C10D8B84AEFC173D703F4300(__this, /*hidden argument*/NULL);
		// NodeObject start = new NodeObject(2, startR, startC, null);
		int32_t L_0 = ___startR1;
		int32_t L_1 = ___startC2;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_2 = (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)il2cpp_codegen_object_new(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2(L_2, (2.0f), L_0, L_1, (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		// queue.Enqueue(start);
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_3 = __this->get_queue_8();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_4 = V_0;
		NullCheck(L_3);
		Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8(L_3, L_4, /*hidden argument*/Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8_RuntimeMethod_var);
		// visited[startR][startC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_5 = __this->get_visited_5();
		int32_t L_6 = ___startR1;
		NullCheck(L_5);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_7;
		L_7 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_8 = ___startC2;
		NullCheck(L_7);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_7, L_8, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		goto IL_009c;
	}

IL_0035:
	{
		// NodeObject curr = queue.Dequeue();
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_9 = __this->get_queue_8();
		NullCheck(L_9);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_10;
		L_10 = Queue_1_Dequeue_mC43AB16D28B79632192F43BD637B1301047A6555(L_9, /*hidden argument*/Queue_1_Dequeue_mC43AB16D28B79632192F43BD637B1301047A6555_RuntimeMethod_var);
		V_1 = L_10;
		// if(curr.GetNodeObjectRow() == endR && curr.GetNodeObjectCol() == endC)
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___endR3;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_005d;
		}
	}
	{
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_14, /*hidden argument*/NULL);
		int32_t L_16 = ___endC4;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_005d;
		}
	}
	{
		// return FindHeadDirection(curr);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_17 = V_1;
		int32_t L_18;
		L_18 = BFS2_FindHeadDirection_m9E6AE907467EB447E289436BC8CFD95E26A82EE3(__this, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_005d:
	{
		// Expand(gameMap, curr);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_19 = ___gameMap0;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_20 = V_1;
		BFS2_Expand_mFEE9421655F3DABD713DD3F1671E88D606D0814E(__this, L_19, L_20, /*hidden argument*/NULL);
		// nodesLeftInLayer--;
		int32_t L_21 = __this->get_nodesLeftInLayer_3();
		__this->set_nodesLeftInLayer_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		// if (nodesLeftInLayer == 0)
		int32_t L_22 = __this->get_nodesLeftInLayer_3();
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		// nodesLeftInLayer = nodesInNextLayer;
		int32_t L_23 = __this->get_nodesInNextLayer_4();
		__this->set_nodesLeftInLayer_3(L_23);
		// nodesInNextLayer = 0;
		__this->set_nodesInNextLayer_4(0);
		// moveCount++;
		int32_t L_24 = __this->get_moveCount_2();
		__this->set_moveCount_2(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)));
	}

IL_009c:
	{
		// while (queue.Count > 0)
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_25 = __this->get_queue_8();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = Queue_1_get_Count_m60253A590E0CE55FF9E382E64C3B686F5C89873B_inline(L_25, /*hidden argument*/Queue_1_get_Count_m60253A590E0CE55FF9E382E64C3B686F5C89873B_RuntimeMethod_var);
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Void BFS2::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2_Expand_mFEE9421655F3DABD713DD3F1671E88D606D0814E (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___curr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_3 = NULL;
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_00ae;
	}

IL_0007:
	{
		// int adjR = curr.GetNodeObjectRow() + rowDirection[i];
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___curr1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_0, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_rowDirection_6();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5));
		// int adjC = curr.GetNodeObjectCol() + colDirection[i];
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_6 = ___curr1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_colDirection_7();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		// if (adjR < 0 || adjC < 0) continue;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_00aa;
		}
	}
	{
		// if (adjR >= WIDTH || adjC >= HEIGHT) continue;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get_WIDTH_0();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_16 = V_2;
		int32_t L_17 = __this->get_HEIGHT_1();
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_00aa;
		}
	}
	{
		// if (visited[adjR][adjC] == 1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_18 = __this->get_visited_5();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20;
		L_20 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_00aa;
		}
	}
	{
		// if (gameMap[adjR][adjC] == -1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_23 = ___gameMap0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_25;
		L_25 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_00aa;
		}
	}
	{
		// NodeObject adj = new NodeObject(gameMap[adjR][adjC], adjR, adjC, curr);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_28 = ___gameMap0;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_30;
		L_30 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32;
		L_32 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_35 = ___curr1;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_36 = (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)il2cpp_codegen_object_new(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2(L_36, ((float)((float)L_32)), L_33, L_34, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// queue.Enqueue(adj);
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_37 = __this->get_queue_8();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_38 = V_3;
		NullCheck(L_37);
		Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8(L_37, L_38, /*hidden argument*/Queue_1_Enqueue_m39EF72ACEF4ACF725AE56610B95A31CE459B82B8_RuntimeMethod_var);
		// visited[adjR][adjC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_39 = __this->get_visited_5();
		int32_t L_40 = V_1;
		NullCheck(L_39);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_41;
		L_41 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_42 = V_2;
		NullCheck(L_41);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_41, L_42, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// nodesInNextLayer++;
		int32_t L_43 = __this->get_nodesInNextLayer_4();
		__this->set_nodesInNextLayer_4(((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)));
	}

IL_00aa:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00ae:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_45 = V_0;
		if ((((int32_t)L_45) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BFS2::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2_SetupVariables_mB1B323238FFC8054C10D8B84AEFC173D703F4300 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mE4F481DE6615C3D6B33426930F4CD8F29E6FF227_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < WIDTH; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// List<int> data = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_0;
		// for (int j = 0; j < HEIGHT; j++)
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// data.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_1;
		NullCheck(L_1);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0019:
	{
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_3 = V_2;
		int32_t L_4 = __this->get_HEIGHT_1();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		// visited.Add(data);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_5 = __this->get_visited_5();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED(L_5, L_6, /*hidden argument*/List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_WIDTH_0();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// queue.Clear();
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_10 = __this->get_queue_8();
		NullCheck(L_10);
		Queue_1_Clear_mE4F481DE6615C3D6B33426930F4CD8F29E6FF227(L_10, /*hidden argument*/Queue_1_Clear_mE4F481DE6615C3D6B33426930F4CD8F29E6FF227_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 BFS2::FindHeadDirection(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BFS2_FindHeadDirection_m9E6AE907467EB447E289436BC8CFD95E26A82EE3 (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___food0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral810633021F0DC0F0DC98A2F0D4AB3C0BB14EA096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A6CE5F0807A612D9F35270247E47F709FAE1BD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_1 = NULL;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int direction = 0;
		V_0 = 0;
		// temp = food;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___food0;
		V_1 = L_0;
		// temp2 = temp;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_1 = V_1;
		V_2 = L_1;
		goto IL_0011;
	}

IL_0008:
	{
		// temp2 = temp;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_2 = V_1;
		V_2 = L_2;
		// temp = temp.GetNodeObjectParent();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_3 = V_1;
		NullCheck(L_3);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_4;
		L_4 = NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_0011:
	{
		// while(temp.GetNodeObjectParent() != null)
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_5 = V_1;
		NullCheck(L_5);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_6;
		L_6 = NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0008;
		}
	}
	{
		// temp2Row = temp2.GetNodeObjectRow();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// temp2Col = temp2.GetNodeObjectCol();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// tempRow = temp.GetNodeObjectRow();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// tempCol = temp.GetNodeObjectCol();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// Debug.Log("TEMP 2 : " + temp2Row + " " + temp2Col);
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral810633021F0DC0F0DC98A2F0D4AB3C0BB14EA096, L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// Debug.Log("TEMP : " + tempRow + " " + tempCol);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA7A6CE5F0807A612D9F35270247E47F709FAE1BD, L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// if (temp2Row == tempRow && temp2Col == tempCol + 1) direction = 0;
		int32_t L_21 = V_3;
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_6;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))))))
		{
			goto IL_008b;
		}
	}
	{
		// if (temp2Row == tempRow && temp2Col == tempCol + 1) direction = 0;
		V_0 = 0;
	}

IL_008b:
	{
		// if (temp2Row == tempRow && temp2Col == tempCol - 1) direction = 2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_6;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))))))
		{
			goto IL_009a;
		}
	}
	{
		// if (temp2Row == tempRow && temp2Col == tempCol - 1) direction = 2;
		V_0 = 2;
	}

IL_009a:
	{
		// if (temp2Row == tempRow + 1 && temp2Col == tempCol) direction = 1;
		int32_t L_29 = V_3;
		int32_t L_30 = V_5;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_31 = V_4;
		int32_t L_32 = V_6;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_00a9;
		}
	}
	{
		// if (temp2Row == tempRow + 1 && temp2Col == tempCol) direction = 1;
		V_0 = 1;
	}

IL_00a9:
	{
		// if (temp2Row == tempRow - 1 && temp2Col == tempCol) direction = 3;
		int32_t L_33 = V_3;
		int32_t L_34 = V_5;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_35 = V_4;
		int32_t L_36 = V_6;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00b8;
		}
	}
	{
		// if (temp2Row == tempRow - 1 && temp2Col == tempCol) direction = 3;
		V_0 = 3;
	}

IL_00b8:
	{
		// return direction;
		int32_t L_37 = V_0;
		return L_37;
	}
}
// System.Void BFS2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BFS2__ctor_m4D3D12F0E51F415D2D05EF6DB71159F5784310AA (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6F08888F973B5A373D12B1F58C80057D92161D80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int WIDTH = 20;
		__this->set_WIDTH_0(((int32_t)20));
		// private readonly int HEIGHT = 20;
		__this->set_HEIGHT_1(((int32_t)20));
		// private int nodesLeftInLayer = 1;
		__this->set_nodesLeftInLayer_3(1);
		// private List<List<int>> visited = new List<List<int>>();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_0 = (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *)il2cpp_codegen_object_new(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3(L_0, /*hidden argument*/List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		__this->set_visited_5(L_0);
		// private readonly int[] rowDirection = { -1, 1, 0, 0 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->set_rowDirection_6(L_3);
		// private readonly int[] colDirection = { 0, 0, 1, -1 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		__this->set_colDirection_7(L_6);
		// private Queue<NodeObject> queue = new Queue<NodeObject>();
		Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 * L_7 = (Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6 *)il2cpp_codegen_object_new(Queue_1_tDE27D36F1AFE7362327F765E87A4B613C08387C6_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6F08888F973B5A373D12B1F58C80057D92161D80(L_7, /*hidden argument*/Queue_1__ctor_m6F08888F973B5A373D12B1F58C80057D92161D80_RuntimeMethod_var);
		__this->set_queue_8(L_7);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void FoodRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_Start_mBDD88615A84E14BA332E527E107E700782B9CDF0 (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FoodList = GameAssets.instance.Foods;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_1 = L_0->get_Foods_6();
		__this->set_FoodList_9(L_1);
		// GameHandler.InitializeUserInfo("Tap Food Position");
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		GameHandler_InitializeUserInfo_m5187DD2F4A3DAFF40E0ADF52C7C2C1BE5269E7D6_inline(_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FoodRenderer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_Update_mA79EA71C64CDC1BF867614F0E9A7564F4224DF8C (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C);
		s_Il2CppMethodInitialized = true;
	}
	Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// GameMap = GameObject.Find("/Map");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C, /*hidden argument*/NULL);
		__this->set_GameMap_6(L_0);
		// if (Input.touchCount == 1)
		int32_t L_1;
		L_1 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_006f;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_2;
		L_2 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(0, /*hidden argument*/NULL);
		V_0 = L_2;
		// touchPosition = touch.position;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)(&V_0), /*hidden argument*/NULL);
		__this->set_touchPosition_7(L_3);
		// Vector3 objectPosition = mainCamera.ScreenToWorldPoint(touchPosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_mainCamera_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = __this->get_touchPosition_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_4, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// objectPosition.z = 0f;
		(&V_1)->set_z_4((0.0f));
		// if (CheckValidPosition(objectPosition))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = FoodRenderer_CheckValidPosition_mE4DA8626D7CA7685E68F7AA67DDF53CCA40F804C(__this, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		// SpawnFood();
		FoodRenderer_SpawnFood_mFE2EA6F68E66F60EF30CE9726256D2961586522A(__this, /*hidden argument*/NULL);
		// gameHandler.enabled = true;
		GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * L_11 = __this->get_gameHandler_5();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// if(Input.GetMouseButtonDown(0))
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00c0;
		}
	}
	{
		// Vector2 mousePosition = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14;
		L_14 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// Vector3 objectPosition = mainCamera.ScreenToWorldPoint(mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_15 = __this->get_mainCamera_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_16 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_15, L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		// objectPosition.z = 0f;
		(&V_3)->set_z_4((0.0f));
		// if(CheckValidPosition(objectPosition))
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20;
		L_20 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_19, /*hidden argument*/NULL);
		bool L_21;
		L_21 = FoodRenderer_CheckValidPosition_mE4DA8626D7CA7685E68F7AA67DDF53CCA40F804C(__this, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_00c0;
		}
	}
	{
		// SpawnFood();
		FoodRenderer_SpawnFood_mFE2EA6F68E66F60EF30CE9726256D2961586522A(__this, /*hidden argument*/NULL);
		// gameHandler.enabled = true;
		GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * L_22 = __this->get_gameHandler_5();
		NullCheck(L_22);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_22, (bool)1, /*hidden argument*/NULL);
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Boolean FoodRenderer::CheckValidPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FoodRenderer_CheckValidPosition_mE4DA8626D7CA7685E68F7AA67DDF53CCA40F804C (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rawPosition0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if( rawPosition.x > 1 &&
		//     rawPosition.y > 1 &&
		//     rawPosition.x < 19 &&
		//     rawPosition.y < 19 )
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___rawPosition0;
		float L_1 = L_0.get_x_0();
		if ((!(((float)L_1) > ((float)(1.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rawPosition0;
		float L_3 = L_2.get_y_1();
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___rawPosition0;
		float L_5 = L_4.get_x_0();
		if ((!(((float)L_5) < ((float)(19.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rawPosition0;
		float L_7 = L_6.get_y_1();
		if ((!(((float)L_7) < ((float)(19.0f)))))
		{
			goto IL_00cc;
		}
	}
	{
		// fixedPosition.x = Mathf.Floor(rawPosition.x) + 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_8 = __this->get_address_of_fixedPosition_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = ___rawPosition0;
		float L_10 = L_9.get_x_0();
		float L_11;
		L_11 = floorf(L_10);
		L_8->set_x_0(((float)il2cpp_codegen_add((float)L_11, (float)(0.5f))));
		// fixedPosition.y = Mathf.Floor(rawPosition.y) + 0.5f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_fixedPosition_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = ___rawPosition0;
		float L_14 = L_13.get_y_1();
		float L_15;
		L_15 = floorf(L_14);
		L_12->set_y_1(((float)il2cpp_codegen_add((float)L_15, (float)(0.5f))));
		// NodeType nodeType = GameMap.transform.GetChild(Mathf.FloorToInt(fixedPosition.x)).GetChild(Mathf.FloorToInt(fixedPosition.y)).gameObject.GetComponent<NodeType>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_GameMap_6();
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_fixedPosition_8();
		float L_19 = L_18->get_x_0();
		int32_t L_20;
		L_20 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_17, L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_fixedPosition_8();
		float L_23 = L_22->get_y_1();
		int32_t L_24;
		L_24 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_21, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_27;
		L_27 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_26, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		// if(nodeType.Type != "")
		NullCheck(L_27);
		String_t* L_28;
		L_28 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00ca;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00ca:
	{
		// return true;
		return (bool)1;
	}

IL_00cc:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void FoodRenderer::SpawnFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_SpawnFood_mFE2EA6F68E66F60EF30CE9726256D2961586522A (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method)
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_0 = NULL;
	{
		// Sprite chosenFood = ChooseFood();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0;
		L_0 = FoodRenderer_ChooseFood_mDADAF3082D9608B4C18EAF6353BB9BC3229B9205(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// DrawFood(chosenFood);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = V_0;
		FoodRenderer_DrawFood_m7197CFC4962E00EFCE5DF9D22B74F45301D631BF(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Sprite FoodRenderer::ChooseFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * FoodRenderer_ChooseFood_mDADAF3082D9608B4C18EAF6353BB9BC3229B9205 (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomFoodIndex = Random.Range(0, FoodList.Count - 1);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = __this->get_FoodList_9();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_inline(L_0, /*hidden argument*/List_1_get_Count_mF608E717F324700CEA814E2E1E7B1DA9F08CAB54_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		// Sprite chosenFood = FoodList[randomFoodIndex];
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_3 = __this->get_FoodList_9();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5;
		L_5 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		// return chosenFood;
		return L_5;
	}
}
// System.Void FoodRenderer::DrawFood(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_DrawFood_m7197CFC4962E00EFCE5DF9D22B74F45301D631BF (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___food0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CA85788408DC959977CDF46B88B3416689112A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// GameObject foodGameObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// SpriteRenderer foodRenderer = foodGameObject.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_1, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		V_0 = L_2;
		// BoxCollider2D foodCollider = foodGameObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_1;
		NullCheck(L_3);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4;
		L_4 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_3, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// foodRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = V_0;
		NullCheck(L_5);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_5, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// foodRenderer.sprite = food;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = V_0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = ___food0;
		NullCheck(L_6);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_6, L_7, /*hidden argument*/NULL);
		// Vector2 colliderSize = new Vector2(0.9f, 0.9f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_1), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		// foodCollider.size = colliderSize;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_1;
		NullCheck(L_4);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_4, L_8, /*hidden argument*/NULL);
		// string GAMEOBJECT_NAME = "SnakeFood";
		V_2 = _stringLiteral93CA85788408DC959977CDF46B88B3416689112A;
		// string GAMEOBJECT_TAG = "Food";
		V_3 = _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
		// Vector3 GAMEOBJECT_POS = new Vector3();
		il2cpp_codegen_initobj((&V_4), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// GAMEOBJECT_POS.x = fixedPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_fixedPosition_8();
		float L_10 = L_9->get_x_0();
		(&V_4)->set_x_2(L_10);
		// GAMEOBJECT_POS.y = fixedPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_11 = __this->get_address_of_fixedPosition_8();
		float L_12 = L_11->get_y_1();
		(&V_4)->set_y_3(L_12);
		// GAMEOBJECT_POS.z = 0f;
		(&V_4)->set_z_4((0.0f));
		// foodGameObject.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_3;
		String_t* L_14 = V_2;
		NullCheck(L_13);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_13, L_14, /*hidden argument*/NULL);
		// foodGameObject.tag = GAMEOBJECT_TAG;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_13;
		String_t* L_16 = V_3;
		NullCheck(L_15);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_15, L_16, /*hidden argument*/NULL);
		// foodGameObject.transform.Translate(GAMEOBJECT_POS);
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_4;
		NullCheck(L_17);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_17, L_18, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(fixedPosition.x), Mathf.FloorToInt(fixedPosition.y), "Food");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_19 = __this->get_address_of_fixedPosition_8();
		float L_20 = L_19->get_x_0();
		int32_t L_21;
		L_21 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_20, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_22 = __this->get_address_of_fixedPosition_8();
		float L_23 = L_22->get_y_1();
		int32_t L_24;
		L_24 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_23, /*hidden argument*/NULL);
		FoodRenderer_SetObjectInMap_mD3B5664C8C656D06C6330369C00FAF2F0833A6CC(__this, L_21, L_24, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FoodRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer_SetObjectInMap_mD3B5664C8C656D06C6330369C00FAF2F0833A6CC (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameMap_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___xIndex0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___yIndex1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_7;
		L_7 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_6, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		String_t* L_8 = ___content2;
		NullCheck(L_7);
		NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FoodRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoodRenderer__ctor_m44EAD01BFAD2BFA994C272264FE69C4475F42266 (FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Sprite> FoodList = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_0, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_FoodList_9(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Int32 GBFS::FindPath(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GBFS_FindPath_m8D692F50683FC8234D228BAE75BE88449345A57D (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, int32_t ___startR1, int32_t ___startC2, int32_t ___endR3, int32_t ___endC4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_0 = NULL;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_1 = NULL;
	{
		// SetupVariables();
		GBFS_SetupVariables_m3FA327399E88A391E2437FD07FC8C12321A1C7C0(__this, /*hidden argument*/NULL);
		// NodeObject start = new NodeObject(2, startR, startC, null);
		int32_t L_0 = ___startR1;
		int32_t L_1 = ___startC2;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_2 = (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)il2cpp_codegen_object_new(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2(L_2, (2.0f), L_0, L_1, (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		// Enqueue(start);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_3 = V_0;
		GBFS_Enqueue_mAD03918F83928599E25CE1EA4622FD4F3BD17DBE(__this, L_3, /*hidden argument*/NULL);
		// visited[startR][startC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_4 = __this->get_visited_4();
		int32_t L_5 = ___startR1;
		NullCheck(L_4);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6;
		L_6 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_7 = ___startC2;
		NullCheck(L_6);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_6, L_7, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		goto IL_0088;
	}

IL_0030:
	{
		// NodeObject curr = Dequeue();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_8;
		L_8 = GBFS_Dequeue_m2739CF06486C6B80D72F9DF01324AF4421DF5A26(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		// if (curr.GetNodeObjectRow() == endR && curr.GetNodeObjectCol() == endC)
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_9, /*hidden argument*/NULL);
		int32_t L_11 = ___endR3;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_0053;
		}
	}
	{
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_12, /*hidden argument*/NULL);
		int32_t L_14 = ___endC4;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0053;
		}
	}
	{
		// return FindHeadDirection(curr);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_15 = V_1;
		int32_t L_16;
		L_16 = GBFS_FindHeadDirection_m50009A41DCB362AF96AA260B4D7FDD4482743B44(__this, L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0053:
	{
		// Expand(gameMap, curr, endR, endC);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_17 = ___gameMap0;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_18 = V_1;
		int32_t L_19 = ___endR3;
		int32_t L_20 = ___endC4;
		GBFS_Expand_m1F1B99D3D35240D5DA2F0EE046CDEB280296C3F9(__this, L_17, L_18, L_19, L_20, /*hidden argument*/NULL);
		// nodesLeftInLayer--;
		int32_t L_21 = __this->get_nodesLeftInLayer_2();
		__this->set_nodesLeftInLayer_2(((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)));
		// if (nodesLeftInLayer == 0)
		int32_t L_22 = __this->get_nodesLeftInLayer_2();
		if (L_22)
		{
			goto IL_0088;
		}
	}
	{
		// nodesLeftInLayer = nodesInNextLayer;
		int32_t L_23 = __this->get_nodesInNextLayer_3();
		__this->set_nodesLeftInLayer_2(L_23);
		// nodesInNextLayer = 0;
		__this->set_nodesInNextLayer_3(0);
	}

IL_0088:
	{
		// while (queue.Count > 0)
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_24 = __this->get_queue_7();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_inline(L_24, /*hidden argument*/List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var);
		if ((((int32_t)L_25) > ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Void GBFS::Expand(System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Int32>>,NodeObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_Expand_m1F1B99D3D35240D5DA2F0EE046CDEB280296C3F9 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * ___gameMap0, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___curr1, int32_t ___endR2, int32_t ___endC3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_3 = NULL;
	{
		// for (int i = 0; i < 4; i++)
		V_0 = 0;
		goto IL_00a6;
	}

IL_0007:
	{
		// int adjR = curr.GetNodeObjectRow() + rowDirection[i];
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___curr1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_0, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_rowDirection_5();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_5));
		// int adjC = curr.GetNodeObjectCol() + colDirection[i];
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_6 = ___curr1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_6, /*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_colDirection_6();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_11));
		// if (adjR < 0 || adjC < 0) continue;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) < ((int32_t)0)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (adjR >= WIDTH || adjC >= HEIGHT) continue;
		int32_t L_14 = V_1;
		int32_t L_15 = __this->get_WIDTH_0();
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_16 = V_2;
		int32_t L_17 = __this->get_HEIGHT_1();
		if ((((int32_t)L_16) >= ((int32_t)L_17)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (visited[adjR][adjC] == 1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_18 = __this->get_visited_4();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_20;
		L_20 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_22) == ((int32_t)1)))
		{
			goto IL_00a2;
		}
	}
	{
		// if (gameMap[adjR][adjC] == -1) continue;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_23 = ___gameMap0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_25;
		L_25 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_26 = V_2;
		NullCheck(L_25);
		int32_t L_27;
		L_27 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		if ((((int32_t)L_27) == ((int32_t)(-1))))
		{
			goto IL_00a2;
		}
	}
	{
		// float hValue = SetHeuristics(endR, endC, adjR, adjC);
		int32_t L_28 = ___endR2;
		int32_t L_29 = ___endC3;
		int32_t L_30 = V_1;
		int32_t L_31 = V_2;
		float L_32;
		L_32 = GBFS_SetHeuristics_m85A2EB6E38D2F59D587E60DEA8E41EB01E532B15(__this, L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
		// NodeObject adj = new NodeObject(hValue, adjR, adjC, curr);
		int32_t L_33 = V_1;
		int32_t L_34 = V_2;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_35 = ___curr1;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_36 = (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E *)il2cpp_codegen_object_new(NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E_il2cpp_TypeInfo_var);
		NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2(L_36, L_32, L_33, L_34, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// Enqueue(adj);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_37 = V_3;
		GBFS_Enqueue_mAD03918F83928599E25CE1EA4622FD4F3BD17DBE(__this, L_37, /*hidden argument*/NULL);
		// visited[adjR][adjC] = 1;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_38 = __this->get_visited_4();
		int32_t L_39 = V_1;
		NullCheck(L_38);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_40;
		L_40 = List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m5BBFB6281717973874941DFB8C54AB7EE46E6FCB_RuntimeMethod_var);
		int32_t L_41 = V_2;
		NullCheck(L_40);
		List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9(L_40, L_41, 1, /*hidden argument*/List_1_set_Item_m85EC6079AE402A592416119251D7CB59B8A0E4A9_RuntimeMethod_var);
		// nodesInNextLayer++;
		int32_t L_42 = __this->get_nodesInNextLayer_3();
		__this->set_nodesInNextLayer_3(((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1)));
	}

IL_00a2:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00a6:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_44 = V_0;
		if ((((int32_t)L_44) < ((int32_t)4)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 GBFS::FindHeadDirection(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GBFS_FindHeadDirection_m50009A41DCB362AF96AA260B4D7FDD4482743B44 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___food0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral810633021F0DC0F0DC98A2F0D4AB3C0BB14EA096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7A6CE5F0807A612D9F35270247E47F709FAE1BD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_1 = NULL;
	NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int direction = 0;
		V_0 = 0;
		// temp = food;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___food0;
		V_1 = L_0;
		// temp2 = temp;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_1 = V_1;
		V_2 = L_1;
		goto IL_0011;
	}

IL_0008:
	{
		// temp2 = temp;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_2 = V_1;
		V_2 = L_2;
		// temp = temp.GetNodeObjectParent();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_3 = V_1;
		NullCheck(L_3);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_4;
		L_4 = NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_0011:
	{
		// while (temp.GetNodeObjectParent() != null)
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_5 = V_1;
		NullCheck(L_5);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_6;
		L_6 = NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0008;
		}
	}
	{
		// temp2Row = temp2.GetNodeObjectRow();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// temp2Col = temp2.GetNodeObjectCol();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// tempRow = temp.GetNodeObjectRow();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		// tempCol = temp.GetNodeObjectCol();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		// Debug.Log("TEMP 2 : " + temp2Row + " " + temp2Col);
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_4), /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral810633021F0DC0F0DC98A2F0D4AB3C0BB14EA096, L_15, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_17, /*hidden argument*/NULL);
		// Debug.Log("TEMP : " + tempRow + " " + tempCol);
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_6), /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA7A6CE5F0807A612D9F35270247E47F709FAE1BD, L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_19, /*hidden argument*/NULL);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_20, /*hidden argument*/NULL);
		// if (temp2Row == tempRow && temp2Col == tempCol + 1) direction = 0;
		int32_t L_21 = V_3;
		int32_t L_22 = V_5;
		if ((!(((uint32_t)L_21) == ((uint32_t)L_22))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_6;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1))))))
		{
			goto IL_008b;
		}
	}
	{
		// if (temp2Row == tempRow && temp2Col == tempCol + 1) direction = 0;
		V_0 = 0;
	}

IL_008b:
	{
		// if (temp2Row == tempRow && temp2Col == tempCol - 1) direction = 2;
		int32_t L_25 = V_3;
		int32_t L_26 = V_5;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_26))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_27 = V_4;
		int32_t L_28 = V_6;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))))))
		{
			goto IL_009a;
		}
	}
	{
		// if (temp2Row == tempRow && temp2Col == tempCol - 1) direction = 2;
		V_0 = 2;
	}

IL_009a:
	{
		// if (temp2Row == tempRow + 1 && temp2Col == tempCol) direction = 1;
		int32_t L_29 = V_3;
		int32_t L_30 = V_5;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1))))))
		{
			goto IL_00a9;
		}
	}
	{
		int32_t L_31 = V_4;
		int32_t L_32 = V_6;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_00a9;
		}
	}
	{
		// if (temp2Row == tempRow + 1 && temp2Col == tempCol) direction = 1;
		V_0 = 1;
	}

IL_00a9:
	{
		// if (temp2Row == tempRow - 1 && temp2Col == tempCol) direction = 3;
		int32_t L_33 = V_3;
		int32_t L_34 = V_5;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)1))))))
		{
			goto IL_00b8;
		}
	}
	{
		int32_t L_35 = V_4;
		int32_t L_36 = V_6;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_36))))
		{
			goto IL_00b8;
		}
	}
	{
		// if (temp2Row == tempRow - 1 && temp2Col == tempCol) direction = 3;
		V_0 = 3;
	}

IL_00b8:
	{
		// return direction;
		int32_t L_37 = V_0;
		return L_37;
	}
}
// System.Single GBFS::SetHeuristics(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GBFS_SetHeuristics_m85A2EB6E38D2F59D587E60DEA8E41EB01E532B15 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, int32_t ___foodRow0, int32_t ___foodCol1, int32_t ___nodeRow2, int32_t ___nodeCol3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int rowPart = Mathf.Abs(foodRow - nodeRow);
		int32_t L_0 = ___foodRow0;
		int32_t L_1 = ___nodeRow2;
		int32_t L_2;
		L_2 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), /*hidden argument*/NULL);
		// int colPart = Mathf.Abs(foodCol - nodeCol);
		int32_t L_3 = ___foodCol1;
		int32_t L_4 = ___nodeCol3;
		int32_t L_5;
		L_5 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)L_4)), /*hidden argument*/NULL);
		V_0 = L_5;
		// return Mathf.Sqrt((rowPart * rowPart) + (colPart * colPart)) + 4;
		int32_t L_6 = L_2;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		float L_9;
		L_9 = sqrtf(((float)((float)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_6, (int32_t)L_6)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)L_8)))))));
		return ((float)il2cpp_codegen_add((float)L_9, (float)(4.0f)));
	}
}
// System.Void GBFS::Enqueue(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_Enqueue_mAD03918F83928599E25CE1EA4622FD4F3BD17DBE (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___newNode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_mCF871CE263296FD47D40887D07168C47674BD0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// float hVal = newNode.GetNodeObjectVal();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___newNode0;
		NullCheck(L_0);
		float L_1;
		L_1 = NodeObject_GetNodeObjectVal_mD622639CA15A7F16710994470C24F524DB474F12_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// if(hVal == 2)
		float L_2 = V_0;
		if ((!(((float)L_2) == ((float)(2.0f)))))
		{
			goto IL_001c;
		}
	}
	{
		// queue.Add(newNode);
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_3 = __this->get_queue_7();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_4 = ___newNode0;
		NullCheck(L_3);
		List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C(L_3, L_4, /*hidden argument*/List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C_RuntimeMethod_var);
		// return;
		return;
	}

IL_001c:
	{
		// if (hVal >= 4f || hVal == 1f)
		float L_5 = V_0;
		if ((((float)L_5) >= ((float)(4.0f))))
		{
			goto IL_002c;
		}
	}
	{
		float L_6 = V_0;
		if ((!(((float)L_6) == ((float)(1.0f)))))
		{
			goto IL_007e;
		}
	}

IL_002c:
	{
		// int i = 0;
		V_1 = 0;
	}

IL_002e:
	{
		// if (i < queue.Count)
		int32_t L_7 = V_1;
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_8 = __this->get_queue_7();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_inline(L_8, /*hidden argument*/List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var);
		if ((((int32_t)L_7) >= ((int32_t)L_9)))
		{
			goto IL_0056;
		}
	}
	{
		// if (hVal > queue[i].GetNodeObjectVal()) i++;
		float L_10 = V_0;
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_11 = __this->get_queue_7();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_13;
		L_13 = List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_RuntimeMethod_var);
		NullCheck(L_13);
		float L_14;
		L_14 = NodeObject_GetNodeObjectVal_mD622639CA15A7F16710994470C24F524DB474F12_inline(L_13, /*hidden argument*/NULL);
		if ((!(((float)L_10) > ((float)L_14))))
		{
			goto IL_0056;
		}
	}
	{
		// if (hVal > queue[i].GetNodeObjectVal()) i++;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
		goto IL_002e;
	}

IL_0056:
	{
		// if (i == queue.Count) queue.Add(newNode);
		int32_t L_16 = V_1;
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_17 = __this->get_queue_7();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_inline(L_17, /*hidden argument*/List_1_get_Count_m37DA6E37D3A029F799FC62D172D8C5301687DBA5_RuntimeMethod_var);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_18))))
		{
			goto IL_0071;
		}
	}
	{
		// if (i == queue.Count) queue.Add(newNode);
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_19 = __this->get_queue_7();
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_20 = ___newNode0;
		NullCheck(L_19);
		List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C(L_19, L_20, /*hidden argument*/List_1_Add_m87CD30F65ED2D16CE021382F460F4F547AF4823C_RuntimeMethod_var);
		return;
	}

IL_0071:
	{
		// else queue.Insert(i, newNode);
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_21 = __this->get_queue_7();
		int32_t L_22 = V_1;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_23 = ___newNode0;
		NullCheck(L_21);
		List_1_Insert_mCF871CE263296FD47D40887D07168C47674BD0C3(L_21, L_22, L_23, /*hidden argument*/List_1_Insert_mCF871CE263296FD47D40887D07168C47674BD0C3_RuntimeMethod_var);
	}

IL_007e:
	{
		// }
		return;
	}
}
// NodeObject GBFS::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * GBFS_Dequeue_m2739CF06486C6B80D72F9DF01324AF4421DF5A26 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m67583A6683BBD4EA3B86E17A672F78BFA690B60A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NodeObject temp = queue[0];
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_0 = __this->get_queue_7();
		NullCheck(L_0);
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_1;
		L_1 = List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_inline(L_0, 0, /*hidden argument*/List_1_get_Item_mAA95FF56441C7616E73B3D171E7384B24E7791F3_RuntimeMethod_var);
		// queue.RemoveAt(0);
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_2 = __this->get_queue_7();
		NullCheck(L_2);
		List_1_RemoveAt_m67583A6683BBD4EA3B86E17A672F78BFA690B60A(L_2, 0, /*hidden argument*/List_1_RemoveAt_m67583A6683BBD4EA3B86E17A672F78BFA690B60A_RuntimeMethod_var);
		// return temp;
		return L_1;
	}
}
// System.Void GBFS::SetupVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS_SetupVariables_m3FA327399E88A391E2437FD07FC8C12321A1C7C0 (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2998F2DB9EDF3DF6F580F7E4C2A77EDFF1D00BCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (int i = 0; i < WIDTH; i++)
		V_0 = 0;
		goto IL_0032;
	}

IL_0004:
	{
		// List<int> data = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_0;
		// for (int j = 0; j < HEIGHT; j++)
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// data.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = V_1;
		NullCheck(L_1);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_1, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_2 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
	}

IL_0019:
	{
		// for (int j = 0; j < HEIGHT; j++)
		int32_t L_3 = V_2;
		int32_t L_4 = __this->get_HEIGHT_1();
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000e;
		}
	}
	{
		// visited.Add(data);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_5 = __this->get_visited_4();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = V_1;
		NullCheck(L_5);
		List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED(L_5, L_6, /*hidden argument*/List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0032:
	{
		// for (int i = 0; i < WIDTH; i++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_WIDTH_0();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// queue.Clear();
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_10 = __this->get_queue_7();
		NullCheck(L_10);
		List_1_Clear_m2998F2DB9EDF3DF6F580F7E4C2A77EDFF1D00BCD(L_10, /*hidden argument*/List_1_Clear_m2998F2DB9EDF3DF6F580F7E4C2A77EDFF1D00BCD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GBFS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GBFS__ctor_mAFC9DA6D93CC2A99A0D6DE4C95812A2B8F5F171B (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m559ACFA7A22AED554F2913619728C27A59CDFFB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly int WIDTH = 20;
		__this->set_WIDTH_0(((int32_t)20));
		// private readonly int HEIGHT = 20;
		__this->set_HEIGHT_1(((int32_t)20));
		// private int nodesLeftInLayer = 1;
		__this->set_nodesLeftInLayer_2(1);
		// private List<List<int>> visited = new List<List<int>>();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_0 = (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *)il2cpp_codegen_object_new(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3(L_0, /*hidden argument*/List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		__this->set_visited_4(L_0);
		// private readonly int[] rowDirection = { -1, 1, 0, 0 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->set_rowDirection_5(L_3);
		// private readonly int[] colDirection = { 0, 0, 1, -1 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = L_5;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (int32_t)(-1));
		__this->set_colDirection_6(L_6);
		// private List<NodeObject> queue = new List<NodeObject>();
		List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 * L_7 = (List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98 *)il2cpp_codegen_object_new(List_1_tFE02FF612746461EE91FD9C2B880D92B5A617C98_il2cpp_TypeInfo_var);
		List_1__ctor_m559ACFA7A22AED554F2913619728C27A59CDFFB4(L_7, /*hidden argument*/List_1__ctor_m559ACFA7A22AED554F2913619728C27A59CDFFB4_RuntimeMethod_var);
		__this->set_queue_7(L_7);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void GameAssets::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets_Awake_mD6B51A0C92826F2F7E8FA9A71C17EF7FD4571049 (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void GameAssets::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameAssets__ctor_mAC95D70B1B0407D5FDC330BAA4E0B7B2EAFFA40A (GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Sprite> Foods = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_0 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_0, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_Foods_6(L_0);
		// public List<Sprite> SnakeHead = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_1 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_1, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeHead_7(L_1);
		// public List<Sprite> SnakeBody = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_2 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_2, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeBody_8(L_2);
		// public List<Sprite> SnakeTail = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_3 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_3, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeTail_9(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameHandler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_Awake_m5F580C35D0DF72EACD66F87E60AAE9AA1165A9FD (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_instance_6(__this);
		// }
		return;
	}
}
// System.Void GameHandler::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_OnEnable_m15BF29FA828222806CB84390B622BDC05F37E76E (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43B2C2308FB41B3D1DE4E2B86D95F5D6796B8E12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF0DFA047D69884FE56F5169A1AD8DDAE5428970);
		s_Il2CppMethodInitialized = true;
	}
	{
		// foodRenderer = GameObject.Find("/MainSceneRenderer/FoodRenderer");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralEF0DFA047D69884FE56F5169A1AD8DDAE5428970, /*hidden argument*/NULL);
		__this->set_foodRenderer_27(L_0);
		// foodRenderer.GetComponent<FoodRenderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_foodRenderer_27();
		NullCheck(L_1);
		FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * L_2;
		L_2 = GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A(L_1, /*hidden argument*/GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// food = GameObject.Find("/SnakeFood");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral43B2C2308FB41B3D1DE4E2B86D95F5D6796B8E12, /*hidden argument*/NULL);
		__this->set_food_26(L_3);
		// }
		return;
	}
}
// System.Void GameHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_Start_m78B61BE18B716B2039EAE293F99DFD5CC0219FF2 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF5A10192986D361CCC871536ECD9A7618299DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0D794076E65681A7ECD1C294541B966D5EBB7A6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loseUI = GameObject.Find("/LoseUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5DF5A10192986D361CCC871536ECD9A7618299DE, /*hidden argument*/NULL);
		__this->set_loseUI_15(L_0);
		// winUI = GameObject.Find("/WinUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB0D794076E65681A7ECD1C294541B966D5EBB7A6, /*hidden argument*/NULL);
		__this->set_winUI_16(L_1);
		// loseUI.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_loseUI_15();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// winUI.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_winUI_16();
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 0, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		// snakeHeadSprites = GameAssets.instance.SnakeHead;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_10 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_10);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_11 = L_10->get_SnakeHead_7();
		__this->set_snakeHeadSprites_28(L_11);
		// snakeBodySprites = GameAssets.instance.SnakeBody;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_12 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_12);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_13 = L_12->get_SnakeBody_8();
		__this->set_snakeBodySprites_29(L_13);
		// snakeTailSprites = GameAssets.instance.SnakeTail;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_14 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_14);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_15 = L_14->get_SnakeTail_9();
		__this->set_snakeTailSprites_30(L_15);
		// Time.timeScale = 0.085f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0850000009f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FixedUpdate_m824402611F5D2B69592488B0AD63AAB1BDC24A80 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50CD88A8260F8C6C8564FB1F440B7667AB887031);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userInfo = "Snake Finding Food ...";
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(_stringLiteral50CD88A8260F8C6C8564FB1F440B7667AB887031);
		// FetchGameObjects();
		GameHandler_FetchGameObjects_m38DA6C693BC953DB1BD8D89859FA89AF3622C20D(__this, /*hidden argument*/NULL);
		// FetchSnakeBodies();
		GameHandler_FetchSnakeBodies_mB094A5323C30D6ECA9A1D51FD24F7CAE3C8EE8BB(__this, /*hidden argument*/NULL);
		// FetchHeadDirections();
		GameHandler_FetchHeadDirections_m3DEB62A95AD380B0CA9EF1171964B9B9BEF11077(__this, /*hidden argument*/NULL);
		// SetMapToPass();
		GameHandler_SetMapToPass_m34702874B4C3F1F4C163FCDBED4BD39E58EC73A9(__this, /*hidden argument*/NULL);
		// FindGBFSDirection();
		GameHandler_FindGBFSDirection_m513F447BB5A7172485B3E8A894432781F9E4083D(__this, /*hidden argument*/NULL);
		// GetDestType();
		GameHandler_GetDestType_mF4B4095B9CB92527CCBAC1449F87F3CFF81981C0(__this, /*hidden argument*/NULL);
		// if (destType != "Food")
		String_t* L_0 = __this->get_destType_25();
		bool L_1;
		L_1 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_0, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		// MoveSnakeTail();
		GameHandler_MoveSnakeTail_mEBCB2F63B262CCE8B45DF75FDA5FBA278ABF31B3(__this, /*hidden argument*/NULL);
		// MoveSnakeBody();
		GameHandler_MoveSnakeBody_mB80D331A16B56A76ED6DE40BBE549B54A00468F7(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// MoveSnakeHead();
		GameHandler_MoveSnakeHead_mE41691A04C161AD56BB4C524D548848B5224B643(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::FindGBFSDirectionPython()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FindGBFSDirectionPython_mA0B833988E3D737483FD024D1F1F90E53565D1CC (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C840D36AD067A9EA2BE5297A2A17E2834F7DF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC67B883FAF8EB8F4E455388BDFC7E2CBB78690E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB83266916F25981EAF31B685F0939B2688C774A);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Vector2 snakeHeadPos = snakeHead.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_snakeHead_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var psi = new ProcessStartInfo();
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_4 = (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 *)il2cpp_codegen_object_new(ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199_il2cpp_TypeInfo_var);
		ProcessStartInfo__ctor_mF3E954609281B15A18DFA30FA7614A85A28BFF2D(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		// psi.FileName = @"C:\Users\Windows 10\AppData\Local\Programs\Python\Python39\python.exe";
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_5 = V_1;
		NullCheck(L_5);
		ProcessStartInfo_set_FileName_mC6BAAFFE1EF1B04AA7016AF1AEF504F4D95D4ABA_inline(L_5, _stringLiteral54C840D36AD067A9EA2BE5297A2A17E2834F7DF1, /*hidden argument*/NULL);
		// var script = @"C:\Users\Windows 10\OneDrive - Institut Teknologi Sepuluh Nopember\ITS\KELAS\SEMESTER 4\KB (F)\ETS\GreedyBest.py";
		V_2 = _stringLiteralFB83266916F25981EAF31B685F0939B2688C774A;
		// psi.Arguments = $"\"{script}\"\"{mapToPass}\"\"{rSnakeHead}\"\"{cSnakeHead}\"\"{rFoodPos}\"\"{cFoodPos}\"";
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_6 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = L_7;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_9);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_10 = L_8;
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_11 = __this->get_mapToPass_18();
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_11);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = L_10;
		int32_t L_13 = __this->get_rSnakeHead_9();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_15);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = L_12;
		int32_t L_17 = __this->get_cSnakeHead_10();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_16;
		int32_t L_21 = __this->get_rFoodPos_11();
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_23);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = L_20;
		int32_t L_25 = __this->get_cFoodPos_12();
		int32_t L_26 = L_25;
		RuntimeObject * L_27 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_27);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_27);
		String_t* L_28;
		L_28 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B(_stringLiteralC67B883FAF8EB8F4E455388BDFC7E2CBB78690E6, L_24, /*hidden argument*/NULL);
		NullCheck(L_6);
		ProcessStartInfo_set_Arguments_m635581BF6F0A9B0AB6D1906AD3EBF54A6155F137_inline(L_6, L_28, /*hidden argument*/NULL);
		// psi.UseShellExecute = false;
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_29 = V_1;
		NullCheck(L_29);
		ProcessStartInfo_set_UseShellExecute_m2AACDFAC98807AB1B63017B6C6702EE7BB6FA10D_inline(L_29, (bool)0, /*hidden argument*/NULL);
		// psi.CreateNoWindow = true;
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_30 = V_1;
		NullCheck(L_30);
		ProcessStartInfo_set_CreateNoWindow_mC255F2F45422A1C8B918A163F6CBC0E9120803B8_inline(L_30, (bool)1, /*hidden argument*/NULL);
		// psi.RedirectStandardOutput = true;
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_31 = V_1;
		NullCheck(L_31);
		ProcessStartInfo_set_RedirectStandardOutput_m64D957AFEB6240BBB680555A3E151456FEF4BBE7_inline(L_31, (bool)1, /*hidden argument*/NULL);
		// psi.RedirectStandardError = true;
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_32 = V_1;
		NullCheck(L_32);
		ProcessStartInfo_set_RedirectStandardError_m85790A47968728D48519D3EFB308764F20C19A00_inline(L_32, (bool)1, /*hidden argument*/NULL);
		// var result = "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// using(var process = Process.Start(psi))
		ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * L_33 = V_1;
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_34;
		L_34 = Process_Start_m1D784F6C4E5162F07CA76E1C5F5AF2461B6D1006(L_33, /*hidden argument*/NULL);
		V_4 = L_34;
	}

IL_00b2:
	try
	{ // begin try (depth: 1)
		// errors = process.StandardError.ReadToEnd();
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_35 = V_4;
		NullCheck(L_35);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_36;
		L_36 = Process_get_StandardError_mA7F99DCE952C672449F5C11623955B698A464129(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_36);
		// result = process.StandardOutput.ReadToEnd();
		Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_38 = V_4;
		NullCheck(L_38);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_39;
		L_39 = Process_get_StandardOutput_m24BB4DBF4A723F0A67FD12DD6ADB46D4FDBCD958(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		String_t* L_40;
		L_40 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_39);
		V_3 = L_40;
		// }
		IL2CPP_LEAVE(0xDA, FINALLY_00ce);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ce;
	}

FINALLY_00ce:
	{ // begin finally (depth: 1)
		{
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_41 = V_4;
			if (!L_41)
			{
				goto IL_00d9;
			}
		}

IL_00d2:
		{
			Process_t6E1CCB5489BA14AA553AAAF83C2014435A5D1671 * L_42 = V_4;
			NullCheck(L_42);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_42);
		}

IL_00d9:
		{
			IL2CPP_END_FINALLY(206)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(206)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDA, IL_00da)
	}

IL_00da:
	{
		// newSnakeHeadDirection = Int32.Parse(result);
		String_t* L_43 = V_3;
		int32_t L_44;
		L_44 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_43, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_44);
		// if (newSnakeHeadDirection == -1)
		int32_t L_45 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_45) == ((uint32_t)(-1)))))
		{
			goto IL_023f;
		}
	}
	{
		// if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_GameMap_17();
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_0;
		float L_49 = L_48.get_x_0();
		int32_t L_50;
		L_50 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_47, L_50, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_52 = V_0;
		float L_53 = L_52.get_y_1();
		int32_t L_54;
		L_54 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_53, /*hidden argument*/NULL);
		NullCheck(L_51);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_51, ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_57;
		L_57 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_56, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_57);
		String_t* L_58;
		L_58 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_57, /*hidden argument*/NULL);
		bool L_59;
		L_59 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_58, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_0142;
		}
	}
	{
		// newSnakeHeadDirection = 0;
		__this->set_newSnakeHeadDirection_24(0);
		// }
		return;
	}

IL_0142:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_GameMap_17();
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62 = V_0;
		float L_63 = L_62.get_x_0();
		int32_t L_64;
		L_64 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_63, /*hidden argument*/NULL);
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_61, ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_66 = V_0;
		float L_67 = L_66.get_y_1();
		int32_t L_68;
		L_68 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_65, L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_71;
		L_71 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_70, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_71);
		String_t* L_72;
		L_72 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_71, /*hidden argument*/NULL);
		bool L_73;
		L_73 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_72, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_73)
		{
			goto IL_0192;
		}
	}
	{
		// newSnakeHeadDirection = 1;
		__this->set_newSnakeHeadDirection_24(1);
		// }
		return;
	}

IL_0192:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = __this->get_GameMap_17();
		NullCheck(L_74);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_74, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76 = V_0;
		float L_77 = L_76.get_x_0();
		int32_t L_78;
		L_78 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_77, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_75, L_78, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_80 = V_0;
		float L_81 = L_80.get_y_1();
		int32_t L_82;
		L_82 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_81, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_79, ((int32_t)il2cpp_codegen_subtract((int32_t)L_82, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_83);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_83, /*hidden argument*/NULL);
		NullCheck(L_84);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_85;
		L_85 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_84, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_85);
		String_t* L_86;
		L_86 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_85, /*hidden argument*/NULL);
		bool L_87;
		L_87 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_86, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_01e2;
		}
	}
	{
		// newSnakeHeadDirection = 2;
		__this->set_newSnakeHeadDirection_24(2);
		// }
		return;
	}

IL_01e2:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = __this->get_GameMap_17();
		NullCheck(L_88);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_88, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_90 = V_0;
		float L_91 = L_90.get_x_0();
		int32_t L_92;
		L_92 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_91, /*hidden argument*/NULL);
		NullCheck(L_89);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93;
		L_93 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_89, ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_94 = V_0;
		float L_95 = L_94.get_y_1();
		int32_t L_96;
		L_96 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_95, /*hidden argument*/NULL);
		NullCheck(L_93);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_97;
		L_97 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_93, L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_98;
		L_98 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_97, /*hidden argument*/NULL);
		NullCheck(L_98);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_99;
		L_99 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_98, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_99);
		String_t* L_100;
		L_100 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_99, /*hidden argument*/NULL);
		bool L_101;
		L_101 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_100, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_101)
		{
			goto IL_0232;
		}
	}
	{
		// newSnakeHeadDirection = 3;
		__this->set_newSnakeHeadDirection_24(3);
		// }
		return;
	}

IL_0232:
	{
		// newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
		int32_t L_102;
		L_102 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_102);
	}

IL_023f:
	{
		// }
		return;
	}
}
// System.Void GameHandler::FindGBFSDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FindGBFSDirection_m513F447BB5A7172485B3E8A894432781F9E4083D (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 snakeHeadPos = snakeHead.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_snakeHead_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// gbfs = new GBFS();
		GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * L_4 = (GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 *)il2cpp_codegen_object_new(GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744_il2cpp_TypeInfo_var);
		GBFS__ctor_mAFC9DA6D93CC2A99A0D6DE4C95812A2B8F5F171B(L_4, /*hidden argument*/NULL);
		__this->set_gbfs_8(L_4);
		// newSnakeHeadDirection = gbfs.FindPath(mapToPass, rSnakeHead, cSnakeHead, rFoodPos, cFoodPos);
		GBFS_t7AA5050300A3913141E7C0385D1544C189C1D744 * L_5 = __this->get_gbfs_8();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_6 = __this->get_mapToPass_18();
		int32_t L_7 = __this->get_rSnakeHead_9();
		int32_t L_8 = __this->get_cSnakeHead_10();
		int32_t L_9 = __this->get_rFoodPos_11();
		int32_t L_10 = __this->get_cFoodPos_12();
		NullCheck(L_5);
		int32_t L_11;
		L_11 = GBFS_FindPath_m8D692F50683FC8234D228BAE75BE88449345A57D(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_11);
		// if (newSnakeHeadDirection == -1)
		int32_t L_12 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_01a9;
		}
	}
	{
		// if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_GameMap_17();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		float L_16 = L_15.get_x_0();
		int32_t L_17;
		L_17 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		int32_t L_21;
		L_21 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_24;
		L_24 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_23, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		// newSnakeHeadDirection = 0;
		__this->set_newSnakeHeadDirection_24(0);
		// }
		return;
	}

IL_00ac:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_GameMap_17();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_0;
		float L_30 = L_29.get_x_0();
		int32_t L_31;
		L_31 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_0;
		float L_34 = L_33.get_y_1();
		int32_t L_35;
		L_35 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_38;
		L_38 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_37, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_38, /*hidden argument*/NULL);
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		// newSnakeHeadDirection = 1;
		__this->set_newSnakeHeadDirection_24(1);
		// }
		return;
	}

IL_00fc:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_GameMap_17();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_0;
		float L_44 = L_43.get_x_0();
		int32_t L_45;
		L_45 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_42, L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_0;
		float L_48 = L_47.get_y_1();
		int32_t L_49;
		L_49 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_46, ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_52;
		L_52 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_51, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_52, /*hidden argument*/NULL);
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_014c;
		}
	}
	{
		// newSnakeHeadDirection = 2;
		__this->set_newSnakeHeadDirection_24(2);
		// }
		return;
	}

IL_014c:
	{
		// else if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_GameMap_17();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_0;
		float L_58 = L_57.get_x_0();
		int32_t L_59;
		L_59 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = V_0;
		float L_62 = L_61.get_y_1();
		int32_t L_63;
		L_63 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_60, L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_66;
		L_66 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_65, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_66, /*hidden argument*/NULL);
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_019c;
		}
	}
	{
		// newSnakeHeadDirection = 3;
		__this->set_newSnakeHeadDirection_24(3);
		// }
		return;
	}

IL_019c:
	{
		// newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
		int32_t L_69;
		L_69 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_69);
	}

IL_01a9:
	{
		// }
		return;
	}
}
// System.Void GameHandler::FindBFSDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FindBFSDirection_m0D298750411CB28135EFDC98AC3DD1A48743366D (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 snakeHeadPos = snakeHead.transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_snakeHead_19();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// bfs2 = new BFS2();
		BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * L_4 = (BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 *)il2cpp_codegen_object_new(BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63_il2cpp_TypeInfo_var);
		BFS2__ctor_m4D3D12F0E51F415D2D05EF6DB71159F5784310AA(L_4, /*hidden argument*/NULL);
		__this->set_bfs2_7(L_4);
		// newSnakeHeadDirection = bfs2.FindPath(mapToPass, rSnakeHead, cSnakeHead, rFoodPos, cFoodPos);
		BFS2_t18ADF34FEF048FFF62564EF4BC39C44830B8DB63 * L_5 = __this->get_bfs2_7();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_6 = __this->get_mapToPass_18();
		int32_t L_7 = __this->get_rSnakeHead_9();
		int32_t L_8 = __this->get_cSnakeHead_10();
		int32_t L_9 = __this->get_rFoodPos_11();
		int32_t L_10 = __this->get_cFoodPos_12();
		NullCheck(L_5);
		int32_t L_11;
		L_11 = BFS2_FindPath_m62A158D379B2471F015A4E38D27625796D369055(L_5, L_6, L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_11);
		// if(newSnakeHeadDirection == -1)
		int32_t L_12 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_12) == ((uint32_t)(-1)))))
		{
			goto IL_01a9;
		}
	}
	{
		// if (GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) + 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_GameMap_17();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_15 = V_0;
		float L_16 = L_15.get_x_0();
		int32_t L_17;
		L_17 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_14, L_17, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19 = V_0;
		float L_20 = L_19.get_y_1();
		int32_t L_21;
		L_21 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_24;
		L_24 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_23, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_25, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00ac;
		}
	}
	{
		// newSnakeHeadDirection = 0;
		__this->set_newSnakeHeadDirection_24(0);
		// }
		return;
	}

IL_00ac:
	{
		// else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) + 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_GameMap_17();
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_29 = V_0;
		float L_30 = L_29.get_x_0();
		int32_t L_31;
		L_31 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_30, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_28, ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_33 = V_0;
		float L_34 = L_33.get_y_1();
		int32_t L_35;
		L_35 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_38;
		L_38 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_37, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_38, /*hidden argument*/NULL);
		bool L_40;
		L_40 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_39, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_00fc;
		}
	}
	{
		// newSnakeHeadDirection = 1;
		__this->set_newSnakeHeadDirection_24(1);
		// }
		return;
	}

IL_00fc:
	{
		// else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x)).GetChild(Mathf.FloorToInt(snakeHeadPos.y) - 1).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_GameMap_17();
		NullCheck(L_41);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_43 = V_0;
		float L_44 = L_43.get_x_0();
		int32_t L_45;
		L_45 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_44, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_42, L_45, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_47 = V_0;
		float L_48 = L_47.get_y_1();
		int32_t L_49;
		L_49 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_46, ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)1)), /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_52;
		L_52 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_51, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_52);
		String_t* L_53;
		L_53 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_52, /*hidden argument*/NULL);
		bool L_54;
		L_54 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_53, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_014c;
		}
	}
	{
		// newSnakeHeadDirection = 2;
		__this->set_newSnakeHeadDirection_24(2);
		// }
		return;
	}

IL_014c:
	{
		// else if(GameMap.transform.GetChild(Mathf.FloorToInt(snakeHeadPos.x) - 1).GetChild(Mathf.FloorToInt(snakeHeadPos.y)).gameObject.GetComponent<NodeType>().Type == "")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_GameMap_17();
		NullCheck(L_55);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_55, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_57 = V_0;
		float L_58 = L_57.get_x_0();
		int32_t L_59;
		L_59 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_56, ((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)1)), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_61 = V_0;
		float L_62 = L_61.get_y_1();
		int32_t L_63;
		L_63 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64;
		L_64 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_60, L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_64, /*hidden argument*/NULL);
		NullCheck(L_65);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_66;
		L_66 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_65, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_66);
		String_t* L_67;
		L_67 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_66, /*hidden argument*/NULL);
		bool L_68;
		L_68 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_67, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_019c;
		}
	}
	{
		// newSnakeHeadDirection = 3;
		__this->set_newSnakeHeadDirection_24(3);
		// }
		return;
	}

IL_019c:
	{
		// newSnakeHeadDirection = UnityEngine.Random.Range(0, 3);
		int32_t L_69;
		L_69 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		__this->set_newSnakeHeadDirection_24(L_69);
	}

IL_01a9:
	{
		// }
		return;
	}
}
// System.Void GameHandler::FetchGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchGameObjects_m38DA6C693BC953DB1BD8D89859FA89AF3622C20D (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral283E7529944E78CD50A766736A02EA0D371DF92C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34968043B7D239162598508E2E369507008583B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral56594ADEFA3D18D2C78FB5F3C52FC8916C29EB9F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap = GameObject.Find("/Map");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C, /*hidden argument*/NULL);
		__this->set_GameMap_17(L_0);
		// snakeHead = GameObject.Find("/SnakeContainer/SnakeHead");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral34968043B7D239162598508E2E369507008583B5, /*hidden argument*/NULL);
		__this->set_snakeHead_19(L_1);
		// snakeBodyContainer = GameObject.Find("/SnakeContainer/SnakeBodyContainer");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral56594ADEFA3D18D2C78FB5F3C52FC8916C29EB9F, /*hidden argument*/NULL);
		__this->set_snakeBodyContainer_20(L_2);
		// snakeTail = GameObject.Find("/SnakeContainer/SnakeTail");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral283E7529944E78CD50A766736A02EA0D371DF92C, /*hidden argument*/NULL);
		__this->set_snakeTail_22(L_3);
		// }
		return;
	}
}
// System.Void GameHandler::FetchSnakeBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchSnakeBodies_mB094A5323C30D6ECA9A1D51FD24F7CAE3C8EE8BB (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// snakeBody.Clear();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_snakeBody_21();
		NullCheck(L_0);
		List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432(L_0, /*hidden argument*/List_1_Clear_m7DF03CE7132B7D4C6AA2AEEA9BD1A8755AE12432_RuntimeMethod_var);
		// foreach (Transform child in snakeBodyContainer.GetComponentsInChildren<Transform>())
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_snakeBodyContainer_20();
		NullCheck(L_1);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2;
		L_2 = GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E(L_1, /*hidden argument*/GameObject_GetComponentsInChildren_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_m1D81E170D9B0CD0720A6BCDD722BC8A0B4AA8F0E_RuntimeMethod_var);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		// foreach (Transform child in snakeBodyContainer.GetComponentsInChildren<Transform>())
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// GameObject childObject = child.gameObject;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// snakeBody.Add(childObject);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_8 = __this->get_snakeBody_21();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_2;
		NullCheck(L_8);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_8, L_9, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		// foreach (Transform child in snakeBodyContainer.GetComponentsInChildren<Transform>())
		int32_t L_11 = V_1;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameHandler::FetchHeadDirections()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_FetchHeadDirections_m3DEB62A95AD380B0CA9EF1171964B9B9BEF11077 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// oldSnakeHeadDirection = snakeHead.GetComponent<SnakeHeadDirection>().direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_snakeHead_19();
		NullCheck(L_0);
		SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * L_1;
		L_1 = GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6(L_0, /*hidden argument*/GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_direction_4();
		__this->set_oldSnakeHeadDirection_23(L_2);
		// }
		return;
	}
}
// System.Void GameHandler::SetMapToPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetMapToPass_m34702874B4C3F1F4C163FCDBED4BD39E58EC73A9 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m3E59DD720B791615E831DA0746ACEF3C7B0A84FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	{
		// mapToPass.Clear();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_0 = __this->get_mapToPass_18();
		NullCheck(L_0);
		List_1_Clear_m3E59DD720B791615E831DA0746ACEF3C7B0A84FE(L_0, /*hidden argument*/List_1_Clear_m3E59DD720B791615E831DA0746ACEF3C7B0A84FE_RuntimeMethod_var);
		// for(int i = 0; i < MAX_GRID; i++)
		V_0 = 0;
		goto IL_00c7;
	}

IL_0012:
	{
		// List<int> data = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_1, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		V_1 = L_1;
		// for (int j = 0; j < MAX_GRID; j++)
		V_2 = 0;
		goto IL_00af;
	}

IL_001f:
	{
		// string nodeType = GameMap.transform.GetChild(i).GetChild(j).gameObject.GetComponent<NodeType>().Type;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_GameMap_17();
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_9;
		L_9 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_8, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (nodeType == "")
		String_t* L_11 = V_3;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// data.Add(0);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_13 = V_1;
		NullCheck(L_13);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_13, 0, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_00ab;
	}

IL_005c:
	{
		// else if (nodeType == "Food")
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_14, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		// data.Add(1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_16 = V_1;
		NullCheck(L_16);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_16, 1, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// rFoodPos = i;
		int32_t L_17 = V_0;
		__this->set_rFoodPos_11(L_17);
		// cFoodPos = j;
		int32_t L_18 = V_2;
		__this->set_cFoodPos_12(L_18);
		// }
		goto IL_00ab;
	}

IL_0080:
	{
		// else if (nodeType == "SnakeHead")
		String_t* L_19 = V_3;
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00a4;
		}
	}
	{
		// data.Add(2);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = V_1;
		NullCheck(L_21);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_21, 2, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// rSnakeHead = i;
		int32_t L_22 = V_0;
		__this->set_rSnakeHead_9(L_22);
		// cSnakeHead = j;
		int32_t L_23 = V_2;
		__this->set_cSnakeHead_10(L_23);
		// }
		goto IL_00ab;
	}

IL_00a4:
	{
		// data.Add(-1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_24 = V_1;
		NullCheck(L_24);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_24, (-1), /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_00ab:
	{
		// for (int j = 0; j < MAX_GRID; j++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00af:
	{
		// for (int j = 0; j < MAX_GRID; j++)
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) < ((int32_t)((int32_t)20))))
		{
			goto IL_001f;
		}
	}
	{
		// mapToPass.Add(data);
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_27 = __this->get_mapToPass_18();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_28 = V_1;
		NullCheck(L_27);
		List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED(L_27, L_28, /*hidden argument*/List_1_Add_m72EDB9A496D4612FA5FA2FC3D6AFF3B6753668ED_RuntimeMethod_var);
		// for(int i = 0; i < MAX_GRID; i++)
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00c7:
	{
		// for(int i = 0; i < MAX_GRID; i++)
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)20))))
		{
			goto IL_0012;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameHandler::GetDestType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_GetDestType_mF4B4095B9CB92527CCBAC1449F87F3CFF81981C0 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = 0;
		V_0 = (0.0f);
		// float y = 0;
		V_1 = (0.0f);
		// if (newSnakeHeadDirection == 0)
		int32_t L_0 = __this->get_newSnakeHeadDirection_24();
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// x = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_snakeHead_19();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		V_0 = L_4;
		// y = snakeHead.transform.position.y + 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_snakeHead_19();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		V_1 = ((float)il2cpp_codegen_add((float)L_8, (float)(1.0f)));
		// }
		goto IL_0100;
	}

IL_004b:
	{
		// else if (newSnakeHeadDirection == 1)
		int32_t L_9 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// x = snakeHead.transform.position.x + 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_snakeHead_19();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		V_0 = ((float)il2cpp_codegen_add((float)L_13, (float)(1.0f)));
		// y = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_snakeHead_19();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
		// }
		goto IL_0100;
	}

IL_0088:
	{
		// else if (newSnakeHeadDirection == 2)
		int32_t L_18 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00c5;
		}
	}
	{
		// x = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_snakeHead_19();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		V_0 = L_22;
		// y = snakeHead.transform.position.y - 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_snakeHead_19();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_26, (float)(1.0f)));
		// }
		goto IL_0100;
	}

IL_00c5:
	{
		// else if (newSnakeHeadDirection == 3)
		int32_t L_27 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_0100;
		}
	}
	{
		// x = snakeHead.transform.position.x - 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_snakeHead_19();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_31, (float)(1.0f)));
		// y = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_snakeHead_19();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		V_1 = L_35;
	}

IL_0100:
	{
		// destType = GameMap.transform.GetChild(Mathf.FloorToInt(x)).GetChild(Mathf.FloorToInt(y)).gameObject.GetComponent<NodeType>().Type;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_GameMap_17();
		NullCheck(L_36);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		float L_38 = V_0;
		int32_t L_39;
		L_39 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_37, L_39, /*hidden argument*/NULL);
		float L_41 = V_1;
		int32_t L_42;
		L_42 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_40, L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44;
		L_44 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_45;
		L_45 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_44, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		NullCheck(L_45);
		String_t* L_46;
		L_46 = NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline(L_45, /*hidden argument*/NULL);
		__this->set_destType_25(L_46);
		// }
		return;
	}
}
// System.Void GameHandler::MoveSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeTail_mEBCB2F63B262CCE8B45DF75FDA5FBA278ABF31B3 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// SetObjectInMap(Mathf.FloorToInt(snakeTail.transform.position.x), Mathf.FloorToInt(snakeTail.transform.position.y), "");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_snakeTail_22();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_snakeTail_22();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		int32_t L_9;
		L_9 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_8, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_4, L_9, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// GameObject snakeBodyLast = snakeBody[snakeBody.Count - 1];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_10 = __this->get_snakeBody_21();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_11 = __this->get_snakeBody_21();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_11, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_10, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		// int lastBodyDirection = snakeBodyLast.GetComponent<SnakeBodyDirection>().direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = L_13;
		NullCheck(L_14);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_15;
		L_15 = GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3(L_14, /*hidden argument*/GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		NullCheck(L_15);
		int32_t L_16 = L_15->get_direction_4();
		V_0 = L_16;
		// int oldSnakeTailDirection = snakeTail.GetComponent<SnakeTailDirection>().direction;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_snakeTail_22();
		NullCheck(L_17);
		SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * L_18;
		L_18 = GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB(L_17, /*hidden argument*/GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB_RuntimeMethod_var);
		NullCheck(L_18);
		int32_t L_19 = L_18->get_direction_4();
		V_1 = L_19;
		// int newSnakeTailDirection = 0;
		V_2 = 0;
		// float x = snakeBodyLast.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_14;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_x_2();
		V_3 = L_23;
		// float y = snakeBodyLast.transform.position.y;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		V_4 = L_26;
		// if (lastBodyDirection == 0)
		int32_t L_27 = V_0;
		if (L_27)
		{
			goto IL_00bc;
		}
	}
	{
		// if(y > snakeTail.transform.position.y)
		float L_28 = V_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_snakeTail_22();
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		if ((!(((float)L_28) > ((float)L_32))))
		{
			goto IL_00b8;
		}
	}
	{
		// newSnakeTailDirection = 0;
		V_2 = 0;
		// }
		goto IL_012c;
	}

IL_00b8:
	{
		// newSnakeTailDirection = 2;
		V_2 = 2;
		// }
		goto IL_012c;
	}

IL_00bc:
	{
		// else if (lastBodyDirection == 1)
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		// if (oldSnakeTailDirection == 2)
		int32_t L_34 = V_1;
		if ((!(((uint32_t)L_34) == ((uint32_t)2))))
		{
			goto IL_00c8;
		}
	}
	{
		// newSnakeTailDirection = 1;
		V_2 = 1;
		// }
		goto IL_012c;
	}

IL_00c8:
	{
		// else if (oldSnakeTailDirection == 3)
		int32_t L_35 = V_1;
		if ((!(((uint32_t)L_35) == ((uint32_t)3))))
		{
			goto IL_012c;
		}
	}
	{
		// newSnakeTailDirection = 0;
		V_2 = 0;
		// }
		goto IL_012c;
	}

IL_00d0:
	{
		// else if (lastBodyDirection == 2)
		int32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_00e3;
		}
	}
	{
		// if (oldSnakeTailDirection == 0)
		int32_t L_37 = V_1;
		if (L_37)
		{
			goto IL_00db;
		}
	}
	{
		// newSnakeTailDirection = 1;
		V_2 = 1;
		// }
		goto IL_012c;
	}

IL_00db:
	{
		// else if (oldSnakeTailDirection == 3)
		int32_t L_38 = V_1;
		if ((!(((uint32_t)L_38) == ((uint32_t)3))))
		{
			goto IL_012c;
		}
	}
	{
		// newSnakeTailDirection = 2;
		V_2 = 2;
		// }
		goto IL_012c;
	}

IL_00e3:
	{
		// else if (lastBodyDirection == 3)
		int32_t L_39 = V_0;
		if ((!(((uint32_t)L_39) == ((uint32_t)3))))
		{
			goto IL_00f6;
		}
	}
	{
		// if (oldSnakeTailDirection == 0)
		int32_t L_40 = V_1;
		if (L_40)
		{
			goto IL_00ee;
		}
	}
	{
		// newSnakeTailDirection = 3;
		V_2 = 3;
		// }
		goto IL_012c;
	}

IL_00ee:
	{
		// else if (oldSnakeTailDirection == 1)
		int32_t L_41 = V_1;
		if ((!(((uint32_t)L_41) == ((uint32_t)1))))
		{
			goto IL_012c;
		}
	}
	{
		// newSnakeTailDirection = 2;
		V_2 = 2;
		// }
		goto IL_012c;
	}

IL_00f6:
	{
		// else if (lastBodyDirection == 4)
		int32_t L_42 = V_0;
		if ((!(((uint32_t)L_42) == ((uint32_t)4))))
		{
			goto IL_010a;
		}
	}
	{
		// if (oldSnakeTailDirection == 1)
		int32_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)1))))
		{
			goto IL_0102;
		}
	}
	{
		// newSnakeTailDirection = 0;
		V_2 = 0;
		// }
		goto IL_012c;
	}

IL_0102:
	{
		// else if (oldSnakeTailDirection == 2)
		int32_t L_44 = V_1;
		if ((!(((uint32_t)L_44) == ((uint32_t)2))))
		{
			goto IL_012c;
		}
	}
	{
		// newSnakeTailDirection = 3;
		V_2 = 3;
		// }
		goto IL_012c;
	}

IL_010a:
	{
		// else if(lastBodyDirection == 5)
		int32_t L_45 = V_0;
		if ((!(((uint32_t)L_45) == ((uint32_t)5))))
		{
			goto IL_012c;
		}
	}
	{
		// if (x > snakeTail.transform.position.x)
		float L_46 = V_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_snakeTail_22();
		NullCheck(L_47);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_x_2();
		if ((!(((float)L_46) > ((float)L_50))))
		{
			goto IL_012a;
		}
	}
	{
		// newSnakeTailDirection = 1;
		V_2 = 1;
		// }
		goto IL_012c;
	}

IL_012a:
	{
		// newSnakeTailDirection = 3;
		V_2 = 3;
	}

IL_012c:
	{
		// snakeTail.GetComponent<SpriteRenderer>().sprite = snakeTailSprites[newSnakeTailDirection];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = __this->get_snakeTail_22();
		NullCheck(L_51);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_52;
		L_52 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_51, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_53 = __this->get_snakeTailSprites_30();
		int32_t L_54 = V_2;
		NullCheck(L_53);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_55;
		L_55 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_53, L_54, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_52);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_52, L_55, /*hidden argument*/NULL);
		// snakeTail.GetComponent<SnakeTailDirection>().direction = newSnakeTailDirection;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = __this->get_snakeTail_22();
		NullCheck(L_56);
		SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * L_57;
		L_57 = GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB(L_56, /*hidden argument*/GameObject_GetComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mE8EFE533C27F822D0376C6F3FE12259C90E149BB_RuntimeMethod_var);
		int32_t L_58 = V_2;
		NullCheck(L_57);
		L_57->set_direction_4(L_58);
		// snakeTail.transform.position = new Vector3(x, y, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = __this->get_snakeTail_22();
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		float L_61 = V_3;
		float L_62 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_63), L_61, L_62, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_60, L_63, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeTail");
		float L_64 = V_3;
		int32_t L_65;
		L_65 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_64, /*hidden argument*/NULL);
		float L_66 = V_4;
		int32_t L_67;
		L_67 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_66, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_65, L_67, _stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::MoveSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeBody_mB80D331A16B56A76ED6DE40BBE549B54A00468F7 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// GameObject snakeBodyFirst = snakeBody[1];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_snakeBody_21();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, 1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		V_0 = L_1;
		// int newSnakeBodyFirstDirection = 0;
		V_1 = 0;
		// if(oldSnakeHeadDirection == 0)
		int32_t L_2 = __this->get_oldSnakeHeadDirection_23();
		if (L_2)
		{
			goto IL_0049;
		}
	}
	{
		// if(newSnakeHeadDirection == 3)
		int32_t L_3 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0027;
		}
	}
	{
		// newSnakeBodyFirstDirection = 3;
		V_1 = 3;
		// }
		goto IL_00d5;
	}

IL_0027:
	{
		// else if(newSnakeHeadDirection == 0)
		int32_t L_4 = __this->get_newSnakeHeadDirection_24();
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		// newSnakeBodyFirstDirection = 0;
		V_1 = 0;
		// }
		goto IL_00d5;
	}

IL_0036:
	{
		// else if(newSnakeHeadDirection == 1)
		int32_t L_5 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_00d5;
		}
	}
	{
		// newSnakeBodyFirstDirection = 2;
		V_1 = 2;
		// }
		goto IL_00d5;
	}

IL_0049:
	{
		// else if(oldSnakeHeadDirection == 1)
		int32_t L_6 = __this->get_oldSnakeHeadDirection_23();
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0078;
		}
	}
	{
		// if(newSnakeHeadDirection == 0)
		int32_t L_7 = __this->get_newSnakeHeadDirection_24();
		if (L_7)
		{
			goto IL_005e;
		}
	}
	{
		// newSnakeBodyFirstDirection = 4;
		V_1 = 4;
		// }
		goto IL_00d5;
	}

IL_005e:
	{
		// else if(newSnakeHeadDirection == 1)
		int32_t L_8 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		// newSnakeBodyFirstDirection = 5;
		V_1 = 5;
		// }
		goto IL_00d5;
	}

IL_006b:
	{
		// else if(newSnakeHeadDirection == 2)
		int32_t L_9 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00d5;
		}
	}
	{
		// newSnakeBodyFirstDirection = 3;
		V_1 = 3;
		// }
		goto IL_00d5;
	}

IL_0078:
	{
		// else if(oldSnakeHeadDirection == 2)
		int32_t L_10 = __this->get_oldSnakeHeadDirection_23();
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		// if(newSnakeHeadDirection == 1)
		int32_t L_11 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_008e;
		}
	}
	{
		// newSnakeBodyFirstDirection = 1;
		V_1 = 1;
		// }
		goto IL_00d5;
	}

IL_008e:
	{
		// else if(newSnakeHeadDirection == 2)
		int32_t L_12 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_12) == ((uint32_t)2))))
		{
			goto IL_009b;
		}
	}
	{
		// newSnakeBodyFirstDirection = 0;
		V_1 = 0;
		// }
		goto IL_00d5;
	}

IL_009b:
	{
		// else if(newSnakeHeadDirection == 3)
		int32_t L_13 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_13) == ((uint32_t)3))))
		{
			goto IL_00d5;
		}
	}
	{
		// newSnakeBodyFirstDirection = 4;
		V_1 = 4;
		// }
		goto IL_00d5;
	}

IL_00a8:
	{
		// else if(oldSnakeHeadDirection == 3)
		int32_t L_14 = __this->get_oldSnakeHeadDirection_23();
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_00d5;
		}
	}
	{
		// if(newSnakeHeadDirection == 2)
		int32_t L_15 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_15) == ((uint32_t)2))))
		{
			goto IL_00be;
		}
	}
	{
		// newSnakeBodyFirstDirection = 2;
		V_1 = 2;
		// }
		goto IL_00d5;
	}

IL_00be:
	{
		// else if(newSnakeHeadDirection == 3)
		int32_t L_16 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_16) == ((uint32_t)3))))
		{
			goto IL_00cb;
		}
	}
	{
		// newSnakeBodyFirstDirection = 5;
		V_1 = 5;
		// }
		goto IL_00d5;
	}

IL_00cb:
	{
		// else if(newSnakeHeadDirection == 0)
		int32_t L_17 = __this->get_newSnakeHeadDirection_24();
		if (L_17)
		{
			goto IL_00d5;
		}
	}
	{
		// newSnakeBodyFirstDirection = 1;
		V_1 = 1;
	}

IL_00d5:
	{
		// if(snakeBody.Count > 2)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_18 = __this->get_snakeBody_21();
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_18, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_19) <= ((int32_t)2)))
		{
			goto IL_01f5;
		}
	}
	{
		// int i = snakeBody.Count - 1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_20 = __this->get_snakeBody_21();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_20, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1));
		// int j = i - 1;
		int32_t L_22 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1));
		goto IL_01ed;
	}

IL_0100:
	{
		// float x = snakeBody[j].transform.position.x;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_23 = __this->get_snakeBody_21();
		int32_t L_24 = V_5;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_23, L_24, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_26, /*hidden argument*/NULL);
		float L_28 = L_27.get_x_2();
		V_6 = L_28;
		// float y = snakeBody[j].transform.position.y;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_29 = __this->get_snakeBody_21();
		int32_t L_30 = V_5;
		NullCheck(L_29);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		V_7 = L_34;
		// snakeBody[i].GetComponent<SnakeBodyDirection>().direction = snakeBody[j].GetComponent<SnakeBodyDirection>().direction;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_35 = __this->get_snakeBody_21();
		int32_t L_36 = V_4;
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_37);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_38;
		L_38 = GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3(L_37, /*hidden argument*/GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_39 = __this->get_snakeBody_21();
		int32_t L_40 = V_5;
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41;
		L_41 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_41);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_42;
		L_42 = GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3(L_41, /*hidden argument*/GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		NullCheck(L_42);
		int32_t L_43 = L_42->get_direction_4();
		NullCheck(L_38);
		L_38->set_direction_4(L_43);
		// snakeBody[i].GetComponent<SpriteRenderer>().sprite = snakeBodySprites[snakeBody[i].GetComponent<SnakeBodyDirection>().direction];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_44 = __this->get_snakeBody_21();
		int32_t L_45 = V_4;
		NullCheck(L_44);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_44, L_45, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_46);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_47;
		L_47 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_46, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_48 = __this->get_snakeBodySprites_29();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_49 = __this->get_snakeBody_21();
		int32_t L_50 = V_4;
		NullCheck(L_49);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_49, L_50, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_51);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_52;
		L_52 = GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3(L_51, /*hidden argument*/GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		NullCheck(L_52);
		int32_t L_53 = L_52->get_direction_4();
		NullCheck(L_48);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_54;
		L_54 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_48, L_53, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_47);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_47, L_54, /*hidden argument*/NULL);
		// snakeBody[i].transform.position = new Vector3(x, y, 0f);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_55 = __this->get_snakeBody_21();
		int32_t L_56 = V_4;
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_57;
		L_57 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_55, L_56, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		NullCheck(L_57);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_58;
		L_58 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_57, /*hidden argument*/NULL);
		float L_59 = V_6;
		float L_60 = V_7;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_61), L_59, L_60, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_58);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_58, L_61, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeBody");
		float L_62 = V_6;
		int32_t L_63;
		L_63 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_62, /*hidden argument*/NULL);
		float L_64 = V_7;
		int32_t L_65;
		L_65 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_64, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_63, L_65, _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A, /*hidden argument*/NULL);
		// i--;
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1));
		// j--;
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_67, (int32_t)1));
	}

IL_01ed:
	{
		// while(i > 1)
		int32_t L_68 = V_4;
		if ((((int32_t)L_68) > ((int32_t)1)))
		{
			goto IL_0100;
		}
	}

IL_01f5:
	{
		// float xFirst = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_snakeHead_19();
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_x_2();
		V_2 = L_72;
		// float yFirst = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_snakeHead_19();
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_y_3();
		V_3 = L_76;
		// snakeBodyFirst.GetComponent<SnakeBodyDirection>().direction = newSnakeBodyFirstDirection;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = V_0;
		NullCheck(L_77);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_78;
		L_78 = GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3(L_77, /*hidden argument*/GameObject_GetComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m6AF5D749EECE5E407473F71E0C17D376FE3A63B3_RuntimeMethod_var);
		int32_t L_79 = V_1;
		NullCheck(L_78);
		L_78->set_direction_4(L_79);
		// snakeBodyFirst.GetComponent<SpriteRenderer>().sprite = snakeBodySprites[newSnakeBodyFirstDirection];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = V_0;
		NullCheck(L_80);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_81;
		L_81 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_80, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_82 = __this->get_snakeBodySprites_29();
		int32_t L_83 = V_1;
		NullCheck(L_82);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_84;
		L_84 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_82, L_83, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_81);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_81, L_84, /*hidden argument*/NULL);
		// snakeBodyFirst.transform.position = new Vector3(xFirst, yFirst, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = V_0;
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_86;
		L_86 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		float L_87 = V_2;
		float L_88 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89;
		memset((&L_89), 0, sizeof(L_89));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_89), L_87, L_88, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_86);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_86, L_89, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(xFirst), Mathf.FloorToInt(yFirst), "SnakeBody");
		float L_90 = V_2;
		int32_t L_91;
		L_91 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_90, /*hidden argument*/NULL);
		float L_92 = V_3;
		int32_t L_93;
		L_93 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_92, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_91, L_93, _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::MoveSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_MoveSnakeHead_mE41691A04C161AD56BB4C524D548848B5224B643 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mFA419B212A3BA0A339239EF76F8C2356EECB2773_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3855FE6159234F581329E16AD867120557C5464B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ADDE0621EE965EAC99A864663B536E288B7AC53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D1A6B4B55F80855A51E53BD7F7F6A6243B91DE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E58F0CFC840E37BFC058BF03B25E48E88F8C03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9134E651013CB96FAB8C95E68F3B9C73721CA87E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_2 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_3 = NULL;
	SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * V_4 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B16_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B10_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B12_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B11_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B37_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B14_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B13_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B15_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B23_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B17_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B19_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B18_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B21_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B20_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B22_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B30_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B24_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B26_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B25_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B28_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B27_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B29_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B31_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B33_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B32_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B35_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B34_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B36_0 = NULL;
	{
		// float x = 0;
		V_0 = (0.0f);
		// float y = 0;
		V_1 = (0.0f);
		// if (newSnakeHeadDirection == 0)
		int32_t L_0 = __this->get_newSnakeHeadDirection_24();
		if (L_0)
		{
			goto IL_004b;
		}
	}
	{
		// x = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_snakeHead_19();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		V_0 = L_4;
		// y = snakeHead.transform.position.y + 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_snakeHead_19();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		V_1 = ((float)il2cpp_codegen_add((float)L_8, (float)(1.0f)));
		// }
		goto IL_0100;
	}

IL_004b:
	{
		// else if (newSnakeHeadDirection == 1)
		int32_t L_9 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		// x = snakeHead.transform.position.x + 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_snakeHead_19();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_x_2();
		V_0 = ((float)il2cpp_codegen_add((float)L_13, (float)(1.0f)));
		// y = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_snakeHead_19();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		V_1 = L_17;
		// }
		goto IL_0100;
	}

IL_0088:
	{
		// else if (newSnakeHeadDirection == 2)
		int32_t L_18 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_00c5;
		}
	}
	{
		// x = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_snakeHead_19();
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_x_2();
		V_0 = L_22;
		// y = snakeHead.transform.position.y - 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_snakeHead_19();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_3();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_26, (float)(1.0f)));
		// }
		goto IL_0100;
	}

IL_00c5:
	{
		// else if(newSnakeHeadDirection == 3)
		int32_t L_27 = __this->get_newSnakeHeadDirection_24();
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_0100;
		}
	}
	{
		// x = snakeHead.transform.position.x - 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_snakeHead_19();
		NullCheck(L_28);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_31, (float)(1.0f)));
		// y = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32 = __this->get_snakeHead_19();
		NullCheck(L_32);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		V_1 = L_35;
	}

IL_0100:
	{
		// if (destType == "Food")
		String_t* L_36 = __this->get_destType_25();
		bool L_37;
		L_37 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_36, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_03c0;
		}
	}
	{
		// GameObject.Destroy(food);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_food_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_38, /*hidden argument*/NULL);
		// GameObject newAddedBody = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_39, /*hidden argument*/NULL);
		// SpriteRenderer newAddedBodyRenderer = newAddedBody.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = L_39;
		NullCheck(L_40);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_41;
		L_41 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_40, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		V_2 = L_41;
		// BoxCollider2D newAddedBodyCollider = newAddedBody.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = L_40;
		NullCheck(L_42);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_43;
		L_43 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_42, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		V_3 = L_43;
		// SnakeBodyDirection newAddedBodyDirection = newAddedBody.AddComponent<SnakeBodyDirection>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = L_42;
		NullCheck(L_44);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_45;
		L_45 = GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367(L_44, /*hidden argument*/GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367_RuntimeMethod_var);
		V_4 = L_45;
		// newAddedBodyRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_46 = V_2;
		NullCheck(L_46);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_46, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// Vector2 colliderSize = new Vector2(0.9f, 0.9f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_5), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		// newAddedBodyCollider.size = colliderSize;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_47 = V_3;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_48 = V_5;
		NullCheck(L_47);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_47, L_48, /*hidden argument*/NULL);
		// int newSnakeBodyFirstDirection = 0;
		V_6 = 0;
		// if (oldSnakeHeadDirection == 0)
		int32_t L_49 = __this->get_oldSnakeHeadDirection_23();
		G_B10_0 = L_44;
		if (L_49)
		{
			G_B16_0 = L_44;
			goto IL_019f;
		}
	}
	{
		// if (newSnakeHeadDirection == 3)
		int32_t L_50 = __this->get_newSnakeHeadDirection_24();
		G_B11_0 = G_B10_0;
		if ((!(((uint32_t)L_50) == ((uint32_t)3))))
		{
			G_B12_0 = G_B10_0;
			goto IL_017b;
		}
	}
	{
		// newSnakeBodyFirstDirection = 3;
		V_6 = 3;
		// }
		G_B37_0 = G_B11_0;
		goto IL_0234;
	}

IL_017b:
	{
		// else if (newSnakeHeadDirection == 0)
		int32_t L_51 = __this->get_newSnakeHeadDirection_24();
		G_B13_0 = G_B12_0;
		if (L_51)
		{
			G_B14_0 = G_B12_0;
			goto IL_018b;
		}
	}
	{
		// newSnakeBodyFirstDirection = 0;
		V_6 = 0;
		// }
		G_B37_0 = G_B13_0;
		goto IL_0234;
	}

IL_018b:
	{
		// else if (newSnakeHeadDirection == 1)
		int32_t L_52 = __this->get_newSnakeHeadDirection_24();
		G_B15_0 = G_B14_0;
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			G_B37_0 = G_B14_0;
			goto IL_0234;
		}
	}
	{
		// newSnakeBodyFirstDirection = 2;
		V_6 = 2;
		// }
		G_B37_0 = G_B15_0;
		goto IL_0234;
	}

IL_019f:
	{
		// else if (oldSnakeHeadDirection == 1)
		int32_t L_53 = __this->get_oldSnakeHeadDirection_23();
		G_B17_0 = G_B16_0;
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			G_B23_0 = G_B16_0;
			goto IL_01d1;
		}
	}
	{
		// if (newSnakeHeadDirection == 0)
		int32_t L_54 = __this->get_newSnakeHeadDirection_24();
		G_B18_0 = G_B17_0;
		if (L_54)
		{
			G_B19_0 = G_B17_0;
			goto IL_01b5;
		}
	}
	{
		// newSnakeBodyFirstDirection = 4;
		V_6 = 4;
		// }
		G_B37_0 = G_B18_0;
		goto IL_0234;
	}

IL_01b5:
	{
		// else if (newSnakeHeadDirection == 1)
		int32_t L_55 = __this->get_newSnakeHeadDirection_24();
		G_B20_0 = G_B19_0;
		if ((!(((uint32_t)L_55) == ((uint32_t)1))))
		{
			G_B21_0 = G_B19_0;
			goto IL_01c3;
		}
	}
	{
		// newSnakeBodyFirstDirection = 5;
		V_6 = 5;
		// }
		G_B37_0 = G_B20_0;
		goto IL_0234;
	}

IL_01c3:
	{
		// else if (newSnakeHeadDirection == 2)
		int32_t L_56 = __this->get_newSnakeHeadDirection_24();
		G_B22_0 = G_B21_0;
		if ((!(((uint32_t)L_56) == ((uint32_t)2))))
		{
			G_B37_0 = G_B21_0;
			goto IL_0234;
		}
	}
	{
		// newSnakeBodyFirstDirection = 3;
		V_6 = 3;
		// }
		G_B37_0 = G_B22_0;
		goto IL_0234;
	}

IL_01d1:
	{
		// else if (oldSnakeHeadDirection == 2)
		int32_t L_57 = __this->get_oldSnakeHeadDirection_23();
		G_B24_0 = G_B23_0;
		if ((!(((uint32_t)L_57) == ((uint32_t)2))))
		{
			G_B30_0 = G_B23_0;
			goto IL_0204;
		}
	}
	{
		// if (newSnakeHeadDirection == 1)
		int32_t L_58 = __this->get_newSnakeHeadDirection_24();
		G_B25_0 = G_B24_0;
		if ((!(((uint32_t)L_58) == ((uint32_t)1))))
		{
			G_B26_0 = G_B24_0;
			goto IL_01e8;
		}
	}
	{
		// newSnakeBodyFirstDirection = 1;
		V_6 = 1;
		// }
		G_B37_0 = G_B25_0;
		goto IL_0234;
	}

IL_01e8:
	{
		// else if (newSnakeHeadDirection == 2)
		int32_t L_59 = __this->get_newSnakeHeadDirection_24();
		G_B27_0 = G_B26_0;
		if ((!(((uint32_t)L_59) == ((uint32_t)2))))
		{
			G_B28_0 = G_B26_0;
			goto IL_01f6;
		}
	}
	{
		// newSnakeBodyFirstDirection = 0;
		V_6 = 0;
		// }
		G_B37_0 = G_B27_0;
		goto IL_0234;
	}

IL_01f6:
	{
		// else if (newSnakeHeadDirection == 3)
		int32_t L_60 = __this->get_newSnakeHeadDirection_24();
		G_B29_0 = G_B28_0;
		if ((!(((uint32_t)L_60) == ((uint32_t)3))))
		{
			G_B37_0 = G_B28_0;
			goto IL_0234;
		}
	}
	{
		// newSnakeBodyFirstDirection = 4;
		V_6 = 4;
		// }
		G_B37_0 = G_B29_0;
		goto IL_0234;
	}

IL_0204:
	{
		// else if (oldSnakeHeadDirection == 3)
		int32_t L_61 = __this->get_oldSnakeHeadDirection_23();
		G_B31_0 = G_B30_0;
		if ((!(((uint32_t)L_61) == ((uint32_t)3))))
		{
			G_B37_0 = G_B30_0;
			goto IL_0234;
		}
	}
	{
		// if (newSnakeHeadDirection == 2)
		int32_t L_62 = __this->get_newSnakeHeadDirection_24();
		G_B32_0 = G_B31_0;
		if ((!(((uint32_t)L_62) == ((uint32_t)2))))
		{
			G_B33_0 = G_B31_0;
			goto IL_021b;
		}
	}
	{
		// newSnakeBodyFirstDirection = 2;
		V_6 = 2;
		// }
		G_B37_0 = G_B32_0;
		goto IL_0234;
	}

IL_021b:
	{
		// else if (newSnakeHeadDirection == 3)
		int32_t L_63 = __this->get_newSnakeHeadDirection_24();
		G_B34_0 = G_B33_0;
		if ((!(((uint32_t)L_63) == ((uint32_t)3))))
		{
			G_B35_0 = G_B33_0;
			goto IL_0229;
		}
	}
	{
		// newSnakeBodyFirstDirection = 5;
		V_6 = 5;
		// }
		G_B37_0 = G_B34_0;
		goto IL_0234;
	}

IL_0229:
	{
		// else if (newSnakeHeadDirection == 0)
		int32_t L_64 = __this->get_newSnakeHeadDirection_24();
		G_B36_0 = G_B35_0;
		if (L_64)
		{
			G_B37_0 = G_B35_0;
			goto IL_0234;
		}
	}
	{
		// newSnakeBodyFirstDirection = 1;
		V_6 = 1;
		G_B37_0 = G_B36_0;
	}

IL_0234:
	{
		// string GAMEOBJECT_NAME = "SnakeBody-" + (snakeBody.Count - 1);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_65 = __this->get_snakeBody_21();
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_65, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		V_12 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_66, (int32_t)1));
		String_t* L_67;
		L_67 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_12), /*hidden argument*/NULL);
		String_t* L_68;
		L_68 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral89E58F0CFC840E37BFC058BF03B25E48E88F8C03, L_67, /*hidden argument*/NULL);
		V_7 = L_68;
		// string GAMEOBJECT_TAG = "Obstacle";
		V_8 = _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
		// float xNew = snakeHead.transform.position.x;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_snakeHead_19();
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70;
		L_70 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_71;
		L_71 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_x_2();
		V_9 = L_72;
		// float yNew = snakeHead.transform.position.y;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = __this->get_snakeHead_19();
		NullCheck(L_73);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_75;
		L_75 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_74, /*hidden argument*/NULL);
		float L_76 = L_75.get_y_3();
		V_10 = L_76;
		// float zNew = 0f;
		V_11 = (0.0f);
		// newAddedBody.transform.parent = snakeBodyContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = G_B37_0;
		NullCheck(L_77);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78;
		L_78 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_77, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = __this->get_snakeBodyContainer_20();
		NullCheck(L_79);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_79, /*hidden argument*/NULL);
		NullCheck(L_78);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_78, L_80, /*hidden argument*/NULL);
		// newAddedBody.transform.SetAsFirstSibling();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = L_77;
		NullCheck(L_81);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		Transform_SetAsFirstSibling_mD5C02831BA6C7C3408CD491191EAF760ECB7E754(L_82, /*hidden argument*/NULL);
		// newAddedBody.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = L_81;
		String_t* L_84 = V_7;
		NullCheck(L_83);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_83, L_84, /*hidden argument*/NULL);
		// newAddedBody.tag = GAMEOBJECT_TAG;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = L_83;
		String_t* L_86 = V_8;
		NullCheck(L_85);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_85, L_86, /*hidden argument*/NULL);
		// newAddedBody.transform.position = new Vector3(xNew, yNew, zNew);
		NullCheck(L_85);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_87;
		L_87 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_85, /*hidden argument*/NULL);
		float L_88 = V_9;
		float L_89 = V_10;
		float L_90 = V_11;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_91), L_88, L_89, L_90, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_87, L_91, /*hidden argument*/NULL);
		// newAddedBodyRenderer.sprite = snakeBodySprites[newSnakeBodyFirstDirection];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_92 = V_2;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_93 = __this->get_snakeBodySprites_29();
		int32_t L_94 = V_6;
		NullCheck(L_93);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_95;
		L_95 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_93, L_94, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_92);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_92, L_95, /*hidden argument*/NULL);
		// newAddedBodyDirection.direction = newSnakeBodyFirstDirection;
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_96 = V_4;
		int32_t L_97 = V_6;
		NullCheck(L_96);
		L_96->set_direction_4(L_97);
		// SoundManager.instance.SnakeBiteSound.Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_98 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_98);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_99 = L_98->get_SnakeBiteSound_6();
		NullCheck(L_99);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_99, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(xNew), Mathf.FloorToInt(yNew), "SnakeBody");
		float L_100 = V_9;
		int32_t L_101;
		L_101 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_100, /*hidden argument*/NULL);
		float L_102 = V_10;
		int32_t L_103;
		L_103 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_102, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_101, L_103, _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A, /*hidden argument*/NULL);
		// SetRemainingFood();
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		GameHandler_SetRemainingFood_m41CAEB1BCA9F5EAF1BCA1D62141C663D76F46238(/*hidden argument*/NULL);
		// userInfo = "Tap Food Position";
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D);
		// foodRenderer.GetComponent<FoodRenderer>().enabled = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = __this->get_foodRenderer_27();
		NullCheck(L_104);
		FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * L_105;
		L_105 = GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A(L_104, /*hidden argument*/GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var);
		NullCheck(L_105);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_105, (bool)1, /*hidden argument*/NULL);
		// if (GetRemainingFood() == 0)
		int32_t L_106;
		L_106 = GameHandler_GetRemainingFood_m4F8EF878B056E1BB74EF07329CB2E915F5E7023A_inline(/*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_03b9;
		}
	}
	{
		// SoundManager.instance.ThemeSound.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_107 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_107);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_108 = L_107->get_ThemeSound_7();
		NullCheck(L_108);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_108, /*hidden argument*/NULL);
		// SoundManager.instance.LoseSong.Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_109 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_109);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_110 = L_109->get_LoseSong_9();
		NullCheck(L_110);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_110, /*hidden argument*/NULL);
		// userInfo = "AI Win";
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(_stringLiteral5ADDE0621EE965EAC99A864663B536E288B7AC53);
		// loseUI.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = __this->get_loseUI_15();
		NullCheck(L_111);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_112;
		L_112 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_113;
		L_113 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_112, 0, /*hidden argument*/NULL);
		NullCheck(L_113);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114;
		L_114 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_113, /*hidden argument*/NULL);
		NullCheck(L_114);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_114, (bool)1, /*hidden argument*/NULL);
		// GameObject loseButton = GameObject.Find("ReloadLoseButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_115;
		L_115 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6D1A6B4B55F80855A51E53BD7F7F6A6243B91DE5, /*hidden argument*/NULL);
		// loseButton.GetComponent<Button>().interactable = true;
		NullCheck(L_115);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_116;
		L_116 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_115, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_116);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_116, (bool)1, /*hidden argument*/NULL);
		// foodRenderer.GetComponent<FoodRenderer>().enabled = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = __this->get_foodRenderer_27();
		NullCheck(L_117);
		FoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10 * L_118;
		L_118 = GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A(L_117, /*hidden argument*/GameObject_GetComponent_TisFoodRenderer_t25655540D6B6953217F022B22F55A6F70909FB10_m6B16A9BCC694AD654B8035FD9AA44B7529AC760A_RuntimeMethod_var);
		NullCheck(L_118);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_118, (bool)0, /*hidden argument*/NULL);
		// winUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_119 = __this->get_winUI_16();
		NullCheck(L_119);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_119, (bool)0, /*hidden argument*/NULL);
	}

IL_03b9:
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_03c0:
	{
		// snakeHead.GetComponent<SpriteRenderer>().sprite = snakeHeadSprites[newSnakeHeadDirection];
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120 = __this->get_snakeHead_19();
		NullCheck(L_120);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_121;
		L_121 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_120, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_122 = __this->get_snakeHeadSprites_28();
		int32_t L_123 = __this->get_newSnakeHeadDirection_24();
		NullCheck(L_122);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_124;
		L_124 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_122, L_123, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_121);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_121, L_124, /*hidden argument*/NULL);
		// snakeHead.GetComponent<SnakeHeadDirection>().direction = newSnakeHeadDirection;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = __this->get_snakeHead_19();
		NullCheck(L_125);
		SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * L_126;
		L_126 = GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6(L_125, /*hidden argument*/GameObject_GetComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_mB81B9BE306F6EF777D710F84F0152B453E4F7EB6_RuntimeMethod_var);
		int32_t L_127 = __this->get_newSnakeHeadDirection_24();
		NullCheck(L_126);
		L_126->set_direction_4(L_127);
		// snakeHead.transform.position = new Vector3(x, y, 0f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = __this->get_snakeHead_19();
		NullCheck(L_128);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_129;
		L_129 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_128, /*hidden argument*/NULL);
		float L_130 = V_0;
		float L_131 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_132), L_130, L_131, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_129, L_132, /*hidden argument*/NULL);
		// SoundManager.instance.SnakeMovementSounds[newSnakeHeadDirection].Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_133 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_133);
		List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * L_134 = L_133->get_SnakeMovementSounds_5();
		int32_t L_135 = __this->get_newSnakeHeadDirection_24();
		NullCheck(L_134);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_136;
		L_136 = List_1_get_Item_mFA419B212A3BA0A339239EF76F8C2356EECB2773_inline(L_134, L_135, /*hidden argument*/List_1_get_Item_mFA419B212A3BA0A339239EF76F8C2356EECB2773_RuntimeMethod_var);
		NullCheck(L_136);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_136, /*hidden argument*/NULL);
		// if(destType == "SnakeBody" ||
		//     destType == "SnakeTail" ||
		//     destType == "Wall")
		String_t* L_137 = __this->get_destType_25();
		bool L_138;
		L_138 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_137, _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A, /*hidden argument*/NULL);
		if (L_138)
		{
			goto IL_0463;
		}
	}
	{
		String_t* L_139 = __this->get_destType_25();
		bool L_140;
		L_140 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_139, _stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861, /*hidden argument*/NULL);
		if (L_140)
		{
			goto IL_0463;
		}
	}
	{
		String_t* L_141 = __this->get_destType_25();
		bool L_142;
		L_142 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_141, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		if (!L_142)
		{
			goto IL_04de;
		}
	}

IL_0463:
	{
		// SoundManager.instance.ThemeSound.Stop();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_143 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_143);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_144 = L_143->get_ThemeSound_7();
		NullCheck(L_144);
		AudioSource_Stop_mADA564D223832A64F8CF3EFBDEB534C0D658810F(L_144, /*hidden argument*/NULL);
		// SoundManager.instance.LoseSFX.Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_145 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_145);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_146 = L_145->get_LoseSFX_8();
		NullCheck(L_146);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_146, /*hidden argument*/NULL);
		// SoundManager.instance.WinSong.Play();
		SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * L_147 = ((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_147);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_148 = L_147->get_WinSong_10();
		NullCheck(L_148);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_148, /*hidden argument*/NULL);
		// userInfo = "AI Lose";
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(_stringLiteral9134E651013CB96FAB8C95E68F3B9C73721CA87E);
		// winUI.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_149 = __this->get_winUI_16();
		NullCheck(L_149);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_149, /*hidden argument*/NULL);
		NullCheck(L_150);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_151;
		L_151 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_150, 0, /*hidden argument*/NULL);
		NullCheck(L_151);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_152;
		L_152 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_151, /*hidden argument*/NULL);
		NullCheck(L_152);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_152, (bool)1, /*hidden argument*/NULL);
		// GameObject winButton = GameObject.Find("ReloadWinButton");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153;
		L_153 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral3855FE6159234F581329E16AD867120557C5464B, /*hidden argument*/NULL);
		// winButton.GetComponent<Button>().interactable = true;
		NullCheck(L_153);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_154;
		L_154 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_153, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_154);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_154, (bool)1, /*hidden argument*/NULL);
		// loseUI.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155 = __this->get_loseUI_15();
		NullCheck(L_155);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_155, (bool)0, /*hidden argument*/NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_04de:
	{
		// SetObjectInMap(Mathf.FloorToInt(x), Mathf.FloorToInt(y), "SnakeHead");
		float L_156 = V_0;
		int32_t L_157;
		L_157 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_156, /*hidden argument*/NULL);
		float L_158 = V_1;
		int32_t L_159;
		L_159 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_158, /*hidden argument*/NULL);
		GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876(__this, L_157, L_159, _stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameHandler::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetObjectInMap_m0E1DAE3E1479CDB12935C97FE4109C51C55E5876 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameMap_17();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___xIndex0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___yIndex1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_7;
		L_7 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_6, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		String_t* L_8 = ___content2;
		NullCheck(L_7);
		NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 GameHandler::GetRemainingFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameHandler_GetRemainingFood_m4F8EF878B056E1BB74EF07329CB2E915F5E7023A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return remainingFood;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->get_remainingFood_13();
		return L_0;
	}
}
// System.Void GameHandler::SetRemainingFood()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_SetRemainingFood_m41CAEB1BCA9F5EAF1BCA1D62141C663D76F46238 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remainingFood--;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->get_remainingFood_13();
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_remainingFood_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GameHandler::InitializeRemainingFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_InitializeRemainingFood_m04A42B5FB017997691C28EE2D45C759885B2C2A2 (int32_t ___givenFood0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remainingFood = givenFood;
		int32_t L_0 = ___givenFood0;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_remainingFood_13(L_0);
		// }
		return;
	}
}
// System.String GameHandler::GetUserInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameHandler_GetUserInfo_m6575305204F8ED4F1E57C9F4802DFBD46432CE09 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return userInfo;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->get_userInfo_14();
		return L_0;
	}
}
// System.Void GameHandler::InitializeUserInfo(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler_InitializeUserInfo_m5187DD2F4A3DAFF40E0ADF52C7C2C1BE5269E7D6 (String_t* ___startInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userInfo = startInfo;
		String_t* L_0 = ___startInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(L_0);
		// }
		return;
	}
}
// System.Void GameHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler__ctor_m99B62501A237CFBFE117E822D074F35D036E79A2 (GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<List<int>> mapToPass = new List<List<int>>();
		List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A * L_0 = (List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A *)il2cpp_codegen_object_new(List_1_tA886711A0D76F99F7013D42BCA06BC2A2A057B2A_il2cpp_TypeInfo_var);
		List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3(L_0, /*hidden argument*/List_1__ctor_mEE5C15549EF9FC8E08F2CD0E05AE477F8EE345A3_RuntimeMethod_var);
		__this->set_mapToPass_18(L_0);
		// private List<GameObject> snakeBody = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_1 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_1, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_snakeBody_21(L_1);
		// private string destType = "";
		__this->set_destType_25(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private List<Sprite> snakeHeadSprites = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_2 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_2, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_snakeHeadSprites_28(L_2);
		// private List<Sprite> snakeBodySprites = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_3 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_3, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_snakeBodySprites_29(L_3);
		// private List<Sprite> snakeTailSprites = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_4 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_4, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_snakeTailSprites_30(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameHandler__cctor_m10B00D7E3B89F7EC8DDFAF641B4981A929CD860D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static int remainingFood = 2;
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_remainingFood_13(2);
		// private static string userInfo = "Tap Food Position";
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(_stringLiteral86ABB92AA41F3DB34EB00837F26E855D0B62A11D);
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
// System.Void LevelManager::SetLevelFood(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_SetLevelFood_mACA82B902EFF635B8360E0B102A3BD6457CAC870 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, int32_t ___foodLevel0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameHandler.InitializeRemainingFood(foodLevel);
		int32_t L_0 = ___foodLevel0;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		GameHandler_InitializeRemainingFood_m04A42B5FB017997691C28EE2D45C759885B2C2A2_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_mD6FAECFAF24E1996EC8147344018498B20E3DE49 (LevelManager_t010B312A2B35B45291F58195216ABB5673174961 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Loader::Load(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader_Load_m5DD02C25D3BF79995935BAF342BC66D340524CF0 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, int32_t ___sceneBuildIndex0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(AsyncLoad(sceneBuildIndex));
		int32_t L_0 = ___sceneBuildIndex0;
		RuntimeObject* L_1;
		L_1 = Loader_AsyncLoad_mBB5E380629F7C39BC006106A5CA1D4B9C5C86E2B(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Loader::AsyncLoad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Loader_AsyncLoad_mBB5E380629F7C39BC006106A5CA1D4B9C5C86E2B (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, int32_t ___sceneBuildIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * L_0 = (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 *)il2cpp_codegen_object_new(U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28_il2cpp_TypeInfo_var);
		U3CAsyncLoadU3Ed__3__ctor_m5213D9CDB4F7310547B2C5EE19991606651E1975(L_0, 0, /*hidden argument*/NULL);
		U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * L_2 = L_1;
		int32_t L_3 = ___sceneBuildIndex0;
		NullCheck(L_2);
		L_2->set_sceneBuildIndex_2(L_3);
		return L_2;
	}
}
// System.Void Loader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Loader__ctor_m15D78DFE09D5A9C562B7E58B0D4C392427D1E674 (Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuToLevel::OpenLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuToLevel_OpenLevel_m92A091F9033A000CB1621D39F057B5A5BE2C74BB (MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D4C280F3A4ECFCFD1D55DE838404FF94DF074FB);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// levelUI = GameObject.Find("LevelUI");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9D4C280F3A4ECFCFD1D55DE838404FF94DF074FB, /*hidden argument*/NULL);
		__this->set_levelUI_6(L_0);
		// levelUI.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_levelUI_6();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_2, 0, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// foreach(GameObject button in LevelButtons)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_5 = __this->get_LevelButtons_4();
		NullCheck(L_5);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_6;
		L_6 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_5, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004c;
		}

IL_003a:
		{
			// foreach(GameObject button in LevelButtons)
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
			L_7 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			// button.GetComponent<Button>().interactable = true;
			NullCheck(L_7);
			Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8;
			L_8 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_7, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
			NullCheck(L_8);
			Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_8, (bool)1, /*hidden argument*/NULL);
		}

IL_004c:
		{
			// foreach(GameObject button in LevelButtons)
			bool L_9;
			L_9 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_003a;
			}
		}

IL_0055:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0057);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0057;
	}

FINALLY_0057:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(87)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(87)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
	}

IL_0065:
	{
		// LevelBackground.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_LevelBackground_5();
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuToLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuToLevel__ctor_mF6FDA6D2309247996F5BC7835AB209B8530303D5 (MenuToLevel_t1EFFEBD54925CEF7CD5C194AFB617140455F90F4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NodeObject::.ctor(System.Single,System.Int32,System.Int32,NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject__ctor_m371AF578D0D5B5EF640A7E0DC7722CF88D36A5A2 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, float ___value0, int32_t ___row1, int32_t ___col2, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___parent3, const RuntimeMethod* method)
{
	{
		// public NodeObject(float value, int row, int col, NodeObject parent)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.value = value;
		float L_0 = ___value0;
		__this->set_value_0(L_0);
		// this.row = row;
		int32_t L_1 = ___row1;
		__this->set_row_1(L_1);
		// this.col = col;
		int32_t L_2 = ___col2;
		__this->set_col_2(L_2);
		// this.parent = parent;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_3 = ___parent3;
		__this->set_parent_3(L_3);
		// }
		return;
	}
}
// System.Void NodeObject::SetNodeObjectVal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject_SetNodeObjectVal_mD5D39E6C8938E97E54256679764B6C7FB4F1FA1D (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// this.value = value;
		int32_t L_0 = ___value0;
		__this->set_value_0(((float)((float)L_0)));
		// }
		return;
	}
}
// System.Single NodeObject::GetNodeObjectVal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NodeObject_GetNodeObjectVal_mD622639CA15A7F16710994470C24F524DB474F12 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return value;
		float L_0 = __this->get_value_0();
		return L_0;
	}
}
// System.Void NodeObject::SetNodeObjectRow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject_SetNodeObjectRow_m0390AB5B1D7E054750802B53527CF80959AAE0C3 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, int32_t ___row0, const RuntimeMethod* method)
{
	{
		// this.row = row;
		int32_t L_0 = ___row0;
		__this->set_row_1(L_0);
		// }
		return;
	}
}
// System.Int32 NodeObject::GetNodeObjectRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return row;
		int32_t L_0 = __this->get_row_1();
		return L_0;
	}
}
// System.Void NodeObject::SetNodeObjectCol(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject_SetNodeObjectCol_mEB80C785322117B45739ADE89A8F923F1C4FDE91 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, int32_t ___col0, const RuntimeMethod* method)
{
	{
		// this.col = col;
		int32_t L_0 = ___col0;
		__this->set_col_2(L_0);
		// }
		return;
	}
}
// System.Int32 NodeObject::GetNodeObjectCol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return col;
		int32_t L_0 = __this->get_col_2();
		return L_0;
	}
}
// System.Void NodeObject::SetNodeObjectParent(NodeObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeObject_SetNodeObjectParent_mBA36DABBD8BF7057DEC3D78C04C355BA7395BA62 (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * ___parent0, const RuntimeMethod* method)
{
	{
		// this.parent = parent;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = ___parent0;
		__this->set_parent_3(L_0);
		// }
		return;
	}
}
// NodeObject NodeObject::GetNodeObjectParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return this.parent;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = __this->get_parent_3();
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
// System.String NodeType::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, const RuntimeMethod* method)
{
	{
		// return this.nodeType;
		String_t* L_0 = __this->get_nodeType_4();
		return L_0;
	}
}
// System.Void NodeType::set_Type(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712 (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// nodeType = value;
		String_t* L_0 = ___value0;
		__this->set_nodeType_4(L_0);
		// }
		return;
	}
}
// System.Void NodeType::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeType__ctor_m5BA1933168E27563853A08637810DD996C9F8228 (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void QuitGame::QuitApp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame_QuitApp_mA023599F3A082F214EFA8D88DE5FED4187607A42 (QuitGame_t80B704BD0C5444093731B42317E6BD1D82361C53 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuitGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuitGame__ctor_mF8E4454744C9BCEB7CEB4B216701EB7319931C79 (QuitGame_t80B704BD0C5444093731B42317E6BD1D82361C53 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScoreWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow_Awake_mAD4EF9B44B331695E60A9FA184AFFC7FE3DD7065 (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B82D9E142F5569AB7130B9BD336892C18E3DB4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = GameObject.Find("RemainingFood").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral79B82D9E142F5569AB7130B9BD336892C18E3DB4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_scoreText_4(L_1);
		// }
		return;
	}
}
// System.Void ScoreWindow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow_Update_mDC948AEAFEE264CBF65AE4E1DE2F3FC497D97AB5 (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = GameHandler.GetRemainingFood().ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GameHandler_GetRemainingFood_m4F8EF878B056E1BB74EF07329CB2E915F5E7023A_inline(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ScoreWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreWindow__ctor_m14ADEA0F61FA5F03C12F57E0CD8D55FF9A7BDDAC (ScoreWindow_t0A6F76DD706EE74431B3D9354A4DA58E420D621A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SnakeBodyDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnakeBodyDirection__ctor_mDB1960246A29F227A2957C421331A8810275E3D3 (SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SnakeHeadDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnakeHeadDirection__ctor_m771B3394C2877DF09BB5503D49665E7ECAAAEBED (SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SnakeTailDirection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SnakeTailDirection__ctor_m3F6EF01D7BBC45932F242A14273E8652A9E8BD94 (SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager_Awake_m78F953F39CFB3F539240E1226D04270B793B1A76 (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void SoundManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoundManager__ctor_m30D18BC25871BD3FF7FB195A1CAE50A2EE48FCAE (SoundManager_t55BBC5661BB88EBEFF99C27CBD475CF774902D62 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m43D13796D624C614140D9E1C89CCA71088BE52D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<AudioSource> SnakeMovementSounds = new List<AudioSource>();
		List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B * L_0 = (List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B *)il2cpp_codegen_object_new(List_1_tF5FB68811B76E8C519C3FE07829F8C1437C52B3B_il2cpp_TypeInfo_var);
		List_1__ctor_m43D13796D624C614140D9E1C89CCA71088BE52D3(L_0, /*hidden argument*/List_1__ctor_m43D13796D624C614140D9E1C89CCA71088BE52D3_RuntimeMethod_var);
		__this->set_SnakeMovementSounds_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StartSnakeRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_Start_m5F5A9210B766F44DD7B9C346F2AA8CB45C7268E8 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap = GameObject.Find("/Map");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C, /*hidden argument*/NULL);
		__this->set_GameMap_6(L_0);
		// FetchSnakeHead();
		StartSnakeRenderer_FetchSnakeHead_m84435E09AE82E0FEF0CD1A59C3E360E4D84AC502(__this, /*hidden argument*/NULL);
		// FetchSnakeBody();
		StartSnakeRenderer_FetchSnakeBody_mC142683325FC529CD0CF6BB0BB5D18132F9410F0(__this, /*hidden argument*/NULL);
		// FetchSnakeTail();
		StartSnakeRenderer_FetchSnakeTail_m780A2EB0E838B5A50A8DDAACA70A813374A54F23(__this, /*hidden argument*/NULL);
		// PickRandStartDir();
		StartSnakeRenderer_PickRandStartDir_mFD7B4C949A9514098DFFADB5F7E5F07352AD9765(__this, /*hidden argument*/NULL);
		// PickRandPos();
		StartSnakeRenderer_PickRandPos_mFCFB12DB443DF76165E74BE6D4569CD609DB2148(__this, /*hidden argument*/NULL);
		// PrepareContainer();
		StartSnakeRenderer_PrepareContainer_m85F193EE8CD47E4572F9F87D2E6DBD9D1FC39250(__this, /*hidden argument*/NULL);
		// PrepareSnake();
		StartSnakeRenderer_PrepareSnake_m091460685D2BBE11F24F5C4BB8D7398C8D89A763(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::FetchSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeHead_m84435E09AE82E0FEF0CD1A59C3E360E4D84AC502 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SnakeHeadDirection = GameAssets.instance.SnakeHead;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_1 = L_0->get_SnakeHead_7();
		__this->set_SnakeHeadDirection_9(L_1);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::FetchSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeBody_mC142683325FC529CD0CF6BB0BB5D18132F9410F0 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SnakeBodyDirection = GameAssets.instance.SnakeBody;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_1 = L_0->get_SnakeBody_8();
		__this->set_SnakeBodyDirection_10(L_1);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::FetchSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_FetchSnakeTail_m780A2EB0E838B5A50A8DDAACA70A813374A54F23 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SnakeTailDirection = GameAssets.instance.SnakeTail;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_1 = L_0->get_SnakeTail_9();
		__this->set_SnakeTailDirection_11(L_1);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::PickRandStartDir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PickRandStartDir_mFD7B4C949A9514098DFFADB5F7E5F07352AD9765 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	{
		// startDirection = Random.Range(0, RAND_SNAKE_DIR.Length - 1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_RAND_SNAKE_DIR_5();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		__this->set_startDirection_12(L_1);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::PickRandPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PickRandPos_mFCFB12DB443DF76165E74BE6D4569CD609DB2148 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int randXIndex = Random.Range(0, RAND_COOR.Length - 1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_RAND_COOR_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_1;
		// int randYIndex = Random.Range(0, RAND_COOR.Length - 1);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_RAND_COOR_4();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_3;
		// startPosition.x = RAND_COOR[randXIndex];
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_4 = __this->get_address_of_startPosition_13();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = __this->get_RAND_COOR_4();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		L_4->set_x_0(L_8);
		// startPosition.y = RAND_COOR[randYIndex];
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_9 = __this->get_address_of_startPosition_13();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_10 = __this->get_RAND_COOR_4();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		float L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		L_9->set_y_1(L_13);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::PrepareContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PrepareContainer_m85F193EE8CD47E4572F9F87D2E6DBD9D1FC39250 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38105FACFE518ABF757DC81C89B1183C903DE691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral512008258C3C756F6AA5B0D211FE1D72F6061C1F);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// Vector3 GAMEOBJECT_POS = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// string MAIN_GAMEOBJECT_NAME = "SnakeContainer";
		V_1 = _stringLiteral512008258C3C756F6AA5B0D211FE1D72F6061C1F;
		// string BODY_GAMEOBJECT_NAME = "SnakeBodyContainer";
		V_2 = _stringLiteral38105FACFE518ABF757DC81C89B1183C903DE691;
		// SnakeContainer = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_1, /*hidden argument*/NULL);
		__this->set_SnakeContainer_7(L_1);
		// SnakeContainer.name = MAIN_GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_SnakeContainer_7();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_3, /*hidden argument*/NULL);
		// SnakeContainer.transform.position = GAMEOBJECT_POS;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_SnakeContainer_7();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_6, /*hidden argument*/NULL);
		// SnakeBodyContainer = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_7, /*hidden argument*/NULL);
		__this->set_SnakeBodyContainer_8(L_7);
		// SnakeBodyContainer.name = BODY_GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_SnakeBodyContainer_8();
		String_t* L_9 = V_2;
		NullCheck(L_8);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_8, L_9, /*hidden argument*/NULL);
		// SnakeBodyContainer.transform.position = GAMEOBJECT_POS;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_SnakeBodyContainer_8();
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_0;
		NullCheck(L_11);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_11, L_12, /*hidden argument*/NULL);
		// SnakeBodyContainer.transform.parent = SnakeContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_SnakeBodyContainer_8();
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_SnakeContainer_7();
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_14, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::PrepareSnake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_PrepareSnake_m091460685D2BBE11F24F5C4BB8D7398C8D89A763 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	{
		// DrawSnakeHead();
		StartSnakeRenderer_DrawSnakeHead_mAC0E878E998F5930CD0196F06B1C35AD294D6CB9(__this, /*hidden argument*/NULL);
		// DrawSnakeBody();
		StartSnakeRenderer_DrawSnakeBody_m4A0234D49FEB3BA887FFEE0590B5C9182B2040CF(__this, /*hidden argument*/NULL);
		// DrawSnakeTail();
		StartSnakeRenderer_DrawSnakeTail_mF398DA4FA498686EEA05A6F727F9693B500836DB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::DrawSnakeHead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeHead_mAC0E878E998F5930CD0196F06B1C35AD294D6CB9 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_m5183CC7C9C06B65F269EF77B062B89C2B1232F97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// GameObject snakeHeadObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// SpriteRenderer snakeHeadRenderer = snakeHeadObject.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_1, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		V_0 = L_2;
		// BoxCollider2D snakeHeadCollider = snakeHeadObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_1;
		NullCheck(L_3);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4;
		L_4 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_3, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		V_1 = L_4;
		// snakeHeadObject.AddComponent<SnakeHeadDirection>().direction = startDirection;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_3;
		NullCheck(L_5);
		SnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6 * L_6;
		L_6 = GameObject_AddComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_m5183CC7C9C06B65F269EF77B062B89C2B1232F97(L_5, /*hidden argument*/GameObject_AddComponent_TisSnakeHeadDirection_tF519D455B7CC3AF839938B0F27C13B482AF726E6_m5183CC7C9C06B65F269EF77B062B89C2B1232F97_RuntimeMethod_var);
		int32_t L_7 = __this->get_startDirection_12();
		NullCheck(L_6);
		L_6->set_direction_4(L_7);
		// snakeHeadRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = V_0;
		NullCheck(L_8);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_8, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// Vector2 colliderSize = new Vector2(0.9f, 0.9f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		// snakeHeadCollider.size = colliderSize;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_9 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_2;
		NullCheck(L_9);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_9, L_10, /*hidden argument*/NULL);
		// snakeHeadRenderer.sprite = SnakeHeadDirection[startDirection];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_12 = __this->get_SnakeHeadDirection_9();
		int32_t L_13 = __this->get_startDirection_12();
		NullCheck(L_12);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14;
		L_14 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_11);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_11, L_14, /*hidden argument*/NULL);
		// string GAMEOBJECT_NAME = "SnakeHead";
		V_3 = _stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86;
		// float GAMEOBJECT_X_POS = startPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_startPosition_13();
		float L_16 = L_15->get_x_0();
		V_4 = L_16;
		// float GAMEOBJECT_Y_POS = startPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_startPosition_13();
		float L_18 = L_17->get_y_1();
		V_5 = L_18;
		// float GAMEOBJECT_Z_POS = 0f;
		V_6 = (0.0f);
		// snakeHeadObject.transform.parent = SnakeContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = L_5;
		NullCheck(L_19);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_19, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_SnakeContainer_7();
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_20, L_22, /*hidden argument*/NULL);
		// snakeHeadObject.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_19;
		String_t* L_24 = V_3;
		NullCheck(L_23);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_23, L_24, /*hidden argument*/NULL);
		// snakeHeadObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		float L_26 = V_4;
		float L_27 = V_5;
		float L_28 = V_6;
		NullCheck(L_25);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_25, L_26, L_27, L_28, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(startPosition.x), Mathf.FloorToInt(startPosition.y), "SnakeHead");
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_29 = __this->get_address_of_startPosition_13();
		float L_30 = L_29->get_x_0();
		int32_t L_31;
		L_31 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_30, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_32 = __this->get_address_of_startPosition_13();
		float L_33 = L_32->get_y_1();
		int32_t L_34;
		L_34 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_33, /*hidden argument*/NULL);
		StartSnakeRenderer_SetObjectInMap_m2EA302499A83B3C47C25FBB442D84CD535ABE3EC(__this, L_31, L_34, _stringLiteral27D7FE91A825F1192688E911EF78243C464C3A86, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::DrawSnakeBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeBody_m4A0234D49FEB3BA887FFEE0590B5C9182B2040CF (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65C90630B231041FE7B4E57ABD65B5DE0C354E67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_1 = NULL;
	SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * V_2 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	{
		// GameObject snakeBodyObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// SpriteRenderer snakeBodyRenderer = snakeBodyObject.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_1, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		V_0 = L_2;
		// BoxCollider2D snakeBodyCollider = snakeBodyObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_1;
		NullCheck(L_3);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4;
		L_4 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_3, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		V_1 = L_4;
		// SnakeBodyDirection snakeBodyDirection = snakeBodyObject.AddComponent<SnakeBodyDirection>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_3;
		NullCheck(L_5);
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_6;
		L_6 = GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367(L_5, /*hidden argument*/GameObject_AddComponent_TisSnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323_m9FD8A2755F497359A1D7A14959E323856D040367_RuntimeMethod_var);
		V_2 = L_6;
		// snakeBodyRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = V_0;
		NullCheck(L_7);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_7, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// Vector2 colliderSize = new Vector2(0.9f, 0.9f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		// snakeBodyCollider.size = colliderSize;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_3;
		NullCheck(L_8);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_8, L_9, /*hidden argument*/NULL);
		// float body_X = 0;
		V_4 = (0.0f);
		// float body_Y = 0;
		V_5 = (0.0f);
		// if (startDirection == 0)
		int32_t L_10 = __this->get_startDirection_12();
		G_B1_0 = L_5;
		if (L_10)
		{
			G_B2_0 = L_5;
			goto IL_0091;
		}
	}
	{
		// snakeBodyDirection.direction = 0;
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_11 = V_2;
		NullCheck(L_11);
		L_11->set_direction_4(0);
		// snakeBodyRenderer.sprite = SnakeBodyDirection[0];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_13 = __this->get_SnakeBodyDirection_10();
		NullCheck(L_13);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14;
		L_14 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_13, 0, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_12);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_12, L_14, /*hidden argument*/NULL);
		// body_X = startPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_15 = __this->get_address_of_startPosition_13();
		float L_16 = L_15->get_x_0();
		V_4 = L_16;
		// body_Y = startPosition.y - 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_17 = __this->get_address_of_startPosition_13();
		float L_18 = L_17->get_y_1();
		V_5 = ((float)il2cpp_codegen_subtract((float)L_18, (float)(1.0f)));
		// }
		G_B8_0 = G_B1_0;
		goto IL_015e;
	}

IL_0091:
	{
		// else if (startDirection == 1)
		int32_t L_19 = __this->get_startDirection_12();
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			G_B4_0 = G_B2_0;
			goto IL_00d8;
		}
	}
	{
		// snakeBodyDirection.direction = 5;
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_20 = V_2;
		NullCheck(L_20);
		L_20->set_direction_4(5);
		// snakeBodyRenderer.sprite = SnakeBodyDirection[5];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_21 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_22 = __this->get_SnakeBodyDirection_10();
		NullCheck(L_22);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_23;
		L_23 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_22, 5, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_21);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_21, L_23, /*hidden argument*/NULL);
		// body_X = startPosition.x - 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_24 = __this->get_address_of_startPosition_13();
		float L_25 = L_24->get_x_0();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_25, (float)(1.0f)));
		// body_Y = startPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_startPosition_13();
		float L_27 = L_26->get_y_1();
		V_5 = L_27;
		// }
		G_B8_0 = G_B3_0;
		goto IL_015e;
	}

IL_00d8:
	{
		// else if (startDirection == 2)
		int32_t L_28 = __this->get_startDirection_12();
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_28) == ((uint32_t)2))))
		{
			G_B6_0 = G_B4_0;
			goto IL_011c;
		}
	}
	{
		// snakeBodyDirection.direction = 0;
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_29 = V_2;
		NullCheck(L_29);
		L_29->set_direction_4(0);
		// snakeBodyRenderer.sprite = SnakeBodyDirection[0];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_30 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_31 = __this->get_SnakeBodyDirection_10();
		NullCheck(L_31);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_32;
		L_32 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_31, 0, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_30);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_30, L_32, /*hidden argument*/NULL);
		// body_X = startPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_startPosition_13();
		float L_34 = L_33->get_x_0();
		V_4 = L_34;
		// body_Y = startPosition.y + 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_35 = __this->get_address_of_startPosition_13();
		float L_36 = L_35->get_y_1();
		V_5 = ((float)il2cpp_codegen_add((float)L_36, (float)(1.0f)));
		// }
		G_B8_0 = G_B5_0;
		goto IL_015e;
	}

IL_011c:
	{
		// else if (startDirection == 3)
		int32_t L_37 = __this->get_startDirection_12();
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)3))))
		{
			G_B8_0 = G_B6_0;
			goto IL_015e;
		}
	}
	{
		// snakeBodyDirection.direction = 5;
		SnakeBodyDirection_t44019A823D750B2992558E5CC8DFC1B6E11AB323 * L_38 = V_2;
		NullCheck(L_38);
		L_38->set_direction_4(5);
		// snakeBodyRenderer.sprite = SnakeBodyDirection[5];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_39 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_40 = __this->get_SnakeBodyDirection_10();
		NullCheck(L_40);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_41;
		L_41 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_40, 5, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_39);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_39, L_41, /*hidden argument*/NULL);
		// body_X = startPosition.x + 1f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_42 = __this->get_address_of_startPosition_13();
		float L_43 = L_42->get_x_0();
		V_4 = ((float)il2cpp_codegen_add((float)L_43, (float)(1.0f)));
		// body_Y = startPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_44 = __this->get_address_of_startPosition_13();
		float L_45 = L_44->get_y_1();
		V_5 = L_45;
		G_B8_0 = G_B7_0;
	}

IL_015e:
	{
		// string GAMEOBJECT_NAME = "SnakeBody-0";
		V_6 = _stringLiteral65C90630B231041FE7B4E57ABD65B5DE0C354E67;
		// string GAMEOBJECT_TAG = "Obstacle";
		V_7 = _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
		// float GAMEOBJECT_X_POS = body_X;
		float L_46 = V_4;
		V_8 = L_46;
		// float GAMEOBJECT_Y_POS = body_Y;
		float L_47 = V_5;
		V_9 = L_47;
		// float GAMEOBJECT_Z_POS = 0f;
		V_10 = (0.0f);
		// snakeBodyObject.transform.parent = SnakeBodyContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = G_B8_0;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_SnakeBodyContainer_8();
		NullCheck(L_50);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_49, L_51, /*hidden argument*/NULL);
		// snakeBodyObject.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = L_48;
		String_t* L_53 = V_6;
		NullCheck(L_52);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_52, L_53, /*hidden argument*/NULL);
		// snakeBodyObject.tag = GAMEOBJECT_TAG;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = L_52;
		String_t* L_55 = V_7;
		NullCheck(L_54);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_54, L_55, /*hidden argument*/NULL);
		// snakeBodyObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_54, /*hidden argument*/NULL);
		float L_57 = V_8;
		float L_58 = V_9;
		float L_59 = V_10;
		NullCheck(L_56);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_56, L_57, L_58, L_59, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(body_X), Mathf.FloorToInt(body_Y), "SnakeBody");
		float L_60 = V_4;
		int32_t L_61;
		L_61 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_60, /*hidden argument*/NULL);
		float L_62 = V_5;
		int32_t L_63;
		L_63 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_62, /*hidden argument*/NULL);
		StartSnakeRenderer_SetObjectInMap_m2EA302499A83B3C47C25FBB442D84CD535ABE3EC(__this, L_61, L_63, _stringLiteralA73A36D51C8D1E7BAD4BC631F993F7E08BB8889A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::DrawSnakeTail()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_DrawSnakeTail_mF398DA4FA498686EEA05A6F727F9693B500836DB (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mA88253875B32BF67D9E653F28D441E2226CC47AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * V_0 = NULL;
	BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * V_1 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B1_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B8_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_0 = NULL;
	{
		// GameObject snakeTailObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// SpriteRenderer snakeTailRenderer = snakeTailObject.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_1, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		V_0 = L_2;
		// BoxCollider2D snakeTailCollider = snakeTailObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = L_1;
		NullCheck(L_3);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_4;
		L_4 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_3, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		V_1 = L_4;
		// snakeTailObject.AddComponent<SnakeTailDirection>().direction = startDirection;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = L_3;
		NullCheck(L_5);
		SnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F * L_6;
		L_6 = GameObject_AddComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mA88253875B32BF67D9E653F28D441E2226CC47AA(L_5, /*hidden argument*/GameObject_AddComponent_TisSnakeTailDirection_t9E2192AE816BB286C6703766ABEE55C183D35A1F_mA88253875B32BF67D9E653F28D441E2226CC47AA_RuntimeMethod_var);
		int32_t L_7 = __this->get_startDirection_12();
		NullCheck(L_6);
		L_6->set_direction_4(L_7);
		// snakeTailRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_8 = V_0;
		NullCheck(L_8);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_8, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// Vector2 colliderSize = new Vector2(0.9f, 0.9f);
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_2), (0.899999976f), (0.899999976f), /*hidden argument*/NULL);
		// snakeTailCollider.size = colliderSize;
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_9 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_2;
		NullCheck(L_9);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_9, L_10, /*hidden argument*/NULL);
		// snakeTailRenderer.sprite = SnakeTailDirection[startDirection];
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11 = V_0;
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_12 = __this->get_SnakeTailDirection_11();
		int32_t L_13 = __this->get_startDirection_12();
		NullCheck(L_12);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14;
		L_14 = List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m2E8D9A40352859B1D5465D074732572FC364786E_RuntimeMethod_var);
		NullCheck(L_11);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_11, L_14, /*hidden argument*/NULL);
		// float tail_X = 0;
		V_3 = (0.0f);
		// float tail_Y = 0;
		V_4 = (0.0f);
		// if(startDirection == 0)
		int32_t L_15 = __this->get_startDirection_12();
		G_B1_0 = L_5;
		if (L_15)
		{
			G_B2_0 = L_5;
			goto IL_0094;
		}
	}
	{
		// tail_X = startPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_startPosition_13();
		float L_17 = L_16->get_x_0();
		V_3 = L_17;
		// tail_Y = startPosition.y - 2f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_18 = __this->get_address_of_startPosition_13();
		float L_19 = L_18->get_y_1();
		V_4 = ((float)il2cpp_codegen_subtract((float)L_19, (float)(2.0f)));
		// }
		G_B8_0 = G_B1_0;
		goto IL_0110;
	}

IL_0094:
	{
		// else if(startDirection == 1)
		int32_t L_20 = __this->get_startDirection_12();
		G_B3_0 = G_B2_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			G_B4_0 = G_B2_0;
			goto IL_00be;
		}
	}
	{
		// tail_X = startPosition.x - 2f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_startPosition_13();
		float L_22 = L_21->get_x_0();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_22, (float)(2.0f)));
		// tail_Y = startPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_23 = __this->get_address_of_startPosition_13();
		float L_24 = L_23->get_y_1();
		V_4 = L_24;
		// }
		G_B8_0 = G_B3_0;
		goto IL_0110;
	}

IL_00be:
	{
		// else if(startDirection == 2)
		int32_t L_25 = __this->get_startDirection_12();
		G_B5_0 = G_B4_0;
		if ((!(((uint32_t)L_25) == ((uint32_t)2))))
		{
			G_B6_0 = G_B4_0;
			goto IL_00e8;
		}
	}
	{
		// tail_X = startPosition.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_26 = __this->get_address_of_startPosition_13();
		float L_27 = L_26->get_x_0();
		V_3 = L_27;
		// tail_Y = startPosition.y + 2f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_28 = __this->get_address_of_startPosition_13();
		float L_29 = L_28->get_y_1();
		V_4 = ((float)il2cpp_codegen_add((float)L_29, (float)(2.0f)));
		// }
		G_B8_0 = G_B5_0;
		goto IL_0110;
	}

IL_00e8:
	{
		// else if(startDirection == 3)
		int32_t L_30 = __this->get_startDirection_12();
		G_B7_0 = G_B6_0;
		if ((!(((uint32_t)L_30) == ((uint32_t)3))))
		{
			G_B8_0 = G_B6_0;
			goto IL_0110;
		}
	}
	{
		// tail_X = startPosition.x + 2f;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_31 = __this->get_address_of_startPosition_13();
		float L_32 = L_31->get_x_0();
		V_3 = ((float)il2cpp_codegen_add((float)L_32, (float)(2.0f)));
		// tail_Y = startPosition.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_startPosition_13();
		float L_34 = L_33->get_y_1();
		V_4 = L_34;
		G_B8_0 = G_B7_0;
	}

IL_0110:
	{
		// string GAMEOBJECT_NAME = "SnakeTail";
		V_5 = _stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861;
		// string GAMEOBJECT_TAG = "Obstacle";
		V_6 = _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
		// float GAMEOBJECT_X_POS = tail_X;
		float L_35 = V_3;
		V_7 = L_35;
		// float GAMEOBJECT_Y_POS = tail_Y;
		float L_36 = V_4;
		V_8 = L_36;
		// float GAMEOBJECT_Z_POS = 0f;
		V_9 = (0.0f);
		// snakeTailObject.transform.parent = SnakeContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = G_B8_0;
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_SnakeContainer_7();
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_38, L_40, /*hidden argument*/NULL);
		// snakeTailObject.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = L_37;
		String_t* L_42 = V_5;
		NullCheck(L_41);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_41, L_42, /*hidden argument*/NULL);
		// snakeTailObject.tag = GAMEOBJECT_TAG;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = L_41;
		String_t* L_44 = V_6;
		NullCheck(L_43);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_43, L_44, /*hidden argument*/NULL);
		// snakeTailObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		float L_46 = V_7;
		float L_47 = V_8;
		float L_48 = V_9;
		NullCheck(L_45);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_45, L_46, L_47, L_48, /*hidden argument*/NULL);
		// SetObjectInMap(Mathf.FloorToInt(tail_X), Mathf.FloorToInt(tail_Y), "SnakeTail");
		float L_49 = V_3;
		int32_t L_50;
		L_50 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_49, /*hidden argument*/NULL);
		float L_51 = V_4;
		int32_t L_52;
		L_52 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(L_51, /*hidden argument*/NULL);
		StartSnakeRenderer_SetObjectInMap_m2EA302499A83B3C47C25FBB442D84CD535ABE3EC(__this, L_50, L_52, _stringLiteral912F5C3BA79F90A7346B2052C6E470AA4A064861, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer_SetObjectInMap_m2EA302499A83B3C47C25FBB442D84CD535ABE3EC (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameMap_6();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___xIndex0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___yIndex1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_7;
		L_7 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_6, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		String_t* L_8 = ___content2;
		NullCheck(L_7);
		NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StartSnakeRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartSnakeRenderer__ctor_m2F3514D3CAB9E95A093027540D34E107AF54A0A2 (StartSnakeRenderer_t3A2AD09861EF9F93212B053469F33B7D4EE77D37 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float[] RAND_COOR =
		// {
		//     4.5f, 5.5f, 6.5f, 7.5f, 8.5f, 9.5f,
		//     10.5f, 11.5f, 12.5f, 13.5f, 14.5f, 15.5f
		// };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____DE69681BB70B2FAEE6ABBC3B5D2A6352317B88D850B6363AF5016D627224D016_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		__this->set_RAND_COOR_4(L_1);
		// private int[] RAND_SNAKE_DIR =
		// {
		//     0, 1, 2, 3
		// };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)4);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		__this->set_RAND_SNAKE_DIR_5(L_4);
		// private List<Sprite> SnakeHeadDirection = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_6 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_6, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeHeadDirection_9(L_6);
		// private List<Sprite> SnakeBodyDirection = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_7 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_7, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeBodyDirection_10(L_7);
		// private List<Sprite> SnakeTailDirection = new List<Sprite>();
		List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * L_8 = (List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 *)il2cpp_codegen_object_new(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880_il2cpp_TypeInfo_var);
		List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD(L_8, /*hidden argument*/List_1__ctor_m4CCA077ACAB11548CE7A37FE67B013E1E7497ACD_RuntimeMethod_var);
		__this->set_SnakeTailDirection_11(L_8);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UserInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfo_Awake_m5088AA2086E87AD93834BACB713EFB1BA14FB4CE (UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E6B7641264D2BD8546CB5510337A662E05607FF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userInfoText = GameObject.Find("UserInfoText").GetComponent<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9E6B7641264D2BD8546CB5510337A662E05607FF, /*hidden argument*/NULL);
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1;
		L_1 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_0, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		__this->set_userInfoText_4(L_1);
		// }
		return;
	}
}
// System.Void UserInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfo_Update_mF5A9487A423E11162048E895CBAF12467E67B48F (UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userInfoText.text = GameHandler.GetUserInfo();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_userInfoText_4();
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = GameHandler_GetUserInfo_m6575305204F8ED4F1E57C9F4802DFBD46432CE09_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void UserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserInfo__ctor_mD8041960EBE8177AD65580C46469851FEE531662 (UserInfo_t43F9B6FBC4E83C2F47B7753EF8D9C81F0D26545F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WallRenderer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_Start_m37E630A6765FE3CC73CE1772996224AB47EA5796 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wall = GameAssets.instance.GameWalls;
		GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191 * L_0 = ((GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_StaticFields*)il2cpp_codegen_static_fields_for(GameAssets_tC825DC1E3EC7AAEF485ED732623EC2838BF72191_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = L_0->get_GameWalls_5();
		((WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_StaticFields*)il2cpp_codegen_static_fields_for(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_il2cpp_TypeInfo_var))->set_wall_9(L_1);
		// GameMap = GameObject.Find("/Map");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral4674033C2109DFD20CE74836AFD13E829DFFC30C, /*hidden argument*/NULL);
		__this->set_GameMap_4(L_2);
		// PrepareContainer();
		WallRenderer_PrepareContainer_m2BE3832087F40F468FF08827357507C2A8DD9012(__this, /*hidden argument*/NULL);
		// PrepareWalls();
		WallRenderer_PrepareWalls_m70CEF3796C530AAF340F35D5EA79F887635858C8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WallRenderer::PrepareContainer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_PrepareContainer_m2BE3832087F40F468FF08827357507C2A8DD9012 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB890FAF03B988E225E071FEA3A9306E0F4D45E58);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// string GAMEOBJECT_NAME = "WallsContainer";
		V_0 = _stringLiteralB890FAF03B988E225E071FEA3A9306E0F4D45E58;
		// Vector3 GAMEOBJECT_POS = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_1 = L_0;
		// WallsContainer = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_1, /*hidden argument*/NULL);
		__this->set_WallsContainer_5(L_1);
		// WallsContainer.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_WallsContainer_5();
		String_t* L_3 = V_0;
		NullCheck(L_2);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_2, L_3, /*hidden argument*/NULL);
		// WallsContainer.transform.position = GAMEOBJECT_POS;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_WallsContainer_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_1;
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WallRenderer::PrepareWalls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_PrepareWalls_m70CEF3796C530AAF340F35D5EA79F887635858C8 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (xIndex = 0; xIndex < MAX_GRID; xIndex++)
		V_0 = 0;
		goto IL_0040;
	}

IL_0004:
	{
		// if (xIndex == 0 || xIndex == 19)
		int32_t L_0 = V_0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0027;
		}
	}

IL_000c:
	{
		// for (yIndex = 0; yIndex < MAX_GRID; yIndex++)
		V_1 = 0;
		goto IL_001c;
	}

IL_0010:
	{
		// DrawWalls(xIndex, yIndex);
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		WallRenderer_DrawWalls_mCA020F93E44120A8F9C60887A10D42D55C3431F2(__this, L_2, L_3, /*hidden argument*/NULL);
		// for (yIndex = 0; yIndex < MAX_GRID; yIndex++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001c:
	{
		// for (yIndex = 0; yIndex < MAX_GRID; yIndex++)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get_MAX_GRID_8();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		goto IL_003c;
	}

IL_0027:
	{
		// yIndex = 19;
		V_1 = ((int32_t)19);
		// DrawWalls(xIndex, yIndex);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		WallRenderer_DrawWalls_mCA020F93E44120A8F9C60887A10D42D55C3431F2(__this, L_7, L_8, /*hidden argument*/NULL);
		// yIndex = 0;
		V_1 = 0;
		// DrawWalls(xIndex, yIndex);
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		WallRenderer_DrawWalls_mCA020F93E44120A8F9C60887A10D42D55C3431F2(__this, L_9, L_10, /*hidden argument*/NULL);
	}

IL_003c:
	{
		// for (xIndex = 0; xIndex < MAX_GRID; xIndex++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0040:
	{
		// for (xIndex = 0; xIndex < MAX_GRID; xIndex++)
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_MAX_GRID_8();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void WallRenderer::DrawWalls(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_DrawWalls_mCA020F93E44120A8F9C60887A10D42D55C3431F2 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, int32_t ___xIndex0, int32_t ___yIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA345CE3068B710C57CB80BDA753ACFEE12A90D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// GameObject wallGameObject = new GameObject();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mACDBD7A1F25B33D006A60F67EF901B33DD3D52E9(L_0, /*hidden argument*/NULL);
		// SpriteRenderer wallRenderer = wallGameObject.AddComponent<SpriteRenderer>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359(L_1, /*hidden argument*/GameObject_AddComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_mA1B6F0FCF035942E75BABBF09DCD58F3E1275359_RuntimeMethod_var);
		// wallRenderer.sortingLayerName = "Game";
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = L_2;
		NullCheck(L_3);
		Renderer_set_sortingLayerName_m6BFE05FD6B114EA3E8D13FC0353C93FF91EEAD02(L_3, _stringLiteral079998E3393B6BDC1FAFFA63A54F724488AE5306, /*hidden argument*/NULL);
		// wallRenderer.sprite = wall;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = ((WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_StaticFields*)il2cpp_codegen_static_fields_for(WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6_il2cpp_TypeInfo_var))->get_wall_9();
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_4, /*hidden argument*/NULL);
		// string GAMEOBJECT_NAME = "Wall-" + xIndex + "." + yIndex;
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___xIndex0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___yIndex1), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteralA345CE3068B710C57CB80BDA753ACFEE12A90D6C, L_5, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// string GAMEOBJECT_TAG = "Obstacle";
		V_1 = _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
		// float GAMEOBJECT_X_POS = xIndex + X_COOR;
		int32_t L_8 = ___xIndex0;
		float L_9 = __this->get_X_COOR_6();
		V_2 = ((float)il2cpp_codegen_add((float)((float)((float)L_8)), (float)L_9));
		// float GAMEOBJECT_Y_POS = yIndex + Y_COOR;
		int32_t L_10 = ___yIndex1;
		float L_11 = __this->get_Y_COOR_7();
		V_3 = ((float)il2cpp_codegen_add((float)((float)((float)L_10)), (float)L_11));
		// float GAMEOBJECT_Z_POS = 0f;
		V_4 = (0.0f);
		// wallGameObject.transform.parent = WallsContainer.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_1;
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_WallsContainer_5();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_13, L_15, /*hidden argument*/NULL);
		// wallGameObject.name = GAMEOBJECT_NAME;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = L_12;
		String_t* L_17 = V_0;
		NullCheck(L_16);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(L_16, L_17, /*hidden argument*/NULL);
		// wallGameObject.tag = GAMEOBJECT_TAG;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_16;
		String_t* L_19 = V_1;
		NullCheck(L_18);
		GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_18, L_19, /*hidden argument*/NULL);
		// wallGameObject.transform.Translate(GAMEOBJECT_X_POS, GAMEOBJECT_Y_POS, GAMEOBJECT_Z_POS);
		NullCheck(L_18);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_4;
		NullCheck(L_20);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_20, L_21, L_22, L_23, /*hidden argument*/NULL);
		// SetObjectInMap(xIndex, yIndex, "Wall");
		int32_t L_24 = ___xIndex0;
		int32_t L_25 = ___yIndex1;
		WallRenderer_SetObjectInMap_mFD74D418682921ED0AF8E43A28869997C032BDE4(__this, L_24, L_25, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WallRenderer::SetObjectInMap(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer_SetObjectInMap_mFD74D418682921ED0AF8E43A28869997C032BDE4 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, int32_t ___xIndex0, int32_t ___yIndex1, String_t* ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameMap.transform.GetChild(xIndex).GetChild(yIndex).gameObject.GetComponent<NodeType>().Type = content;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GameMap_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___xIndex0;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = ___yIndex1;
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * L_7;
		L_7 = GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78(L_6, /*hidden argument*/GameObject_GetComponent_TisNodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C_m92CEC540DBAF49AF3E0336741C6762A385C65E78_RuntimeMethod_var);
		String_t* L_8 = ___content2;
		NullCheck(L_7);
		NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WallRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WallRenderer__ctor_mE925AF7636BC438E2D6B2722D16C875F8A7F2DA6 (WallRenderer_t82A8923051B0C1294610D7B526A9C005D5FE36A6 * __this, const RuntimeMethod* method)
{
	{
		// private float X_COOR = 0.5f;
		__this->set_X_COOR_6((0.5f));
		// private float Y_COOR = 0.5f;
		__this->set_Y_COOR_7((0.5f));
		// private int MAX_GRID = 20;
		__this->set_MAX_GRID_8(((int32_t)20));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Loader/<AsyncLoad>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadU3Ed__3__ctor_m5213D9CDB4F7310547B2C5EE19991606651E1975 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Loader/<AsyncLoad>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadU3Ed__3_System_IDisposable_Dispose_mDF87B02607691FC0AE17D835F9FFDB0FE2041148 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Loader/<AsyncLoad>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAsyncLoadU3Ed__3_MoveNext_mB16F60A3D2C7FEDB58F59FC46431B2E5BAD79A11 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C216BFE9A9BB53AA96337DC2E2CAB852C7AF212);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * V_1 = NULL;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * L_1 = __this->get_U3CU3E4__this_3();
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
			goto IL_00b0;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation operation = SceneManager.LoadSceneAsync(sceneBuildIndex);
		int32_t L_4 = __this->get_sceneBuildIndex_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5;
		L_5 = SceneManager_LoadSceneAsync_mAB22F675FE16C405CBEC2CEF405493DBB6F0284E(L_4, /*hidden argument*/NULL);
		__this->set_U3CoperationU3E5__2_4(L_5);
		// GameObject loadingScreen = GameObject.Find("/LevelUI/Canvas");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral5C216BFE9A9BB53AA96337DC2E2CAB852C7AF212, /*hidden argument*/NULL);
		// loadingScreen.transform.GetChild(4).gameObject.SetActive(true);
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_7, 4, /*hidden argument*/NULL);
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_0054:
	{
		// float progress = Mathf.Clamp01(operation.progress / .9f);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_10 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_10);
		float L_11;
		L_11 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_10, /*hidden argument*/NULL);
		float L_12;
		L_12 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_11/(float)(0.899999976f))), /*hidden argument*/NULL);
		V_2 = L_12;
		// progressSlider.value = progress;
		Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * L_13 = V_1;
		NullCheck(L_13);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_14 = L_13->get_progressSlider_4();
		float L_15 = V_2;
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, L_15);
		// progressText.text = Mathf.FloorToInt(progress * 100).ToString() + " %";
		Loader_tE4093C6C0E627A7F86D18106F807FBEAA6471182 * L_16 = V_1;
		NullCheck(L_16);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = L_16->get_progressText_5();
		float L_18 = V_2;
		int32_t L_19;
		L_19 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)L_18, (float)(100.0f))), /*hidden argument*/NULL);
		V_3 = L_19;
		String_t* L_20;
		L_20 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_3), /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_20, _stringLiteralEC79C9E4F403ACDF4E511F936DF416F4FA17FE5C, /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_21);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b0:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00b7:
	{
		// while(!operation.isDone)
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_22 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_22);
		bool L_23;
		L_23 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0054;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object Loader/<AsyncLoad>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsyncLoadU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9D8BE8727EE44373E98817EC33A02D7E517E43C0 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Loader/<AsyncLoad>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAsyncLoadU3Ed__3_System_Collections_IEnumerator_Reset_m481F7EE03ADDA260BB90A659A26F2CB15BF7586A (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAsyncLoadU3Ed__3_System_Collections_IEnumerator_Reset_m481F7EE03ADDA260BB90A659A26F2CB15BF7586A_RuntimeMethod_var)));
	}
}
// System.Object Loader/<AsyncLoad>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAsyncLoadU3Ed__3_System_Collections_IEnumerator_get_Current_m9B4782B18BF774408B29636C389BAB3337056651 (U3CAsyncLoadU3Ed__3_t6B912D9D870ABF4765753EFCC29161A9C45A4B28 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectRow_mA9E26E87A27F6FBC25068B28FDB91A6196809EC4_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return row;
		int32_t L_0 = __this->get_row_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NodeObject_GetNodeObjectCol_mDBA8D5DD05F64225DCF47BF42AE436013CA9ACAF_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return col;
		int32_t L_0 = __this->get_col_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * NodeObject_GetNodeObjectParent_m30312886127C3A312D2EAD56544B37967BEE8CAE_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return this.parent;
		NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * L_0 = __this->get_parent_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameHandler_InitializeUserInfo_m5187DD2F4A3DAFF40E0ADF52C7C2C1BE5269E7D6_inline (String_t* ___startInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// userInfo = startInfo;
		String_t* L_0 = ___startInfo0;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_userInfo_14(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NodeType_get_Type_m83E97D238A7140D51F333CDFC1C4D3E64EE36AAA_inline (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, const RuntimeMethod* method)
{
	{
		// return this.nodeType;
		String_t* L_0 = __this->get_nodeType_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NodeType_set_Type_m4BD7CCBAE0AEA4E310B016881F643FDB6A316712_inline (NodeType_t125496730BE893584E6E9B3A35CFCDD19F14EF6C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// nodeType = value;
		String_t* L_0 = ___value0;
		__this->set_nodeType_4(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float NodeObject_GetNodeObjectVal_mD622639CA15A7F16710994470C24F524DB474F12_inline (NodeObject_t811E4B9B3D416EB48385E6823B36D7AFD119A93E * __this, const RuntimeMethod* method)
{
	{
		// return value;
		float L_0 = __this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_FileName_mC6BAAFFE1EF1B04AA7016AF1AEF504F4D95D4ABA_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_fileName_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_Arguments_m635581BF6F0A9B0AB6D1906AD3EBF54A6155F137_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_arguments_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_UseShellExecute_m2AACDFAC98807AB1B63017B6C6702EE7BB6FA10D_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_useShellExecute_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_CreateNoWindow_mC255F2F45422A1C8B918A163F6CBC0E9120803B8_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_createNoWindow_18(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardOutput_m64D957AFEB6240BBB680555A3E151456FEF4BBE7_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_redirectStandardOutput_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProcessStartInfo_set_RedirectStandardError_m85790A47968728D48519D3EFB308764F20C19A00_inline (ProcessStartInfo_t616B52CF79EBD50262040605315B8A08F69F9199 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_redirectStandardError_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameHandler_GetRemainingFood_m4F8EF878B056E1BB74EF07329CB2E915F5E7023A_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return remainingFood;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->get_remainingFood_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameHandler_InitializeRemainingFood_m04A42B5FB017997691C28EE2D45C759885B2C2A2_inline (int32_t ___givenFood0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remainingFood = givenFood;
		int32_t L_0 = ___givenFood0;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->set_remainingFood_13(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameHandler_GetUserInfo_m6575305204F8ED4F1E57C9F4802DFBD46432CE09_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return userInfo;
		IL2CPP_RUNTIME_CLASS_INIT(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_StaticFields*)il2cpp_codegen_static_fields_for(GameHandler_t066F95A2003A713EF6F356429B2E18DF678F8A26_il2cpp_TypeInfo_var))->get_userInfo_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC124796859BB58428267973675612CCAE52033E8_gshared_inline (Queue_1_t9E8E273A339CBAE3B981AFE6B2CB2C46C550FA0F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
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
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mD618588C9785F06D043BE6AAD0A0B8116B2A77A3_gshared_inline (Queue_1_t65333FCCA10D8CE1B441D400B6B94140BCB8BF64 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
