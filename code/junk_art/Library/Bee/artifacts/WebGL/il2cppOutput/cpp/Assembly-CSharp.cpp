#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// Player[]
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GamePiece
struct GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB;
// GamePieceDeck
struct GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2;
// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IComparer
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// PlayerBase
struct PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D;
// PlayerComparer
struct PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// CameraController/CameraUpdater
struct CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18;
// CameraController/TargetState
struct TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// GameController/GameEnded
struct GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107;
// GamePiece/Destruction
struct Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D;
// GrabObject/StartRotating
struct StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9;
// GrabObject/StopHolding
struct StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58;
// GrabObject/StopRotating
struct StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Player/LivesOut
struct LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02AF3B9D8B67C0A1E5F3C0A2F1D39B7825BAB7E1;
IL2CPP_EXTERN_C String_t* _stringLiteral0CDF2F9C4B0DC7EEEA5CD35BC73DB891975430E3;
IL2CPP_EXTERN_C String_t* _stringLiteral12E65C407B7FC975C041604F33F5ABAB2A223865;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF55B62EA78CDE990A0F73751AA74C7E50964DD;
IL2CPP_EXTERN_C String_t* _stringLiteral2231125B7704862797C1BAAF2EE2C2A779C8036C;
IL2CPP_EXTERN_C String_t* _stringLiteral27A2FC008EA25A752A7B1519EA57FCAF335DF4A0;
IL2CPP_EXTERN_C String_t* _stringLiteral28796E3F3C28B207B01E91F3DCDDD7632CFA6F09;
IL2CPP_EXTERN_C String_t* _stringLiteral31CE729E548429F788CC41F7FC8514CE6CEC0BA4;
IL2CPP_EXTERN_C String_t* _stringLiteral350173FAB1CD79F43C6DA6D72858B0D130737DE8;
IL2CPP_EXTERN_C String_t* _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C;
IL2CPP_EXTERN_C String_t* _stringLiteral363278D8E9773708C6063667EE23AA08E939B3C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3681C276D0167BB20A78E13D7CFA2A9368D7315F;
IL2CPP_EXTERN_C String_t* _stringLiteral380D7D07CFF2A43271B821510944C6C1268822A4;
IL2CPP_EXTERN_C String_t* _stringLiteral3B0F1FD1C480539590A857D1460AACC76826B95A;
IL2CPP_EXTERN_C String_t* _stringLiteral3CBD56B2A45C1384D75695675F1FD1793E671F22;
IL2CPP_EXTERN_C String_t* _stringLiteral4149CB64792CF80C72F1DD5019BF1320C2FB2003;
IL2CPP_EXTERN_C String_t* _stringLiteral4232E2FD672DD70CC04156695A1188BA1EE615BF;
IL2CPP_EXTERN_C String_t* _stringLiteral45F23307B747CEB764DB57A28931A61B30ED0320;
IL2CPP_EXTERN_C String_t* _stringLiteral476FF18E41FFB4AE71E574C18B96CFAE9F0D4EE3;
IL2CPP_EXTERN_C String_t* _stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013;
IL2CPP_EXTERN_C String_t* _stringLiteral4D3327CD770DF6AF09AB2D6C08BA2AB4386BAB83;
IL2CPP_EXTERN_C String_t* _stringLiteral4FF9C19E6AEC7949D5E36A288568C90216E83EBE;
IL2CPP_EXTERN_C String_t* _stringLiteral595426D958FA74ED9D8E5773E7176899445375CF;
IL2CPP_EXTERN_C String_t* _stringLiteral5D45149DCC3666DC8A5F7A8644A4D1C4A618D7A2;
IL2CPP_EXTERN_C String_t* _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F;
IL2CPP_EXTERN_C String_t* _stringLiteral65A6F7E6FC6D6156176BE281E5279F39BF8792AA;
IL2CPP_EXTERN_C String_t* _stringLiteral679B60056C7D7BB974BF81ABECBDDC5615204B74;
IL2CPP_EXTERN_C String_t* _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3C0AE9A0AA4CADCC7912E36E5BAA7CB198BFD7;
IL2CPP_EXTERN_C String_t* _stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3;
IL2CPP_EXTERN_C String_t* _stringLiteral6FF15448145F2FCAF37464B590854647A937BDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral7342733D8103FEFBE51AC627B4F279696F4D7CC9;
IL2CPP_EXTERN_C String_t* _stringLiteral73B09BFBBCD60DF770F34A22A1380F231193455A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral7C205958384B002529FE86E6649014AB373FABD9;
IL2CPP_EXTERN_C String_t* _stringLiteral80CED26F8D8EB6422E7C0D1F2A41C4675B7616F7;
IL2CPP_EXTERN_C String_t* _stringLiteral83321ABC7B44AA76BBE174DC6E62F4E6584B1490;
IL2CPP_EXTERN_C String_t* _stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8;
IL2CPP_EXTERN_C String_t* _stringLiteral8814E931F388700D2C20BAB263D887B1F179A28F;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral985A2EC9A66F4BAE1F95CD8A8AAACE48284EBD33;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralA866C623AEA181CEBFB4645B13B981294F90D3E5;
IL2CPP_EXTERN_C String_t* _stringLiteralAF87CD7F559ABBDF569AC70EB22138D04F19C07F;
IL2CPP_EXTERN_C String_t* _stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75;
IL2CPP_EXTERN_C String_t* _stringLiteralB82C33A307D5B51D85AFA1D0D70BBC187B170882;
IL2CPP_EXTERN_C String_t* _stringLiteralBBEBED93EA18E31014241D79C2499A66828E50BE;
IL2CPP_EXTERN_C String_t* _stringLiteralC09E2C11D17123F9AE34ED4083CE9EA1049C57AD;
IL2CPP_EXTERN_C String_t* _stringLiteralC6DBA30DED8550BD2622A8ED00007802CA8A6639;
IL2CPP_EXTERN_C String_t* _stringLiteralCD95B23A7537B55AAB89E27EEA3211C7A20DBDF7;
IL2CPP_EXTERN_C String_t* _stringLiteralD26B5376505C1CDA1626065DC6E3BD0DAD8B2849;
IL2CPP_EXTERN_C String_t* _stringLiteralD291CE124AD1203655CEFDBEFBDBE9C5A3405214;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAB01A1811FC374D34F2A6B2B337037A5F4877F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDDF67E77AED7079B9873DA140F12B2E32887075C;
IL2CPP_EXTERN_C String_t* _stringLiteralE491C45E1E0BFA1DCDFEA8F191D5321ED24DEC0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE50C43DCA9D1B1E2E277FB63CFCC6B8F98BF669B;
IL2CPP_EXTERN_C String_t* _stringLiteralE62A3D85411554BD6BD0A3BA5A11120946BD9B45;
IL2CPP_EXTERN_C String_t* _stringLiteralEC0622BE13FA4A9F2F7B6D13EA132C9579FC6B14;
IL2CPP_EXTERN_C String_t* _stringLiteralEC40E934979F5A1A209F09D8E6BF1123C3E800AC;
IL2CPP_EXTERN_C String_t* _stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50;
IL2CPP_EXTERN_C String_t* _stringLiteralF01D27637EE52CB54278BDACCA05C9A55A9FEFE4;
IL2CPP_EXTERN_C String_t* _stringLiteralF032BA2A48CE20B83F020F29F3299929E2483F38;
IL2CPP_EXTERN_C String_t* _stringLiteralF4132A46FF78F8367A7D1FC8AFF3E420E5459781;
IL2CPP_EXTERN_C String_t* _stringLiteralF4469A876242CECEF57E11C7277E187860FE3E96;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m4795EDB5BCF1C6F568E45771E9BB515DECE7C051_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m2147F8C4BE0D760CB79AE9EF49B66AC332AB16EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisGamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2_m568556E827830342A8400B811490B250F95F9E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScriptableObject_CreateInstance_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m64B9EAB8F9DA96B97983279B7381082E53AF315B_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF;
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31;
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// AudioController
struct AudioController_t93B5C6941000A82E79BE883355A520ACD713583A  : public RuntimeObject
{
};

// System.Collections.CaseInsensitiveComparer
struct CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281  : public RuntimeObject
{
	// System.Globalization.CompareInfo System.Collections.CaseInsensitiveComparer::_compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ____compareInfo_0;
};

// PlayerComparer
struct PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7  : public RuntimeObject
{
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// CameraController/CameraUpdater
struct CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18  : public RuntimeObject
{
	// System.Single CameraController/CameraUpdater::yaw
	float ___yaw_0;
	// System.Single CameraController/CameraUpdater::pitch
	float ___pitch_1;
	// System.Single CameraController/CameraUpdater::roll
	float ___roll_2;
	// System.Single CameraController/CameraUpdater::x
	float ___x_3;
	// System.Single CameraController/CameraUpdater::y
	float ___y_4;
	// System.Single CameraController/CameraUpdater::z
	float ___z_5;
};

// CameraController/TargetState
struct TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A  : public RuntimeObject
{
	// System.Single CameraController/TargetState::yaw
	float ___yaw_0;
	// System.Single CameraController/TargetState::pitch
	float ___pitch_1;
	// System.Single CameraController/TargetState::roll
	float ___roll_2;
	// System.Single CameraController/TargetState::x
	float ___x_3;
	// System.Single CameraController/TargetState::y
	float ___y_4;
	// System.Single CameraController/TargetState::z
	float ___z_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
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
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// GameSettings
struct GameSettings_t6B240976E27B656F17018B16968EAC840603573B  : public RuntimeObject
{
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
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

// GamePieceDeck
struct GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 GamePieceDeck::piecesLeft
	int32_t ___piecesLeft_4;
	// System.String[] GamePieceDeck::pieceNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___pieceNames_5;
	// System.String[] GamePieceDeck::matNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___matNames_6;
	// System.String[][] GamePieceDeck::deck
	StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* ___deck_7;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 Player::<PlayerNum>k__BackingField
	int32_t ___U3CPlayerNumU3Ek__BackingField_4;
	// System.String Player::<PlayerName>k__BackingField
	String_t* ___U3CPlayerNameU3Ek__BackingField_5;
	// UnityEngine.Vector3 Player::<PlayerHome>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CPlayerHomeU3Ek__BackingField_6;
	// UnityEngine.Quaternion Player::<PlayerRotation>k__BackingField
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CPlayerRotationU3Ek__BackingField_7;
	// UnityEngine.Color Player::<PlayerColor>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CPlayerColorU3Ek__BackingField_8;
	// System.Single Player::<Score>k__BackingField
	float ___U3CScoreU3Ek__BackingField_9;
	// UnityEngine.Vector2 Player::<CardPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CCardPositionU3Ek__BackingField_10;
	// System.Int32 Player::<Lives>k__BackingField
	int32_t ___U3CLivesU3Ek__BackingField_11;
	// UnityEngine.GameObject Player::playerArea
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerArea_12;
	// UnityEngine.GameObject Player::playerCard
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerCard_13;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// GameController/GameEnded
struct GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107  : public MulticastDelegate_t
{
};

// GamePiece/Destruction
struct Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D  : public MulticastDelegate_t
{
};

// GrabObject/StartRotating
struct StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9  : public MulticastDelegate_t
{
};

// GrabObject/StopHolding
struct StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58  : public MulticastDelegate_t
{
};

// GrabObject/StopRotating
struct StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910  : public MulticastDelegate_t
{
};

// Player/LivesOut
struct LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
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

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CameraController/TargetState CameraController::TargetCameraState
	TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* ___TargetCameraState_4;
	// CameraController/CameraUpdater CameraController::LerpingCameraUpdater
	CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* ___LerpingCameraUpdater_5;
	// System.Single CameraController::boost
	float ___boost_6;
	// System.Single CameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve CameraController::mouseSensitivityCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___mouseSensitivityCurve_8;
	// System.Single CameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean CameraController::invertY
	bool ___invertY_10;
	// System.Boolean CameraController::controlsEnabled
	bool ___controlsEnabled_11;
};

// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GameController::activePlayer
	int32_t ___activePlayer_4;
	// UnityEngine.Canvas GameController::gameUI
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___gameUI_5;
	// UnityEngine.Canvas GameController::pauseMenu
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___pauseMenu_6;
	// System.Int32 GameController::playerCount
	int32_t ___playerCount_7;
	// System.Single GameController::radius
	float ___radius_8;
	// Player[] GameController::playerArray
	PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* ___playerArray_9;
	// GamePieceDeck GameController::deck
	GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* ___deck_10;
	// System.String[] GameController::playerNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___playerNames_11;
	// UnityEngine.Color[] GameController::playerColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___playerColors_12;
	// System.Boolean GameController::gamePaused
	bool ___gamePaused_13;
	// System.Boolean GameController::gameOver
	bool ___gameOver_14;
};

// GamePiece
struct GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean GamePiece::<Held>k__BackingField
	bool ___U3CHeldU3Ek__BackingField_4;
	// System.Int32 GamePiece::<OwnerIndex>k__BackingField
	int32_t ___U3COwnerIndexU3Ek__BackingField_5;
	// System.Boolean GamePiece::<Stacked>k__BackingField
	bool ___U3CStackedU3Ek__BackingField_6;
	// UnityEngine.Material GamePiece::<BaseMat>k__BackingField
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___U3CBaseMatU3Ek__BackingField_7;
	// UnityEngine.MeshRenderer GamePiece::thisRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___thisRenderer_8;
	// System.Boolean GamePiece::destroy
	bool ___destroy_9;
	// System.Single GamePiece::detroyLen
	float ___detroyLen_10;
	// System.Single GamePiece::flashLen
	float ___flashLen_11;
	// System.Single GamePiece::destroyTimer
	float ___destroyTimer_12;
	// System.Single GamePiece::flashTimer
	float ___flashTimer_13;
	// UnityEngine.AudioSource GamePiece::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_14;
};

// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera GrabObject::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_4;
	// UnityEngine.Transform GrabObject::grabFocus
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___grabFocus_5;
	// UnityEngine.Transform GrabObject::holdFocus
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___holdFocus_6;
	// System.Single GrabObject::grabForce
	float ___grabForce_7;
	// System.Single GrabObject::scrollSpeed
	float ___scrollSpeed_8;
	// System.Single GrabObject::maxScroll
	float ___maxScroll_9;
	// System.Single GrabObject::scrollDistance
	float ___scrollDistance_10;
	// UnityEngine.GameObject GrabObject::heldObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___heldObject_11;
	// UnityEngine.Rigidbody GrabObject::heldObjectRB
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___heldObjectRB_12;
	// System.Boolean GrabObject::rotating
	bool ___rotating_13;
	// System.Boolean GrabObject::controlsEnabled
	bool ___controlsEnabled_14;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField MainMenu::p1Name
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___p1Name_4;
	// TMPro.TMP_InputField MainMenu::p2Name
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___p2Name_5;
	// TMPro.TMP_InputField MainMenu::p3Name
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___p3Name_6;
	// TMPro.TMP_InputField MainMenu::p4Name
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___p4Name_7;
	// UnityEngine.UI.Image MainMenu::p1swatch
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___p1swatch_8;
	// UnityEngine.UI.Image MainMenu::p2swatch
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___p2swatch_9;
	// UnityEngine.UI.Image MainMenu::p3swatch
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___p3swatch_10;
	// UnityEngine.UI.Image MainMenu::p4swatch
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___p4swatch_11;
	// System.Int32 MainMenu::colorPickPlayer
	int32_t ___colorPickPlayer_12;
};

// PlayerBase
struct PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerBase::<OwnerIndex>k__BackingField
	int32_t ___U3COwnerIndexU3Ek__BackingField_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
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
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// <Module>

// <Module>

// AudioController
struct AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields
{
	// UnityEngine.AudioClip[] AudioController::fallClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___fallClips_0;
	// UnityEngine.AudioClip[] AudioController::touchClips
	AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* ___touchClips_1;
	// System.Random AudioController::rng
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___rng_2;
};

// AudioController

// System.Collections.CaseInsensitiveComparer

// System.Collections.CaseInsensitiveComparer

// PlayerComparer

// PlayerComparer

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
};

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// CameraController/CameraUpdater

// CameraController/CameraUpdater

// CameraController/TargetState

// CameraController/TargetState

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

// UnityEngine.Keyframe

// UnityEngine.Keyframe

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// UnityEngine.Vector2
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

// UnityEngine.Vector2

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

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// System.Delegate

// System.Delegate

// GameSettings
struct GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields
{
	// System.Boolean GameSettings::<Player1_enabled>k__BackingField
	bool ___U3CPlayer1_enabledU3Ek__BackingField_0;
	// System.Boolean GameSettings::<Player2_enabled>k__BackingField
	bool ___U3CPlayer2_enabledU3Ek__BackingField_1;
	// System.Boolean GameSettings::<Player3_enabled>k__BackingField
	bool ___U3CPlayer3_enabledU3Ek__BackingField_2;
	// System.Boolean GameSettings::<Player4_enabled>k__BackingField
	bool ___U3CPlayer4_enabledU3Ek__BackingField_3;
	// System.String GameSettings::<Player1_name>k__BackingField
	String_t* ___U3CPlayer1_nameU3Ek__BackingField_4;
	// System.String GameSettings::<Player2_name>k__BackingField
	String_t* ___U3CPlayer2_nameU3Ek__BackingField_5;
	// System.String GameSettings::<Player3_name>k__BackingField
	String_t* ___U3CPlayer3_nameU3Ek__BackingField_6;
	// System.String GameSettings::<Player4_name>k__BackingField
	String_t* ___U3CPlayer4_nameU3Ek__BackingField_7;
	// UnityEngine.Color GameSettings::<Player1_color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CPlayer1_colorU3Ek__BackingField_8;
	// UnityEngine.Color GameSettings::<Player2_color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CPlayer2_colorU3Ek__BackingField_9;
	// UnityEngine.Color GameSettings::<Player3_color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CPlayer3_colorU3Ek__BackingField_10;
	// UnityEngine.Color GameSettings::<Player4_color>k__BackingField
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___U3CPlayer4_colorU3Ek__BackingField_11;
	// System.Int32 GameSettings::<StartingLives>k__BackingField
	int32_t ___U3CStartingLivesU3Ek__BackingField_12;
	// System.Int32 GameSettings::<LifePenalty>k__BackingField
	int32_t ___U3CLifePenaltyU3Ek__BackingField_13;
};

// GameSettings

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// GamePieceDeck

// GamePieceDeck

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields
{
	// Player/LivesOut Player::onLivesOut
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* ___onLivesOut_14;
};

// Player

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// GameController/GameEnded

// GameController/GameEnded

// GamePiece/Destruction

// GamePiece/Destruction

// GrabObject/StartRotating

// GrabObject/StartRotating

// GrabObject/StopHolding

// GrabObject/StopHolding

// GrabObject/StopRotating

// GrabObject/StopRotating

// Player/LivesOut

// Player/LivesOut

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// CameraController

// CameraController

// GameController
struct GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields
{
	// GameController/GameEnded GameController::onGameEnded
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* ___onGameEnded_15;
};

// GameController

// GamePiece
struct GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields
{
	// GamePiece/Destruction GamePiece::onDestruction
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* ___onDestruction_15;
};

// GamePiece

// GrabObject
struct GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields
{
	// GrabObject/StartRotating GrabObject::onRotateStart
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* ___onRotateStart_15;
	// GrabObject/StopRotating GrabObject::onRotateStop
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* ___onRotateStop_16;
	// GrabObject/StopHolding GrabObject::onDrop
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* ___onDrop_17;
};

// GrabObject

// MainMenu

// MainMenu

// PlayerBase

// PlayerBase

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// TMPro.TMP_InputField

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

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* m_Items[1];

	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// Player[]
struct PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1  : public RuntimeArray
{
	ALIGN_FIELD (8) Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* m_Items[1];

	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
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
// System.String[][]
struct StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF  : public RuntimeArray
{
	ALIGN_FIELD (8) StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* m_Items[1];

	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;

// T UnityEngine.Resources::Load<UnityEngine.AudioClip>(System.String)
inline AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78 (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void CameraController/TargetState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState_SetFromTransform_m6815B1F31A73B18944A658F4DFE8AF850D45939E (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void CameraController/CameraUpdater::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_SetFromTransform_m5125FB95601783CB774802EC8421F92E7F8D40CE (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) ;
// System.Void GrabObject/StartRotating::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GrabObject::add_onRotateStart(GrabObject/StartRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onRotateStart_m2783B6E980A44DCA85457B2C2C271D4AD8D3ECDE (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* ___0_value, const RuntimeMethod* method) ;
// System.Void GrabObject/StopRotating::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887 (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GrabObject::add_onRotateStop(GrabObject/StopRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onRotateStop_mBC6FD7FA714B9652570DF4BCE2A01D562BF87D91 (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* ___0_value, const RuntimeMethod* method) ;
// System.Void GrabObject/StopHolding::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopHolding__ctor_m1DE3BAEF0AC2C6A92436EF80F30E8F52F1D43B51 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GrabObject::add_onDrop(GrabObject/StopHolding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onDrop_mF28A964978A00BCD8C35781EB800E6DC82E762E2 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* ___0_value, const RuntimeMethod* method) ;
// System.Void GameController/GameEnded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GameController::add_onGameEnded(GameController/GameEnded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_add_onGameEnded_mEE1CDB418F861DAB21970D5F163AAC979D281A71 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* ___0_value, const RuntimeMethod* method) ;
// System.Void GrabObject::remove_onRotateStart(GrabObject/StartRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onRotateStart_m3BE05B88AAF1604B482901CD47AF22345C46D87D (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* ___0_value, const RuntimeMethod* method) ;
// System.Void GrabObject::remove_onRotateStop(GrabObject/StopRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onRotateStop_mE81C76B5CC819CC67EF95FA43E506704ECC177BA (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* ___0_value, const RuntimeMethod* method) ;
// System.Void GrabObject::remove_onDrop(GrabObject/StopHolding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onDrop_mC3D65FB26A6925275FF50B1B0EC19681834A080A (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* ___0_value, const RuntimeMethod* method) ;
// System.Void GameController::remove_onGameEnded(GameController/GameEnded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_remove_onGameEnded_mEF701C15FEADEB8F0EF2DD18921909850530D594 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void CameraController::DisableCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Void CameraController::EnableCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_GetInputTranslationDirection_mE587B998EC99599DE3978869991261E75EA38AF5 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void CameraController/TargetState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState_Translate_m4CC152242F629187CF92748AA39F61C5E84D8AB5 (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void CameraController/CameraUpdater::LerpTowards(CameraController/TargetState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_LerpTowards_m21F2DB5C81ECEB96A84C27F0498227AF5489694D (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* ___0_target, float ___1_positionLerpPct, float ___2_rotationLerpPct, const RuntimeMethod* method) ;
// System.Void CameraController/CameraUpdater::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_UpdateTransform_mC32DAF157465BB0F1311DF6F970A870226D996B7 (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_camera, const RuntimeMethod* method) ;
// System.Void CameraController/TargetState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState__ctor_mAA14F00D796950E4B759CCACCD9973A024517181 (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, const RuntimeMethod* method) ;
// System.Void CameraController/CameraUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater__ctor_m7A09D7343C0946CBCC05AEAFF82621AA2B5087AE (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___0_time, float ___1_value, float ___2_inTangent, float ___3_outTangent, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___0_keys, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void GamePiece/Destruction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destruction__ctor_m77C1074446498FD40B03DAD2AAD78D4FF6CDF2E0 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GamePiece::add_onDestruction(GamePiece/Destruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_add_onDestruction_mDE497774110F527801FB6A21A5A52000E8C2C447 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* ___0_value, const RuntimeMethod* method) ;
// System.Void Player/LivesOut::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesOut__ctor_m5A86CAA126A846D7B20A63D6AA3A8A6CF76643BF (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Player::add_onLivesOut(Player/LivesOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_onLivesOut_mF0B60432E7585EB8BDCFD4F0ACAFA738564AC60B (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::remove_onDestruction(GamePiece/Destruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_remove_onDestruction_m8267784705EC86E8B280DAB096519FB3AA603EC0 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* ___0_value, const RuntimeMethod* method) ;
// System.Void Player::remove_onLivesOut(Player/LivesOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_onLivesOut_m653F852C8CA95D26ABCCFD478B8B22C109E374F6 (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* ___0_value, const RuntimeMethod* method) ;
// System.Void GameController::SetupPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetupPlayers_mB5EE5BA603DBF4A30143DA0D3A2033014FA08C3F (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<GamePieceDeck>()
inline GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* ScriptableObject_CreateInstance_TisGamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2_m568556E827830342A8400B811490B250F95F9E7A (const RuntimeMethod* method)
{
	return ((  GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void GamePieceDeck::InitDeck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePieceDeck_InitDeck_mA6720BB684C9EEF50130DEAE54657E755BEA7184 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, int32_t ___0_playerCount, const RuntimeMethod* method) ;
// System.Void GameController::CreatePlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreatePlayers_m9C72AD01B97588BA31CAB924477C931ADBDE3175 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void GameController::NextPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_NextPlayer_mA9EF3ACD7ED70249059FD1408E8D1FF3456B3783 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void GameController::ClosePauseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClosePauseMenu_mD9BFAE5A6B85CE2EE7616E1F9A58F36402642B06 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void GameController::OpenPauseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OpenPauseMenu_mCF1D58477C716D2D9E8CD4F54A4BCFE95CCDA0F2 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Int32 GameSettings::PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSettings_PlayerCount_m832800B3CA955CD2C07441B596963238A76D4A35 (const RuntimeMethod* method) ;
// System.String GameSettings::get_Player1_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player1_name_mAAB1BC62C1C465FBBF32F8010171EA57F5E8B679_inline (const RuntimeMethod* method) ;
// System.String GameSettings::get_Player2_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player2_name_m0861F55313F723E04E06C6C6EC25D5131A59CE3A_inline (const RuntimeMethod* method) ;
// System.String GameSettings::get_Player3_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player3_name_mB998ABC584EC072CB4EF49F2DC5A5D0297C9AA04_inline (const RuntimeMethod* method) ;
// System.String GameSettings::get_Player4_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player4_name_mAD463E7CBB31439A2D6CDFC915C92BAE4B034CD3_inline (const RuntimeMethod* method) ;
// UnityEngine.Color GameSettings::get_Player1_color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player1_color_m0348E57D9DE6B029C1D3C0D1D5C8274521D1E5E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Color GameSettings::get_Player2_color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player2_color_mD646A35B8D54F549B850304BC884420638C46CC8_inline (const RuntimeMethod* method) ;
// UnityEngine.Color GameSettings::get_Player3_color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player3_color_m6A7D69119B87A24AD433B36871B3C8B775F33A2C_inline (const RuntimeMethod* method) ;
// UnityEngine.Color GameSettings::get_Player4_color()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player4_color_mE53E585207BD90D485D386530965F40EC1758BFF_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// T UnityEngine.ScriptableObject::CreateInstance<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ScriptableObject_CreateInstance_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m64B9EAB8F9DA96B97983279B7381082E53AF315B (const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (const RuntimeMethod*))ScriptableObject_CreateInstance_TisRuntimeObject_mC07BE383F5EF546F4191035A679930852BC19BDA_gshared)(method);
}
// System.Void Player::set_PlayerNum(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerNum_mD2E703805EE53F4ACC289B944B26DA90BBBA052B_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GameController::PlayerHomePos(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameController_PlayerHomePos_m4BB61D453A24DFFD5D29A22D52AF502E0FF99FEB (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerHome(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerHome_m4EE4595BF36C855396C89CAD33836A0C5F702198_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion GameController::PlayerHomeRotation(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GameController_PlayerHomeRotation_mE0541F910EFB615E762E6B9A8ABAA54CA67E6117 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerRotation(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerRotation_m294DDE6531BE2B1440622D59A202D011F8D6718E_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GameController::PlayerCardPosition(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GameController_PlayerCardPosition_m98D4CDE428769946F940567A64CB09A5858E5BA9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, float ___2_y, const RuntimeMethod* method) ;
// System.Void Player::set_CardPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_CardPosition_m8184A0F9591D6C1056CFB2D356134646FC63E6E0_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Int32 GameSettings::get_StartingLives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSettings_get_StartingLives_m3284B28769856356D8447A05E39CAF31CFBA2A18_inline (const RuntimeMethod* method) ;
// System.Void Player::set_Lives(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Lives_m492905F491DBDF491674B74387ECA2D1726DF018_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void Player::set_PlayerColor(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerColor_m4B25A1896A8CC2885C3D54CFA4C2CECE388B3185_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Void Player::CreateBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CreateBase_m37ECBACE8C607ECE8D28886F278F2749B433EE2B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CreateCard_m2963A1AAA53181790BFB044F6FF8E07172309D8C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void GameController::StackHeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StackHeights_m52426E7670DBFB5D0A113F217F9E85BB8779FA54 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.Void Player::SetInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetInactive_m342CD1FF3FAF41B27A3B0AF6D3780D57994D2E82 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void GameController::AlignCameraForPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AlignCameraForPlayer_m71F6A30D44AD4DA9606BC7AF976D8F74A6586F1D (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_playerNum, const RuntimeMethod* method) ;
// System.Void Player::SetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetActive_mC5DE3181C9398F3FC3F915B8E5CB3F775048445A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void GameController::SpawnGamePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnGamePiece_m2657DB25B31464306DA7EC927EC86177021E7E0B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CameraController>()
inline CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Player::get_PlayerHome()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_get_PlayerHome_mA32CE98F4AD4FAED8170387FE115A3B2FD5F3D66_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// System.Int32 GamePieceDeck::get_PiecesLeft()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePieceDeck_get_PiecesLeft_m91B145DE2E8D6ECBB31E1DB560DE042033EFF4DA_inline (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) ;
// System.Void GameController::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) ;
// System.String[] GamePieceDeck::NextPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GamePieceDeck_NextPiece_mE6D727490198FAD5B3510FDFFFDE85D1E947A980 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Random::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Random_get_rotation_m8B04B3FB3927208F0CB8C65295B0226E7FC7E9E2 (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// T UnityEngine.Resources::Load<UnityEngine.Material>(System.String)
inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// T UnityEngine.GameObject::GetComponent<GamePiece>()
inline GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void GamePiece::set_BaseMat(UnityEngine.Material)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_BaseMat_m5584BF04EEED5A782AAB5FBA84A6A8DB69A61A64_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::set_OwnerIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_OwnerIndex_mD6BF73FDB1970727E5ABAC0AB0CC18B4B7363D28_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GrabObject>()
inline GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void GrabObject::GrabTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_GrabTarget_m1AE5FB1896D037155229D72B69F46A185A9A09C8 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3 (String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean GamePiece::get_Held()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GamePiece_get_Held_mED60683BF29AA4B2B17B533272062893DF10BAB3_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 GamePiece::get_OwnerIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Void Player::UpdateScore(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateScore_mC0B36DB4DEA6677BD5BFE2698E7D400DD8BD5CFD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___0_stackHeight, const RuntimeMethod* method) ;
// System.Void Player::LoseLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseLife_mE19E920E35BC6017805B74256B3931504EC0C472 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void GameController/GameEnded::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_inline (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void PlayerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerComparer__ctor_m487DB35DF65BBF1AE2E15ABC17ABA51F22281262 (PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_mCAA68804E8A393AE2E86ACBBE3F70BC4A5CA21CB (RuntimeArray* ___0_array, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
// System.Void Player::GameEndScorecard(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GameEndScorecard_mD4B78EA9C993DB7322014A6D437A3615E2A074A7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newCardPosition, int32_t ___1_placing, const RuntimeMethod* method) ;
// System.Void GameSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_Reset_mB3EC303745A4E3ACA42E77B127764724F0F3B80A (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// UnityEngine.Material GamePiece::get_BaseMat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GamePiece_get_BaseMat_m730B02822BD4CC75C7827600AE1FE98DAF4D0CAF_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::FlashAndDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_FlashAndDestroy_mBF70CC512EDA5E1A1671FC1BA2BDBF2818CC1403 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void GamePiece/Destruction::Invoke(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_inline (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Renderer::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::set_Held(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Held_m08551C58D6EC3E5F5B4F2290E2F24C76D41E9430_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139 (String_t* ___0_layerName, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void GamePiece::GroundPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_GroundPiece_m47739802742C212770DDF4E1FAC983CB89E78AD3 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<PlayerBase>()
inline PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* GameObject_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m2147F8C4BE0D760CB79AE9EF49B66AC332AB16EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 PlayerBase::get_OwnerIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerBase_get_OwnerIndex_m6ED28A27AC59B057A96265FA375A8787E2C17853_inline (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, const RuntimeMethod* method) ;
// System.Void GamePiece::AddToStack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_AddToStack_m83EA0685A462B739E8A2CA6D20C046C422FB92B4 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, int32_t ___0_owner, const RuntimeMethod* method) ;
// System.Boolean GamePiece::get_Stacked()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GamePiece_get_Stacked_mB5E587051C264EA603A4F35558409FC3E3654F10_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void GamePiece::TouchSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_TouchSound_m37C219415C24D7D04062DEAD8684DD16381E1003 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void GamePiece::set_Stacked(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Stacked_m2DB767F94CEC8E20A8EC82910360AB91777C9484_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::FallSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_FallSound_mF92E6B57E4FE74D6D9F1A1B3F97E62E7308DCB42 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip AudioController::GetFallClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioController_GetFallClip_m7DC698AF209AC7DF86773B641529D77F88C2A1AF (const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.AudioClip AudioController::GetTouchClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioController_GetTouchClip_m2B622098C11730D27FC52A0DCFF5BD199763C860 (const RuntimeMethod* method) ;
// System.Void GamePieceDeck::ShuffleDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePieceDeck_ShuffleDeck_mBEB7537490ED818327C187E00ADDF45D908152F0 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean GameSettings::get_Player3_enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline (const RuntimeMethod* method) ;
// System.Boolean GameSettings::get_Player4_enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline (const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player3_enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_enabled_mD6AA4FF58B27425707907AAEB99DA7410A888342_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player4_enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player1_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player1_name_m2DF182CBBAD654FDCD841251DA21FF41147A026F_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player2_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player2_name_mC62C4FA2E92344EEDB28AD7D7C3E83D9293A402A_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player3_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_name_m0B00DF1CCD7971F032FE040C3B923EEE35B808AE_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player4_name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_name_m2862B20D0567193C0C2B7A295E1E0A924071E992_inline (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player1_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player1_color_m1A05F410FB1629B6240DDECBE026BA395759DC6C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player2_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player2_color_mA46FCB3CD42838A9F8644C2D9709AA56BABFA101_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player3_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_color_m2BE47D5CAA8EEDBBE68EA5B21E4B0FD5320DACD4_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void GameSettings::set_Player4_color(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_color_mCE4F1D4EE26BE366AC854560B0D0D9F1C3392A96_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void GrabObject::DropObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_DropObject_m1E851B08E341C993D5234A64CCCF1F62347657CD (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// System.Void GrabObject/StartRotating::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_inline (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method) ;
// System.Void GrabObject/StopRotating::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_inline (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Void GrabObject::MoveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_MoveObject_m2CA3966CB15EDF2EC881FDB0C5B8C675B38D5F74 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// System.Void GrabObject::RotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_RotateObject_m7B375431111FE62027D55EA178CA26EA32C41F05 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// System.Void GamePiece::Pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Pickup_m0CFFF4858C2F44E46423A3B986A2F154EC7868A7 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void GamePiece::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Drop_m5EFE36D07EDFB5D7B2F921C4F3D5F205C07CC35E (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) ;
// System.Void GrabObject/StopHolding::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_inline (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_eulers, const RuntimeMethod* method) ;
// System.String TMPro.TMP_InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
// System.Void MainMenu::PlayerEnableImage(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_button, bool ___1_enabled, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void MainMenu::ToggleInputField(TMPro.TMP_InputField,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___0_field, bool ___1_isEnabled, const RuntimeMethod* method) ;
// System.Void MainMenu::ToggleColorPicker(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_picker, bool ___1_isEnabled, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void MainMenu::UpdatePlayerColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_UpdatePlayerColors_m762BBE264B60125FAAC320D6F61DCBD71D89C27E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion Player::get_PlayerRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Player_get_PlayerRotation_m9061A2C99809946C52C1D3C81E5C7C5038AA0C51_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<PlayerBase>()
inline PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* Component_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m4795EDB5BCF1C6F568E45771E9BB515DECE7C051 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Int32 Player::get_PlayerNum()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_PlayerNum_mEAF9A7098C09F02542DC84F974047E2C71BF9583_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void PlayerBase::set_OwnerIndex(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerBase_set_OwnerIndex_mE72E5C6195E59D3AEF033EE5F666CEAD220A4076_inline (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TMP_Text>()
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String Player::get_PlayerName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// UnityEngine.Color Player::get_PlayerColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Player_get_PlayerColor_mDDED28F9DAB9E5E02235FB27069CB80F1369CD26_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// UnityEngine.Vector2 Player::get_CardPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Player_get_CardPosition_mB55B4ADA60CB12D186F865E836B8C281E32DD59C_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* il2cppRetVal;
	((  void (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))GameObject_GetComponent_TisIl2CppFullySharedGenericAny_m1122128E432233EB251AECF734E2B72A42A2C194_gshared)((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Player::UpdateLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateLives_m5E0AC448ED15AE9828DC1D1B63F8BDD9C38CDAFA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::set_Score(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Score_m50614C8556C499894B46DF6DB5ECF70872907DBC_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single Player::get_Score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Int32 Player::get_Lives()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Int32 GameSettings::get_LifePenalty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSettings_get_LifePenalty_mA9022FB39BCD8A1BE3BDB47107DA96D4E367C571_inline (const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void Player/LivesOut::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_inline (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.CaseInsensitiveComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseInsensitiveComparer__ctor_m3A0B31069972D202DF2C19B04A11E22B8140FE9D (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.CaseInsensitiveComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CaseInsensitiveComparer_Compare_m755E34189FBD778E32BCC0CA702493AD0632BEAE (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* __this, RuntimeObject* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
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
// UnityEngine.AudioClip AudioController::GetFallClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioController_GetFallClip_m7DC698AF209AC7DF86773B641529D77F88C2A1AF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return fallClips[rng.Next(fallClips.Length)];
		il2cpp_codegen_runtime_class_init_inline(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___fallClips_0;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___rng_2;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___fallClips_0;
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		int32_t L_4 = L_3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// UnityEngine.AudioClip AudioController::GetTouchClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioController_GetTouchClip_m2B622098C11730D27FC52A0DCFF5BD199763C860 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return touchClips[rng.Next(touchClips.Length)];
		il2cpp_codegen_runtime_class_init_inline(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___touchClips_1;
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_1 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___rng_2;
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_2 = ((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___touchClips_1;
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)));
		int32_t L_4 = L_3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		return L_5;
	}
}
// System.Void AudioController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__cctor_m6A50515F9F14040D5CFC9EB77B108DDE12A80C25 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12E65C407B7FC975C041604F33F5ABAB2A223865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CE729E548429F788CC41F7FC8514CE6CEC0BA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3681C276D0167BB20A78E13D7CFA2A9368D7315F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B0F1FD1C480539590A857D1460AACC76826B95A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4149CB64792CF80C72F1DD5019BF1320C2FB2003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D3327CD770DF6AF09AB2D6C08BA2AB4386BAB83);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FF9C19E6AEC7949D5E36A288568C90216E83EBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral595426D958FA74ED9D8E5773E7176899445375CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A6F7E6FC6D6156176BE281E5279F39BF8792AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83321ABC7B44AA76BBE174DC6E62F4E6584B1490);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD291CE124AD1203655CEFDBEFBDBE9C5A3405214);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAB01A1811FC374D34F2A6B2B337037A5F4877F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC0622BE13FA4A9F2F7B6D13EA132C9579FC6B14);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC40E934979F5A1A209F09D8E6BF1123C3E800AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01D27637EE52CB54278BDACCA05C9A55A9FEFE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF032BA2A48CE20B83F020F29F3299929E2483F38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4469A876242CECEF57E11C7277E187860FE3E96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AudioClip[] fallClips = {
		//     Resources.Load<AudioClip>("Audio/fall_1"),
		//     Resources.Load<AudioClip>("Audio/fall_2"),
		//     Resources.Load<AudioClip>("Audio/fall_3"),
		//     Resources.Load<AudioClip>("Audio/fall_4"),
		//     Resources.Load<AudioClip>("Audio/fall_5"),
		//     Resources.Load<AudioClip>("Audio/fall_6"),
		//     Resources.Load<AudioClip>("Audio/fall_7"),
		//     Resources.Load<AudioClip>("Audio/fall_8"),
		//     Resources.Load<AudioClip>("Audio/fall_9")
		// };
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_0 = (AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31*)(AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31*)SZArrayNew(AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_1 = L_0;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2;
		L_2 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralD291CE124AD1203655CEFDBEFBDBE9C5A3405214, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_2);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_3 = L_1;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4;
		L_4 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral3B0F1FD1C480539590A857D1460AACC76826B95A, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_4);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_5 = L_3;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6;
		L_6 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralEC0622BE13FA4A9F2F7B6D13EA132C9579FC6B14, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_6);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_7 = L_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8;
		L_8 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralEC40E934979F5A1A209F09D8E6BF1123C3E800AC, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_8);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_9 = L_7;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10;
		L_10 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralDAB01A1811FC374D34F2A6B2B337037A5F4877F2, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_10);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_11 = L_9;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_12;
		L_12 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral12E65C407B7FC975C041604F33F5ABAB2A223865, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_12);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_13 = L_11;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_14;
		L_14 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralF032BA2A48CE20B83F020F29F3299929E2483F38, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_14);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_15 = L_13;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_16;
		L_16 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralF01D27637EE52CB54278BDACCA05C9A55A9FEFE4, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_16);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_17 = L_15;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18;
		L_18 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral595426D958FA74ED9D8E5773E7176899445375CF, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_17, L_18);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_18);
		((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___fallClips_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___fallClips_0), (void*)L_17);
		// private static AudioClip[] touchClips =
		// {
		//     Resources.Load<AudioClip>("Audio/touch_1"),
		//     Resources.Load<AudioClip>("Audio/touch_2"),
		//     Resources.Load<AudioClip>("Audio/touch_3"),
		//     Resources.Load<AudioClip>("Audio/touch_4"),
		//     Resources.Load<AudioClip>("Audio/touch_5"),
		//     Resources.Load<AudioClip>("Audio/touch_6"),
		//     Resources.Load<AudioClip>("Audio/touch_7"),
		//     Resources.Load<AudioClip>("Audio/touch_8")
		// };
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_19 = (AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31*)(AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31*)SZArrayNew(AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31_il2cpp_TypeInfo_var, (uint32_t)8);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_20 = L_19;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_21;
		L_21 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral4FF9C19E6AEC7949D5E36A288568C90216E83EBE, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_21);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_22 = L_20;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_23;
		L_23 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral83321ABC7B44AA76BBE174DC6E62F4E6584B1490, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_23);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_24 = L_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_25;
		L_25 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral31CE729E548429F788CC41F7FC8514CE6CEC0BA4, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_25);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_26 = L_24;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_27;
		L_27 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral4149CB64792CF80C72F1DD5019BF1320C2FB2003, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_27);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_28 = L_26;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_29;
		L_29 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral4D3327CD770DF6AF09AB2D6C08BA2AB4386BAB83, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_29);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_30 = L_28;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_31;
		L_31 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral3681C276D0167BB20A78E13D7CFA2A9368D7315F, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_31);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_32 = L_30;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_33;
		L_33 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteralF4469A876242CECEF57E11C7277E187860FE3E96, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_33);
		AudioClipU5BU5D_t916722468F7EDCFA833318C35CD7D41097D75D31* L_34 = L_32;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_35;
		L_35 = Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78(_stringLiteral65A6F7E6FC6D6156176BE281E5279F39BF8792AA, Resources_Load_TisAudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20_m8D55846FD24C1D133D4EA744BE1E73E054B93A78_RuntimeMethod_var);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20*)L_35);
		((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___touchClips_1 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___touchClips_1), (void*)L_34);
		// private static System.Random rng = new System.Random(); //make a random number generator
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_36 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_36, NULL);
		((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___rng_2 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var))->___rng_2), (void*)L_36);
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
// System.Void CameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnEnable_m9C112D26D50B3501D1258F002AC3BE99FBC6D573 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetCameraState.SetFromTransform(transform);
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_0 = __this->___TargetCameraState_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		TargetState_SetFromTransform_m6815B1F31A73B18944A658F4DFE8AF850D45939E(L_0, L_1, NULL);
		// LerpingCameraUpdater.SetFromTransform(transform);
		CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* L_2 = __this->___LerpingCameraUpdater_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraUpdater_SetFromTransform_m5125FB95601783CB774802EC8421F92E7F8D40CE(L_2, L_3, NULL);
		// GrabObject.onRotateStart += DisableCameraControls; //don't move camera while rotating an object
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_4 = (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)il2cpp_codegen_object_new(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5(L_4, __this, (intptr_t)((void*)CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var), NULL);
		GrabObject_add_onRotateStart_m2783B6E980A44DCA85457B2C2C271D4AD8D3ECDE(L_4, NULL);
		// GrabObject.onRotateStart += DisableCursor; //don't show cursor while rotating an object
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_5 = (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)il2cpp_codegen_object_new(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5(L_5, __this, (intptr_t)((void*)CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837_RuntimeMethod_var), NULL);
		GrabObject_add_onRotateStart_m2783B6E980A44DCA85457B2C2C271D4AD8D3ECDE(L_5, NULL);
		// GrabObject.onRotateStop += EnableCameraControls;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_6 = (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)il2cpp_codegen_object_new(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887(L_6, __this, (intptr_t)((void*)CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570_RuntimeMethod_var), NULL);
		GrabObject_add_onRotateStop_mBC6FD7FA714B9652570DF4BCE2A01D562BF87D91(L_6, NULL);
		// GrabObject.onRotateStop += EnableCursor;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_7 = (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)il2cpp_codegen_object_new(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887(L_7, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GrabObject_add_onRotateStop_mBC6FD7FA714B9652570DF4BCE2A01D562BF87D91(L_7, NULL);
		// GrabObject.onDrop += EnableCursor; //prevent cursor lockout by droping while disabled
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_8 = (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)il2cpp_codegen_object_new(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		StopHolding__ctor_m1DE3BAEF0AC2C6A92436EF80F30E8F52F1D43B51(L_8, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GrabObject_add_onDrop_mF28A964978A00BCD8C35781EB800E6DC82E762E2(L_8, NULL);
		// GameController.onGameEnded += DisableCameraControls; //camera movement off when game over
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_9 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_9, __this, (intptr_t)((void*)CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var), NULL);
		GameController_add_onGameEnded_mEE1CDB418F861DAB21970D5F163AAC979D281A71(L_9, NULL);
		// GameController.onGameEnded += EnableCursor; //prevent cursor lockout by game ending while disabled
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_10 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_10, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GameController_add_onGameEnded_mEE1CDB418F861DAB21970D5F163AAC979D281A71(L_10, NULL);
		// }
		return;
	}
}
// System.Void CameraController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnDisable_m0108717E250D281C637E7D0F9C068E3878F827B4 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GrabObject.onRotateStart -= DisableCameraControls;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_0 = (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)il2cpp_codegen_object_new(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5(L_0, __this, (intptr_t)((void*)CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var), NULL);
		GrabObject_remove_onRotateStart_m3BE05B88AAF1604B482901CD47AF22345C46D87D(L_0, NULL);
		// GrabObject.onRotateStart -= DisableCursor;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_1 = (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)il2cpp_codegen_object_new(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5(L_1, __this, (intptr_t)((void*)CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837_RuntimeMethod_var), NULL);
		GrabObject_remove_onRotateStart_m3BE05B88AAF1604B482901CD47AF22345C46D87D(L_1, NULL);
		// GrabObject.onRotateStop -= EnableCameraControls;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_2 = (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)il2cpp_codegen_object_new(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887(L_2, __this, (intptr_t)((void*)CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570_RuntimeMethod_var), NULL);
		GrabObject_remove_onRotateStop_mE81C76B5CC819CC67EF95FA43E506704ECC177BA(L_2, NULL);
		// GrabObject.onRotateStop -= EnableCursor;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_3 = (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)il2cpp_codegen_object_new(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887(L_3, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GrabObject_remove_onRotateStop_mE81C76B5CC819CC67EF95FA43E506704ECC177BA(L_3, NULL);
		// GrabObject.onDrop -= EnableCursor;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_4 = (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)il2cpp_codegen_object_new(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		StopHolding__ctor_m1DE3BAEF0AC2C6A92436EF80F30E8F52F1D43B51(L_4, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GrabObject_remove_onDrop_mC3D65FB26A6925275FF50B1B0EC19681834A080A(L_4, NULL);
		// GameController.onGameEnded -= DisableCameraControls;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_5 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_5, __this, (intptr_t)((void*)CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4_RuntimeMethod_var), NULL);
		GameController_remove_onGameEnded_mEF701C15FEADEB8F0EF2DD18921909850530D594(L_5, NULL);
		// GameController.onGameEnded -= EnableCursor;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_6 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_6, __this, (intptr_t)((void*)CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587_RuntimeMethod_var), NULL);
		GameController_remove_onGameEnded_mEF701C15FEADEB8F0EF2DD18921909850530D594(L_6, NULL);
		// }
		return;
	}
}
// System.Void CameraController::DisableCameraControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_DisableCameraControls_mEF537931AEAF12B4E32CC673584C51BB1934DAE4 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// controlsEnabled = false;
		__this->___controlsEnabled_11 = (bool)0;
		// }
		return;
	}
}
// System.Void CameraController::EnableCameraControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_EnableCameraControls_mCB338C38F9AB2DAB85E3FDA048F5721B4F684570 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// controlsEnabled = true;
		__this->___controlsEnabled_11 = (bool)1;
		// }
		return;
	}
}
// System.Void CameraController::DisableCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(1, NULL);
		// }
		return;
	}
}
// System.Void CameraController::EnableCursor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.visible = true;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7((bool)1, NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(0, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 CameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CameraController_GetInputTranslationDirection_mE587B998EC99599DE3978869991261E75EA38AF5 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// if (Input.GetKey(KeyCode.W))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)119), NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_2, NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)115), NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8;
		L_8 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)97), NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12;
		L_12 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)100), NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16;
		L_16 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)113), NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_18, NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20;
		L_20 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)101), NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
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
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* G_B10_3 = NULL;
	{
		// if (!controlsEnabled)
		bool L_0 = __this->___controlsEnabled_11;
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
		// Vector3 translation = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_1;
		// if (Input.GetMouseButtonDown(1))
		bool L_2;
		L_2 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// DisableCursor();
		CameraController_DisableCursor_m483C48DDB21AC00ADFAC208E4957E36874C61837(__this, NULL);
	}

IL_001d:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3;
		L_3 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(1, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// EnableCursor();
		CameraController_EnableCursor_m84D6695440A5A5B0F94B5742F4D3706F19E44587(__this, NULL);
	}

IL_002b:
	{
		// if (Input.GetMouseButton(1))
		bool L_4;
		L_4 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(1, NULL);
		if (!L_4)
		{
			goto IL_00a6;
		}
	}
	{
		// Vector2 mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5;
		L_5 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6;
		L_6 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		bool L_7 = __this->___invertY_10;
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_0054;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0055;
	}

IL_0054:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0055:
	{
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline(G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply(G_B10_1, ((float)G_B10_0))), NULL);
		// float mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_8 = __this->___mouseSensitivityCurve_8;
		float L_9;
		L_9 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_3), NULL);
		float L_10;
		L_10 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_8, L_9, NULL);
		V_4 = L_10;
		// TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_11 = __this->___TargetCameraState_4;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_12 = L_11;
		float L_13 = L_12->___yaw_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_3;
		float L_15 = L_14.___x_0;
		float L_16 = V_4;
		L_12->___yaw_0 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_15, L_16))));
		// TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_17 = __this->___TargetCameraState_4;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_18 = L_17;
		float L_19 = L_18->___pitch_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_3;
		float L_21 = L_20.___y_1;
		float L_22 = V_4;
		L_18->___pitch_1 = ((float)il2cpp_codegen_add(L_19, ((float)il2cpp_codegen_multiply(L_21, L_22))));
	}

IL_00a6:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = CameraController_GetInputTranslationDirection_mE587B998EC99599DE3978869991261E75EA38AF5(__this, NULL);
		float L_24;
		L_24 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		V_0 = L_25;
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		float L_27 = __this->___boost_6;
		float L_28;
		L_28 = powf((2.0f), L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_26, L_28, NULL);
		V_0 = L_29;
		// TargetCameraState.Translate(translation);
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_30 = __this->___TargetCameraState_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_0;
		TargetState_Translate_m4CC152242F629187CF92748AA39F61C5E84D8AB5(L_30, L_31, NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_32;
		L_32 = logf((0.00999999046f));
		float L_33 = __this->___positionLerpTime_7;
		float L_34;
		L_34 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_35;
		L_35 = expf(((float)il2cpp_codegen_multiply(((float)(L_32/L_33)), L_34)));
		V_1 = ((float)il2cpp_codegen_subtract((1.0f), L_35));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_36;
		L_36 = logf((0.00999999046f));
		float L_37 = __this->___rotationLerpTime_9;
		float L_38;
		L_38 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_39;
		L_39 = expf(((float)il2cpp_codegen_multiply(((float)(L_36/L_37)), L_38)));
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_39));
		// LerpingCameraUpdater.LerpTowards(TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* L_40 = __this->___LerpingCameraUpdater_5;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_41 = __this->___TargetCameraState_4;
		float L_42 = V_1;
		float L_43 = V_2;
		CameraUpdater_LerpTowards_m21F2DB5C81ECEB96A84C27F0498227AF5489694D(L_40, L_41, L_42, L_43, NULL);
		// LerpingCameraUpdater.UpdateTransform(transform);
		CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* L_44 = __this->___LerpingCameraUpdater_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraUpdater_UpdateTransform_mC32DAF157465BB0F1311DF6F970A870226D996B7(L_44, L_45, NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetState TargetCameraState = new TargetState();
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_0 = (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A*)il2cpp_codegen_object_new(TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A_il2cpp_TypeInfo_var);
		TargetState__ctor_mAA14F00D796950E4B759CCACCD9973A024517181(L_0, NULL);
		__this->___TargetCameraState_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TargetCameraState_4), (void*)L_0);
		// CameraUpdater LerpingCameraUpdater = new CameraUpdater();
		CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* L_1 = (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18*)il2cpp_codegen_object_new(CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18_il2cpp_TypeInfo_var);
		CameraUpdater__ctor_m7A09D7343C0946CBCC05AEAFF82621AA2B5087AE(L_1, NULL);
		__this->___LerpingCameraUpdater_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___LerpingCameraUpdater_5), (void*)L_1);
		// public float boost = 3.5f;
		__this->___boost_6 = (3.5f);
		// public float positionLerpTime = 0.2f;
		__this->___positionLerpTime_7 = (0.200000003f);
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_2 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_2;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_5 = L_3;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m0E7D85642F12A3DAFA1768351CC7670648C41AB2((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_6);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_7 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_7, L_5, NULL);
		__this->___mouseSensitivityCurve_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mouseSensitivityCurve_8), (void*)L_7);
		// public float rotationLerpTime = 0.01f;
		__this->___rotationLerpTime_9 = (0.00999999978f);
		// private bool controlsEnabled = true;
		__this->___controlsEnabled_11 = (bool)1;
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
// System.Void CameraController/TargetState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState_SetFromTransform_m6815B1F31A73B18944A658F4DFE8AF850D45939E (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___pitch_1 = L_2;
		// yaw = t.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___yaw_0 = L_5;
		// roll = t.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___roll_2 = L_8;
		// x = t.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->___x_3 = L_11;
		// y = t.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___y_4 = L_14;
		// z = t.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___z_5 = L_17;
		// }
		return;
	}
}
// System.Void CameraController/TargetState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState_Translate_m4CC152242F629187CF92748AA39F61C5E84D8AB5 (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->___pitch_1;
		float L_1 = __this->___yaw_0;
		float L_2 = __this->___roll_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(L_0, L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_translation;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_3, L_4, NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->___x_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___x_2;
		__this->___x_3 = ((float)il2cpp_codegen_add(L_6, L_8));
		// y += rotatedTranslation.y;
		float L_9 = __this->___y_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = L_10.___y_3;
		__this->___y_4 = ((float)il2cpp_codegen_add(L_9, L_11));
		// z += rotatedTranslation.z;
		float L_12 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14 = L_13.___z_4;
		__this->___z_5 = ((float)il2cpp_codegen_add(L_12, L_14));
		// }
		return;
	}
}
// System.Void CameraController/TargetState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetState__ctor_mAA14F00D796950E4B759CCACCD9973A024517181 (TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void CameraController/CameraUpdater::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_SetFromTransform_m5125FB95601783CB774802EC8421F92E7F8D40CE (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_t, const RuntimeMethod* method) 
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		__this->___pitch_1 = L_2;
		// yaw = t.eulerAngles.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_3, NULL);
		float L_5 = L_4.___y_3;
		__this->___yaw_0 = L_5;
		// roll = t.eulerAngles.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_6, NULL);
		float L_8 = L_7.___z_4;
		__this->___roll_2 = L_8;
		// x = t.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11 = L_10.___x_2;
		__this->___x_3 = L_11;
		// y = t.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14 = L_13.___y_3;
		__this->___y_4 = L_14;
		// z = t.position.z;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		__this->___z_5 = L_17;
		// }
		return;
	}
}
// System.Void CameraController/CameraUpdater::LerpTowards(CameraController/TargetState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_LerpTowards_m21F2DB5C81ECEB96A84C27F0498227AF5489694D (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* ___0_target, float ___1_positionLerpPct, float ___2_rotationLerpPct, const RuntimeMethod* method) 
{
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->___yaw_0;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_1 = ___0_target;
		float L_2 = L_1->___yaw_0;
		float L_3 = ___2_rotationLerpPct;
		float L_4;
		L_4 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_0, L_2, L_3, NULL);
		__this->___yaw_0 = L_4;
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->___pitch_1;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_6 = ___0_target;
		float L_7 = L_6->___pitch_1;
		float L_8 = ___2_rotationLerpPct;
		float L_9;
		L_9 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_5, L_7, L_8, NULL);
		__this->___pitch_1 = L_9;
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->___roll_2;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_11 = ___0_target;
		float L_12 = L_11->___roll_2;
		float L_13 = ___2_rotationLerpPct;
		float L_14;
		L_14 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_10, L_12, L_13, NULL);
		__this->___roll_2 = L_14;
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->___x_3;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_16 = ___0_target;
		float L_17 = L_16->___x_3;
		float L_18 = ___1_positionLerpPct;
		float L_19;
		L_19 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_15, L_17, L_18, NULL);
		__this->___x_3 = L_19;
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->___y_4;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_21 = ___0_target;
		float L_22 = L_21->___y_4;
		float L_23 = ___1_positionLerpPct;
		float L_24;
		L_24 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_20, L_22, L_23, NULL);
		__this->___y_4 = L_24;
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->___z_5;
		TargetState_t602E2A1E870BDEB30FB3C595B0C48B98375B0C5A* L_26 = ___0_target;
		float L_27 = L_26->___z_5;
		float L_28 = ___1_positionLerpPct;
		float L_29;
		L_29 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_25, L_27, L_28, NULL);
		__this->___z_5 = L_29;
		// }
		return;
	}
}
// System.Void CameraController/CameraUpdater::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater_UpdateTransform_mC32DAF157465BB0F1311DF6F970A870226D996B7 (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_camera, const RuntimeMethod* method) 
{
	{
		// camera.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_camera;
		float L_1 = __this->___pitch_1;
		float L_2 = __this->___yaw_0;
		float L_3 = __this->___roll_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_0, L_4, NULL);
		// camera.position = new Vector3(x, y, z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_camera;
		float L_6 = __this->___x_3;
		float L_7 = __this->___y_4;
		float L_8 = __this->___z_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_9, NULL);
		// }
		return;
	}
}
// System.Void CameraController/CameraUpdater::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraUpdater__ctor_m7A09D7343C0946CBCC05AEAFF82621AA2B5087AE (CameraUpdater_tA7D3A21F5D9E49E126DE1212715E7311E323BF18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void GameController::add_onGameEnded(GameController/GameEnded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_add_onGameEnded_mEE1CDB418F861DAB21970D5F163AAC979D281A71 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_0 = NULL;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_1 = NULL;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_2 = NULL;
	{
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_0 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___onGameEnded_15;
		V_0 = L_0;
	}

IL_0006:
	{
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_1 = V_0;
		V_1 = L_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_2 = V_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)CastclassSealed((RuntimeObject*)L_4, GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var));
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_5 = V_2;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_6 = V_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*>((&((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___onGameEnded_15), L_5, L_6);
		V_0 = L_7;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_8 = V_0;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)L_8) == ((RuntimeObject*)(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameController::remove_onGameEnded(GameController/GameEnded)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_remove_onGameEnded_mEF701C15FEADEB8F0EF2DD18921909850530D594 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_0 = NULL;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_1 = NULL;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* V_2 = NULL;
	{
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_0 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___onGameEnded_15;
		V_0 = L_0;
	}

IL_0006:
	{
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_1 = V_0;
		V_1 = L_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_2 = V_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)CastclassSealed((RuntimeObject*)L_4, GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var));
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_5 = V_2;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_6 = V_1;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_7;
		L_7 = InterlockedCompareExchangeImpl<GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*>((&((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___onGameEnded_15), L_5, L_6);
		V_0 = L_7;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_8 = V_0;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_9 = V_1;
		if ((!(((RuntimeObject*)(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)L_8) == ((RuntimeObject*)(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GameController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OnEnable_mD9C9A930A69ABCFA9B1916FD0352B201E965B6E1 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GamePiece.onDestruction += LifeLost;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_0 = (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)il2cpp_codegen_object_new(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		Destruction__ctor_m77C1074446498FD40B03DAD2AAD78D4FF6CDF2E0(L_0, __this, (intptr_t)((void*)GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257_RuntimeMethod_var), NULL);
		GamePiece_add_onDestruction_mDE497774110F527801FB6A21A5A52000E8C2C447(L_0, NULL);
		// Player.onLivesOut += GameEnd;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_1 = (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)il2cpp_codegen_object_new(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		LivesOut__ctor_m5A86CAA126A846D7B20A63D6AA3A8A6CF76643BF(L_1, __this, (intptr_t)((void*)GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1_RuntimeMethod_var), NULL);
		Player_add_onLivesOut_mF0B60432E7585EB8BDCFD4F0ACAFA738564AC60B(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OnDisable_mC1B239943D6BAA4A4DAA424EC5F8B8B601AD6025 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GamePiece.onDestruction -= LifeLost;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_0 = (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)il2cpp_codegen_object_new(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		Destruction__ctor_m77C1074446498FD40B03DAD2AAD78D4FF6CDF2E0(L_0, __this, (intptr_t)((void*)GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257_RuntimeMethod_var), NULL);
		GamePiece_remove_onDestruction_m8267784705EC86E8B280DAB096519FB3AA603EC0(L_0, NULL);
		// Player.onLivesOut -= GameEnd;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_1 = (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)il2cpp_codegen_object_new(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		LivesOut__ctor_m5A86CAA126A846D7B20A63D6AA3A8A6CF76643BF(L_1, __this, (intptr_t)((void*)GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1_RuntimeMethod_var), NULL);
		Player_remove_onLivesOut_m653F852C8CA95D26ABCCFD478B8B22C109E374F6(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mD0C79B8B5B5D8EDC88F7F2F88B5954B1342198EF (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisGamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2_m568556E827830342A8400B811490B250F95F9E7A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupPlayers(); //get player count and fill arrays
		GameController_SetupPlayers_mB5EE5BA603DBF4A30143DA0D3A2033014FA08C3F(__this, NULL);
		// deck = ScriptableObject.CreateInstance<GamePieceDeck>(); //instantiate a deck of pieces
		GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* L_0;
		L_0 = ScriptableObject_CreateInstance_TisGamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2_m568556E827830342A8400B811490B250F95F9E7A(ScriptableObject_CreateInstance_TisGamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2_m568556E827830342A8400B811490B250F95F9E7A_RuntimeMethod_var);
		__this->___deck_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deck_10), (void*)L_0);
		// deck.InitDeck(playerCount); //populate and shuffle the deck
		GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* L_1 = __this->___deck_10;
		int32_t L_2 = __this->___playerCount_7;
		GamePieceDeck_InitDeck_mA6720BB684C9EEF50130DEAE54657E755BEA7184(L_1, L_2, NULL);
		// CreatePlayers();
		GameController_CreatePlayers_m9C72AD01B97588BA31CAB924477C931ADBDE3175(__this, NULL);
		// gameOver = false;
		__this->___gameOver_14 = (bool)0;
		// activePlayer = -1;
		__this->___activePlayer_4 = (-1);
		// NextPlayer();
		GameController_NextPlayer_mA9EF3ACD7ED70249059FD1408E8D1FF3456B3783(__this, NULL);
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_m5E36D1D6999A7510DFDFBF6805CF9E9CB50F0962 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKey(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		// if (gamePaused) ClosePauseMenu();
		bool L_1 = __this->___gamePaused_13;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (gamePaused) ClosePauseMenu();
		GameController_ClosePauseMenu_mD9BFAE5A6B85CE2EE7616E1F9A58F36402642B06(__this, NULL);
	}

IL_0017:
	{
		// if (!gamePaused) OpenPauseMenu();
		bool L_2 = __this->___gamePaused_13;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// if (!gamePaused) OpenPauseMenu();
		GameController_OpenPauseMenu_mCF1D58477C716D2D9E8CD4F54A4BCFE95CCDA0F2(__this, NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void GameController::SetupPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SetupPlayers_mB5EE5BA603DBF4A30143DA0D3A2033014FA08C3F (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// playerCount = GameSettings.PlayerCount(); //get the number of players
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = GameSettings_PlayerCount_m832800B3CA955CD2C07441B596963238A76D4A35(NULL);
		__this->___playerCount_7 = L_0;
		// playerNames = new string[playerCount]; //set up the name array
		int32_t L_1 = __this->___playerCount_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___playerNames_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerNames_11), (void*)L_2);
		// playerColors = new Color[playerCount]; //set up the color array
		int32_t L_3 = __this->___playerCount_7;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___playerColors_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerColors_12), (void*)L_4);
		// playerNames[0] = GameSettings.Player1_name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___playerNames_11;
		String_t* L_6;
		L_6 = GameSettings_get_Player1_name_mAAB1BC62C1C465FBBF32F8010171EA57F5E8B679_inline(NULL);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		// playerNames[1] = GameSettings.Player2_name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->___playerNames_11;
		String_t* L_8;
		L_8 = GameSettings_get_Player2_name_m0861F55313F723E04E06C6C6EC25D5131A59CE3A_inline(NULL);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		// if (playerCount >= 3) playerNames[2] = GameSettings.Player3_name;
		int32_t L_9 = __this->___playerCount_7;
		if ((((int32_t)L_9) < ((int32_t)3)))
		{
			goto IL_005d;
		}
	}
	{
		// if (playerCount >= 3) playerNames[2] = GameSettings.Player3_name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->___playerNames_11;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = GameSettings_get_Player3_name_mB998ABC584EC072CB4EF49F2DC5A5D0297C9AA04_inline(NULL);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_11);
	}

IL_005d:
	{
		// if (playerCount >= 4) playerNames[3] = GameSettings.Player4_name;
		int32_t L_12 = __this->___playerCount_7;
		if ((((int32_t)L_12) < ((int32_t)4)))
		{
			goto IL_0073;
		}
	}
	{
		// if (playerCount >= 4) playerNames[3] = GameSettings.Player4_name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = __this->___playerNames_11;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_14;
		L_14 = GameSettings_get_Player4_name_mAD463E7CBB31439A2D6CDFC915C92BAE4B034CD3_inline(NULL);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
	}

IL_0073:
	{
		// playerColors[0] = GameSettings.Player1_color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_15 = __this->___playerColors_12;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = GameSettings_get_Player1_color_m0348E57D9DE6B029C1D3C0D1D5C8274521D1E5E1_inline(NULL);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_16);
		// playerColors[1] = GameSettings.Player2_color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_17 = __this->___playerColors_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = GameSettings_get_Player2_color_mD646A35B8D54F549B850304BC884420638C46CC8_inline(NULL);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_18);
		// if (playerCount >= 3) playerColors[2] = GameSettings.Player3_color;
		int32_t L_19 = __this->___playerCount_7;
		if ((((int32_t)L_19) < ((int32_t)3)))
		{
			goto IL_00af;
		}
	}
	{
		// if (playerCount >= 3) playerColors[2] = GameSettings.Player3_color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_20 = __this->___playerColors_12;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = GameSettings_get_Player3_color_m6A7D69119B87A24AD433B36871B3C8B775F33A2C_inline(NULL);
		(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_21);
	}

IL_00af:
	{
		// if (playerCount >= 4) playerColors[3] = GameSettings.Player4_color;
		int32_t L_22 = __this->___playerCount_7;
		if ((((int32_t)L_22) < ((int32_t)4)))
		{
			goto IL_00c9;
		}
	}
	{
		// if (playerCount >= 4) playerColors[3] = GameSettings.Player4_color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_23 = __this->___playerColors_12;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = GameSettings_get_Player4_color_mE53E585207BD90D485D386530965F40EC1758BFF_inline(NULL);
		(L_23)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_24);
	}

IL_00c9:
	{
		// for (int i = 0; i < playerNames.Length; i++)
		V_0 = 0;
		goto IL_0102;
	}

IL_00cd:
	{
		// if (playerNames[i] == "") playerNames[i] = "Player " + (i + 1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___playerNames_11;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_29)
		{
			goto IL_00fe;
		}
	}
	{
		// if (playerNames[i] == "") playerNames[i] = "Player " + (i + 1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___playerNames_11;
		int32_t L_31 = V_0;
		int32_t L_32 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E, L_33, NULL);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31), (String_t*)L_34);
	}

IL_00fe:
	{
		// for (int i = 0; i < playerNames.Length; i++)
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0102:
	{
		// for (int i = 0; i < playerNames.Length; i++)
		int32_t L_36 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = __this->___playerNames_11;
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_00cd;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::CreatePlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreatePlayers_m9C72AD01B97588BA31CAB924477C931ADBDE3175 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_CreateInstance_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m64B9EAB8F9DA96B97983279B7381082E53AF315B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// playerArray = new Player[playerCount];
		int32_t L_0 = __this->___playerCount_7;
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_1 = (PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1*)(PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1*)SZArrayNew(PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___playerArray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerArray_9), (void*)L_1);
		// for (int i = 0; i < playerCount; i++)
		V_0 = 0;
		goto IL_00f1;
	}

IL_0018:
	{
		// Player newPlayer = ScriptableObject.CreateInstance<Player>(); //instantiate player
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_2;
		L_2 = ScriptableObject_CreateInstance_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m64B9EAB8F9DA96B97983279B7381082E53AF315B(ScriptableObject_CreateInstance_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_m64B9EAB8F9DA96B97983279B7381082E53AF315B_RuntimeMethod_var);
		V_1 = L_2;
		// newPlayer.PlayerNum = i; //set the pleyer number
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3 = V_1;
		int32_t L_4 = V_0;
		Player_set_PlayerNum_mD2E703805EE53F4ACC289B944B26DA90BBBA052B_inline(L_3, L_4, NULL);
		// newPlayer.PlayerHome = PlayerHomePos(playerCount, i); //set base position
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = V_1;
		int32_t L_6 = __this->___playerCount_7;
		int32_t L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = GameController_PlayerHomePos_m4BB61D453A24DFFD5D29A22D52AF502E0FF99FEB(__this, L_6, L_7, NULL);
		Player_set_PlayerHome_m4EE4595BF36C855396C89CAD33836A0C5F702198_inline(L_5, L_8, NULL);
		// newPlayer.PlayerRotation = PlayerHomeRotation(playerCount, i); //set base rotation
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_9 = V_1;
		int32_t L_10 = __this->___playerCount_7;
		int32_t L_11 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = GameController_PlayerHomeRotation_mE0541F910EFB615E762E6B9A8ABAA54CA67E6117(__this, L_10, L_11, NULL);
		Player_set_PlayerRotation_m294DDE6531BE2B1440622D59A202D011F8D6718E_inline(L_9, L_12, NULL);
		// newPlayer.CardPosition = PlayerCardPosition(playerCount, i, -130f); //set the scorecard position
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = V_1;
		int32_t L_14 = __this->___playerCount_7;
		int32_t L_15 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = GameController_PlayerCardPosition_m98D4CDE428769946F940567A64CB09A5858E5BA9(__this, L_14, L_15, (-130.0f), NULL);
		Player_set_CardPosition_m8184A0F9591D6C1056CFB2D356134646FC63E6E0_inline(L_13, L_16, NULL);
		// newPlayer.Lives = GameSettings.StartingLives; //set number of lives
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = GameSettings_get_StartingLives_m3284B28769856356D8447A05E39CAF31CFBA2A18_inline(NULL);
		Player_set_Lives_m492905F491DBDF491674B74387ECA2D1726DF018_inline(L_17, L_18, NULL);
	}
	try
	{// begin try (depth: 1)
		// newPlayer.PlayerName = playerNames[i];
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_19 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___playerNames_11;
		int32_t L_21 = V_0;
		int32_t L_22 = L_21;
		String_t* L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E_inline(L_19, L_23, NULL);
		// } catch
		goto IL_00a1;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Object)
		// } catch
		// newPlayer.PlayerName = "Player " + i+1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_24 = V_1;
		String_t* L_25;
		L_25 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		V_2 = 1;
		String_t* L_26;
		L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFD2FA13E89A7323125661F38211D4E7F334E0C5E)), L_25, L_26, NULL);
		Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E_inline(L_24, L_27, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a1;
	}// end catch (depth: 1)

IL_00a1:
	{
	}
	try
	{// begin try (depth: 1)
		// newPlayer.PlayerColor = playerColors[i];
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_28 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_29 = __this->___playerColors_12;
		int32_t L_30 = V_0;
		int32_t L_31 = L_30;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = (L_29)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_31));
		Player_set_PlayerColor_m4B25A1896A8CC2885C3D54CFA4C2CECE388B3185_inline(L_28, L_32, NULL);
		// } catch
		goto IL_00d8;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b6;
		}
		throw e;
	}

CATCH_00b6:
	{// begin catch(System.Object)
		// } catch
		// newPlayer.PlayerColor = new Color(0.4f, 0.4f, 0.4f, 1f);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_33 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), (0.400000006f), (0.400000006f), (0.400000006f), (1.0f), /*hidden argument*/NULL);
		Player_set_PlayerColor_m4B25A1896A8CC2885C3D54CFA4C2CECE388B3185_inline(L_33, L_34, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d8;
	}// end catch (depth: 1)

IL_00d8:
	{
		// newPlayer.CreateBase(); //create stack base GameObject
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_35 = V_1;
		Player_CreateBase_m37ECBACE8C607ECE8D28886F278F2749B433EE2B(L_35, NULL);
		// newPlayer.CreateCard(); //create scorecard
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_36 = V_1;
		Player_CreateCard_m2963A1AAA53181790BFB044F6FF8E07172309D8C(L_36, NULL);
		// playerArray[i] = newPlayer; //insert into array
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_37 = __this->___playerArray_9;
		int32_t L_38 = V_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_39 = V_1;
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)L_39);
		// for (int i = 0; i < playerCount; i++)
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00f1:
	{
		// for (int i = 0; i < playerCount; i++)
		int32_t L_41 = V_0;
		int32_t L_42 = __this->___playerCount_7;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 GameController::PlayerHomePos(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GameController_PlayerHomePos_m4BB61D453A24DFFD5D29A22D52AF502E0FF99FEB (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// float angle = (2f * Mathf.PI / pCount) * pNum; //radians around circle
		int32_t L_0 = ___0_pCount;
		int32_t L_1 = ___1_pNum;
		// float y = 0f;
		V_0 = (0.0f);
		// float x = Mathf.Cos(angle) * radius;
		float L_2 = ((float)il2cpp_codegen_multiply(((float)((6.28318548f)/((float)L_0))), ((float)L_1)));
		float L_3;
		L_3 = cosf(L_2);
		float L_4 = __this->___radius_8;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// float z = Mathf.Sin(angle) * radius;
		float L_5;
		L_5 = sinf(L_2);
		float L_6 = __this->___radius_8;
		V_2 = ((float)il2cpp_codegen_multiply(L_5, L_6));
		// return new Vector3(x, y, z);
		float L_7 = V_1;
		float L_8 = V_0;
		float L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_7, L_8, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Quaternion GameController::PlayerHomeRotation(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 GameController_PlayerHomeRotation_mE0541F910EFB615E762E6B9A8ABAA54CA67E6117 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float angle = 270 - ((360 / pCount) * pNum); //rotate to point to table centre
		int32_t L_0 = ___0_pCount;
		int32_t L_1 = ___1_pNum;
		V_0 = ((float)((int32_t)il2cpp_codegen_subtract(((int32_t)270), ((int32_t)il2cpp_codegen_multiply(((int32_t)(((int32_t)360)/L_0)), L_1)))));
		// return Quaternion.Euler(0, angle, 0);
		float L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_2, (0.0f), NULL);
		return L_3;
	}
}
// UnityEngine.Vector2 GameController::PlayerCardPosition(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GameController_PlayerCardPosition_m98D4CDE428769946F940567A64CB09A5858E5BA9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_pCount, int32_t ___1_pNum, float ___2_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4232E2FD672DD70CC04156695A1188BA1EE615BF);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// float canvW = GameObject.Find("gameUI").GetComponent<RectTransform>().rect.width;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4232E2FD672DD70CC04156695A1188BA1EE615BF, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_1, NULL);
		V_4 = L_2;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		V_0 = L_3;
		// float cardW = 300f;
		V_1 = (300.0f);
		// float size = (canvW / pCount);
		float L_4 = V_0;
		int32_t L_5 = ___0_pCount;
		// float start = (size * pNum) - (canvW / 2);
		float L_6 = ((float)(L_4/((float)L_5)));
		int32_t L_7 = ___1_pNum;
		float L_8 = V_0;
		V_2 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_6, ((float)L_7))), ((float)(L_8/(2.0f)))));
		// float padding = (size - cardW) / 2;
		float L_9 = V_1;
		V_3 = ((float)(((float)il2cpp_codegen_subtract(L_6, L_9))/(2.0f)));
		// float x = start + padding + (cardW/2);
		float L_10 = V_2;
		float L_11 = V_3;
		float L_12 = V_1;
		// return new Vector2(x, y);
		float L_13 = ___2_y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_10, L_11)), ((float)(L_12/(2.0f))))), L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void GameController::NextPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_NextPlayer_mA9EF3ACD7ED70249059FD1408E8D1FF3456B3783 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// StackHeights(); //recalculate stack heights
		GameController_StackHeights_m52426E7670DBFB5D0A113F217F9E85BB8779FA54(__this, NULL);
		// if (activePlayer >= 0) playerArray[activePlayer].SetInactive(); //update scorecard for old player
		int32_t L_0 = __this->___activePlayer_4;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		// if (activePlayer >= 0) playerArray[activePlayer].SetInactive(); //update scorecard for old player
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_1 = __this->___playerArray_9;
		int32_t L_2 = __this->___activePlayer_4;
		int32_t L_3 = L_2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Player_SetInactive_m342CD1FF3FAF41B27A3B0AF6D3780D57994D2E82(L_4, NULL);
	}

IL_0021:
	{
		// activePlayer = (activePlayer + 1) % playerCount; //advance player
		int32_t L_5 = __this->___activePlayer_4;
		int32_t L_6 = __this->___playerCount_7;
		__this->___activePlayer_4 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, 1))%L_6));
		// AlignCameraForPlayer(activePlayer); //realign camera
		int32_t L_7 = __this->___activePlayer_4;
		GameController_AlignCameraForPlayer_m71F6A30D44AD4DA9606BC7AF976D8F74A6586F1D(__this, L_7, NULL);
		// playerArray[activePlayer].SetActive(); //update scorecard for new player
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_8 = __this->___playerArray_9;
		int32_t L_9 = __this->___activePlayer_4;
		int32_t L_10 = L_9;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Player_SetActive_mC5DE3181C9398F3FC3F915B8E5CB3F775048445A(L_11, NULL);
		// SpawnGamePiece(); //give the new player a piece to add
		GameController_SpawnGamePiece_m2657DB25B31464306DA7EC927EC86177021E7E0B(__this, NULL);
		// }
		return;
	}
}
// System.Void GameController::AlignCameraForPlayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_AlignCameraForPlayer_m71F6A30D44AD4DA9606BC7AF976D8F74A6586F1D (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_playerNum, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// transform.GetComponent<CameraController>().enabled = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_1;
		L_1 = Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15(L_0, Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// Vector3 cameraPos = playerArray[playerNum].PlayerHome * 2.5f; //behind player home
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_2 = __this->___playerArray_9;
		int32_t L_3 = ___0_playerNum;
		int32_t L_4 = L_3;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Player_get_PlayerHome_mA32CE98F4AD4FAED8170387FE115A3B2FD5F3D66_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, (2.5f), NULL);
		V_0 = L_7;
		// cameraPos.y = 25f; //above plane
		(&V_0)->___y_3 = (25.0f);
		// transform.position = cameraPos; //move the camera
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// transform.LookAt(Vector3.zero); //rotate to face origin
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_10, L_11, NULL);
		// transform.GetComponent<CameraController>().enabled = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_13;
		L_13 = Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15(L_12, Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameController::SpawnGamePiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnGamePiece_m2657DB25B31464306DA7EC927EC86177021E7E0B (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral476FF18E41FFB4AE71E574C18B96CFAE9F0D4EE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80CED26F8D8EB6422E7C0D1F2A41C4675B7616F7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE50C43DCA9D1B1E2E277FB63CFCC6B8F98BF669B);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_3 = NULL;
	{
		// if (gameOver) return;
		bool L_0 = __this->___gameOver_14;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (gameOver) return;
		return;
	}

IL_0009:
	{
		// if (deck.PiecesLeft <= 0)
		GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* L_1 = __this->___deck_10;
		int32_t L_2;
		L_2 = GamePieceDeck_get_PiecesLeft_m91B145DE2E8D6ECBB31E1DB560DE042033EFF4DA_inline(L_1, NULL);
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		// GameEnd();
		GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1(__this, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// string[] newPieceDef = deck.NextPiece();
		GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* L_3 = __this->___deck_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = GamePieceDeck_NextPiece_mE6D727490198FAD5B3510FDFFFDE85D1E947A980(L_3, NULL);
		V_0 = L_4;
		// GameObject holdPoint = GameObject.Find("Hold Point");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralE50C43DCA9D1B1E2E277FB63CFCC6B8F98BF669B, NULL);
		V_1 = L_5;
		// GameObject newPiece = Instantiate(Resources.Load<GameObject>("Prefabs/" + newPieceDef[0]), holdPoint.transform.position, UnityEngine.Random.rotation);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = V_0;
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral476FF18E41FFB4AE71E574C18B96CFAE9F0D4EE3, L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_9, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Random_get_rotation_m8B04B3FB3927208F0CB8C65295B0226E7FC7E9E2(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_10, L_13, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_15;
		// Material newMat = Resources.Load<Material>("Materials/" + newPieceDef[1]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_0;
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral80CED26F8D8EB6422E7C0D1F2A41C4675B7616F7, L_18, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20;
		L_20 = Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E(L_19, Resources_Load_TisMaterial_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_mC909CC888641BC8E1E29C8AB1C790C637C9B390E_RuntimeMethod_var);
		V_3 = L_20;
		// newPiece.GetComponent<GamePiece>().BaseMat = newMat;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_2;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_22;
		L_22 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_21, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_23 = V_3;
		GamePiece_set_BaseMat_m5584BF04EEED5A782AAB5FBA84A6A8DB69A61A64_inline(L_22, L_23, NULL);
		// newPiece.GetComponent<GamePiece>().OwnerIndex = activePlayer;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_2;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_25;
		L_25 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_24, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		int32_t L_26 = __this->___activePlayer_4;
		GamePiece_set_OwnerIndex_mD6BF73FDB1970727E5ABAC0AB0CC18B4B7363D28_inline(L_25, L_26, NULL);
		// GetComponent<GrabObject>().GrabTarget(newPiece);
		GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* L_27;
		L_27 = Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A(__this, Component_GetComponent_TisGrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_mE0064058B770756CFC9502BEFF17B889BBD9BD1A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		GrabObject_GrabTarget_m1AE5FB1896D037155229D72B69F46A185A9A09C8(L_27, L_28, NULL);
		// }
		return;
	}
}
// System.Void GameController::StackHeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_StackHeights_m52426E7670DBFB5D0A113F217F9E85BB8779FA54 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D45149DCC3666DC8A5F7A8644A4D1C4A618D7A2);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	{
		// if (gameOver) return;
		bool L_0 = __this->___gameOver_14;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (gameOver) return;
		return;
	}

IL_0009:
	{
		// float[] stackHeights = new float[playerCount];
		int32_t L_1 = __this->___playerCount_7;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// GameObject[] pieceList = GameObject.FindGameObjectsWithTag("GamePiece");
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3;
		L_3 = GameObject_FindGameObjectsWithTag_mB8AA805DA664EF0221BB338446014F662771B4E3(_stringLiteral5D45149DCC3666DC8A5F7A8644A4D1C4A618D7A2, NULL);
		// foreach(GameObject piece in pieceList)
		V_1 = L_3;
		V_2 = 0;
		goto IL_0094;
	}

IL_0024:
	{
		// foreach(GameObject piece in pieceList)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = V_1;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// if (piece.GetComponent<GamePiece>().Held)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_3;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_9;
		L_9 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_8, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		bool L_10;
		L_10 = GamePiece_get_Held_mED60683BF29AA4B2B17B533272062893DF10BAB3_inline(L_9, NULL);
		if (L_10)
		{
			goto IL_0090;
		}
	}
	{
		// if (piece.GetComponent<Rigidbody>().velocity.magnitude > 0.6)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_3;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12;
		L_12 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_11, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_12, NULL);
		V_6 = L_13;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_6), NULL);
		if ((((double)((double)L_14)) > ((double)(0.59999999999999998))))
		{
			goto IL_0090;
		}
	}
	{
		// int pieceOwner = piece.GetComponent<GamePiece>().OwnerIndex;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_3;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_16;
		L_16 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_15, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		int32_t L_17;
		L_17 = GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD_inline(L_16, NULL);
		V_4 = L_17;
		// if (pieceOwner < 0)
		int32_t L_18 = V_4;
		if ((((int32_t)L_18) < ((int32_t)0)))
		{
			goto IL_0090;
		}
	}
	{
		// float pieceHeight = piece.GetComponent<Collider>().bounds.max.y;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_3;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_20;
		L_20 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_19, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_21;
		L_21 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_20, NULL);
		V_7 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Bounds_get_max_m6446F2AB97C1E57CA89467B9DE52D4EB61F1CB09((&V_7), NULL);
		float L_23 = L_22.___y_3;
		V_5 = L_23;
		// if (pieceHeight > stackHeights[pieceOwner])
		float L_24 = V_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = V_0;
		int32_t L_26 = V_4;
		int32_t L_27 = L_26;
		float L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		if ((!(((float)L_24) > ((float)L_28))))
		{
			goto IL_0090;
		}
	}
	{
		// stackHeights[pieceOwner] = pieceHeight;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = V_0;
		int32_t L_30 = V_4;
		float L_31 = V_5;
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30), (float)L_31);
	}

IL_0090:
	{
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_0094:
	{
		// foreach(GameObject piece in pieceList)
		int32_t L_33 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_34 = V_1;
		if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// for(int i = 0; i < stackHeights.Length; i++)
		V_8 = 0;
		goto IL_00b7;
	}

IL_009f:
	{
		// playerArray[i].UpdateScore(stackHeights[i]);
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_35 = __this->___playerArray_9;
		int32_t L_36 = V_8;
		int32_t L_37 = L_36;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_38 = (L_35)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_37));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = V_0;
		int32_t L_40 = V_8;
		int32_t L_41 = L_40;
		float L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		Player_UpdateScore_mC0B36DB4DEA6677BD5BFE2698E7D400DD8BD5CFD(L_38, L_42, NULL);
		// for(int i = 0; i < stackHeights.Length; i++)
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00b7:
	{
		// for(int i = 0; i < stackHeights.Length; i++)
		int32_t L_44 = V_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_45 = V_0;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_009f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::LifeLost(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_LifeLost_mE1FF9E6740D2964310BCC15FA724483D9581B257 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, int32_t ___0_playerIndex, const RuntimeMethod* method) 
{
	{
		// if (gameOver) return;
		bool L_0 = __this->___gameOver_14;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (gameOver) return;
		return;
	}

IL_0009:
	{
		// StackHeights();
		GameController_StackHeights_m52426E7670DBFB5D0A113F217F9E85BB8779FA54(__this, NULL);
		// playerArray[playerIndex].LoseLife();
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_1 = __this->___playerArray_9;
		int32_t L_2 = ___0_playerIndex;
		int32_t L_3 = L_2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Player_LoseLife_mE19E920E35BC6017805B74256B3931504EC0C472(L_4, NULL);
		// }
		return;
	}
}
// System.Void GameController::GameEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_GameEnd_m3AB545F63200CF528998F66ECB4F2AA45107D3B1 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CBD56B2A45C1384D75695675F1FD1793E671F22);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* G_B2_0 = NULL;
	GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* G_B1_0 = NULL;
	{
		// StackHeights();
		GameController_StackHeights_m52426E7670DBFB5D0A113F217F9E85BB8779FA54(__this, NULL);
		// gameOver = true;
		__this->___gameOver_14 = (bool)1;
		// onGameEnded?.Invoke();
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_0 = ((GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_StaticFields*)il2cpp_codegen_static_fields_for(GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09_il2cpp_TypeInfo_var))->___onGameEnded_15;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0018;
		}
	}
	{
		goto IL_001d;
	}

IL_0018:
	{
		GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_inline(G_B2_0, NULL);
	}

IL_001d:
	{
		// GameObject.Find("gameUI/nextPlayerButton").SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral3CBD56B2A45C1384D75695675F1FD1793E671F22, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// Array.Sort(playerArray, new PlayerComparer());
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_3 = __this->___playerArray_9;
		PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7* L_4 = (PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7*)il2cpp_codegen_object_new(PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7_il2cpp_TypeInfo_var);
		PlayerComparer__ctor_m487DB35DF65BBF1AE2E15ABC17ABA51F22281262(L_4, NULL);
		Array_Sort_mCAA68804E8A393AE2E86ACBBE3F70BC4A5CA21CB((RuntimeArray*)L_3, L_4, NULL);
		// for (int i = 0; i < playerCount; i++)
		V_0 = 0;
		goto IL_006b;
	}

IL_0041:
	{
		// Vector2 scorecardPos = PlayerCardPosition(playerCount, i, 0f); //position for the scorecard
		int32_t L_5 = __this->___playerCount_7;
		int32_t L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = GameController_PlayerCardPosition_m98D4CDE428769946F940567A64CB09A5858E5BA9(__this, L_5, L_6, (0.0f), NULL);
		V_1 = L_7;
		// int placing = i + 1;
		int32_t L_8 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// playerArray[i].GameEndScorecard(scorecardPos, placing); //update the scorecard
		PlayerU5BU5D_t297CC8A8335645D2AEF2DDB3FBF57964C8B68DF1* L_9 = __this->___playerArray_9;
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		int32_t L_14 = V_2;
		Player_GameEndScorecard_mD4B78EA9C993DB7322014A6D437A3615E2A074A7(L_12, L_13, L_14, NULL);
		// for (int i = 0; i < playerCount; i++)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_006b:
	{
		// for (int i = 0; i < playerCount; i++)
		int32_t L_16 = V_0;
		int32_t L_17 = __this->___playerCount_7;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0041;
		}
	}
	{
		// }
		return;
	}
}
// System.Void GameController::OpenPauseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OpenPauseMenu_mCF1D58477C716D2D9E8CD4F54A4BCFE95CCDA0F2 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<CameraController>().enabled = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_1;
		L_1 = Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15(L_0, Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// pauseMenu.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___pauseMenu_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// gameUI.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___gameUI_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		// gamePaused = true;
		__this->___gamePaused_13 = (bool)1;
		// }
		return;
	}
}
// System.Void GameController::ClosePauseMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_ClosePauseMenu_mD9BFAE5A6B85CE2EE7616E1F9A58F36402642B06 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<CameraController>().enabled = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_1;
		L_1 = Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15(L_0, Component_GetComponent_TisCameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_m9FC275819E5101967CC6B9CF97550512FBF23C15_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// pauseMenu.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___pauseMenu_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// gameUI.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___gameUI_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)1, NULL);
		// gamePaused = false;
		__this->___gamePaused_13 = (bool)0;
		// }
		return;
	}
}
// System.Void GameController::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_MainMenu_m1EA050CAD620E052EE9D7AB7D5EC42911399BBC8 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameSettings.Reset(); //reset game settings to default
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_Reset_mB3EC303745A4E3ACA42E77B127764724F0F3B80A(NULL);
		// SceneManager.LoadScene(0); //load the main menu
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Void GameController::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_QuitGame_m437AEE0C35450855BAF700B0193DB896A5EFD053 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CDF2F9C4B0DC7EEEA5CD35BC73DB891975430E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quitting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0CDF2F9C4B0DC7EEEA5CD35BC73DB891975430E3, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_mB6369F6C5357D5984325D613D589EDA60818CBE9 (GameController_tDA619EE453F7ED2C8297EF928518A0B447E44D09* __this, const RuntimeMethod* method) 
{
	{
		// private float radius = 13f; //radius of the game space
		__this->___radius_8 = (13.0f);
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
void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_Multicast(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* currentDelegate = reinterpret_cast<GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_OpenInst(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_OpenStatic(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_OpenStaticInvoker(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_ClosedStaticInvoker(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GameController/GameEnded::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_Multicast;
}
// System.Void GameController/GameEnded::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GameController/GameEnded::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameEnded_BeginInvoke_m19772904A0633359CB889BD9E274FA7667216AD6 (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GameController/GameEnded::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameEnded_EndInvoke_m5B5F3C6EB5DD7DD08E238995654A5D6A3C6F694E (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Boolean GamePiece::get_Held()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamePiece_get_Held_mED60683BF29AA4B2B17B533272062893DF10BAB3 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Held { get; set; }
		bool L_0 = __this->___U3CHeldU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GamePiece::set_Held(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_set_Held_m08551C58D6EC3E5F5B4F2290E2F24C76D41E9430 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Held { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CHeldU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 GamePiece::get_OwnerIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public int OwnerIndex { get; set; } = -1; //default no owner
		int32_t L_0 = __this->___U3COwnerIndexU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void GamePiece::set_OwnerIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_set_OwnerIndex_mD6BF73FDB1970727E5ABAC0AB0CC18B4B7363D28 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int OwnerIndex { get; set; } = -1; //default no owner
		int32_t L_0 = ___0_value;
		__this->___U3COwnerIndexU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean GamePiece::get_Stacked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamePiece_get_Stacked_mB5E587051C264EA603A4F35558409FC3E3654F10 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stacked { get; set; } = false; //default unstacked
		bool L_0 = __this->___U3CStackedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void GamePiece::set_Stacked(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_set_Stacked_m2DB767F94CEC8E20A8EC82910360AB91777C9484 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Stacked { get; set; } = false; //default unstacked
		bool L_0 = ___0_value;
		__this->___U3CStackedU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Material GamePiece::get_BaseMat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GamePiece_get_BaseMat_m730B02822BD4CC75C7827600AE1FE98DAF4D0CAF (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public Material BaseMat { get; set; } //default material for this piece
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CBaseMatU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GamePiece::set_BaseMat(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_set_BaseMat_m5584BF04EEED5A782AAB5FBA84A6A8DB69A61A64 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Material BaseMat { get; set; } //default material for this piece
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CBaseMatU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseMatU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.Void GamePiece::add_onDestruction(GamePiece/Destruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_add_onDestruction_mDE497774110F527801FB6A21A5A52000E8C2C447 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_0 = NULL;
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_1 = NULL;
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_2 = NULL;
	{
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_0 = ((GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields*)il2cpp_codegen_static_fields_for(GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var))->___onDestruction_15;
		V_0 = L_0;
	}

IL_0006:
	{
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_1 = V_0;
		V_1 = L_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_2 = V_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)CastclassSealed((RuntimeObject*)L_4, Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var));
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_5 = V_2;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_6 = V_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*>((&((GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields*)il2cpp_codegen_static_fields_for(GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var))->___onDestruction_15), L_5, L_6);
		V_0 = L_7;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_8 = V_0;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)L_8) == ((RuntimeObject*)(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GamePiece::remove_onDestruction(GamePiece/Destruction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_remove_onDestruction_m8267784705EC86E8B280DAB096519FB3AA603EC0 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_0 = NULL;
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_1 = NULL;
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* V_2 = NULL;
	{
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_0 = ((GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields*)il2cpp_codegen_static_fields_for(GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var))->___onDestruction_15;
		V_0 = L_0;
	}

IL_0006:
	{
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_1 = V_0;
		V_1 = L_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_2 = V_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)CastclassSealed((RuntimeObject*)L_4, Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D_il2cpp_TypeInfo_var));
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_5 = V_2;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_6 = V_1;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_7;
		L_7 = InterlockedCompareExchangeImpl<Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*>((&((GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields*)il2cpp_codegen_static_fields_for(GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var))->___onDestruction_15), L_5, L_6);
		V_0 = L_7;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_8 = V_0;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_9 = V_1;
		if ((!(((RuntimeObject*)(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)L_8) == ((RuntimeObject*)(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GamePiece::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Start_m26BEE8D47263BD0C92CC025904ED835BD7B078BB (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thisRenderer = GetComponent<MeshRenderer>(); //get the renderer component
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		__this->___thisRenderer_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisRenderer_8), (void*)L_0);
		// source = GetComponent<AudioSource>(); //get the audioSource component
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___source_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_14), (void*)L_1);
		// thisRenderer.material = BaseMat;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_2 = __this->___thisRenderer_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = GamePiece_get_BaseMat_m730B02822BD4CC75C7827600AE1FE98DAF4D0CAF_inline(__this, NULL);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_2, L_3, NULL);
		// destroy = false;
		__this->___destroy_9 = (bool)0;
		// detroyLen = 1.6f;
		__this->___detroyLen_10 = (1.60000002f);
		// flashLen = 0.2f;
		__this->___flashLen_11 = (0.200000003f);
		// destroyTimer = 0f;
		__this->___destroyTimer_12 = (0.0f);
		// flashTimer = 0f;
		__this->___flashTimer_13 = (0.0f);
		// }
		return;
	}
}
// System.Void GamePiece::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Update_m836006C0854115209402825446B5AA83A874C2D5 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// if (destroy)
		bool L_0 = __this->___destroy_9;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// FlashAndDestroy();
		GamePiece_FlashAndDestroy_mBF70CC512EDA5E1A1671FC1BA2BDBF2818CC1403(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void GamePiece::FlashAndDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_FlashAndDestroy_mBF70CC512EDA5E1A1671FC1BA2BDBF2818CC1403 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* G_B3_0 = NULL;
	Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* G_B2_0 = NULL;
	{
		// if (destroyTimer == 0f)
		float L_0 = __this->___destroyTimer_12;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0023;
		}
	}
	{
		// onDestruction?.Invoke(OwnerIndex);
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_1 = ((GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_StaticFields*)il2cpp_codegen_static_fields_for(GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_il2cpp_TypeInfo_var))->___onDestruction_15;
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0018;
		}
	}
	{
		goto IL_0023;
	}

IL_0018:
	{
		int32_t L_3;
		L_3 = GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD_inline(__this, NULL);
		Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_inline(G_B3_0, L_3, NULL);
	}

IL_0023:
	{
		// destroyTimer += Time.deltaTime;
		float L_4 = __this->___destroyTimer_12;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___destroyTimer_12 = ((float)il2cpp_codegen_add(L_4, L_5));
		// flashTimer += Time.deltaTime;
		float L_6 = __this->___flashTimer_13;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___flashTimer_13 = ((float)il2cpp_codegen_add(L_6, L_7));
		// if (destroyTimer >= detroyLen)
		float L_8 = __this->___destroyTimer_12;
		float L_9 = __this->___detroyLen_10;
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_0060;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
	}

IL_0060:
	{
		// if (flashTimer >= flashLen)
		float L_11 = __this->___flashTimer_13;
		float L_12 = __this->___flashLen_11;
		if ((!(((float)L_11) >= ((float)L_12))))
		{
			goto IL_0092;
		}
	}
	{
		// thisRenderer.enabled = !thisRenderer.enabled;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_13 = __this->___thisRenderer_8;
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_14 = __this->___thisRenderer_8;
		bool L_15;
		L_15 = Renderer_get_enabled_mFDDF363859AEC88105A925FA7EA341C077B09B54(L_14, NULL);
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_13, (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0), NULL);
		// flashTimer = 0f;
		__this->___flashTimer_13 = (0.0f);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void GamePiece::Pickup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Pickup_m0CFFF4858C2F44E46423A3B986A2F154EC7868A7 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Held = true;
		GamePiece_set_Held_m08551C58D6EC3E5F5B4F2290E2F24C76D41E9430_inline(__this, (bool)1, NULL);
		// gameObject.layer = LayerMask.NameToLayer("Outline");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_1;
		L_1 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral8649F4FD2D10AA91241D05393F34CFB465556BF8, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::Drop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_Drop_m5EFE36D07EDFB5D7B2F921C4F3D5F205C07CC35E (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Held = false;
		GamePiece_set_Held_m08551C58D6EC3E5F5B4F2290E2F24C76D41E9430_inline(__this, (bool)0, NULL);
		// gameObject.layer = LayerMask.NameToLayer("Default");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_1;
		L_1 = LayerMask_NameToLayer_m2764C530EDA9EC3226A36E3FD43E020B413AF139(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_OnCollisionEnter_mF85EE245600437675B46DE8ECB8D995E50936D7E (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m2147F8C4BE0D760CB79AE9EF49B66AC332AB16EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27A2FC008EA25A752A7B1519EA57FCAF335DF4A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D45149DCC3666DC8A5F7A8644A4D1C4A618D7A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (Held)
		bool L_0;
		L_0 = GamePiece_get_Held_mED60683BF29AA4B2B17B533272062893DF10BAB3_inline(__this, NULL);
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
		// string otherTag = collision.gameObject.tag;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		String_t* L_3;
		L_3 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_2, NULL);
		V_0 = L_3;
		// if (otherTag == "Ground")
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		// GroundPiece();
		GamePiece_GroundPiece_m47739802742C212770DDF4E1FAC983CB89E78AD3(__this, NULL);
		// return;
		return;
	}

IL_0029:
	{
		// if (otherTag == "Base")
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral27A2FC008EA25A752A7B1519EA57FCAF335DF4A0, NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// int owner = collision.gameObject.GetComponent<PlayerBase>().OwnerIndex;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_8 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_8, NULL);
		PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* L_10;
		L_10 = GameObject_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m2147F8C4BE0D760CB79AE9EF49B66AC332AB16EA(L_9, GameObject_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m2147F8C4BE0D760CB79AE9EF49B66AC332AB16EA_RuntimeMethod_var);
		int32_t L_11;
		L_11 = PlayerBase_get_OwnerIndex_m6ED28A27AC59B057A96265FA375A8787E2C17853_inline(L_10, NULL);
		V_1 = L_11;
		// AddToStack(owner);
		int32_t L_12 = V_1;
		GamePiece_AddToStack_m83EA0685A462B739E8A2CA6D20C046C422FB92B4(__this, L_12, NULL);
		// return;
		return;
	}

IL_004f:
	{
		// if (otherTag == "GamePiece")
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral5D45149DCC3666DC8A5F7A8644A4D1C4A618D7A2, NULL);
		if (!L_14)
		{
			goto IL_0088;
		}
	}
	{
		// if (!collision.gameObject.GetComponent<GamePiece>().Stacked) return;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_15 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_15, NULL);
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_17;
		L_17 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_16, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		bool L_18;
		L_18 = GamePiece_get_Stacked_mB5E587051C264EA603A4F35558409FC3E3654F10_inline(L_17, NULL);
		if (L_18)
		{
			goto IL_006f;
		}
	}
	{
		// if (!collision.gameObject.GetComponent<GamePiece>().Stacked) return;
		return;
	}

IL_006f:
	{
		// int owner = collision.gameObject.GetComponent<GamePiece>().OwnerIndex;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_19 = ___0_collision;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_19, NULL);
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_21;
		L_21 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_20, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		int32_t L_22;
		L_22 = GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD_inline(L_21, NULL);
		V_2 = L_22;
		// AddToStack(owner);
		int32_t L_23 = V_2;
		GamePiece_AddToStack_m83EA0685A462B739E8A2CA6D20C046C422FB92B4(__this, L_23, NULL);
		// return;
		return;
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void GamePiece::AddToStack(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_AddToStack_m83EA0685A462B739E8A2CA6D20C046C422FB92B4 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, int32_t ___0_owner, const RuntimeMethod* method) 
{
	{
		// if (owner < 1)
		int32_t L_0 = ___0_owner;
		if ((((int32_t)L_0) >= ((int32_t)1)))
		{
			goto IL_0005;
		}
	}
	{
		// return;
		return;
	}

IL_0005:
	{
		// OwnerIndex = owner;
		int32_t L_1 = ___0_owner;
		GamePiece_set_OwnerIndex_mD6BF73FDB1970727E5ABAC0AB0CC18B4B7363D28_inline(__this, L_1, NULL);
		// TouchSound();
		GamePiece_TouchSound_m37C219415C24D7D04062DEAD8684DD16381E1003(__this, NULL);
		// Stacked = true;
		GamePiece_set_Stacked_m2DB767F94CEC8E20A8EC82910360AB91777C9484_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::GroundPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_GroundPiece_m47739802742C212770DDF4E1FAC983CB89E78AD3 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// destroy = true;
		__this->___destroy_9 = (bool)1;
		// FallSound();
		GamePiece_FallSound_mF92E6B57E4FE74D6D9F1A1B3F97E62E7308DCB42(__this, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::FallSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_FallSound_mF92E6B57E4FE74D6D9F1A1B3F97E62E7308DCB42 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.clip = AudioController.GetFallClip();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___source_14;
		il2cpp_codegen_runtime_class_init_inline(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioController_GetFallClip_m7DC698AF209AC7DF86773B641529D77F88C2A1AF(NULL);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___source_14;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::TouchSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece_TouchSound_m37C219415C24D7D04062DEAD8684DD16381E1003 (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source.clip = AudioController.GetTouchClip();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___source_14;
		il2cpp_codegen_runtime_class_init_inline(AudioController_t93B5C6941000A82E79BE883355A520ACD713583A_il2cpp_TypeInfo_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1;
		L_1 = AudioController_GetTouchClip_m2B622098C11730D27FC52A0DCFF5BD199763C860(NULL);
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_0, L_1, NULL);
		// source.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___source_14;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_2, NULL);
		// }
		return;
	}
}
// System.Void GamePiece::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePiece__ctor_m8AFDE29D6F4057542062C7B2BE01A5FAFE9D002B (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public int OwnerIndex { get; set; } = -1; //default no owner
		__this->___U3COwnerIndexU3Ek__BackingField_5 = (-1);
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
void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_Multicast(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* currentDelegate = reinterpret_cast<Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_owner, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_OpenInst(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_owner, method);
}
void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_OpenStatic(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_owner, method);
}
void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_OpenStaticInvoker(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke(__this->___method_ptr_0, method, NULL, ___0_owner);
}
void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_ClosedStaticInvoker(Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_owner);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_owner);

}
// System.Void GamePiece/Destruction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destruction__ctor_m77C1074446498FD40B03DAD2AAD78D4FF6CDF2E0 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_Multicast;
}
// System.Void GamePiece/Destruction::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_owner, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GamePiece/Destruction::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Destruction_BeginInvoke_m8E85BDE599EB09FAAD43247E6C708DE21621836F (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_owner);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void GamePiece/Destruction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Destruction_EndInvoke_mD9BF00FBFEDA2D0358889F11F7699096D471FF97 (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Int32 GamePieceDeck::get_PiecesLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GamePieceDeck_get_PiecesLeft_m91B145DE2E8D6ECBB31E1DB560DE042033EFF4DA (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) 
{
	{
		// get { return piecesLeft; }
		int32_t L_0 = __this->___piecesLeft_4;
		return L_0;
	}
}
// System.Void GamePieceDeck::InitDeck(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePieceDeck_InitDeck_mA6720BB684C9EEF50130DEAE54657E755BEA7184 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, int32_t ___0_playerCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF55B62EA78CDE990A0F73751AA74C7E50964DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2231125B7704862797C1BAAF2EE2C2A779C8036C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral350173FAB1CD79F43C6DA6D72858B0D130737DE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679B60056C7D7BB974BF81ABECBDDC5615204B74);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3C0AE9A0AA4CADCC7912E36E5BAA7CB198BFD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73B09BFBBCD60DF770F34A22A1380F231193455A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA866C623AEA181CEBFB4645B13B981294F90D3E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF87CD7F559ABBDF569AC70EB22138D04F19C07F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC09E2C11D17123F9AE34ED4083CE9EA1049C57AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6DBA30DED8550BD2622A8ED00007802CA8A6639);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD95B23A7537B55AAB89E27EEA3211C7A20DBDF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDF67E77AED7079B9873DA140F12B2E32887075C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62A3D85411554BD6BD0A3BA5A11120946BD9B45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4132A46FF78F8367A7D1FC8AFF3E420E5459781);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// pieceNames = new string[] { "arch", "ball", "cup", "ess", "fatCylinder", "jump", "plate", "pyramid", "ring", "rocker", "spindle", "stand", "thinCylinder" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteralCD95B23A7537B55AAB89E27EEA3211C7A20DBDF7);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCD95B23A7537B55AAB89E27EEA3211C7A20DBDF7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralB50D6296FEF6F7D83152A21DDCAE6A7AB3C04A75);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteralC09E2C11D17123F9AE34ED4083CE9EA1049C57AD);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC09E2C11D17123F9AE34ED4083CE9EA1049C57AD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		ArrayElementTypeCheck (L_4, _stringLiteral1CF55B62EA78CDE990A0F73751AA74C7E50964DD);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1CF55B62EA78CDE990A0F73751AA74C7E50964DD);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteralE62A3D85411554BD6BD0A3BA5A11120946BD9B45);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE62A3D85411554BD6BD0A3BA5A11120946BD9B45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		ArrayElementTypeCheck (L_6, _stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral6C23924C4F221C5F81332E79B4BD5A5AF61B9AF7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		ArrayElementTypeCheck (L_7, _stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral47F28B8008CD4B504E470B235DB56CFB06457013);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		ArrayElementTypeCheck (L_8, _stringLiteralAF87CD7F559ABBDF569AC70EB22138D04F19C07F);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralAF87CD7F559ABBDF569AC70EB22138D04F19C07F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		ArrayElementTypeCheck (L_9, _stringLiteral6C3C0AE9A0AA4CADCC7912E36E5BAA7CB198BFD7);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral6C3C0AE9A0AA4CADCC7912E36E5BAA7CB198BFD7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		ArrayElementTypeCheck (L_10, _stringLiteralA866C623AEA181CEBFB4645B13B981294F90D3E5);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteralA866C623AEA181CEBFB4645B13B981294F90D3E5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral350173FAB1CD79F43C6DA6D72858B0D130737DE8);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteral350173FAB1CD79F43C6DA6D72858B0D130737DE8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		ArrayElementTypeCheck (L_12, _stringLiteralDDF67E77AED7079B9873DA140F12B2E32887075C);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)_stringLiteralDDF67E77AED7079B9873DA140F12B2E32887075C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		ArrayElementTypeCheck (L_13, _stringLiteral2231125B7704862797C1BAAF2EE2C2A779C8036C);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral2231125B7704862797C1BAAF2EE2C2A779C8036C);
		__this->___pieceNames_5 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pieceNames_5), (void*)L_13);
		// matNames = new string[] { "Green_Piece_Mat", "Orange_Piece_Mat", "Teal_Piece_Mat", "Purple_Piece_Mat" };
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_14;
		ArrayElementTypeCheck (L_15, _stringLiteralF4132A46FF78F8367A7D1FC8AFF3E420E5459781);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF4132A46FF78F8367A7D1FC8AFF3E420E5459781);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		ArrayElementTypeCheck (L_16, _stringLiteral73B09BFBBCD60DF770F34A22A1380F231193455A);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral73B09BFBBCD60DF770F34A22A1380F231193455A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		ArrayElementTypeCheck (L_17, _stringLiteralC6DBA30DED8550BD2622A8ED00007802CA8A6639);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC6DBA30DED8550BD2622A8ED00007802CA8A6639);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		ArrayElementTypeCheck (L_18, _stringLiteral679B60056C7D7BB974BF81ABECBDDC5615204B74);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral679B60056C7D7BB974BF81ABECBDDC5615204B74);
		__this->___matNames_6 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___matNames_6), (void*)L_18);
		// piecesLeft = pieceNames.Length * matNames.Length; //total number of peices in deck
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = __this->___pieceNames_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = __this->___matNames_6;
		__this->___piecesLeft_4 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_19)->max_length)), ((int32_t)(((RuntimeArray*)L_20)->max_length))));
		// deck = new string[piecesLeft][]; //intialise a jagged array
		int32_t L_21 = __this->___piecesLeft_4;
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_22 = (StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF*)SZArrayNew(StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF_il2cpp_TypeInfo_var, (uint32_t)L_21);
		__this->___deck_7 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___deck_7), (void*)L_22);
		// for (int i = 0; i < pieceNames.Length; i++)
		V_0 = 0;
		goto IL_011b;
	}

IL_00d1:
	{
		// for (int j = 0; j < matNames.Length; j++)
		V_1 = 0;
		goto IL_010c;
	}

IL_00d5:
	{
		// string[] pieceDef = { pieceNames[i], matNames[j] }; //create a combined piece/mat
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = __this->___pieceNames_5;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_24;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = __this->___matNames_6;
		int32_t L_31 = V_1;
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		ArrayElementTypeCheck (L_29, L_33);
		(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_33);
		V_2 = L_29;
		// int deckIndex = i* matNames.Length + j; //calculate deck index
		int32_t L_34 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = __this->___matNames_6;
		int32_t L_36 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)(((RuntimeArray*)L_35)->max_length)))), L_36));
		// deck[deckIndex] = pieceDef; //add it to the deck
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_37 = __this->___deck_7;
		int32_t L_38 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_2;
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_39);
		// for (int j = 0; j < matNames.Length; j++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_010c:
	{
		// for (int j = 0; j < matNames.Length; j++)
		int32_t L_41 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = __this->___matNames_6;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_00d5;
		}
	}
	{
		// for (int i = 0; i < pieceNames.Length; i++)
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_011b:
	{
		// for (int i = 0; i < pieceNames.Length; i++)
		int32_t L_44 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = __this->___pieceNames_5;
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_00d1;
		}
	}
	{
		// ShuffleDeck();
		GamePieceDeck_ShuffleDeck_mBEB7537490ED818327C187E00ADDF45D908152F0(__this, NULL);
		// piecesLeft = (int)(Mathf.Floor(piecesLeft / playerCount) * playerCount);
		int32_t L_46 = __this->___piecesLeft_4;
		int32_t L_47 = ___0_playerCount;
		float L_48;
		L_48 = floorf(((float)((int32_t)(L_46/L_47))));
		int32_t L_49 = ___0_playerCount;
		__this->___piecesLeft_4 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_48, ((float)L_49))));
		// }
		return;
	}
}
// System.Void GamePieceDeck::ShuffleDeck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePieceDeck_ShuffleDeck_mBEB7537490ED818327C187E00ADDF45D908152F0 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	{
		// System.Random rng = new System.Random(); //make a random number generator
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		V_0 = L_0;
		// for (int i = deck.Length; i > 0; i--)
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_1 = __this->___deck_7;
		V_1 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		goto IL_0043;
	}

IL_0011:
	{
		// int rand = rng.Next(i); //get an int up to current index
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(7 /* System.Int32 System.Random::Next(System.Int32) */, L_2, L_3);
		V_2 = L_4;
		// string[] temp = deck[i - 1]; //store the val at current index
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_5 = __this->___deck_7;
		int32_t L_6 = V_1;
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// deck[i - 1] = deck[rand]; //set current index to randomised val
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_9 = __this->___deck_7;
		int32_t L_10 = V_1;
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_11 = __this->___deck_7;
		int32_t L_12 = V_2;
		int32_t L_13 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		ArrayElementTypeCheck (L_9, L_14);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_10, 1))), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_14);
		// deck[rand] = temp; //set randomised index to stored val
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_15 = __this->___deck_7;
		int32_t L_16 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = V_3;
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)L_17);
		// for (int i = deck.Length; i > 0; i--)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0043:
	{
		// for (int i = deck.Length; i > 0; i--)
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.String[] GamePieceDeck::NextPiece()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* GamePieceDeck_NextPiece_mE6D727490198FAD5B3510FDFFFDE85D1E947A980 (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) 
{
	{
		// piecesLeft--; //reduce counter
		int32_t L_0 = __this->___piecesLeft_4;
		__this->___piecesLeft_4 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// return deck[piecesLeft]; //return value just skipped over
		StringU5BU5DU5BU5D_t8BCC500C5CC1686D9BADCBAA811074FE00F83ACF* L_1 = __this->___deck_7;
		int32_t L_2 = __this->___piecesLeft_4;
		int32_t L_3 = L_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// System.Void GamePieceDeck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamePieceDeck__ctor_m53C7EF8429B6CF48506D51C5F4DC01D58BF2286E (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Boolean GameSettings::get_Player1_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSettings_get_Player1_enabled_m1E157BD0C653FE92209A59DFFDC0FC8B338A86D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player1_enabled { get; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_enabledU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean GameSettings::get_Player2_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSettings_get_Player2_enabled_mDFBAAECB3231BAE17BA5A962975D8B336B41FA12 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player2_enabled { get; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_enabledU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean GameSettings::get_Player3_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player3_enabled { get; set; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_enabledU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void GameSettings::set_Player3_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player3_enabled_mD6AA4FF58B27425707907AAEB99DA7410A888342 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player3_enabled { get; set; } = true;
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_enabledU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean GameSettings::get_Player4_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player4_enabled { get; set; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_enabledU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void GameSettings::set_Player4_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player4_enabled { get; set; } = true;
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_enabledU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String GameSettings::get_Player1_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player1_name_mAAB1BC62C1C465FBBF32F8010171EA57F5E8B679 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player1_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void GameSettings::set_Player1_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player1_name_m2DF182CBBAD654FDCD841251DA21FF41147A026F (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player1_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String GameSettings::get_Player2_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player2_name_m0861F55313F723E04E06C6C6EC25D5131A59CE3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player2_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void GameSettings::set_Player2_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player2_name_mC62C4FA2E92344EEDB28AD7D7C3E83D9293A402A (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player2_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String GameSettings::get_Player3_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player3_name_mB998ABC584EC072CB4EF49F2DC5A5D0297C9AA04 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player3_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void GameSettings::set_Player3_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player3_name_m0B00DF1CCD7971F032FE040C3B923EEE35B808AE (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player3_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String GameSettings::get_Player4_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player4_name_mAD463E7CBB31439A2D6CDFC915C92BAE4B034CD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player4_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void GameSettings::set_Player4_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player4_name_m2862B20D0567193C0C2B7A295E1E0A924071E992 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player4_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Color GameSettings::get_Player1_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player1_color_m0348E57D9DE6B029C1D3C0D1D5C8274521D1E5E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_colorU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void GameSettings::set_Player1_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player1_color_m1A05F410FB1629B6240DDECBE026BA395759DC6C (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_colorU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.Color GameSettings::get_Player2_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player2_color_mD646A35B8D54F549B850304BC884420638C46CC8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_colorU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void GameSettings::set_Player2_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player2_color_mA46FCB3CD42838A9F8644C2D9709AA56BABFA101 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_colorU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.Color GameSettings::get_Player3_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player3_color_m6A7D69119B87A24AD433B36871B3C8B775F33A2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_colorU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void GameSettings::set_Player3_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player3_color_m2BE47D5CAA8EEDBBE68EA5B21E4B0FD5320DACD4 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_colorU3Ek__BackingField_10 = L_0;
		return;
	}
}
// UnityEngine.Color GameSettings::get_Player4_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player4_color_mE53E585207BD90D485D386530965F40EC1758BFF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_colorU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void GameSettings::set_Player4_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_Player4_color_mCE4F1D4EE26BE366AC854560B0D0D9F1C3392A96 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_colorU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Int32 GameSettings::get_StartingLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSettings_get_StartingLives_m3284B28769856356D8447A05E39CAF31CFBA2A18 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int StartingLives { get; set; } = 3;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CStartingLivesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void GameSettings::set_StartingLives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_StartingLives_mDCF4202BED6F4A0ED9D1BC73FDBCB47FC56EC65A (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int StartingLives { get; set; } = 3;
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CStartingLivesU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Int32 GameSettings::get_LifePenalty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSettings_get_LifePenalty_mA9022FB39BCD8A1BE3BDB47107DA96D4E367C571 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int LifePenalty { get; set; } = 10;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CLifePenaltyU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void GameSettings::set_LifePenalty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_set_LifePenalty_m2BE536BA1A80485AEFACEC8D8B7DFC12286DF8E5 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int LifePenalty { get; set; } = 10;
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CLifePenaltyU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Int32 GameSettings::PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameSettings_PlayerCount_m832800B3CA955CD2C07441B596963238A76D4A35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int playerCount = 2; //p1 and p2 always active
		V_0 = 2;
		// if (Player3_enabled) playerCount += 1;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// if (Player3_enabled) playerCount += 1;
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_000d:
	{
		// if (Player4_enabled) playerCount += 1;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline(NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (Player4_enabled) playerCount += 1;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0018:
	{
		// return playerCount;
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void GameSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings_Reset_mB3EC303745A4E3ACA42E77B127764724F0F3B80A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Player3_enabled = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player3_enabled_mD6AA4FF58B27425707907AAEB99DA7410A888342_inline((bool)1, NULL);
		// Player4_enabled = true;
		GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018_inline((bool)1, NULL);
		// Player1_name = null;
		GameSettings_set_Player1_name_m2DF182CBBAD654FDCD841251DA21FF41147A026F_inline((String_t*)NULL, NULL);
		// Player2_name = null;
		GameSettings_set_Player2_name_mC62C4FA2E92344EEDB28AD7D7C3E83D9293A402A_inline((String_t*)NULL, NULL);
		// Player3_name = null;
		GameSettings_set_Player3_name_m0B00DF1CCD7971F032FE040C3B923EEE35B808AE_inline((String_t*)NULL, NULL);
		// Player4_name = null;
		GameSettings_set_Player4_name_m2862B20D0567193C0C2B7A295E1E0A924071E992_inline((String_t*)NULL, NULL);
		// Player1_color = new Color(0.6f, 0.02f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.600000024f), (0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		GameSettings_set_Player1_color_m1A05F410FB1629B6240DDECBE026BA395759DC6C_inline(L_0, NULL);
		// Player2_color = new Color(0.2f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.200000003f), (0.0199999996f), (0.600000024f), /*hidden argument*/NULL);
		GameSettings_set_Player2_color_mA46FCB3CD42838A9F8644C2D9709AA56BABFA101_inline(L_1, NULL);
		// Player3_color = new Color(0.02f, 0.35f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.0199999996f), (0.349999994f), (0.0199999996f), /*hidden argument*/NULL);
		GameSettings_set_Player3_color_m2BE47D5CAA8EEDBBE68EA5B21E4B0FD5320DACD4_inline(L_2, NULL);
		// Player4_color = new Color(0.6f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (0.600000024f), (0.0199999996f), (0.600000024f), /*hidden argument*/NULL);
		GameSettings_set_Player4_color_mCE4F1D4EE26BE366AC854560B0D0D9F1C3392A96_inline(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameSettings__cctor_mEA78F615F686187FFBDBE3D2544DECE53791FB45 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player1_enabled { get; } = true;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_enabledU3Ek__BackingField_0 = (bool)1;
		// public static bool Player2_enabled { get; } = true;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_enabledU3Ek__BackingField_1 = (bool)1;
		// public static bool Player3_enabled { get; set; } = true;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_enabledU3Ek__BackingField_2 = (bool)1;
		// public static bool Player4_enabled { get; set; } = true;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_enabledU3Ek__BackingField_3 = (bool)1;
		// public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_0), (0.600000024f), (0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_colorU3Ek__BackingField_8 = L_0;
		// public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_1), (0.200000003f), (0.0199999996f), (0.600000024f), /*hidden argument*/NULL);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_colorU3Ek__BackingField_9 = L_1;
		// public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_2), (0.0199999996f), (0.349999994f), (0.0199999996f), /*hidden argument*/NULL);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_colorU3Ek__BackingField_10 = L_2;
		// public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (0.600000024f), (0.0199999996f), (0.600000024f), /*hidden argument*/NULL);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_colorU3Ek__BackingField_11 = L_3;
		// public static int StartingLives { get; set; } = 3;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CStartingLivesU3Ek__BackingField_12 = 3;
		// public static int LifePenalty { get; set; } = 10;
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CLifePenaltyU3Ek__BackingField_13 = ((int32_t)10);
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
// System.Void GrabObject::add_onRotateStart(GrabObject/StartRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onRotateStart_m2783B6E980A44DCA85457B2C2C271D4AD8D3ECDE (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_0 = NULL;
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_1 = NULL;
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_2 = NULL;
	{
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStart_15;
		V_0 = L_0;
	}

IL_0006:
	{
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_1 = V_0;
		V_1 = L_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_2 = V_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)CastclassSealed((RuntimeObject*)L_4, StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var));
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_5 = V_2;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_6 = V_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_7;
		L_7 = InterlockedCompareExchangeImpl<StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStart_15), L_5, L_6);
		V_0 = L_7;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_8 = V_0;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_9 = V_1;
		if ((!(((RuntimeObject*)(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)L_8) == ((RuntimeObject*)(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::remove_onRotateStart(GrabObject/StartRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onRotateStart_m3BE05B88AAF1604B482901CD47AF22345C46D87D (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_0 = NULL;
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_1 = NULL;
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* V_2 = NULL;
	{
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStart_15;
		V_0 = L_0;
	}

IL_0006:
	{
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_1 = V_0;
		V_1 = L_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_2 = V_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)CastclassSealed((RuntimeObject*)L_4, StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9_il2cpp_TypeInfo_var));
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_5 = V_2;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_6 = V_1;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_7;
		L_7 = InterlockedCompareExchangeImpl<StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStart_15), L_5, L_6);
		V_0 = L_7;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_8 = V_0;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_9 = V_1;
		if ((!(((RuntimeObject*)(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)L_8) == ((RuntimeObject*)(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::add_onRotateStop(GrabObject/StopRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onRotateStop_mBC6FD7FA714B9652570DF4BCE2A01D562BF87D91 (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_0 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_1 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_2 = NULL;
	{
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStop_16;
		V_0 = L_0;
	}

IL_0006:
	{
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_1 = V_0;
		V_1 = L_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_2 = V_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)CastclassSealed((RuntimeObject*)L_4, StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var));
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_5 = V_2;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_6 = V_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_7;
		L_7 = InterlockedCompareExchangeImpl<StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStop_16), L_5, L_6);
		V_0 = L_7;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_8 = V_0;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_9 = V_1;
		if ((!(((RuntimeObject*)(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)L_8) == ((RuntimeObject*)(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::remove_onRotateStop(GrabObject/StopRotating)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onRotateStop_mE81C76B5CC819CC67EF95FA43E506704ECC177BA (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_0 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_1 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* V_2 = NULL;
	{
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStop_16;
		V_0 = L_0;
	}

IL_0006:
	{
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_1 = V_0;
		V_1 = L_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_2 = V_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)CastclassSealed((RuntimeObject*)L_4, StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910_il2cpp_TypeInfo_var));
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_5 = V_2;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_6 = V_1;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_7;
		L_7 = InterlockedCompareExchangeImpl<StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStop_16), L_5, L_6);
		V_0 = L_7;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_8 = V_0;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_9 = V_1;
		if ((!(((RuntimeObject*)(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)L_8) == ((RuntimeObject*)(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::add_onDrop(GrabObject/StopHolding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_add_onDrop_mF28A964978A00BCD8C35781EB800E6DC82E762E2 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_0 = NULL;
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_1 = NULL;
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_2 = NULL;
	{
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onDrop_17;
		V_0 = L_0;
	}

IL_0006:
	{
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_1 = V_0;
		V_1 = L_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_2 = V_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)CastclassSealed((RuntimeObject*)L_4, StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var));
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_5 = V_2;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_6 = V_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_7;
		L_7 = InterlockedCompareExchangeImpl<StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onDrop_17), L_5, L_6);
		V_0 = L_7;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_8 = V_0;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_9 = V_1;
		if ((!(((RuntimeObject*)(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)L_8) == ((RuntimeObject*)(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::remove_onDrop(GrabObject/StopHolding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_remove_onDrop_mC3D65FB26A6925275FF50B1B0EC19681834A080A (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_0 = NULL;
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_1 = NULL;
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* V_2 = NULL;
	{
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_0 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onDrop_17;
		V_0 = L_0;
	}

IL_0006:
	{
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_1 = V_0;
		V_1 = L_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_2 = V_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)CastclassSealed((RuntimeObject*)L_4, StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58_il2cpp_TypeInfo_var));
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_5 = V_2;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_6 = V_1;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_7;
		L_7 = InterlockedCompareExchangeImpl<StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*>((&((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onDrop_17), L_5, L_6);
		V_0 = L_7;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_8 = V_0;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_9 = V_1;
		if ((!(((RuntimeObject*)(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)L_8) == ((RuntimeObject*)(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void GrabObject::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_OnEnable_m3C75B27491BD1DA41955A02730B3B37676EEA64A (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameController.onGameEnded += DisableControls;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_0 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_0, __this, (intptr_t)((void*)GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1_RuntimeMethod_var), NULL);
		GameController_add_onGameEnded_mEE1CDB418F861DAB21970D5F163AAC979D281A71(L_0, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_OnDisable_m26353C6DAA3821E92417C11D417720228E49BB89 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameController.onGameEnded -= DisableControls;
		GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* L_0 = (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107*)il2cpp_codegen_object_new(GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107_il2cpp_TypeInfo_var);
		GameEnded__ctor_mDCB87E3D24B44A59C46A1CC246B95CBC847E2D11(L_0, __this, (intptr_t)((void*)GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1_RuntimeMethod_var), NULL);
		GameController_remove_onGameEnded_mEF701C15FEADEB8F0EF2DD18921909850530D594(L_0, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_Update_mB3C6BE714FAEAF21D011037D58A1F8954CF0BC03 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* G_B9_0 = NULL;
	StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* G_B8_0 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* G_B14_0 = NULL;
	StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* G_B13_0 = NULL;
	{
		// if (!controlsEnabled) return;
		bool L_0 = __this->___controlsEnabled_14;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!controlsEnabled) return;
		return;
	}

IL_0009:
	{
		// if (heldObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___heldObject_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_00d6;
		}
	}
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DropObject();
		GrabObject_DropObject_m1E851B08E341C993D5234A64CCCF1F62347657CD(__this, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_4;
		L_4 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_4)
		{
			goto IL_0051;
		}
	}
	{
		// if (!rotating) onRotateStart?.Invoke(); //trigger event
		bool L_5 = __this->___rotating_13;
		if (L_5)
		{
			goto IL_0049;
		}
	}
	{
		// if (!rotating) onRotateStart?.Invoke(); //trigger event
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_6 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStart_15;
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* L_7 = L_6;
		G_B8_0 = L_7;
		if (L_7)
		{
			G_B9_0 = L_7;
			goto IL_0044;
		}
	}
	{
		goto IL_0049;
	}

IL_0044:
	{
		StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_inline(G_B9_0, NULL);
	}

IL_0049:
	{
		// rotating = true; //set flag
		__this->___rotating_13 = (bool)1;
		return;
	}

IL_0051:
	{
		// if (rotating) onRotateStop?.Invoke(); //trigger event
		bool L_8 = __this->___rotating_13;
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// if (rotating) onRotateStop?.Invoke(); //trigger event
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_9 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onRotateStop_16;
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* L_10 = L_9;
		G_B13_0 = L_10;
		if (L_10)
		{
			G_B14_0 = L_10;
			goto IL_0064;
		}
	}
	{
		goto IL_0069;
	}

IL_0064:
	{
		StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_inline(G_B14_0, NULL);
	}

IL_0069:
	{
		// rotating = false; //set flag
		__this->___rotating_13 = (bool)0;
		// scrollDistance = Mathf.Clamp(scrollDistance + Input.mouseScrollDelta.y * scrollSpeed, -maxScroll, maxScroll);
		float L_11 = __this->___scrollDistance_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_13 = L_12.___y_1;
		float L_14 = __this->___scrollSpeed_8;
		float L_15 = __this->___maxScroll_9;
		float L_16 = __this->___maxScroll_9;
		float L_17;
		L_17 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_add(L_11, ((float)il2cpp_codegen_multiply(L_13, L_14)))), ((-L_15)), L_16, NULL);
		__this->___scrollDistance_10 = L_17;
		// holdFocus.position = grabFocus.position + (holdFocus.TransformDirection(Vector3.forward) * scrollDistance);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___holdFocus_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = __this->___grabFocus_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___holdFocus_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_21, L_22, NULL);
		float L_24 = __this->___scrollDistance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_25, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_18, L_26, NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void GrabObject::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_FixedUpdate_m6F75C9BAD20E2D61D14B2B73111E1F6A668B405E (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (heldObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___heldObject_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// MoveObject();
		GrabObject_MoveObject_m2CA3966CB15EDF2EC881FDB0C5B8C675B38D5F74(__this, NULL);
		// if (rotating)
		bool L_2 = __this->___rotating_13;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// RotateObject();
		GrabObject_RotateObject_m7B375431111FE62027D55EA178CA26EA32C41F05(__this, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GrabObject::GrabTarget(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_GrabTarget_m1AE5FB1896D037155229D72B69F46A185A9A09C8 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target.GetComponent<Rigidbody>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_target;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_0, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		// heldObject = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_target;
		__this->___heldObject_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObject_11), (void*)L_3);
		// heldObjectRB = target.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_target;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5;
		L_5 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_4, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		__this->___heldObjectRB_12 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObjectRB_12), (void*)L_5);
		// heldObjectRB.useGravity = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6 = __this->___heldObjectRB_12;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_6, (bool)0, NULL);
		// heldObjectRB.drag = 10;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_7 = __this->___heldObjectRB_12;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_7, (10.0f), NULL);
		// heldObjectRB.constraints = RigidbodyConstraints.FreezeRotation;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8 = __this->___heldObjectRB_12;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_8, ((int32_t)112), NULL);
		// heldObjectRB.transform.parent = holdFocus;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___heldObjectRB_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___holdFocus_6;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_10, L_11, NULL);
		// heldObject.GetComponent<GamePiece>().Pickup();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___heldObject_11;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_13;
		L_13 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_12, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		GamePiece_Pickup_m0CFFF4858C2F44E46423A3B986A2F154EC7868A7(L_13, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void GrabObject::DropObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_DropObject_m1E851B08E341C993D5234A64CCCF1F62347657CD (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* G_B2_0 = NULL;
	StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* G_B1_0 = NULL;
	{
		// heldObjectRB.useGravity = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___heldObjectRB_12;
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_0, (bool)1, NULL);
		// heldObjectRB.drag = 1;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___heldObjectRB_12;
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_1, (1.0f), NULL);
		// heldObjectRB.constraints = RigidbodyConstraints.None;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___heldObjectRB_12;
		Rigidbody_set_constraints_mE81BF0DAEB980E320538231E092CA4663885A9A3(L_2, 0, NULL);
		// heldObject.GetComponent<GamePiece>().Drop();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___heldObject_11;
		GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* L_4;
		L_4 = GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426(L_3, GameObject_GetComponent_TisGamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB_m968CD8B71E80C5ACF652870192A00237A38E2426_RuntimeMethod_var);
		GamePiece_Drop_m5EFE36D07EDFB5D7B2F921C4F3D5F205C07CC35E(L_4, NULL);
		// heldObjectRB.transform.parent = null;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___heldObjectRB_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// heldObject = null;
		__this->___heldObject_11 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObject_11), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// heldObjectRB = null;
		__this->___heldObjectRB_12 = (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heldObjectRB_12), (void*)(Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)NULL);
		// holdFocus.position = grabFocus.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___holdFocus_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___grabFocus_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
		// scrollDistance = 0f;
		__this->___scrollDistance_10 = (0.0f);
		// onDrop?.Invoke();
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_10 = ((GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_StaticFields*)il2cpp_codegen_static_fields_for(GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A_il2cpp_TypeInfo_var))->___onDrop_17;
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* L_11 = L_10;
		G_B1_0 = L_11;
		if (L_11)
		{
			G_B2_0 = L_11;
			goto IL_0082;
		}
	}
	{
		return;
	}

IL_0082:
	{
		StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::MoveObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_MoveObject_m2CA3966CB15EDF2EC881FDB0C5B8C675B38D5F74 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Vector3.Distance(heldObject.transform.position, holdFocus.position) > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___heldObject_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___holdFocus_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_2, L_4, NULL);
		if ((!(((float)L_5) > ((float)(0.100000001f)))))
		{
			goto IL_006b;
		}
	}
	{
		// Vector3 moveDirection = holdFocus.position - heldObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___holdFocus_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___heldObject_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		V_0 = L_11;
		// heldObjectRB.velocity = moveDirection * moveDirection.magnitude * grabForce;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = __this->___heldObjectRB_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		float L_14;
		L_14 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		float L_16 = __this->___grabForce_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_12, L_17, NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void GrabObject::RotateObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_RotateObject_m7B375431111FE62027D55EA178CA26EA32C41F05 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
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
	{
		// Vector3 mouseMovement = new Vector3(
		//     Input.GetAxis("Mouse Y") * -1,
		//     Input.GetAxis("Mouse X") * -1,
		//     Input.mouseScrollDelta.y * 5
		//     );
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Input_get_mouseScrollDelta_mD112408E9182AA0F529179FF31E21D8DCD5CFA74(NULL);
		float L_3 = L_2.___y_1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), ((float)il2cpp_codegen_multiply(L_0, (-1.0f))), ((float)il2cpp_codegen_multiply(L_1, (-1.0f))), ((float)il2cpp_codegen_multiply(L_3, (5.0f))), NULL);
		// heldObjectRB.transform.Rotate(mouseMovement);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4 = __this->___heldObjectRB_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void GrabObject::DisableControls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject_DisableControls_m700F512E614CA6853C3522D0A301BEB8CC02CFD1 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// controlsEnabled = false;
		__this->___controlsEnabled_14 = (bool)0;
		// }
		return;
	}
}
// System.Void GrabObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrabObject__ctor_m265AD0802B6FD0A9D273A386A69EAFB7286D7485 (GrabObject_t130848A98FEF2A2803328956DEE21A3DD4AF4E9A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float grabForce = 2f; //force to pull object to grab focus
		__this->___grabForce_7 = (2.0f);
		// [SerializeField] private float scrollSpeed = 0.5f; //speed to move while srolling
		__this->___scrollSpeed_8 = (0.5f);
		// [SerializeField] private float maxScroll = 10f; //maximum Z offset from grab point
		__this->___maxScroll_9 = (10.0f);
		// private bool controlsEnabled = true; //can we pickup/drop objects?
		__this->___controlsEnabled_14 = (bool)1;
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
void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_Multicast(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* currentDelegate = reinterpret_cast<StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_OpenInst(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_OpenStatic(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_OpenStaticInvoker(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_ClosedStaticInvoker(StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GrabObject/StartRotating::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartRotating__ctor_mF3E9E9872B11977A312497523C9DADC899A634D5 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_Multicast;
}
// System.Void GrabObject/StartRotating::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/StartRotating::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StartRotating_BeginInvoke_m9FFF9EC8D106E76BEDC121E87DC416C0D05D0314 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GrabObject/StartRotating::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartRotating_EndInvoke_m054239E3F3607FECBC18C9F7B86CE94D0B69B1E7 (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_Multicast(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* currentDelegate = reinterpret_cast<StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_OpenInst(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_OpenStatic(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_OpenStaticInvoker(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_ClosedStaticInvoker(StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910 (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GrabObject/StopRotating::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopRotating__ctor_m9C7B986D74D5084AADA86D6E588137F81BF64887 (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_Multicast;
}
// System.Void GrabObject/StopRotating::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/StopRotating::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StopRotating_BeginInvoke_m521C1B764FECA9211DDBF92CD4B41915E604E5CA (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GrabObject/StopRotating::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopRotating_EndInvoke_m49CC04EA666A0E88A7A4B2D13116DCB8B22DCC2E (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_Multicast(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* currentDelegate = reinterpret_cast<StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_OpenInst(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_OpenStatic(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_OpenStaticInvoker(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_ClosedStaticInvoker(StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void GrabObject/StopHolding::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopHolding__ctor_m1DE3BAEF0AC2C6A92436EF80F30E8F52F1D43B51 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_Multicast;
}
// System.Void GrabObject/StopHolding::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GrabObject/StopHolding::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StopHolding_BeginInvoke_mEBBEF016D00382B275F824FFB6B5C34FB9D9BA1C (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void GrabObject/StopHolding::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StopHolding_EndInvoke_m02ED06779789120EF140843351D67024C89533F0 (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameSettings.Player1_name = p1Name.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___p1Name_4;
		String_t* L_1;
		L_1 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player1_name_m2DF182CBBAD654FDCD841251DA21FF41147A026F_inline(L_1, NULL);
		// GameSettings.Player2_name = p2Name.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = __this->___p2Name_5;
		String_t* L_3;
		L_3 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_2, NULL);
		GameSettings_set_Player2_name_mC62C4FA2E92344EEDB28AD7D7C3E83D9293A402A_inline(L_3, NULL);
		// if (GameSettings.Player3_enabled) GameSettings.Player3_name = p3Name.text;
		bool L_4;
		L_4 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// if (GameSettings.Player3_enabled) GameSettings.Player3_name = p3Name.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_5 = __this->___p3Name_6;
		String_t* L_6;
		L_6 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player3_name_m0B00DF1CCD7971F032FE040C3B923EEE35B808AE_inline(L_6, NULL);
	}

IL_0037:
	{
		// if (GameSettings.Player4_enabled) GameSettings.Player4_name = p4Name.text;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline(NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// if (GameSettings.Player4_enabled) GameSettings.Player4_name = p4Name.text;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___p4Name_7;
		String_t* L_9;
		L_9 = TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player4_name_m2862B20D0567193C0C2B7A295E1E0A924071E992_inline(L_9, NULL);
	}

IL_004e:
	{
		// SceneManager.LoadScene(1); //start scene 1 (main game)
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_QuitGame_mBF761274C14BD7341FE8C32A538D28343B63EDC4 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CDF2F9C4B0DC7EEEA5CD35BC73DB891975430E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quitting");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0CDF2F9C4B0DC7EEEA5CD35BC73DB891975430E3, NULL);
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Player3Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Player3Toggle_m6F29F8889D547F26F81068A6D358144304CEEA35 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28796E3F3C28B207B01E91F3DCDDD7632CFA6F09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45F23307B747CEB764DB57A28931A61B30ED0320);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C205958384B002529FE86E6649014AB373FABD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD26B5376505C1CDA1626065DC6E3BD0DAD8B2849);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	{
		// GameSettings.Player3_enabled = !GameSettings.Player3_enabled; //switch state
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		GameSettings_set_Player3_enabled_mD6AA4FF58B27425707907AAEB99DA7410A888342_inline((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// GameSettings.Player4_enabled = GameSettings.Player3_enabled; //set p4 state to match
		bool L_1;
		L_1 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018_inline(L_1, NULL);
		// Transform p3Button = transform.Find("player3_enable");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral28796E3F3C28B207B01E91F3DCDDD7632CFA6F09, NULL);
		V_0 = L_3;
		// Transform p4Button = transform.Find("player4_enable");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_4, _stringLiteral45F23307B747CEB764DB57A28931A61B30ED0320, NULL);
		V_1 = L_5;
		// Transform p3Picker = transform.Find("player3_color");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteralD26B5376505C1CDA1626065DC6E3BD0DAD8B2849, NULL);
		V_2 = L_7;
		// Transform p4Picker = transform.Find("player4_color");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral7C205958384B002529FE86E6649014AB373FABD9, NULL);
		V_3 = L_9;
		// if (GameSettings.Player3_enabled)
		bool L_10;
		L_10 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		if (!L_10)
		{
			goto IL_00d2;
		}
	}
	{
		// PlayerEnableImage(p3Button, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_11, (bool)1, NULL);
		// PlayerEnableImage(p4Button, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_12, (bool)1, NULL);
		// p4Button.GetComponent<Button>().enabled = true;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14;
		L_14 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_13, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, (bool)1, NULL);
		// p4Button.Find("cross").GetComponent<Image>().color = new Color(.78f, .13f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_15, _stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17;
		L_17 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_16, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), (0.779999971f), (0.129999995f), (0.0f), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// ToggleInputField(p3Name, true);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_19 = __this->___p3Name_6;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_19, (bool)1, NULL);
		// ToggleInputField(p4Name, true);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_20 = __this->___p4Name_7;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_20, (bool)1, NULL);
		// ToggleColorPicker(p3Picker, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = V_2;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_21, (bool)1, NULL);
		// ToggleColorPicker(p4Picker, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_3;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_22, (bool)1, NULL);
		return;
	}

IL_00d2:
	{
		// PlayerEnableImage(p3Button, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = V_0;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_23, (bool)0, NULL);
		// PlayerEnableImage(p4Button, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = V_1;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_24, (bool)0, NULL);
		// p4Button.GetComponent<Button>().enabled = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = V_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26;
		L_26 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_25, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_26, (bool)0, NULL);
		// p4Button.Find("cross").GetComponent<Image>().color = new Color(.3f, .1f, .1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_27, _stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29;
		L_29 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_28, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_30), (0.300000012f), (0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// ToggleInputField(p3Name, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_31 = __this->___p3Name_6;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_31, (bool)0, NULL);
		// ToggleInputField(p4Name, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_32 = __this->___p4Name_7;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_32, (bool)0, NULL);
		// ToggleColorPicker(p3Picker, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = V_2;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_33, (bool)0, NULL);
		// ToggleColorPicker(p4Picker, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = V_3;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_34, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Player4Toggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Player4Toggle_mEA9A6D87B29F34193779EF7BA5143DF8599BE360 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45F23307B747CEB764DB57A28931A61B30ED0320);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C205958384B002529FE86E6649014AB373FABD9);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// GameSettings.Player4_enabled = !GameSettings.Player4_enabled; //switch state
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline(NULL);
		GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018_inline((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// Transform p4Button = transform.Find("player4_enable");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral45F23307B747CEB764DB57A28931A61B30ED0320, NULL);
		V_0 = L_2;
		// Transform p4Picker = transform.Find("player4_color");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral7C205958384B002529FE86E6649014AB373FABD9, NULL);
		V_1 = L_4;
		// if (GameSettings.Player4_enabled)
		bool L_5;
		L_5 = GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline(NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		// PlayerEnableImage(p4Button, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_6, (bool)1, NULL);
		// ToggleInputField(p4Name, true);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_7 = __this->___p4Name_7;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_7, (bool)1, NULL);
		// ToggleColorPicker(p4Picker, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_8, (bool)1, NULL);
		return;
	}

IL_0054:
	{
		// PlayerEnableImage(p4Button, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = V_0;
		MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D(__this, L_9, (bool)0, NULL);
		// ToggleInputField(p4Name, false);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_10 = __this->___p4Name_7;
		MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87(__this, L_10, (bool)0, NULL);
		// ToggleColorPicker(p4Picker, false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D(__this, L_11, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::PlayerEnableImage(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayerEnableImage_m41FE2C5472415BAE86889494CAC15B7F60D4D76D (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_button, bool ___1_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50);
		s_Il2CppMethodInitialized = true;
	}
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_0 = NULL;
	{
		// Image tick = button.Find("tick").GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralEFEF762F72619D209506B2E7C8AEA50F2CCCCE50, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_1, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		V_0 = L_2;
		// Image cross = button.Find("cross").GetComponent<Image>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = ___0_button;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral6DA663BA10E8F6249EAD1E4DA814F272EFC33EC3, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_4, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		// tick.enabled = enabled;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6 = V_0;
		bool L_7 = ___1_enabled;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, L_7, NULL);
		// cross.enabled = !enabled;
		bool L_8 = ___1_enabled;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ToggleInputField(TMPro.TMP_InputField,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ToggleInputField_m5871B2376C5215784EB139020B42AA2F0E33FC87 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___0_field, bool ___1_isEnabled, const RuntimeMethod* method) 
{
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B2_0 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B1_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	{
		// field.enabled = isEnabled;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = ___0_field;
		bool L_1 = ___1_isEnabled;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, L_1, NULL);
		// field.image.color = (isEnabled) ? new Color(1f, 1f, 1f) : new Color(0.5f, 0.5f, 0.5f);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_2 = ___0_field;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_2, NULL);
		bool L_4 = ___1_isEnabled;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_0026;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_5), (0.5f), (0.5f), (0.5f), /*hidden argument*/NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_003a;
	}

IL_0026:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_003a:
	{
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void MainMenu::ToggleColorPicker(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ToggleColorPicker_mE4CBA84C37902866F305A986C4F778627018588D (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_picker, bool ___1_isEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral380D7D07CFF2A43271B821510944C6C1268822A4);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B2_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B2_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B1_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B1_1 = NULL;
	float G_B3_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B3_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B3_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B5_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B5_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B4_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B6_2 = NULL;
	{
		// Transform swatch = picker.Find("swatch");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_picker;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral380D7D07CFF2A43271B821510944C6C1268822A4, NULL);
		// Color buttonCol = picker.GetComponent<Image>().color;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_picker;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_3);
		V_0 = L_4;
		// Color swatchCol = swatch.GetComponent<Image>().color;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = L_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_5, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		V_1 = L_7;
		// buttonCol.a = (isEnabled) ? 1f : 0.7f;
		bool L_8 = ___1_isEnabled;
		G_B1_0 = (&V_0);
		G_B1_1 = L_5;
		if (L_8)
		{
			G_B2_0 = (&V_0);
			G_B2_1 = L_5;
			goto IL_002f;
		}
	}
	{
		G_B3_0 = (0.699999988f);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0034;
	}

IL_002f:
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0034:
	{
		G_B3_1->___a_3 = G_B3_0;
		// swatchCol.a = (isEnabled) ? 1f : 0.7f;
		bool L_9 = ___1_isEnabled;
		G_B4_0 = (&V_1);
		G_B4_1 = G_B3_2;
		if (L_9)
		{
			G_B5_0 = (&V_1);
			G_B5_1 = G_B3_2;
			goto IL_0045;
		}
	}
	{
		G_B6_0 = (0.699999988f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_004a;
	}

IL_0045:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_004a:
	{
		G_B6_1->___a_3 = G_B6_0;
		// picker.GetComponent<Image>().color = buttonCol;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_picker;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_10, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = V_0;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// swatch.GetComponent<Image>().color = swatchCol;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(G_B6_2, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = V_1;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		// picker.GetComponent<Button>().enabled = isEnabled;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = ___0_picker;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16;
		L_16 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(L_15, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		bool L_17 = ___1_isEnabled;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::PickColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PickColor_m504CFCC070F45DC5DC58D6F911AB7334159F846C (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, int32_t ___0_player, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82C33A307D5B51D85AFA1D0D70BBC187B170882);
		s_Il2CppMethodInitialized = true;
	}
	{
		// colorPickPlayer = player;
		int32_t L_0 = ___0_player;
		__this->___colorPickPlayer_12 = L_0;
		// transform.parent.Find("ColorPicker").gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteralB82C33A307D5B51D85AFA1D0D70BBC187B170882, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::AssignColor(UnityEngine.UI.Image)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_AssignColor_mDA50E6FD293DBD1BA84C098AC5590E89307DF169 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___0_swatch, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB82C33A307D5B51D85AFA1D0D70BBC187B170882);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color chosenColor = swatch.GetComponent<Image>().color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = ___0_swatch;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_0, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_1);
		V_0 = L_2;
		// if (colorPickPlayer == 1) GameSettings.Player1_color = chosenColor;
		int32_t L_3 = __this->___colorPickPlayer_12;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_001b;
		}
	}
	{
		// if (colorPickPlayer == 1) GameSettings.Player1_color = chosenColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player1_color_m1A05F410FB1629B6240DDECBE026BA395759DC6C_inline(L_4, NULL);
	}

IL_001b:
	{
		// if (colorPickPlayer == 2) GameSettings.Player2_color = chosenColor;
		int32_t L_5 = __this->___colorPickPlayer_12;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		// if (colorPickPlayer == 2) GameSettings.Player2_color = chosenColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player2_color_mA46FCB3CD42838A9F8644C2D9709AA56BABFA101_inline(L_6, NULL);
	}

IL_002a:
	{
		// if (colorPickPlayer == 3) GameSettings.Player3_color = chosenColor;
		int32_t L_7 = __this->___colorPickPlayer_12;
		if ((!(((uint32_t)L_7) == ((uint32_t)3))))
		{
			goto IL_0039;
		}
	}
	{
		// if (colorPickPlayer == 3) GameSettings.Player3_color = chosenColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player3_color_m2BE47D5CAA8EEDBBE68EA5B21E4B0FD5320DACD4_inline(L_8, NULL);
	}

IL_0039:
	{
		// if (colorPickPlayer == 4) GameSettings.Player4_color = chosenColor;
		int32_t L_9 = __this->___colorPickPlayer_12;
		if ((!(((uint32_t)L_9) == ((uint32_t)4))))
		{
			goto IL_0048;
		}
	}
	{
		// if (colorPickPlayer == 4) GameSettings.Player4_color = chosenColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		GameSettings_set_Player4_color_mCE4F1D4EE26BE366AC854560B0D0D9F1C3392A96_inline(L_10, NULL);
	}

IL_0048:
	{
		// transform.parent.Find("ColorPicker").gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_12, _stringLiteralB82C33A307D5B51D85AFA1D0D70BBC187B170882, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// UpdatePlayerColors();
		MainMenu_UpdatePlayerColors_m762BBE264B60125FAAC320D6F61DCBD71D89C27E(__this, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::UpdatePlayerColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_UpdatePlayerColors_m762BBE264B60125FAAC320D6F61DCBD71D89C27E (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// p1swatch.color = GameSettings.Player1_color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___p1swatch_8;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = GameSettings_get_Player1_color_m0348E57D9DE6B029C1D3C0D1D5C8274521D1E5E1_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// p2swatch.color = GameSettings.Player2_color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___p2swatch_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = GameSettings_get_Player2_color_mD646A35B8D54F549B850304BC884420638C46CC8_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// if (GameSettings.Player3_enabled) p3swatch.color = GameSettings.Player3_color;
		bool L_4;
		L_4 = GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline(NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// if (GameSettings.Player3_enabled) p3swatch.color = GameSettings.Player3_color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___p3swatch_10;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = GameSettings_get_Player3_color_m6A7D69119B87A24AD433B36871B3C8B775F33A2C_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
	}

IL_0037:
	{
		// if (GameSettings.Player4_enabled) p4swatch.color = GameSettings.Player4_color;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline(NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// if (GameSettings.Player4_enabled) p4swatch.color = GameSettings.Player4_color;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___p4swatch_11;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = GameSettings_get_Player4_color_mE53E585207BD90D485D386530965F40EC1758BFF_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
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
// System.Int32 Player::get_PlayerNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_PlayerNum_mEAF9A7098C09F02542DC84F974047E2C71BF9583 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerNum { get; set; }
		int32_t L_0 = __this->___U3CPlayerNumU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Player::set_PlayerNum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerNum_mD2E703805EE53F4ACC289B944B26DA90BBBA052B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PlayerNum { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPlayerNumU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Player::get_PlayerName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerName { get; set; }
		String_t* L_0 = __this->___U3CPlayerNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Player::set_PlayerName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// UnityEngine.Vector3 Player::get_PlayerHome()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_get_PlayerHome_mA32CE98F4AD4FAED8170387FE115A3B2FD5F3D66 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PlayerHome { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPlayerHomeU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Player::set_PlayerHome(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerHome_m4EE4595BF36C855396C89CAD33836A0C5F702198 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 PlayerHome { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CPlayerHomeU3Ek__BackingField_6 = L_0;
		return;
	}
}
// UnityEngine.Quaternion Player::get_PlayerRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Player_get_PlayerRotation_m9061A2C99809946C52C1D3C81E5C7C5038AA0C51 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion PlayerRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CPlayerRotationU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Player::set_PlayerRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerRotation_m294DDE6531BE2B1440622D59A202D011F8D6718E (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion PlayerRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CPlayerRotationU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.Color Player::get_PlayerColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Player_get_PlayerColor_mDDED28F9DAB9E5E02235FB27069CB80F1369CD26 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Color PlayerColor { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CPlayerColorU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Player::set_PlayerColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_PlayerColor_m4B25A1896A8CC2885C3D54CFA4C2CECE388B3185 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color PlayerColor { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___U3CPlayerColorU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Single Player::get_Score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = __this->___U3CScoreU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Player::set_Score(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Score_m50614C8556C499894B46DF6DB5ECF70872907DBC (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = ___0_value;
		__this->___U3CScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
// UnityEngine.Vector2 Player::get_CardPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Player_get_CardPosition_mB55B4ADA60CB12D186F865E836B8C281E32DD59C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 CardPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CCardPositionU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Player::set_CardPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_CardPosition_m8184A0F9591D6C1056CFB2D356134646FC63E6E0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 CardPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CCardPositionU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int32 Player::get_Lives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public int Lives { get; set; }
		int32_t L_0 = __this->___U3CLivesU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Player::set_Lives(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_set_Lives_m492905F491DBDF491674B74387ECA2D1726DF018 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Lives { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CLivesU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Void Player::add_onLivesOut(Player/LivesOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_add_onLivesOut_mF0B60432E7585EB8BDCFD4F0ACAFA738564AC60B (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_0 = NULL;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_1 = NULL;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_2 = NULL;
	{
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___onLivesOut_14;
		V_0 = L_0;
	}

IL_0006:
	{
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_1 = V_0;
		V_1 = L_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_2 = V_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)CastclassSealed((RuntimeObject*)L_4, LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var));
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_5 = V_2;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_6 = V_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_7;
		L_7 = InterlockedCompareExchangeImpl<LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*>((&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___onLivesOut_14), L_5, L_6);
		V_0 = L_7;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_8 = V_0;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_9 = V_1;
		if ((!(((RuntimeObject*)(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)L_8) == ((RuntimeObject*)(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Player::remove_onLivesOut(Player/LivesOut)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_remove_onLivesOut_m653F852C8CA95D26ABCCFD478B8B22C109E374F6 (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_0 = NULL;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_1 = NULL;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* V_2 = NULL;
	{
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_0 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___onLivesOut_14;
		V_0 = L_0;
	}

IL_0006:
	{
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_1 = V_0;
		V_1 = L_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_2 = V_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)CastclassSealed((RuntimeObject*)L_4, LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C_il2cpp_TypeInfo_var));
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_5 = V_2;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_6 = V_1;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_7;
		L_7 = InterlockedCompareExchangeImpl<LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*>((&((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___onLivesOut_14), L_5, L_6);
		V_0 = L_7;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_8 = V_0;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_9 = V_1;
		if ((!(((RuntimeObject*)(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)L_8) == ((RuntimeObject*)(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Player::CreateBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CreateBase_m37ECBACE8C607ECE8D28886F278F2749B433EE2B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m4795EDB5BCF1C6F568E45771E9BB515DECE7C051_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral985A2EC9A66F4BAE1F95CD8A8AAACE48284EBD33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerArea = Instantiate(Resources.Load<GameObject>("Prefabs/playerArea"), PlayerHome, PlayerRotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteral985A2EC9A66F4BAE1F95CD8A8AAACE48284EBD33, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Player_get_PlayerHome_mA32CE98F4AD4FAED8170387FE115A3B2FD5F3D66_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Player_get_PlayerRotation_m9061A2C99809946C52C1D3C81E5C7C5038AA0C51_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___playerArea_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerArea_12), (void*)L_3);
		// playerArea.transform.Find("base").GetComponent<PlayerBase>().OwnerIndex = PlayerNum;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playerArea_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral3618AD4590B5AEEAF5022BE929B8BA84D836466C, NULL);
		PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* L_7;
		L_7 = Component_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m4795EDB5BCF1C6F568E45771E9BB515DECE7C051(L_6, Component_GetComponent_TisPlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D_m4795EDB5BCF1C6F568E45771E9BB515DECE7C051_RuntimeMethod_var);
		int32_t L_8;
		L_8 = Player_get_PlayerNum_mEAF9A7098C09F02542DC84F974047E2C71BF9583_inline(__this, NULL);
		PlayerBase_set_OwnerIndex_mE72E5C6195E59D3AEF033EE5F666CEAD220A4076_inline(L_7, L_8, NULL);
		// playerArea.transform.Find("playerName").GetComponent<TMP_Text>().text = PlayerName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___playerArea_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_10, _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12;
		L_12 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_11, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_13;
		L_13 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D_inline(__this, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_12, L_13);
		// playerArea.transform.Find("playerName").GetComponent<TMP_Text>().color = PlayerColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___playerArea_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_15, _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17;
		L_17 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_16, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Player_get_PlayerColor_mDDED28F9DAB9E5E02235FB27069CB80F1369CD26_inline(__this, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// }
		return;
	}
}
// System.Void Player::CreateCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CreateCard_m2963A1AAA53181790BFB044F6FF8E07172309D8C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4232E2FD672DD70CC04156695A1188BA1EE615BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBEBED93EA18E31014241D79C2499A66828E50BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerCard = Instantiate(Resources.Load<GameObject>("Prefabs/playerCard"), GameObject.Find("gameUI").transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(_stringLiteralBBEBED93EA18E31014241D79C2499A66828E50BE, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral4232E2FD672DD70CC04156695A1188BA1EE615BF, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_0, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___playerCard_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCard_13), (void*)L_3);
		// playerCard.GetComponent<RectTransform>().anchoredPosition = CardPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___playerCard_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_4, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Player_get_CardPosition_mB55B4ADA60CB12D186F865E836B8C281E32DD59C_inline(__this, NULL);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_5, L_6, NULL);
		// playerCard.GetComponent<Image>().color = PlayerColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___playerCard_13;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_7, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Player_get_PlayerColor_mDDED28F9DAB9E5E02235FB27069CB80F1369CD26_inline(__this, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// playerCard.transform.Find("playerName").GetComponent<TMP_Text>().text = PlayerName;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_11, _stringLiteral616AAB5C815906B453473975760BDFCC9B81FF5F, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_13;
		L_13 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_12, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_14;
		L_14 = Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D_inline(__this, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_13, L_14);
		// UpdateScore(0f); //set score to 0
		Player_UpdateScore_mC0B36DB4DEA6677BD5BFE2698E7D400DD8BD5CFD(__this, (0.0f), NULL);
		// UpdateLives(); //display starting lives
		Player_UpdateLives_m5E0AC448ED15AE9828DC1D1B63F8BDD9C38CDAFA(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::UpdateScore(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateScore_mC0B36DB4DEA6677BD5BFE2698E7D400DD8BD5CFD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___0_stackHeight, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE491C45E1E0BFA1DCDFEA8F191D5321ED24DEC0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Score = stackHeight * 10;
		float L_0 = ___0_stackHeight;
		Player_set_Score_m50614C8556C499894B46DF6DB5ECF70872907DBC_inline(__this, ((float)il2cpp_codegen_multiply(L_0, (10.0f))), NULL);
		// Score -= (GameSettings.StartingLives - Lives) * GameSettings.LifePenalty;
		float L_1;
		L_1 = Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = GameSettings_get_StartingLives_m3284B28769856356D8447A05E39CAF31CFBA2A18_inline(NULL);
		int32_t L_3;
		L_3 = Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline(__this, NULL);
		int32_t L_4;
		L_4 = GameSettings_get_LifePenalty_mA9022FB39BCD8A1BE3BDB47107DA96D4E367C571_inline(NULL);
		Player_set_Score_m50614C8556C499894B46DF6DB5ECF70872907DBC_inline(__this, ((float)il2cpp_codegen_subtract(L_1, ((float)((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_2, L_3)), L_4))))), NULL);
		// playerCard.transform.Find("playerScoreValue").GetComponent<TMP_Text>().text = Score.ToString("0");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteralE491C45E1E0BFA1DCDFEA8F191D5321ED24DEC0E, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8;
		L_8 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_7, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		float L_9;
		L_9 = Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline(__this, NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D((&V_0), _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_10);
		// }
		return;
	}
}
// System.Void Player::UpdateLives()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_UpdateLives_m5E0AC448ED15AE9828DC1D1B63F8BDD9C38CDAFA (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02AF3B9D8B67C0A1E5F3C0A2F1D39B7825BAB7E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8814E931F388700D2C20BAB263D887B1F179A28F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* G_B6_0 = NULL;
	LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* G_B5_0 = NULL;
	{
		// string lifeString = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < Lives; i++) lifeString += " ? ";
		V_1 = 0;
		goto IL_001a;
	}

IL_000a:
	{
		// for (int i = 0; i < Lives; i++) lifeString += " ? ";
		String_t* L_0 = V_0;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral8814E931F388700D2C20BAB263D887B1F179A28F, NULL);
		V_0 = L_1;
		// for (int i = 0; i < Lives; i++) lifeString += " ? ";
		int32_t L_2 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001a:
	{
		// for (int i = 0; i < Lives; i++) lifeString += " ? ";
		int32_t L_3 = V_1;
		int32_t L_4;
		L_4 = Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline(__this, NULL);
		if ((((int32_t)L_3) < ((int32_t)L_4)))
		{
			goto IL_000a;
		}
	}
	{
		// playerCard.transform.Find("playerLifeValue").GetComponent<TMP_Text>().text = lifeString;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteral02AF3B9D8B67C0A1E5F3C0A2F1D39B7825BAB7E1, NULL);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8;
		L_8 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(L_7, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		String_t* L_9 = V_0;
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_8, L_9);
		// if (Lives <= 0) onLivesOut?.Invoke();
		int32_t L_10;
		L_10 = Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline(__this, NULL);
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		// if (Lives <= 0) onLivesOut?.Invoke();
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_11 = ((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_StaticFields*)il2cpp_codegen_static_fields_for(Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var))->___onLivesOut_14;
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* L_12 = L_11;
		G_B5_0 = L_12;
		if (L_12)
		{
			G_B6_0 = L_12;
			goto IL_0056;
		}
	}
	{
		return;
	}

IL_0056:
	{
		LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_inline(G_B6_0, NULL);
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void Player::LoseLife()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseLife_mE19E920E35BC6017805B74256B3931504EC0C472 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// Lives--;
		int32_t L_0;
		L_0 = Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		Player_set_Lives_m492905F491DBDF491674B74387ECA2D1726DF018_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		// UpdateLives();
		Player_UpdateLives_m5E0AC448ED15AE9828DC1D1B63F8BDD9C38CDAFA(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::SetActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetActive_mC5DE3181C9398F3FC3F915B8E5CB3F775048445A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// playerCard.transform.localScale = new Vector3(1.2f, 1.2f, 1.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), (1.20000005f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::SetInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_SetInactive_m342CD1FF3FAF41B27A3B0AF6D3780D57994D2E82 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// playerCard.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Player::GameEndScorecard(UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_GameEndScorecard_mD4B78EA9C993DB7322014A6D437A3615E2A074A7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_newCardPosition, int32_t ___1_placing, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral363278D8E9773708C6063667EE23AA08E939B3C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FF15448145F2FCAF37464B590854647A937BDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7342733D8103FEFBE51AC627B4F279696F4D7CC9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerCard.GetComponent<RectTransform>().anchorMax = new Vector2(0.5f, 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___playerCard_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), (0.5f), (0.5f), /*hidden argument*/NULL);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_1, L_2, NULL);
		// playerCard.GetComponent<RectTransform>().anchorMin = new Vector2(0.5f, 0.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___playerCard_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_3, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.5f), (0.5f), /*hidden argument*/NULL);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_4, L_5, NULL);
		// playerCard.GetComponent<RectTransform>().anchoredPosition = newCardPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___playerCard_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_6, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___0_newCardPosition;
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_7, L_8, NULL);
		// if (placing == 1)
		int32_t L_9 = ___1_placing;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0098;
		}
	}
	{
		// playerCard.transform.localScale = new Vector3(1.5f, 1.5f, 1.5f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (1.5f), (1.5f), (1.5f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_11, L_12, NULL);
		// playerCard.transform.Find("first").GetComponent<Image>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_14, _stringLiteral7342733D8103FEFBE51AC627B4F279696F4D7CC9, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16;
		L_16 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_15, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_16, (bool)1, NULL);
		return;
	}

IL_0098:
	{
		// } else if (placing == 2)
		int32_t L_17 = ___1_placing;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_00e1;
		}
	}
	{
		// playerCard.transform.localScale = new Vector3(1.2f, 1.2f, 1.2f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (1.20000005f), (1.20000005f), (1.20000005f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_19, L_20, NULL);
		// playerCard.transform.Find("second").GetComponent<Image>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_22, _stringLiteral363278D8E9773708C6063667EE23AA08E939B3C7, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_23, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_24, (bool)1, NULL);
		return;
	}

IL_00e1:
	{
		// } else if (placing == 3)
		int32_t L_25 = ___1_placing;
		if ((!(((uint32_t)L_25) == ((uint32_t)3))))
		{
			goto IL_012a;
		}
	}
	{
		// playerCard.transform.localScale = new Vector3(1.1f, 1.1f, 1.1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), (1.10000002f), (1.10000002f), (1.10000002f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_27, L_28, NULL);
		// playerCard.transform.Find("third").GetComponent<Image>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_30, _stringLiteral6FF15448145F2FCAF37464B590854647A937BDCE, NULL);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32;
		L_32 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_31, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_32, (bool)1, NULL);
		return;
	}

IL_012a:
	{
		// playerCard.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___playerCard_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_Multicast(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* currentDelegate = reinterpret_cast<LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_OpenInst(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_OpenStatic(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_OpenStaticInvoker(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_ClosedStaticInvoker(LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Player/LivesOut::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesOut__ctor_m5A86CAA126A846D7B20A63D6AA3A8A6CF76643BF (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_Multicast;
}
// System.Void Player/LivesOut::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Player/LivesOut::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LivesOut_BeginInvoke_mBA3F4C56C24FD2E2B81BB092B7D76314E8A8569A (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Player/LivesOut::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LivesOut_EndInvoke_mAC60E99FF303FDA5641775ACAC9891CBE0329E97 (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
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
// System.Int32 PlayerComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerComparer_Compare_m8D8A268099C7D6321980B03822B8C0F5D6413D58 (PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (new CaseInsensitiveComparer()).Compare(((Player)y).Score, ((Player)x).Score);
		CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281* L_0 = (CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281*)il2cpp_codegen_object_new(CaseInsensitiveComparer_t451E7BFCF626D7D4BE4854A4D57A6BE41AB2A281_il2cpp_TypeInfo_var);
		CaseInsensitiveComparer__ctor_m3A0B31069972D202DF2C19B04A11E22B8140FE9D(L_0, NULL);
		RuntimeObject* L_1 = ___1_y;
		float L_2;
		L_2 = Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline(((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)CastclassClass((RuntimeObject*)L_1, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var)), NULL);
		float L_3 = L_2;
		RuntimeObject* L_4 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_3);
		RuntimeObject* L_5 = ___0_x;
		float L_6;
		L_6 = Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline(((Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74*)CastclassClass((RuntimeObject*)L_5, Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_il2cpp_TypeInfo_var)), NULL);
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9;
		L_9 = CaseInsensitiveComparer_Compare_m755E34189FBD778E32BCC0CA702493AD0632BEAE(L_0, L_4, L_8, NULL);
		return L_9;
	}
}
// System.Void PlayerComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerComparer__ctor_m487DB35DF65BBF1AE2E15ABC17ABA51F22281262 (PlayerComparer_t390248DC5BB0D5B510965E6A802693D612CE2FE7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 PlayerBase::get_OwnerIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerBase_get_OwnerIndex_m6ED28A27AC59B057A96265FA375A8787E2C17853 (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int OwnerIndex { get; set; }
		int32_t L_0 = __this->___U3COwnerIndexU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void PlayerBase::set_OwnerIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBase_set_OwnerIndex_mE72E5C6195E59D3AEF033EE5F666CEAD220A4076 (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int OwnerIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3COwnerIndexU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void PlayerBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerBase__ctor_mA7F60137510929E10251D0773A389DBA8FD699F5 (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player1_name_mAAB1BC62C1C465FBBF32F8010171EA57F5E8B679_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player1_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player2_name_m0861F55313F723E04E06C6C6EC25D5131A59CE3A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player2_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player3_name_mB998ABC584EC072CB4EF49F2DC5A5D0297C9AA04_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player3_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* GameSettings_get_Player4_name_mAD463E7CBB31439A2D6CDFC915C92BAE4B034CD3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player4_name { get; set; }
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		String_t* L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player1_color_m0348E57D9DE6B029C1D3C0D1D5C8274521D1E5E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_colorU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player2_color_mD646A35B8D54F549B850304BC884420638C46CC8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_colorU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player3_color_m6A7D69119B87A24AD433B36871B3C8B775F33A2C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_colorU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GameSettings_get_Player4_color_mE53E585207BD90D485D386530965F40EC1758BFF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_colorU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerNum_mD2E703805EE53F4ACC289B944B26DA90BBBA052B_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int PlayerNum { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CPlayerNumU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerHome_m4EE4595BF36C855396C89CAD33836A0C5F702198_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector3 PlayerHome { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___U3CPlayerHomeU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerRotation_m294DDE6531BE2B1440622D59A202D011F8D6718E_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Quaternion PlayerRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___U3CPlayerRotationU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_CardPosition_m8184A0F9591D6C1056CFB2D356134646FC63E6E0_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// public Vector2 CardPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CCardPositionU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSettings_get_StartingLives_m3284B28769856356D8447A05E39CAF31CFBA2A18_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int StartingLives { get; set; } = 3;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CStartingLivesU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Lives_m492905F491DBDF491674B74387ECA2D1726DF018_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int Lives { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3CLivesU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerName_m67AAAD67DF8110CDAD4D1F33ADDCB9C80FC24E3E_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string PlayerName { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CPlayerNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPlayerNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_PlayerColor_m4B25A1896A8CC2885C3D54CFA4C2CECE388B3185_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		// public Color PlayerColor { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___U3CPlayerColorU3Ek__BackingField_8 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Player_get_PlayerHome_mA32CE98F4AD4FAED8170387FE115A3B2FD5F3D66_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 PlayerHome { get; set; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___U3CPlayerHomeU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePieceDeck_get_PiecesLeft_m91B145DE2E8D6ECBB31E1DB560DE042033EFF4DA_inline (GamePieceDeck_tD022D4772F0F519BBFDF9C36658E48FA5FABB7A2* __this, const RuntimeMethod* method) 
{
	{
		// get { return piecesLeft; }
		int32_t L_0 = __this->___piecesLeft_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_BaseMat_m5584BF04EEED5A782AAB5FBA84A6A8DB69A61A64_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Material BaseMat { get; set; } //default material for this piece
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = ___0_value;
		__this->___U3CBaseMatU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseMatU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_OwnerIndex_mD6BF73FDB1970727E5ABAC0AB0CC18B4B7363D28_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int OwnerIndex { get; set; } = -1; //default no owner
		int32_t L_0 = ___0_value;
		__this->___U3COwnerIndexU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GamePiece_get_Held_mED60683BF29AA4B2B17B533272062893DF10BAB3_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Held { get; set; }
		bool L_0 = __this->___U3CHeldU3Ek__BackingField_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GamePiece_get_OwnerIndex_m89C406BB3FE93D8352A85456CD1C819F65C5CDBD_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public int OwnerIndex { get; set; } = -1; //default no owner
		int32_t L_0 = __this->___U3COwnerIndexU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameEnded_Invoke_m77FE3A67EEF84BA0A1ED1F651490DE6DFDD1D6CA_inline (GameEnded_t371FA2580ADFAC90DF6B355C4239E56AFF3EB107* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GamePiece_get_BaseMat_m730B02822BD4CC75C7827600AE1FE98DAF4D0CAF_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public Material BaseMat { get; set; } //default material for this piece
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___U3CBaseMatU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Destruction_Invoke_mC66922E50EE77AAA925E2F51C015CB6BCDEBE7ED_inline (Destruction_tC3B12512E71371A81C7A999D57B96B7AE639036D* __this, int32_t ___0_owner, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_owner, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Held_m08551C58D6EC3E5F5B4F2290E2F24C76D41E9430_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Held { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CHeldU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayerBase_get_OwnerIndex_m6ED28A27AC59B057A96265FA375A8787E2C17853_inline (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int OwnerIndex { get; set; }
		int32_t L_0 = __this->___U3COwnerIndexU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GamePiece_get_Stacked_mB5E587051C264EA603A4F35558409FC3E3654F10_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, const RuntimeMethod* method) 
{
	{
		// public bool Stacked { get; set; } = false; //default unstacked
		bool L_0 = __this->___U3CStackedU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GamePiece_set_Stacked_m2DB767F94CEC8E20A8EC82910360AB91777C9484_inline (GamePiece_tE572D6E16F40569B108D0EDD6219BEF6C0D21FBB* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool Stacked { get; set; } = false; //default unstacked
		bool L_0 = ___0_value;
		__this->___U3CStackedU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameSettings_get_Player3_enabled_mE3534741E8958BE9CDFB1642B859570508173DBC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player3_enabled { get; set; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_enabledU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GameSettings_get_Player4_enabled_m4370D96988D9F18AEE8100DFE5279477C022960C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player4_enabled { get; set; } = true;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		bool L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_enabledU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_enabled_mD6AA4FF58B27425707907AAEB99DA7410A888342_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player3_enabled { get; set; } = true;
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_enabledU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_enabled_m9DD334B1B0AFFE98DCA673BAFC90FF4244204018_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool Player4_enabled { get; set; } = true;
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_enabledU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player1_name_m2DF182CBBAD654FDCD841251DA21FF41147A026F_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player1_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_nameU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player2_name_mC62C4FA2E92344EEDB28AD7D7C3E83D9293A402A_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player2_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_nameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_name_m0B00DF1CCD7971F032FE040C3B923EEE35B808AE_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player3_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_nameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_name_m2862B20D0567193C0C2B7A295E1E0A924071E992_inline (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string Player4_name { get; set; }
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_nameU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player1_color_m1A05F410FB1629B6240DDECBE026BA395759DC6C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player1_color { get; set; } = new Color(0.6f, 0.02f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer1_colorU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player2_color_mA46FCB3CD42838A9F8644C2D9709AA56BABFA101_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player2_color { get; set; } = new Color(0.2f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer2_colorU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player3_color_m2BE47D5CAA8EEDBBE68EA5B21E4B0FD5320DACD4_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player3_color { get; set; } = new Color(0.02f, 0.35f, 0.02f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer3_colorU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameSettings_set_Player4_color_mCE4F1D4EE26BE366AC854560B0D0D9F1C3392A96_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Color Player4_color { get; set; } = new Color(0.6f, 0.02f, 0.6f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CPlayer4_colorU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StartRotating_Invoke_m9131F17D358B9EE8FFDAED7FA944DB0AF3FDCCD5_inline (StartRotating_t90E29118D15F91CE7F89A4BAF818DAC387401BE9* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StopRotating_Invoke_m862631F786519E0AD40B2E1BB717D7B95BE97B9E_inline (StopRotating_t8A3DE4D9C824965BB9BD56F7FF19450280A1C910* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StopHolding_Invoke_m0BD47EEAECB4258B0EA58A753E2E8BC70D167C9D_inline (StopHolding_tA29F817CEC366850E9D444F64FC14A61ECE39D58* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TMP_InputField_get_text_mA4ACBF52435893D9DFD822A492454301740B3C6A_inline (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Player_get_PlayerRotation_m9061A2C99809946C52C1D3C81E5C7C5038AA0C51_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Quaternion PlayerRotation { get; set; }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___U3CPlayerRotationU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_PlayerNum_mEAF9A7098C09F02542DC84F974047E2C71BF9583_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public int PlayerNum { get; set; }
		int32_t L_0 = __this->___U3CPlayerNumU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerBase_set_OwnerIndex_mE72E5C6195E59D3AEF033EE5F666CEAD220A4076_inline (PlayerBase_tBCAE10E8C3F3ED9A222BA91BC3C6ECFC0885B22D* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// [SerializeField] public int OwnerIndex { get; set; }
		int32_t L_0 = ___0_value;
		__this->___U3COwnerIndexU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Player_get_PlayerName_m9C8EFBC5FE7A1F6FFFE9E97432F48C7075BD006D_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public string PlayerName { get; set; }
		String_t* L_0 = __this->___U3CPlayerNameU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Player_get_PlayerColor_mDDED28F9DAB9E5E02235FB27069CB80F1369CD26_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Color PlayerColor { get; set; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___U3CPlayerColorU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Player_get_CardPosition_mB55B4ADA60CB12D186F865E836B8C281E32DD59C_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 CardPosition { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CCardPositionU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Player_set_Score_m50614C8556C499894B46DF6DB5ECF70872907DBC_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = ___0_value;
		__this->___U3CScoreU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Player_get_Score_mAEF3F9A4801356D8360BC6155C898A41ECFC472A_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float Score { get; set; }
		float L_0 = __this->___U3CScoreU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Player_get_Lives_m191A887667D39AB8DD305D0CC23090CA016F6635_inline (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public int Lives { get; set; }
		int32_t L_0 = __this->___U3CLivesU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameSettings_get_LifePenalty_mA9022FB39BCD8A1BE3BDB47107DA96D4E367C571_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int LifePenalty { get; set; } = 10;
		il2cpp_codegen_runtime_class_init_inline(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var);
		int32_t L_0 = ((GameSettings_t6B240976E27B656F17018B16968EAC840603573B_StaticFields*)il2cpp_codegen_static_fields_for(GameSettings_t6B240976E27B656F17018B16968EAC840603573B_il2cpp_TypeInfo_var))->___U3CLifePenaltyU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LivesOut_Invoke_m644C8608C63E0559E241C718CFB7B35E35578C3E_inline (LivesOut_t69FD3B5563DB42C513AA696D0CA4E405F208129C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
