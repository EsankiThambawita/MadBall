#include "pch-cpp.hpp"





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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467;
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021;
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35;
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF;
struct ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356;
struct ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_PropertiesModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UIElementsModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Burst[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Collections[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_RenderPipelines_Core_Runtime[];
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DynamicArray_1_tC637D025EB5176CD63E77B260EF1BDB42DC69C7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};
struct DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467  : public RuntimeObject
{
	IRenderGraphResourceU5BU5D_tF72B9471181CD494E8F4A0274F40A7A037FF44C7* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CversionU3Ek__BackingField;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};
struct IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021  : public RuntimeObject
{
	bool ___imported;
	bool ___shared;
	bool ___sharedExplicitRelease;
	bool ___requestFallBack;
	bool ___forceRelease;
	uint32_t ___writeCount;
	uint32_t ___readCount;
	int32_t ___cachedHash;
	int32_t ___transientPassIndex;
	int32_t ___sharedResourceLastFrameUsed;
	int32_t ___version;
};
struct IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct MarshalledUnityObject_tA225A4A0AE6E49830C3C0142B2984549E0786A28  : public RuntimeObject
{
};
struct RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF  : public RuntimeObject
{
	DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* ___resourceArray;
	int32_t ___sharedResourcesCount;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* ___pool;
	ResourceCreateCallback_t801515B956F3C21C25B4DD6A4E4E01BBCF12E657* ___createResourceCallback;
	ResourceCallback_tAD2AFD87AC5F4806D2DE0A543648F1FA25E52356* ___releaseResourceCallback;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};
struct NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body;
};
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
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
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
	};
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables;
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame;
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars;
};
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	uint8_t* ___Ptr;
	int32_t ___Size;
	int32_t ___Offset;
};
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___Acc;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_OffsetPadding[64];
			uint8_t ___Buffer;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_OffsetPadding[320];
			int32_t ___IsHash64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_OffsetPadding[324];
			int32_t ___BufferedSize;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding[328];
			int32_t ___NbStripesSoFar;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_OffsetPadding[336];
			int64_t ___TotalLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_OffsetPadding[344];
			uint64_t ___Seed;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_OffsetPadding[352];
			uint8_t ___SecretKey;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_OffsetPadding[540];
			uint8_t ____PadEnd;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_forAlignmentOnly;
		};
	};
};
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			uint16_t ___FixedElementField;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
};
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next;
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___Byte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_OffsetPadding[1];
			uint8_t ___Byte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_OffsetPadding[2];
			uint8_t ___Byte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_OffsetPadding[3];
			uint8_t ___Byte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_OffsetPadding[4];
			uint8_t ___Byte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_OffsetPadding[5];
			uint8_t ___Byte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_OffsetPadding[6];
			uint8_t ___Byte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_OffsetPadding[7];
			uint8_t ___Byte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_OffsetPadding[8];
			uint8_t ___Byte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_OffsetPadding[9];
			uint8_t ___Byte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_OffsetPadding[10];
			uint8_t ___Byte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_OffsetPadding[11];
			uint8_t ___Byte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_OffsetPadding[12];
			uint8_t ___Byte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_OffsetPadding[13];
			uint8_t ___Byte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_OffsetPadding[14];
			uint8_t ___Byte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_OffsetPadding[15];
			uint8_t ___Byte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___SByte0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_OffsetPadding[1];
			int8_t ___SByte1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_OffsetPadding[2];
			int8_t ___SByte2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_OffsetPadding[3];
			int8_t ___SByte3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_OffsetPadding[4];
			int8_t ___SByte4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_OffsetPadding[5];
			int8_t ___SByte5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_OffsetPadding[6];
			int8_t ___SByte6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_OffsetPadding[7];
			int8_t ___SByte7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_OffsetPadding[8];
			int8_t ___SByte8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_OffsetPadding[9];
			int8_t ___SByte9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_OffsetPadding[10];
			int8_t ___SByte10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_OffsetPadding[11];
			int8_t ___SByte11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_OffsetPadding[12];
			int8_t ___SByte12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_OffsetPadding[13];
			int8_t ___SByte13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_OffsetPadding[14];
			int8_t ___SByte14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_OffsetPadding[15];
			int8_t ___SByte15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___UShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_OffsetPadding[2];
			uint16_t ___UShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_OffsetPadding[4];
			uint16_t ___UShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_OffsetPadding[6];
			uint16_t ___UShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_OffsetPadding[8];
			uint16_t ___UShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_OffsetPadding[10];
			uint16_t ___UShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_OffsetPadding[12];
			uint16_t ___UShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_OffsetPadding[14];
			uint16_t ___UShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___SShort0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_OffsetPadding[2];
			int16_t ___SShort1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_OffsetPadding[4];
			int16_t ___SShort2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_OffsetPadding[6];
			int16_t ___SShort3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_OffsetPadding[8];
			int16_t ___SShort4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_OffsetPadding[10];
			int16_t ___SShort5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_OffsetPadding[12];
			int16_t ___SShort6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_OffsetPadding[14];
			int16_t ___SShort7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___UInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_OffsetPadding[4];
			uint32_t ___UInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_OffsetPadding[8];
			uint32_t ___UInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_OffsetPadding[12];
			uint32_t ___UInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___SInt0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_OffsetPadding[4];
			int32_t ___SInt1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_OffsetPadding[8];
			int32_t ___SInt2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_OffsetPadding[12];
			int32_t ___SInt3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___ULong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_OffsetPadding[8];
			uint64_t ___ULong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___SLong0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_OffsetPadding[8];
			int64_t ___SLong1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___Float0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_OffsetPadding[4];
			float ___Float1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_OffsetPadding[8];
			float ___Float2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_OffsetPadding[12];
			float ___Float3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___Double0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_OffsetPadding[8];
			double ___Double1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_OffsetPadding[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_forAlignmentOnly;
		};
	};
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State;
};
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_Handle;
};
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76 
{
	TempMeshAllocator_tD37C436C57799A8137298056D60932C14639361C ___allocator;
	NativeSlice_1_t72AA15A00D1B7CE9B7265E487D15133C9F091FD0 ___jobParameters;
};
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_ForeachIndex;
	int32_t ___m_ElementCount;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock;
	int32_t ___m_FirstOffset;
	int32_t ___m_NumberOfBlocks;
	int32_t ___m_ThreadIndex;
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9 
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 ___m_Reader;
};
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F 
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F ___m_Writer;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer;
};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache;
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories;
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	int32_t ___SECRET_LIMIT;
	int32_t ___NB_STRIPES_PER_BLOCK;
	int32_t ___INTERNAL_BUFFER_SIZE;
	int32_t ___INTERNAL_BUFFER_STRIPES;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m83B9E2903381BE0CD673D1B67026BE32C5F2347F_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* DynamicArray_1_get_Item_mF0AEE4C8CFEB5DC5134BABA7A507D441E0ACE206_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) ;

inline Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1 (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT, intptr_t, const RuntimeMethod*))TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared)(__this, ___0_handlePtr, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline)(method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)(__this, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline)(___0_ptr, method);
}
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, ___0_value, method);
}
inline intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (RuntimeObject*, const RuntimeMethod*))MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline)(___0_obj, method);
}
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)(__this, method);
}
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline)(__this, method);
}
inline void DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m83B9E2903381BE0CD673D1B67026BE32C5F2347F_gshared)(__this, ___0_newSize, ___1_keepContent, method);
}
inline IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869 (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** (*) (DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_mF0AEE4C8CFEB5DC5134BABA7A507D441E0ACE206_gshared)(__this, ___0_index, method);
}
inline RuntimeObject* Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138 (const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_gshared)((Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9 (uint64_t ___0_offset, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
inline void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline)(___0_ptr, ___1_output, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)(__this, ___0_value, method);
}
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_gshared)(___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared)(___0_nativeArray, method);
}
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)(__this, ___0_value, ___1_allocator, method);
}
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)(__this, ___0_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)(__this, method);
}
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
inline EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline)(method);
}
inline Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76 (const RuntimeMethod* method)
{
	return ((  Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
inline int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204 (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared)(___0_a, ___1_alen, ___2_b, ___3_blen, ___4_len, ___5_imm8, ___6_allOnes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
inline v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method)
{
	return ((  v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 (*) (int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared)(___0_len, ___1_imm8, ___2_allOnesT, ___3_intRes2, method);
}
inline int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared)(___0_ptr, ___1_max, method);
}
inline void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline)(___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)(__this, ___0_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794 (intptr_t ___0_handle, const RuntimeMethod* method) ;
inline void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared)(___0_ptr, ___1_output, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_gshared)(method);
}
inline void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline)(___0_thing, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Unmanaged_Allocate_TisIl2CppFullySharedGenericStruct_m057D0CA6874E6719E10B462BACECFDC4352FE9AE_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20443));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20444));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20445));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20446));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___0_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20447));
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20447));
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20448));
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20449));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20450));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20451));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20452));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20453));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20454));
		goto IL_0018;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20455));
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20456));
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD(L_2, ((int64_t)1), ((int64_t)0), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20456));
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20457));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_gshared (TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_handlePtr));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105465));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105466));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	RuntimeObject* G_B6_0 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105467));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105468));
		intptr_t L_0 = ___0_handlePtr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105469));
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105469));
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2 = V_1;
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_0019:
	{
		intptr_t L_3 = ___0_handlePtr;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105470));
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_3, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105470));
		G_B3_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105471));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105472));
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105472));
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_6 = V_2;
		G_B6_0 = L_6;
		goto IL_0045;
	}

IL_0034:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105473));
		RuntimeObject* L_7;
		L_7 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105473));
		G_B6_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_0045:
	{
		V_3 = G_B6_0;
		goto IL_0048;
	}

IL_0048:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_UIElementsModule + 105474));
		RuntimeObject* L_8 = V_3;
		return L_8;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1_AdjustorThunk (RuntimeObject* IL2CPP_PARAMETER_RESTRICT __this, intptr_t ___0_handlePtr, const RuntimeMethod* method)
{
	TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TessellationJob_t6752B373FBA1C29E9EFF3B0E46A67057B5684B76*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = TessellationJob_ExtractHandle_TisRuntimeObject_m910411FA5E6188E7C9B709EE3E353142384B73C1(_thisAdjusted, ___0_handlePtr, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26521));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26522));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26523));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26524));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26525));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26525));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26526));
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* L_1 = (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)(&__this->___m_Reader);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26527));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26527));
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26528));
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26512));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26513));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26514));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26515));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26516));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26516));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26517));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26518));
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26518));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26519));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26519));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26520));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26439));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26440));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26441));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26442));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26443));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26443));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26444));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26445));
		uint8_t* L_2;
		L_2 = Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26445));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26446));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26446));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26447));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26432));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 26433));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26434));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26435));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26436));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26436));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26437));
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 26438));
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_Marshal_TisRuntimeObject_m286B34400A212037E8EBD53DBFEAD7D23CDE8051_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16215));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16216));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16217));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16218));
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16219));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16220));
		V_1 = 0;
		goto IL_001f;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16221));
		RuntimeObject* L_2 = ___0_obj;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16222));
		intptr_t L_3;
		L_3 = MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16222));
		V_1 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16223));
		intptr_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16224));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16225));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16226));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16227));
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16228));
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetPropertyVisitor_VisitPath_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m48D5F231D141FE04D8C4AA045C484BDF9928EBC0_gshared (GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_property), (&___1_container), (&___2_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 183));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 184));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 185));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 186));
		Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* L_0 = ___0_property;
		__this->___Property = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Property), (void*)(RuntimeObject*)L_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 187));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		CHECK_PAUSE_POINT;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___0_node;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(17, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = __this->____shadowedVars;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(18, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = __this->____shadowedVars;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___0_node;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___0_node;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___0_node;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(19, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_m74B581980E83CFD9DD1B7DAA66F3390DDD4A7679_gshared (RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderGraphResourcesData_t4E1A864AD7A36EC74B28D89C86E3A4D0997958CF_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_outRes), (&___1_pooledResource));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49318));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49319));
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49320));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49321));
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_0 = __this->___resourceArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49322));
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_0, DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49322));
		V_0 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49323));
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_2 = __this->___resourceArray;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_3 = __this->___resourceArray;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49324));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_inline(L_3, DynamicArray_1_get_size_m0C78CDCD1FF6A1256C3382649AF82DE707BB6C16_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49324));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49325));
		NullCheck(L_2);
		DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_m71330886D4896ECE91617DB09FAF262B0E24B00B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49325));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49326));
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_5 = __this->___resourceArray;
		int32_t L_6 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49327));
		NullCheck(L_5);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_7;
		L_7 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_5, L_6, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49327));
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_8 = *((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49328));
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49329));
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_10 = __this->___resourceArray;
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49330));
		NullCheck(L_10);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_12;
		L_12 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_10, L_11, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49330));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49331));
		RuntimeObject* L_13;
		L_13 = Activator_CreateInstance_TisRuntimeObject_m62506836177F0F862A8D619638BF37F48721F138(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49331));
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49332));
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_tE5A650707ED617C8B11E4B6F29F3207E02383467* L_15 = __this->___resourceArray;
		int32_t L_16 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49333));
		NullCheck(L_15);
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021** L_17;
		L_17 = DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869(L_15, L_16, DynamicArray_1_get_Item_mEFCD58DBBE282DE955FAEF10ECACCF41D9E04869_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49333));
		IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021* L_18 = *((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49334));
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
		G_B3_0 = L_19;
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* L_21 = __this->___pool;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49335));
		NullCheck((IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)(*G_B5_1));
		VirtualActionInvoker1< IRenderGraphResourcePool_tBCC3743B6D9FE5AA6513FE6F643B1A51B7060D35* >::Invoke(4, (IRenderGraphResource_t8C49F0158EDB9571FA4BDAF754E09A32E535C021*)(*G_B5_1), G_B5_0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49335));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49336));
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 49337));
		int32_t L_23 = V_2;
		return L_23;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5274));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5275));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5276));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5277));
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_PropertiesModule + 5277));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_13 = L_8;
	const Il2CppFullySharedGenericStruct L_14 = L_8;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	void* V_2 = NULL;
	bool V_3 = false;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_4, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), V_1, (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31303));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31304));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31305));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31306));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31307));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31307));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31308));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_2 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31309));
		void* L_3 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31310));
		int32_t L_4;
		L_4 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31310));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31311));
		bool L_5;
		L_5 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9((uint64_t)((int64_t)(uint64_t)(intptr_t)L_3), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31311));
		V_3 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31312));
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31313));
		void* L_7 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31314));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, 0, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31314));
		il2cpp_codegen_memcpy(V_1, L_8, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31315));
		goto IL_003b;
	}

IL_002f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31316));
		void* L_9 = V_2;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31317));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uintptr_t)(Il2CppFullySharedGenericStruct*)V_1), L_9, ((int64_t)L_10), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31317));
	}

IL_003b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31318));
		int32_t L_11 = __this->___Offset;
		int32_t L_12 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_11, L_12));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31319));
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(V_4, L_13, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_004e;
	}

IL_004e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31320));
		il2cpp_codegen_memcpy(L_14, V_4, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	bool V_2 = false;
	void* V_3 = NULL;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31284));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31285));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31286));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31287));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31288));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31288));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31289));
		uint8_t* L_1 = __this->___Ptr;
		int32_t L_2 = __this->___Offset;
		V_1 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31290));
		void* L_3 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31291));
		int32_t L_4;
		L_4 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31291));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31292));
		bool L_5;
		L_5 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9((uint64_t)((int64_t)(uint64_t)(intptr_t)L_3), L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31292));
		V_2 = L_5;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31293));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31294));
		void* L_7 = V_1;
		Il2CppFullySharedGenericStruct* L_8 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31295));
		UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_inline(L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31295));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31296));
		goto IL_0044;
	}

IL_002f:
	{
		Il2CppFullySharedGenericStruct* L_9 = ___0_value;
		V_4 = L_9;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31297));
		Il2CppFullySharedGenericStruct* L_10 = V_4;
		V_3 = (void*)((uintptr_t)L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31298));
		void* L_11 = V_3;
		void* L_12 = V_1;
		int32_t L_13 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31299));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_11, L_12, ((int64_t)L_13), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31299));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31300));
		V_4 = (Il2CppFullySharedGenericStruct*)((uintptr_t)0);
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31301));
		int32_t L_14 = __this->___Offset;
		int32_t L_15 = V_0;
		__this->___Offset = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31302));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	void* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value), (&___1_allocator));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31331));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31332));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31333));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31334));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31335));
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31335));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31336));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31337));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763(L_2, L_3, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31337));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31338));
		int32_t L_5 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31339));
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31339));
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31340));
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31341));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31342));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31343));
		int32_t L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31344));
		void* L_10;
		L_10 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31344));
		V_3 = L_10;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31345));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31346));
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F(L_12, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31346));
		void* L_14 = V_3;
		int32_t L_15 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31347));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, ((int64_t)L_15), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31347));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31348));
	}

IL_0044:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31349));
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_length));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31350));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 31351));
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31352));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31353));
		int32_t* L_0 = ___0_length;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31354));
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31354));
		*((int32_t*)L_0) = (int32_t)L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31355));
		int32_t* L_2 = ___0_length;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31356));
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31356));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31357));
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31357));
		G_B3_0 = ((uintptr_t)(intptr_t)(L_7));
		goto IL_001f;
	}

IL_001d:
	{
		G_B3_0 = ((uintptr_t)0);
	}

IL_001f:
	{
		V_0 = (void*)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 31358));
		void* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU2A_t7A03686A8034AF92EF1EA2D09B280EF590D1174D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39668));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 39669));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39670));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39671));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39672));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39672));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39673));
		uint8_t* L_1 = __this->___m_CurrentPtr;
		V_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39674));
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = __this->___m_CurrentBlockEnd;
		V_2 = (bool)((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) <= ((uintptr_t)L_4)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39675));
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39676));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39677));
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = __this->___m_CurrentBlock;
		NullCheck(L_6);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = L_6->___Next;
		NullCheck(L_7);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_8 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_7->___Data);
		uint8_t* L_9 = (uint8_t*)(&L_8->___FixedElementField);
		V_1 = (uint8_t*)((uintptr_t)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39678));
	}

IL_0036:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39679));
		uint8_t* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39680));
		Il2CppFullySharedGenericStruct* L_11;
		L_11 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39680));
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39681));
		Il2CppFullySharedGenericStruct* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39659));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 39660));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39661));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39662));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39663));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39663));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39664));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39665));
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39665));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39666));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39666));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39667));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39567));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 39568));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39569));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39570));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39571));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39571));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39572));
		int32_t L_1 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39573));
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39573));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39574));
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_inline((void*)L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39574));
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39575));
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___0_value : &___0_value));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39560));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 39561));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39562));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39563));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39564));
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(__this, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39564));
		V_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39565));
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39566));
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20285));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20286));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20287));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20288));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20289));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20290));
		goto IL_006a;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20291));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20292));
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4))))));
		V_2 = ((int64_t)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20293));
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20294));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20295));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20296));
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20296));
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20297));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20298));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20299));
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20300));
	}

IL_0065:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20301));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20302));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20303));
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20304));
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20305));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_dptr), (&___1_base_addr), (&___2_indexPtr), (&___3_scale), (&___4_n), (&___5_mask));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, V_0, (&V_1), (&V_2), (&V_3), (&V_4));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20264));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 20265));
	int32_t G_B4_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20266));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20267));
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20268));
		V_1 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20269));
		goto IL_0069;
	}

IL_000d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20270));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20271));
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8))))));
		V_2 = L_2;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20272));
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20273));
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20274));
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20275));
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20275));
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20276));
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20277));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20278));
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20279));
	}

IL_0064:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20280));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20281));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20282));
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20283));
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 20284));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2), (&V_3), (&V_4), (&V_5), (&V_6), V_7, V_9, (&V_10), (&V_36));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25394));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25395));
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25396));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25397));
		V_0 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25398));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25399));
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25400));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25401));
		goto IL_01ea;
	}

IL_0014:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25402));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25403));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25404));
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25405));
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25406));
		V_0 = (bool)1;
	}

IL_0033:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25407));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25408));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25409));
		goto IL_01d6;
	}

IL_003d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25410));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25411));
		Il2CppFullySharedGenericStruct* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25412));
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25413));
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25414));
		V_1 = (bool)1;
	}

IL_005e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25415));
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25416));
		int32_t L_15 = V_13;
		V_12 = L_15;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25417));
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25418));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25419));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25419));
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25420));
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_17, L_18, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25420));
		V_10 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25421));
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25422));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25423));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25424));
		goto IL_00c4;
	}

IL_00a3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25425));
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25426));
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25427));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25428));
		goto IL_00c4;
	}

IL_00b8:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25429));
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25430));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25431));
		V_10 = (bool)0;
	}

IL_00c4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25432));
		goto IL_01c2;
	}

IL_00c9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25433));
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25434));
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25435));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25436));
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_32, L_33, L_34);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25437));
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25438));
		goto IL_0103;
	}

IL_00ed:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25439));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = Comparer_1_get_Default_m9BA7A3EA0D33B540EFC408B0C9C2B69F7A0C9E76(il2cpp_rgctx_method(method->rgctx_data, 6));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25440));
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6, L_36, L_37, L_38);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25441));
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25442));
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25443));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25444));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25445));
		goto IL_0135;
	}

IL_0114:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25446));
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25447));
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25448));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25449));
		goto IL_0135;
	}

IL_0129:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25450));
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25451));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25452));
		V_10 = (bool)0;
	}

IL_0135:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25453));
		goto IL_01c2;
	}

IL_013a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25454));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25455));
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_49, L_50, L_51);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25456));
		V_10 = L_52;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25457));
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25458));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25459));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25460));
		goto IL_017c;
	}

IL_015b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25461));
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25462));
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25463));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25464));
		goto IL_017c;
	}

IL_0170:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25465));
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25466));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25467));
		V_10 = (bool)1;
	}

IL_017c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25468));
		goto IL_01c2;
	}

IL_017e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25469));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25470));
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_62, L_63, L_64);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25471));
		V_10 = L_65;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25472));
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25473));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25474));
		V_10 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25475));
		goto IL_01c0;
	}

IL_019f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25476));
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25477));
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25478));
		V_10 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25479));
		goto IL_01c0;
	}

IL_01b4:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25480));
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25481));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25482));
		V_10 = (bool)1;
	}

IL_01c0:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25483));
		goto IL_01c2;
	}

IL_01c2:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25484));
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25485));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25486));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25487));
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25488));
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25489));
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25490));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25491));
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25492));
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25493));
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25494));
		V_6 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25495));
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25496));
		int32_t L_87 = V_30;
		V_29 = L_87;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25497));
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25498));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25499));
		goto IL_0260;
	}

IL_0227:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25500));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25501));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25502));
		goto IL_024f;
	}

IL_022d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25503));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25504));
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25505));
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
		G_B60_0 = L_89;
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25506));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25507));
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25508));
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25509));
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25510));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25511));
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25512));
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25513));
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25514));
		goto IL_035a;
	}

IL_0270:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25515));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25516));
		goto IL_02bb;
	}

IL_0274:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25517));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25518));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25519));
		goto IL_02aa;
	}

IL_027a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25520));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25521));
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25522));
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
		G_B70_0 = L_102;
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25523));
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
		G_B71_0 = G_B70_0;
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25524));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25525));
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25526));
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25527));
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25528));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25529));
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25530));
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25531));
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25532));
		goto IL_035a;
	}

IL_02cb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25533));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25534));
		goto IL_02ee;
	}

IL_02cf:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25535));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25536));
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25537));
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
		G_B80_0 = L_118;
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25538));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25539));
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25540));
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25541));
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25542));
		goto IL_035a;
	}

IL_02fb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25543));
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25544));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25545));
		goto IL_034d;
	}

IL_0303:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25546));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25547));
		int32_t L_128 = V_3;
		V_36 = L_128;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25548));
		V_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25549));
		goto IL_033a;
	}

IL_030c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25550));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25551));
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25552));
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25553));
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25554));
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25555));
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25556));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25557));
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25558));
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25559));
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25560));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25561));
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25562));
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25563));
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25564));
		goto IL_035a;
	}

IL_035a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25565));
		V_5 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25566));
		V_1 = (bool)0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25567));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25568));
		goto IL_0401;
	}

IL_0366:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25569));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25570));
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25571));
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25572));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25573));
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25574));
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25575));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25576));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25577));
		Il2CppFullySharedGenericStruct* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_149, L_153, L_154);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25578));
		V_42 = L_155;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25579));
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25580));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25581));
		V_1 = (bool)1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25582));
	}

IL_03b3:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25583));
		bool L_157 = V_1;
		V_44 = L_157;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25584));
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25585));
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25586));
		goto IL_03d9;
	}

IL_03ca:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25587));
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25588));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25589));
		goto IL_03eb;
	}

IL_03dc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25590));
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25591));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25592));
		goto IL_03fc;
	}

IL_03ee:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25593));
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25594));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25595));
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25596));
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25597));
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25598));
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25599));
		int32_t L_176 = V_46;
		return L_176;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_max));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25376));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25377));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25378));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25379));
		V_0 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25380));
		goto IL_0037;
	}

IL_0005:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25381));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25382));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = EqualityComparer_1_get_Default_m20747610B059ED2853BC1F878FC39851A47F5F2D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25383));
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8, L_0, L_4, L_5);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25384));
		V_1 = L_6;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25385));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25386));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25387));
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25388));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25389));
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25390));
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25391));
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25392));
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25393));
		int32_t L_14 = V_3;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_len), (&___1_imm8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_allOnesT : &___2_allOnesT), (&___3_intRes2));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_2), (&V_3));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25295));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25296));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25297));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25298));
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25299));
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25300));
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25301));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25302));
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25303));
		V_3 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25304));
		goto IL_0061;
	}

IL_0022:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25305));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25306));
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25307));
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25308));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25309));
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_9, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25310));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25311));
		goto IL_005c;
	}

IL_0049:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25312));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25313));
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25314));
	}

IL_005c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25315));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25316));
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25317));
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25318));
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25319));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25320));
		goto IL_0078;
	}

IL_006e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25321));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25322));
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0 = L_17;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25323));
	}

IL_0078:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25324));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25325));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25336));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25337));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25338));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25339));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25340));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25341));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25342));
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25343));
		int32_t L_12 = V_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_alen), (&___2_b), (&___3_blen), (&___4_len), (&___5_imm8), (&___6_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___7_allOnesT : &___7_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25287));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25288));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25289));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25290));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25291));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_1, L_2, L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25291));
		V_0 = L_7;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25292));
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25293));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13;
		L_13 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_8, L_9, il2cpp_codegen_memcpy(L_12, L_10, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC), L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25293));
		V_1 = L_13;
		goto IL_0020;
	}

IL_0020:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25294));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_14 = V_1;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25326));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25327));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25328));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25329));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25330));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25331));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25332));
		V_0 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25333));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25334));
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25335));
		int32_t L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_a), (&___1_b), (&___2_len), (&___3_imm8), (&___4_allOnes), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 3)) ? ___5_allOnesT : &___5_allOnesT));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25277));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Burst + 25278));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25279));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25280));
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25281));
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25281));
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25282));
		int32_t L_7;
		L_7 = Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25282));
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25283));
		int32_t L_11;
		L_11 = Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204(L_0, L_3, L_4, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25283));
		V_0 = L_11;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25284));
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25285));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17;
		L_17 = Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C(L_12, L_13, il2cpp_codegen_memcpy(L_16, L_14, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13), L_15, il2cpp_rgctx_method(method->rgctx_data, 4));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25285));
		V_1 = L_17;
		goto IL_0028;
	}

IL_0028:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Burst + 25286));
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_1;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_input));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30740));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 30741));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30742));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30743));
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30744));
		void* L_1;
		L_1 = UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30744));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30745));
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30745));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30746));
		il2cpp_codegen_runtime_class_init_inline(StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_il2cpp_TypeInfo_var);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30746));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 30747));
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_count), (&___1_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20523));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20524));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20525));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20526));
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20527));
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD((Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20527));
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20528));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_pointer), (&___1_count), (&___2_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20529));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20530));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20531));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20532));
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20533));
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20534));
		goto IL_0017;
	}

IL_000c:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20535));
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = ___1_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___2_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20536));
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD(L_2, L_3, ((int64_t)0), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20536));
	}

IL_0017:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20537));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_oldPointer), (&___1_oldCount), (&___2_newCount), (&___3_allocator));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20515));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 20516));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20517));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20518));
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20519));
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20519));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20520));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41(il2cpp_rgctx_method(method->rgctx_data, 2));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20520));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20521));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20521));
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 20522));
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_value1;
		intptr_t L_1 = ___1_value2;
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = __this->___handle;
		bool L_1;
		L_1 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B_inline(L_0, 0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0;
		L_0 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EBC86E0EACFCA522AEB82874860D0E248D782A5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5_RuntimeMethod_var)));
	}

IL_0013:
	{
		intptr_t L_2 = __this->___handle;
		bool L_3;
		L_3 = GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		intptr_t L_4 = __this->___handle;
		RuntimeObject* L_5;
		L_5 = GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline(L_4, NULL);
		return L_5;
	}

IL_002c:
	{
		intptr_t L_6 = __this->___handle;
		RuntimeObject* L_7;
		L_7 = GCHandle_GetTarget_mE0AF851834410E2AEA6285B2497751570236C794(L_6, NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2108));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2109));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2110));
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2119));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2120));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2121));
		void* L_0 = ___0_ptr;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2122));
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t MarshalledUnityObject_MarshalNotNull_TisRuntimeObject_mEB1AA6B672D00242BB9DCE007056EC0E9C8DB075_gshared_inline (RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_obj));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16224));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16225));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16226));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16227));
		RuntimeObject* L_0 = ___0_obj;
		NullCheck(L_0);
		intptr_t L_1 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_0)->___m_CachedPtr;
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 16228));
		intptr_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_tC637D025EB5176CD63E77B260EF1BDB42DC69C7F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 7343));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 7344));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_RenderPipelines_Core_Runtime + 7345));
		int32_t L_0 = __this->___U3CsizeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_source), (&___1_index));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2088));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2089));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2090));
		void* L_0 = ___0_source;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2091));
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_ptr), (&___1_output));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2068));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2069));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2070));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2071));
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2072));
		UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2072));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 2073));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_gshared_inline (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VoidU2A_t104EAEFBD2D237A8C29618913DA9B4D99355E965_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___0_value));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39916));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_Collections + 39917));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39918));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39919));
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39920));
		void* L_1;
		L_1 = ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39920));
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_Collections + 39921));
		void* L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GCHandle_CanDereferenceHandle_mAAAC42D1268CEF3FDD040A3D1574773D08140579_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_handle;
		return (bool)((((intptr_t)((intptr_t)(L_0&((intptr_t)1)))) == ((intptr_t)((intptr_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_inline (intptr_t ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, GCHandle_GetRef_mAC7E58E62417209DC41C99F66BA70F0C3AA18DA8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		intptr_t L_0 = ___0_handle;
		void* L_1;
		L_1 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_0, NULL);
		RuntimeObject** L_2;
		L_2 = il2cpp_unsafe_as_ref<RuntimeObject*>((intptr_t*)L_1);
		RuntimeObject* L_3 = *((RuntimeObject**)L_2);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_gshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) 
{
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, method, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_thing;
		return (void*)(L_0);
	}
}
