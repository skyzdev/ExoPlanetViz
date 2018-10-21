﻿#include "il2cpp-config.h"

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


// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t2285235057;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Text.Encoding
struct Encoding_t1523322056;




#ifndef U3CMODULEU3E_T692745591_H
#define U3CMODULEU3E_T692745591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745591 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745591_H
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
#ifndef CONSTS_T1749595337_H
#define CONSTS_T1749595337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Consts
struct  Consts_t1749595337  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTS_T1749595337_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t2285235057 * ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t1188251036 * ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t3123823036 * ___decoderFallback_60;

public:
	inline static int32_t get_offset_of_m_codePage_55() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_codePage_55)); }
	inline int32_t get_m_codePage_55() const { return ___m_codePage_55; }
	inline int32_t* get_address_of_m_codePage_55() { return &___m_codePage_55; }
	inline void set_m_codePage_55(int32_t value)
	{
		___m_codePage_55 = value;
	}

	inline static int32_t get_offset_of_dataItem_56() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___dataItem_56)); }
	inline CodePageDataItem_t2285235057 * get_dataItem_56() const { return ___dataItem_56; }
	inline CodePageDataItem_t2285235057 ** get_address_of_dataItem_56() { return &___dataItem_56; }
	inline void set_dataItem_56(CodePageDataItem_t2285235057 * value)
	{
		___dataItem_56 = value;
		Il2CppCodeGenWriteBarrier((&___dataItem_56), value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_57() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_deserializedFromEverett_57)); }
	inline bool get_m_deserializedFromEverett_57() const { return ___m_deserializedFromEverett_57; }
	inline bool* get_address_of_m_deserializedFromEverett_57() { return &___m_deserializedFromEverett_57; }
	inline void set_m_deserializedFromEverett_57(bool value)
	{
		___m_deserializedFromEverett_57 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_58() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___m_isReadOnly_58)); }
	inline bool get_m_isReadOnly_58() const { return ___m_isReadOnly_58; }
	inline bool* get_address_of_m_isReadOnly_58() { return &___m_isReadOnly_58; }
	inline void set_m_isReadOnly_58(bool value)
	{
		___m_isReadOnly_58 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_59() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoderFallback_59)); }
	inline EncoderFallback_t1188251036 * get_encoderFallback_59() const { return ___encoderFallback_59; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoderFallback_59() { return &___encoderFallback_59; }
	inline void set_encoderFallback_59(EncoderFallback_t1188251036 * value)
	{
		___encoderFallback_59 = value;
		Il2CppCodeGenWriteBarrier((&___encoderFallback_59), value);
	}

	inline static int32_t get_offset_of_decoderFallback_60() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoderFallback_60)); }
	inline DecoderFallback_t3123823036 * get_decoderFallback_60() const { return ___decoderFallback_60; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoderFallback_60() { return &___decoderFallback_60; }
	inline void set_decoderFallback_60(DecoderFallback_t3123823036 * value)
	{
		___decoderFallback_60 = value;
		Il2CppCodeGenWriteBarrier((&___decoderFallback_60), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t1523322056 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t1523322056 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t1523322056 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t1853889766 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_61;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t1523322056 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t1523322056 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_0), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_1), value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t1523322056 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t1523322056 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUnicode_2), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t1523322056 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t1523322056 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_3), value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t1523322056 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t1523322056 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t1523322056 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((&___utf8Encoding_4), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t1523322056 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t1523322056 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_5), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t1523322056 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t1523322056 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_6), value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t1523322056 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t1523322056 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t1523322056 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((&___latin1Encoding_7), value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_8)); }
	inline Hashtable_t1853889766 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t1853889766 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t1853889766 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_8), value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_61() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___s_InternalSyncObject_61)); }
	inline RuntimeObject * get_s_InternalSyncObject_61() const { return ___s_InternalSyncObject_61; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_61() { return &___s_InternalSyncObject_61; }
	inline void set_s_InternalSyncObject_61(RuntimeObject * value)
	{
		___s_InternalSyncObject_61 = value;
		Il2CppCodeGenWriteBarrier((&___s_InternalSyncObject_61), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
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
#ifndef __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#define __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512
struct  __StaticArrayInitTypeSizeU3D512_t3317833661 
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
		uint8_t __StaticArrayInitTypeSizeU3D512_t3317833661__padding[512];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __STATICARRAYINITTYPESIZEU3D512_T3317833661_H
#ifndef MONOENCODING_T666837952_H
#define MONOENCODING_T666837952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.MonoEncoding
struct  MonoEncoding_t666837952  : public Encoding_t1523322056
{
public:
	// System.Int32 I18N.Common.MonoEncoding::win_code_page
	int32_t ___win_code_page_62;

public:
	inline static int32_t get_offset_of_win_code_page_62() { return static_cast<int32_t>(offsetof(MonoEncoding_t666837952, ___win_code_page_62)); }
	inline int32_t get_win_code_page_62() const { return ___win_code_page_62; }
	inline int32_t* get_address_of_win_code_page_62() { return &___win_code_page_62; }
	inline void set_win_code_page_62(int32_t value)
	{
		___win_code_page_62 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOENCODING_T666837952_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255373_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255373  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::017235096A41990D9488223C8E0D56E35B569736
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___017235096A41990D9488223C8E0D56E35B569736_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::33D1AC98C31DCCB9238C374D4D1386DB68A6A595
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::C029709D232902A6A3808A15B7622DC2AEF16A24
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___C029709D232902A6A3808A15B7622DC2AEF16A24_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FDC523733500E24FB60E5223DD9E396992267CD9
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___FDC523733500E24FB60E5223DD9E396992267CD9_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=512 <PrivateImplementationDetails>::FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680
	__StaticArrayInitTypeSizeU3D512_t3317833661  ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7;

public:
	inline static int32_t get_offset_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___017235096A41990D9488223C8E0D56E35B569736_0)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_U3017235096A41990D9488223C8E0D56E35B569736_0() const { return ___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_U3017235096A41990D9488223C8E0D56E35B569736_0() { return &___017235096A41990D9488223C8E0D56E35B569736_0; }
	inline void set_U3017235096A41990D9488223C8E0D56E35B569736_0(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___017235096A41990D9488223C8E0D56E35B569736_0 = value;
	}

	inline static int32_t get_offset_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() const { return ___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1() { return &___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1; }
	inline void set_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___31D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1 = value;
	}

	inline static int32_t get_offset_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() const { return ___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2() { return &___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2; }
	inline void set_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___33D1AC98C31DCCB9238C374D4D1386DB68A6A595_2 = value;
	}

	inline static int32_t get_offset_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() const { return ___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3() { return &___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3; }
	inline void set_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___3D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3 = value;
	}

	inline static int32_t get_offset_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___C029709D232902A6A3808A15B7622DC2AEF16A24_4)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_C029709D232902A6A3808A15B7622DC2AEF16A24_4() const { return ___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4() { return &___C029709D232902A6A3808A15B7622DC2AEF16A24_4; }
	inline void set_C029709D232902A6A3808A15B7622DC2AEF16A24_4(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___C029709D232902A6A3808A15B7622DC2AEF16A24_4 = value;
	}

	inline static int32_t get_offset_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() const { return ___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5() { return &___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5; }
	inline void set_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5 = value;
	}

	inline static int32_t get_offset_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___FDC523733500E24FB60E5223DD9E396992267CD9_6)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_FDC523733500E24FB60E5223DD9E396992267CD9_6() const { return ___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_FDC523733500E24FB60E5223DD9E396992267CD9_6() { return &___FDC523733500E24FB60E5223DD9E396992267CD9_6; }
	inline void set_FDC523733500E24FB60E5223DD9E396992267CD9_6(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___FDC523733500E24FB60E5223DD9E396992267CD9_6 = value;
	}

	inline static int32_t get_offset_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields, ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7)); }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661  get_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() const { return ___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline __StaticArrayInitTypeSizeU3D512_t3317833661 * get_address_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7() { return &___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7; }
	inline void set_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7(__StaticArrayInitTypeSizeU3D512_t3317833661  value)
	{
		___FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255373_H
#ifndef BYTEENCODING_T1371924561_H
#define BYTEENCODING_T1371924561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Common.ByteEncoding
struct  ByteEncoding_t1371924561  : public MonoEncoding_t666837952
{
public:
	// System.Char[] I18N.Common.ByteEncoding::toChars
	CharU5BU5D_t3528271667* ___toChars_63;
	// System.String I18N.Common.ByteEncoding::encodingName
	String_t* ___encodingName_64;
	// System.String I18N.Common.ByteEncoding::bodyName
	String_t* ___bodyName_65;
	// System.String I18N.Common.ByteEncoding::headerName
	String_t* ___headerName_66;
	// System.String I18N.Common.ByteEncoding::webName
	String_t* ___webName_67;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserDisplay
	bool ___isBrowserDisplay_68;
	// System.Boolean I18N.Common.ByteEncoding::isBrowserSave
	bool ___isBrowserSave_69;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsDisplay
	bool ___isMailNewsDisplay_70;
	// System.Boolean I18N.Common.ByteEncoding::isMailNewsSave
	bool ___isMailNewsSave_71;
	// System.Int32 I18N.Common.ByteEncoding::windowsCodePage
	int32_t ___windowsCodePage_72;

public:
	inline static int32_t get_offset_of_toChars_63() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___toChars_63)); }
	inline CharU5BU5D_t3528271667* get_toChars_63() const { return ___toChars_63; }
	inline CharU5BU5D_t3528271667** get_address_of_toChars_63() { return &___toChars_63; }
	inline void set_toChars_63(CharU5BU5D_t3528271667* value)
	{
		___toChars_63 = value;
		Il2CppCodeGenWriteBarrier((&___toChars_63), value);
	}

	inline static int32_t get_offset_of_encodingName_64() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___encodingName_64)); }
	inline String_t* get_encodingName_64() const { return ___encodingName_64; }
	inline String_t** get_address_of_encodingName_64() { return &___encodingName_64; }
	inline void set_encodingName_64(String_t* value)
	{
		___encodingName_64 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_64), value);
	}

	inline static int32_t get_offset_of_bodyName_65() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___bodyName_65)); }
	inline String_t* get_bodyName_65() const { return ___bodyName_65; }
	inline String_t** get_address_of_bodyName_65() { return &___bodyName_65; }
	inline void set_bodyName_65(String_t* value)
	{
		___bodyName_65 = value;
		Il2CppCodeGenWriteBarrier((&___bodyName_65), value);
	}

	inline static int32_t get_offset_of_headerName_66() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___headerName_66)); }
	inline String_t* get_headerName_66() const { return ___headerName_66; }
	inline String_t** get_address_of_headerName_66() { return &___headerName_66; }
	inline void set_headerName_66(String_t* value)
	{
		___headerName_66 = value;
		Il2CppCodeGenWriteBarrier((&___headerName_66), value);
	}

	inline static int32_t get_offset_of_webName_67() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___webName_67)); }
	inline String_t* get_webName_67() const { return ___webName_67; }
	inline String_t** get_address_of_webName_67() { return &___webName_67; }
	inline void set_webName_67(String_t* value)
	{
		___webName_67 = value;
		Il2CppCodeGenWriteBarrier((&___webName_67), value);
	}

	inline static int32_t get_offset_of_isBrowserDisplay_68() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserDisplay_68)); }
	inline bool get_isBrowserDisplay_68() const { return ___isBrowserDisplay_68; }
	inline bool* get_address_of_isBrowserDisplay_68() { return &___isBrowserDisplay_68; }
	inline void set_isBrowserDisplay_68(bool value)
	{
		___isBrowserDisplay_68 = value;
	}

	inline static int32_t get_offset_of_isBrowserSave_69() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isBrowserSave_69)); }
	inline bool get_isBrowserSave_69() const { return ___isBrowserSave_69; }
	inline bool* get_address_of_isBrowserSave_69() { return &___isBrowserSave_69; }
	inline void set_isBrowserSave_69(bool value)
	{
		___isBrowserSave_69 = value;
	}

	inline static int32_t get_offset_of_isMailNewsDisplay_70() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsDisplay_70)); }
	inline bool get_isMailNewsDisplay_70() const { return ___isMailNewsDisplay_70; }
	inline bool* get_address_of_isMailNewsDisplay_70() { return &___isMailNewsDisplay_70; }
	inline void set_isMailNewsDisplay_70(bool value)
	{
		___isMailNewsDisplay_70 = value;
	}

	inline static int32_t get_offset_of_isMailNewsSave_71() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___isMailNewsSave_71)); }
	inline bool get_isMailNewsSave_71() const { return ___isMailNewsSave_71; }
	inline bool* get_address_of_isMailNewsSave_71() { return &___isMailNewsSave_71; }
	inline void set_isMailNewsSave_71(bool value)
	{
		___isMailNewsSave_71 = value;
	}

	inline static int32_t get_offset_of_windowsCodePage_72() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561, ___windowsCodePage_72)); }
	inline int32_t get_windowsCodePage_72() const { return ___windowsCodePage_72; }
	inline int32_t* get_address_of_windowsCodePage_72() { return &___windowsCodePage_72; }
	inline void set_windowsCodePage_72(int32_t value)
	{
		___windowsCodePage_72 = value;
	}
};

struct ByteEncoding_t1371924561_StaticFields
{
public:
	// System.Byte[] I18N.Common.ByteEncoding::isNormalized
	ByteU5BU5D_t4116647657* ___isNormalized_73;
	// System.Byte[] I18N.Common.ByteEncoding::isNormalizedComputed
	ByteU5BU5D_t4116647657* ___isNormalizedComputed_74;
	// System.Byte[] I18N.Common.ByteEncoding::normalization_bytes
	ByteU5BU5D_t4116647657* ___normalization_bytes_75;

public:
	inline static int32_t get_offset_of_isNormalized_73() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalized_73)); }
	inline ByteU5BU5D_t4116647657* get_isNormalized_73() const { return ___isNormalized_73; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalized_73() { return &___isNormalized_73; }
	inline void set_isNormalized_73(ByteU5BU5D_t4116647657* value)
	{
		___isNormalized_73 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalized_73), value);
	}

	inline static int32_t get_offset_of_isNormalizedComputed_74() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___isNormalizedComputed_74)); }
	inline ByteU5BU5D_t4116647657* get_isNormalizedComputed_74() const { return ___isNormalizedComputed_74; }
	inline ByteU5BU5D_t4116647657** get_address_of_isNormalizedComputed_74() { return &___isNormalizedComputed_74; }
	inline void set_isNormalizedComputed_74(ByteU5BU5D_t4116647657* value)
	{
		___isNormalizedComputed_74 = value;
		Il2CppCodeGenWriteBarrier((&___isNormalizedComputed_74), value);
	}

	inline static int32_t get_offset_of_normalization_bytes_75() { return static_cast<int32_t>(offsetof(ByteEncoding_t1371924561_StaticFields, ___normalization_bytes_75)); }
	inline ByteU5BU5D_t4116647657* get_normalization_bytes_75() const { return ___normalization_bytes_75; }
	inline ByteU5BU5D_t4116647657** get_address_of_normalization_bytes_75() { return &___normalization_bytes_75; }
	inline void set_normalization_bytes_75(ByteU5BU5D_t4116647657* value)
	{
		___normalization_bytes_75 = value;
		Il2CppCodeGenWriteBarrier((&___normalization_bytes_75), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEENCODING_T1371924561_H
#ifndef ISCIIENCODING_T963808618_H
#define ISCIIENCODING_T963808618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ISCIIEncoding
struct  ISCIIEncoding_t963808618  : public MonoEncoding_t666837952
{
public:
	// System.Int32 I18N.Other.ISCIIEncoding::shift
	int32_t ___shift_63;
	// System.String I18N.Other.ISCIIEncoding::encodingName
	String_t* ___encodingName_64;
	// System.String I18N.Other.ISCIIEncoding::webName
	String_t* ___webName_65;

public:
	inline static int32_t get_offset_of_shift_63() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t963808618, ___shift_63)); }
	inline int32_t get_shift_63() const { return ___shift_63; }
	inline int32_t* get_address_of_shift_63() { return &___shift_63; }
	inline void set_shift_63(int32_t value)
	{
		___shift_63 = value;
	}

	inline static int32_t get_offset_of_encodingName_64() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t963808618, ___encodingName_64)); }
	inline String_t* get_encodingName_64() const { return ___encodingName_64; }
	inline String_t** get_address_of_encodingName_64() { return &___encodingName_64; }
	inline void set_encodingName_64(String_t* value)
	{
		___encodingName_64 = value;
		Il2CppCodeGenWriteBarrier((&___encodingName_64), value);
	}

	inline static int32_t get_offset_of_webName_65() { return static_cast<int32_t>(offsetof(ISCIIEncoding_t963808618, ___webName_65)); }
	inline String_t* get_webName_65() const { return ___webName_65; }
	inline String_t** get_address_of_webName_65() { return &___webName_65; }
	inline void set_webName_65(String_t* value)
	{
		___webName_65 = value;
		Il2CppCodeGenWriteBarrier((&___webName_65), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISCIIENCODING_T963808618_H
#ifndef CP57002_T3319044192_H
#define CP57002_T3319044192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57002
struct  CP57002_t3319044192  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57002_T3319044192_H
#ifndef CP57003_T3318978656_H
#define CP57003_T3318978656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57003
struct  CP57003_t3318978656  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57003_T3318978656_H
#ifndef CP57004_T3319175264_H
#define CP57004_T3319175264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57004
struct  CP57004_t3319175264  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57004_T3319175264_H
#ifndef CP57005_T3319109728_H
#define CP57005_T3319109728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57005
struct  CP57005_t3319109728  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57005_T3319109728_H
#ifndef CP57006_T3319306336_H
#define CP57006_T3319306336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57006
struct  CP57006_t3319306336  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57006_T3319306336_H
#ifndef CP57007_T3319240800_H
#define CP57007_T3319240800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57007
struct  CP57007_t3319240800  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57007_T3319240800_H
#ifndef CP57008_T3318388832_H
#define CP57008_T3318388832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57008
struct  CP57008_t3318388832  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57008_T3318388832_H
#ifndef CP57009_T3318323296_H
#define CP57009_T3318323296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57009
struct  CP57009_t3318323296  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57009_T3318323296_H
#ifndef CP57010_T3318913121_H
#define CP57010_T3318913121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57010
struct  CP57010_t3318913121  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57010_T3318913121_H
#ifndef CP57011_T3318847585_H
#define CP57011_T3318847585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP57011
struct  CP57011_t3318847585  : public ISCIIEncoding_t963808618
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP57011_T3318847585_H
#ifndef CP874_T186401363_H
#define CP874_T186401363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.CP874
struct  CP874_t186401363  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP874_t186401363_StaticFields
{
public:
	// System.Char[] I18N.Other.CP874::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP874_t186401363_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP874_T186401363_H
#ifndef CP1026_T2597006537_H
#define CP1026_T2597006537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1026
struct  CP1026_t2597006537  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1026_t2597006537_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1026::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1026_t2597006537_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1026_T2597006537_H
#ifndef CP1047_T3746752619_H
#define CP1047_T3746752619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1047
struct  CP1047_t3746752619  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1047_t3746752619_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1047::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1047_t3746752619_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1047_T3746752619_H
#ifndef CP1140_T643491947_H
#define CP1140_T643491947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1140
struct  CP1140_t643491947  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1140_t643491947_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1140::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1140_t643491947_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1140_T643491947_H
#ifndef CP1141_T2599807083_H
#define CP1141_T2599807083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1141
struct  CP1141_t2599807083  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1141_t2599807083_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1141::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1141_t2599807083_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1141_T2599807083_H
#ifndef CP1142_T1025828971_H
#define CP1142_T1025828971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1142
struct  CP1142_t1025828971  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1142_t1025828971_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1142::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1142_t1025828971_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1142_T1025828971_H
#ifndef CP1143_T2982144107_H
#define CP1143_T2982144107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1143
struct  CP1143_t2982144107  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1143_t2982144107_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1143::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1143_t2982144107_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1143_T2982144107_H
#ifndef CP1144_T1408165995_H
#define CP1144_T1408165995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1144
struct  CP1144_t1408165995  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1144_t1408165995_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1144::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1144_t1408165995_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1144_T1408165995_H
#ifndef CP1145_T3364481131_H
#define CP1145_T3364481131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1145
struct  CP1145_t3364481131  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1145_t3364481131_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1145::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1145_t3364481131_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1145_T3364481131_H
#ifndef CP1146_T1790503019_H
#define CP1146_T1790503019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1146
struct  CP1146_t1790503019  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1146_t1790503019_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1146::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1146_t1790503019_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1146_T1790503019_H
#ifndef CP1147_T3746818155_H
#define CP1147_T3746818155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1147
struct  CP1147_t3746818155  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1147_t3746818155_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1147::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1147_t3746818155_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1147_T3746818155_H
#ifndef CP1148_T2172840043_H
#define CP1148_T2172840043_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1148
struct  CP1148_t2172840043  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1148_t2172840043_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1148::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1148_t2172840043_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1148_T2172840043_H
#ifndef CP1149_T4129155179_H
#define CP1149_T4129155179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP1149
struct  CP1149_t4129155179  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP1149_t4129155179_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP1149::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP1149_t4129155179_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP1149_T4129155179_H
#ifndef CP20273_T628462411_H
#define CP20273_T628462411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20273
struct  CP20273_t628462411  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20273_t628462411_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20273::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20273_t628462411_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20273_T628462411_H
#ifndef CP20277_T628462415_H
#define CP20277_T628462415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20277
struct  CP20277_t628462415  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20277_t628462415_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20277::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20277_t628462415_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20277_T628462415_H
#ifndef CP20278_T628462416_H
#define CP20278_T628462416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20278
struct  CP20278_t628462416  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20278_t628462416_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20278::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20278_t628462416_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20278_T628462416_H
#ifndef CP20280_T3349451592_H
#define CP20280_T3349451592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20280
struct  CP20280_t3349451592  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20280_t3349451592_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20280::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20280_t3349451592_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20280_T3349451592_H
#ifndef CP20284_T3349451596_H
#define CP20284_T3349451596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20284
struct  CP20284_t3349451596  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20284_t3349451596_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20284::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20284_t3349451596_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20284_T3349451596_H
#ifndef CP20285_T3349451597_H
#define CP20285_T3349451597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20285
struct  CP20285_t3349451597  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20285_t3349451597_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20285::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20285_t3349451597_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20285_T3349451597_H
#ifndef CP20290_T1010799432_H
#define CP20290_T1010799432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20290
struct  CP20290_t1010799432  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20290_t1010799432_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20290::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20290_t1010799432_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20290_T1010799432_H
#ifndef CP20297_T1010799439_H
#define CP20297_T1010799439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20297
struct  CP20297_t1010799439  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20297_t1010799439_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20297::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20297_t1010799439_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20297_T1010799439_H
#ifndef CP20420_T1395871466_H
#define CP20420_T1395871466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20420
struct  CP20420_t1395871466  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20420_t1395871466_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20420::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20420_t1395871466_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20420_T1395871466_H
#ifndef CP20424_T1395871470_H
#define CP20424_T1395871470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20424
struct  CP20424_t1395871470  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20424_t1395871470_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20424::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20424_t1395871470_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20424_T1395871470_H
#ifndef CP20871_T2147492183_H
#define CP20871_T2147492183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP20871
struct  CP20871_t2147492183  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP20871_t2147492183_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP20871::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP20871_t2147492183_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP20871_T2147492183_H
#ifndef CP21025_T3367402627_H
#define CP21025_T3367402627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP21025
struct  CP21025_t3367402627  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP21025_t3367402627_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP21025::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP21025_t3367402627_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP21025_T3367402627_H
#ifndef CP37_T108829002_H
#define CP37_T108829002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP37
struct  CP37_t108829002  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP37_t108829002_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP37::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP37_t108829002_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP37_T108829002_H
#ifndef CP500_T2026640899_H
#define CP500_T2026640899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP500
struct  CP500_t2026640899  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP500_t2026640899_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP500::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP500_t2026640899_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP500_T2026640899_H
#ifndef CP708_T2382871261_H
#define CP708_T2382871261_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP708
struct  CP708_t2382871261  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP708_t2382871261_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP708::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP708_t2382871261_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP708_T2382871261_H
#ifndef CP852_T864169168_H
#define CP852_T864169168_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP852
struct  CP852_t864169168  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP852_t864169168_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP852::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP852_t864169168_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP852_T864169168_H
#ifndef CP855_T1623684055_H
#define CP855_T1623684055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP855
struct  CP855_t1623684055  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP855_t1623684055_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP855::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP855_t1623684055_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP855_T1623684055_H
#ifndef CP857_T460884641_H
#define CP857_T460884641_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP857
struct  CP857_t460884641  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP857_t460884641_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP857::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP857_t460884641_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP857_T460884641_H
#ifndef CP858_T2383198942_H
#define CP858_T2383198942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP858
struct  CP858_t2383198942  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP858_t2383198942_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP858::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP858_t2383198942_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP858_T2383198942_H
#ifndef CP862_T864234704_H
#define CP862_T864234704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP862
struct  CP862_t864234704  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP862_t864234704_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP862::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP862_t864234704_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP862_T864234704_H
#ifndef CP864_T57665650_H
#define CP864_T57665650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP864
struct  CP864_t57665650  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP864_t57665650_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP864::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP864_t57665650_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP864_T57665650_H
#ifndef CP866_T3189833532_H
#define CP866_T3189833532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP866
struct  CP866_t3189833532  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP866_t3189833532_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP866::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP866_t3189833532_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP866_T3189833532_H
#ifndef CP869_T3949348419_H
#define CP869_T3949348419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP869
struct  CP869_t3949348419  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP869_t3949348419_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP869::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP869_t3949348419_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP869_T3949348419_H
#ifndef CP870_T2027099654_H
#define CP870_T2027099654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP870
struct  CP870_t2027099654  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP870_t2027099654_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP870::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP870_t2027099654_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP870_T2027099654_H
#ifndef CP875_T1623815127_H
#define CP875_T1623815127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.CP875
struct  CP875_t1623815127  : public ByteEncoding_t1371924561
{
public:

public:
};

struct CP875_t1623815127_StaticFields
{
public:
	// System.Char[] I18N.Rare.CP875::ToChars
	CharU5BU5D_t3528271667* ___ToChars_76;

public:
	inline static int32_t get_offset_of_ToChars_76() { return static_cast<int32_t>(offsetof(CP875_t1623815127_StaticFields, ___ToChars_76)); }
	inline CharU5BU5D_t3528271667* get_ToChars_76() const { return ___ToChars_76; }
	inline CharU5BU5D_t3528271667** get_address_of_ToChars_76() { return &___ToChars_76; }
	inline void set_ToChars_76(CharU5BU5D_t3528271667* value)
	{
		___ToChars_76 = value;
		Il2CppCodeGenWriteBarrier((&___ToChars_76), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CP875_T1623815127_H
#ifndef ENCWINDOWS_874_T2644911013_H
#define ENCWINDOWS_874_T2644911013_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCwindows_874
struct  ENCwindows_874_t2644911013  : public CP874_t186401363
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCWINDOWS_874_T2644911013_H
#ifndef ENCX_ISCII_AS_T3678131674_H
#define ENCX_ISCII_AS_T3678131674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_as
struct  ENCx_iscii_as_t3678131674  : public CP57006_t3319306336
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_AS_T3678131674_H
#ifndef ENCX_ISCII_BE_T1698134025_H
#define ENCX_ISCII_BE_T1698134025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_be
struct  ENCx_iscii_be_t1698134025  : public CP57003_t3318978656
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_BE_T1698134025_H
#ifndef ENCX_ISCII_DE_T535334611_H
#define ENCX_ISCII_DE_T535334611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_de
struct  ENCx_iscii_de_t535334611  : public CP57002_t3319044192
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_DE_T535334611_H
#ifndef ENCX_ISCII_GU_T3337689656_H
#define ENCX_ISCII_GU_T3337689656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_gu
struct  ENCx_iscii_gu_t3337689656  : public CP57010_t3318913121
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_GU_T3337689656_H
#ifndef ENCX_ISCII_KA_T540493772_H
#define ENCX_ISCII_KA_T540493772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ka
struct  ENCx_iscii_ka_t540493772  : public CP57008_t3318388832
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_KA_T540493772_H
#ifndef ENCX_ISCII_MA_T3672661654_H
#define ENCX_ISCII_MA_T3672661654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ma
struct  ENCx_iscii_ma_t3672661654  : public CP57009_t3318323296
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_MA_T3672661654_H
#ifndef ENCX_ISCII_OR_T2172155232_H
#define ENCX_ISCII_OR_T2172155232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_or
struct  ENCx_iscii_or_t2172155232  : public CP57007_t3319240800
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_OR_T2172155232_H
#ifndef ENCX_ISCII_PA_T43100911_H
#define ENCX_ISCII_PA_T43100911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_pa
struct  ENCx_iscii_pa_t43100911  : public CP57011_t3318847585
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_PA_T43100911_H
#ifndef ENCX_ISCII_TA_T2012469379_H
#define ENCX_ISCII_TA_T2012469379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_ta
struct  ENCx_iscii_ta_t2012469379  : public CP57004_t3319175264
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_TA_T2012469379_H
#ifndef ENCX_ISCII_TE_T1247795331_H
#define ENCX_ISCII_TE_T1247795331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Other.ENCx_iscii_te
struct  ENCx_iscii_te_t1247795331  : public CP57005_t3319109728
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCX_ISCII_TE_T1247795331_H
#ifndef ENCASMO_708_T562121192_H
#define ENCASMO_708_T562121192_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCasmo_708
struct  ENCasmo_708_t562121192  : public CP708_t2382871261
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCASMO_708_T562121192_H
#ifndef ENCIBM00858_T2458074995_H
#define ENCIBM00858_T2458074995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm00858
struct  ENCibm00858_t2458074995  : public CP858_t2383198942
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM00858_T2458074995_H
#ifndef ENCIBM01140_T3589036254_H
#define ENCIBM01140_T3589036254_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01140
struct  ENCibm01140_t3589036254  : public CP1140_t643491947
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01140_T3589036254_H
#ifndef ENCIBM01141_T3589036255_H
#define ENCIBM01141_T3589036255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01141
struct  ENCibm01141_t3589036255  : public CP1141_t2599807083
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01141_T3589036255_H
#ifndef ENCIBM01142_T3589036252_H
#define ENCIBM01142_T3589036252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01142
struct  ENCibm01142_t3589036252  : public CP1142_t1025828971
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01142_T3589036252_H
#ifndef ENCIBM01143_T3589036253_H
#define ENCIBM01143_T3589036253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm01143
struct  ENCibm01143_t3589036253  : public CP1143_t2982144107
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM01143_T3589036253_H
#ifndef ENCIBM037_T2940665735_H
#define ENCIBM037_T2940665735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm037
struct  ENCibm037_t2940665735  : public CP37_t108829002
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM037_T2940665735_H
#ifndef ENCIBM1025_T670129495_H
#define ENCIBM1025_T670129495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1025
struct  ENCibm1025_t670129495  : public CP21025_t3367402627
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1025_T670129495_H
#ifndef ENCIBM1026_T2626444631_H
#define ENCIBM1026_T2626444631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1026
struct  ENCibm1026_t2626444631  : public CP1026_t2597006537
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1026_T2626444631_H
#ifndef ENCIBM1047_T1094361525_H
#define ENCIBM1047_T1094361525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1047
struct  ENCibm1047_t1094361525  : public CP1047_t3746752619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1047_T1094361525_H
#ifndef ENCIBM1144_T3815416245_H
#define ENCIBM1144_T3815416245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1144
struct  ENCibm1144_t3815416245  : public CP1144_t1408165995
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1144_T3815416245_H
#ifndef ENCIBM1145_T1476764085_H
#define ENCIBM1145_T1476764085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1145
struct  ENCibm1145_t1476764085  : public CP1145_t3364481131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1145_T1476764085_H
#ifndef ENCIBM1146_T3433079221_H
#define ENCIBM1146_T3433079221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1146
struct  ENCibm1146_t3433079221  : public CP1146_t1790503019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1146_T3433079221_H
#ifndef ENCIBM1147_T1094427061_H
#define ENCIBM1147_T1094427061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1147
struct  ENCibm1147_t1094427061  : public CP1147_t3746818155
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1147_T1094427061_H
#ifndef ENCIBM1148_T3050742197_H
#define ENCIBM1148_T3050742197_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1148
struct  ENCibm1148_t3050742197  : public CP1148_t2172840043
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1148_T3050742197_H
#ifndef ENCIBM1149_T712090037_H
#define ENCIBM1149_T712090037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm1149
struct  ENCibm1149_t712090037  : public CP1149_t4129155179
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM1149_T712090037_H
#ifndef ENCIBM273_T971559413_H
#define ENCIBM273_T971559413_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm273
struct  ENCibm273_t971559413  : public CP20273_t628462411
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM273_T971559413_H
#ifndef ENCIBM277_T2940927881_H
#define ENCIBM277_T2940927881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm277
struct  ENCibm277_t2940927881  : public CP20277_t628462415
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM277_T2940927881_H
#ifndef ENCIBM278_T1018613580_H
#define ENCIBM278_T1018613580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm278
struct  ENCibm278_t1018613580  : public CP20278_t628462416
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM278_T1018613580_H
#ifndef ENCIBM280_T1373860900_H
#define ENCIBM280_T1373860900_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm280
struct  ENCibm280_t1373860900  : public CP20280_t3349451592
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM280_T1373860900_H
#ifndef ENCIBM284_T3343229368_H
#define ENCIBM284_T3343229368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm284
struct  ENCibm284_t3343229368  : public CP20284_t3349451596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM284_T3343229368_H
#ifndef ENCIBM285_T1777145427_H
#define ENCIBM285_T1777145427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm285
struct  ENCibm285_t1777145427  : public CP20285_t3349451597
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM285_T1777145427_H
#ifndef ENCIBM290_T1373926436_H
#define ENCIBM290_T1373926436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm290
struct  ENCibm290_t1373926436  : public CP20290_t1010799432
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM290_T1373926436_H
#ifndef ENCIBM297_T2940010377_H
#define ENCIBM297_T2940010377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm297
struct  ENCibm297_t2940010377  : public CP20297_t1010799439
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM297_T2940010377_H
#ifndef ENCIBM420_T1374516262_H
#define ENCIBM420_T1374516262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm420
struct  ENCibm420_t1374516262  : public CP20420_t1395871466
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM420_T1374516262_H
#ifndef ENCIBM424_T3343884730_H
#define ENCIBM424_T3343884730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm424
struct  ENCibm424_t3343884730  : public CP20424_t1395871470
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM424_T3343884730_H
#ifndef ENCIBM500_T1374385189_H
#define ENCIBM500_T1374385189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm500
struct  ENCibm500_t1374385189  : public CP500_t2026640899
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM500_T1374385189_H
#ifndef ENCIBM852_T2537512288_H
#define ENCIBM852_T2537512288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm852
struct  ENCibm852_t2537512288  : public CP852_t864169168
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM852_T2537512288_H
#ifndef ENCIBM855_T1777997401_H
#define ENCIBM855_T1777997401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm855
struct  ENCibm855_t1777997401  : public CP855_t1623684055
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM855_T1777997401_H
#ifndef ENCIBM857_T2940796815_H
#define ENCIBM857_T2940796815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm857
struct  ENCibm857_t2940796815  : public CP857_t460884641
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM857_T2940796815_H
#ifndef ENCIBM862_T2537577824_H
#define ENCIBM862_T2537577824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm862
struct  ENCibm862_t2537577824  : public CP862_t864234704
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM862_T2537577824_H
#ifndef ENCIBM864_T3344146878_H
#define ENCIBM864_T3344146878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm864
struct  ENCibm864_t3344146878  : public CP864_t57665650
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM864_T3344146878_H
#ifndef ENCIBM866_T211978996_H
#define ENCIBM866_T211978996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm866
struct  ENCibm866_t211978996  : public CP866_t3189833532
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM866_T211978996_H
#ifndef ENCIBM869_T3747431405_H
#define ENCIBM869_T3747431405_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm869
struct  ENCibm869_t3747431405  : public CP869_t3949348419
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM869_T3747431405_H
#ifndef ENCIBM870_T1374843946_H
#define ENCIBM870_T1374843946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm870
struct  ENCibm870_t1374843946  : public CP870_t2027099654
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM870_T1374843946_H
#ifndef ENCIBM871_T4103727301_H
#define ENCIBM871_T4103727301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm871
struct  ENCibm871_t4103727301  : public CP20871_t2147492183
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM871_T4103727301_H
#ifndef ENCIBM875_T1778128473_H
#define ENCIBM875_T1778128473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// I18N.Rare.ENCibm875
struct  ENCibm875_t1778128473  : public CP875_t1623815127
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCIBM875_T1778128473_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5100 = { sizeof (CP57002_t3319044192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5101 = { sizeof (CP57003_t3318978656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5102 = { sizeof (CP57004_t3319175264), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5103 = { sizeof (CP57005_t3319109728), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5104 = { sizeof (CP57006_t3319306336), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5105 = { sizeof (CP57007_t3319240800), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5106 = { sizeof (CP57008_t3318388832), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5107 = { sizeof (CP57009_t3318323296), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5108 = { sizeof (CP57010_t3318913121), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5109 = { sizeof (CP57011_t3318847585), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5110 = { sizeof (ENCx_iscii_de_t535334611), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5111 = { sizeof (ENCx_iscii_be_t1698134025), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5112 = { sizeof (ENCx_iscii_ta_t2012469379), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5113 = { sizeof (ENCx_iscii_te_t1247795331), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5114 = { sizeof (ENCx_iscii_as_t3678131674), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5115 = { sizeof (ENCx_iscii_or_t2172155232), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5116 = { sizeof (ENCx_iscii_ka_t540493772), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5117 = { sizeof (ENCx_iscii_ma_t3672661654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5118 = { sizeof (ENCx_iscii_gu_t3337689656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5119 = { sizeof (ENCx_iscii_pa_t43100911), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5120 = { sizeof (CP874_t186401363), -1, sizeof(CP874_t186401363_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5120[1] = 
{
	CP874_t186401363_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5121 = { sizeof (ENCwindows_874_t2644911013), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5122 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255373), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5122[8] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_U3017235096A41990D9488223C8E0D56E35B569736_0(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_U331D76B23EDF9CE1BF17651DAC05E3D98BBEA1FC8_1(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_U333D1AC98C31DCCB9238C374D4D1386DB68A6A595_2(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_U33D24D1DCE9501F8E7DFB95BC7CA7EACB21704404_3(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_C029709D232902A6A3808A15B7622DC2AEF16A24_4(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_E720E24EA0E8EA5F028BE4B37A7E456DB5E6AE41_5(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_FDC523733500E24FB60E5223DD9E396992267CD9_6(),
	U3CPrivateImplementationDetailsU3E_t3057255373_StaticFields::get_offset_of_FF5AEABB91E1A5AEC6185ADD0BCFDE4B5A440680_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5123 = { sizeof (__StaticArrayInitTypeSizeU3D512_t3317833661)+ sizeof (RuntimeObject), sizeof(__StaticArrayInitTypeSizeU3D512_t3317833661 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5124 = { sizeof (U3CModuleU3E_t692745591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5125 = { sizeof (Consts_t1749595337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable5125[41] = 
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5126 = { sizeof (CP1026_t2597006537), -1, sizeof(CP1026_t2597006537_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5126[1] = 
{
	CP1026_t2597006537_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5127 = { sizeof (ENCibm1026_t2626444631), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5128 = { sizeof (CP1047_t3746752619), -1, sizeof(CP1047_t3746752619_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5128[1] = 
{
	CP1047_t3746752619_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5129 = { sizeof (ENCibm1047_t1094361525), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5130 = { sizeof (CP1140_t643491947), -1, sizeof(CP1140_t643491947_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5130[1] = 
{
	CP1140_t643491947_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5131 = { sizeof (ENCibm01140_t3589036254), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5132 = { sizeof (CP1141_t2599807083), -1, sizeof(CP1141_t2599807083_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5132[1] = 
{
	CP1141_t2599807083_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5133 = { sizeof (ENCibm01141_t3589036255), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5134 = { sizeof (CP1142_t1025828971), -1, sizeof(CP1142_t1025828971_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5134[1] = 
{
	CP1142_t1025828971_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5135 = { sizeof (ENCibm01142_t3589036252), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5136 = { sizeof (CP1143_t2982144107), -1, sizeof(CP1143_t2982144107_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5136[1] = 
{
	CP1143_t2982144107_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5137 = { sizeof (ENCibm01143_t3589036253), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5138 = { sizeof (CP1144_t1408165995), -1, sizeof(CP1144_t1408165995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5138[1] = 
{
	CP1144_t1408165995_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5139 = { sizeof (ENCibm1144_t3815416245), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5140 = { sizeof (CP1145_t3364481131), -1, sizeof(CP1145_t3364481131_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5140[1] = 
{
	CP1145_t3364481131_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5141 = { sizeof (ENCibm1145_t1476764085), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5142 = { sizeof (CP1146_t1790503019), -1, sizeof(CP1146_t1790503019_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5142[1] = 
{
	CP1146_t1790503019_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5143 = { sizeof (ENCibm1146_t3433079221), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5144 = { sizeof (CP1147_t3746818155), -1, sizeof(CP1147_t3746818155_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5144[1] = 
{
	CP1147_t3746818155_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5145 = { sizeof (ENCibm1147_t1094427061), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5146 = { sizeof (CP1148_t2172840043), -1, sizeof(CP1148_t2172840043_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5146[1] = 
{
	CP1148_t2172840043_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5147 = { sizeof (ENCibm1148_t3050742197), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5148 = { sizeof (CP1149_t4129155179), -1, sizeof(CP1149_t4129155179_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5148[1] = 
{
	CP1149_t4129155179_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5149 = { sizeof (ENCibm1149_t712090037), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5150 = { sizeof (CP20273_t628462411), -1, sizeof(CP20273_t628462411_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5150[1] = 
{
	CP20273_t628462411_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5151 = { sizeof (ENCibm273_t971559413), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5152 = { sizeof (CP20277_t628462415), -1, sizeof(CP20277_t628462415_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5152[1] = 
{
	CP20277_t628462415_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5153 = { sizeof (ENCibm277_t2940927881), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5154 = { sizeof (CP20278_t628462416), -1, sizeof(CP20278_t628462416_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5154[1] = 
{
	CP20278_t628462416_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5155 = { sizeof (ENCibm278_t1018613580), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5156 = { sizeof (CP20280_t3349451592), -1, sizeof(CP20280_t3349451592_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5156[1] = 
{
	CP20280_t3349451592_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5157 = { sizeof (ENCibm280_t1373860900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5158 = { sizeof (CP20284_t3349451596), -1, sizeof(CP20284_t3349451596_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5158[1] = 
{
	CP20284_t3349451596_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5159 = { sizeof (ENCibm284_t3343229368), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5160 = { sizeof (CP20285_t3349451597), -1, sizeof(CP20285_t3349451597_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5160[1] = 
{
	CP20285_t3349451597_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5161 = { sizeof (ENCibm285_t1777145427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5162 = { sizeof (CP20290_t1010799432), -1, sizeof(CP20290_t1010799432_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5162[1] = 
{
	CP20290_t1010799432_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5163 = { sizeof (ENCibm290_t1373926436), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5164 = { sizeof (CP20297_t1010799439), -1, sizeof(CP20297_t1010799439_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5164[1] = 
{
	CP20297_t1010799439_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5165 = { sizeof (ENCibm297_t2940010377), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5166 = { sizeof (CP20420_t1395871466), -1, sizeof(CP20420_t1395871466_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5166[1] = 
{
	CP20420_t1395871466_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5167 = { sizeof (ENCibm420_t1374516262), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5168 = { sizeof (CP20424_t1395871470), -1, sizeof(CP20424_t1395871470_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5168[1] = 
{
	CP20424_t1395871470_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5169 = { sizeof (ENCibm424_t3343884730), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5170 = { sizeof (CP20871_t2147492183), -1, sizeof(CP20871_t2147492183_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5170[1] = 
{
	CP20871_t2147492183_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5171 = { sizeof (ENCibm871_t4103727301), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5172 = { sizeof (CP21025_t3367402627), -1, sizeof(CP21025_t3367402627_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5172[1] = 
{
	CP21025_t3367402627_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5173 = { sizeof (ENCibm1025_t670129495), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5174 = { sizeof (CP37_t108829002), -1, sizeof(CP37_t108829002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5174[1] = 
{
	CP37_t108829002_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5175 = { sizeof (ENCibm037_t2940665735), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5176 = { sizeof (CP500_t2026640899), -1, sizeof(CP500_t2026640899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5176[1] = 
{
	CP500_t2026640899_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5177 = { sizeof (ENCibm500_t1374385189), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5178 = { sizeof (CP708_t2382871261), -1, sizeof(CP708_t2382871261_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5178[1] = 
{
	CP708_t2382871261_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5179 = { sizeof (ENCasmo_708_t562121192), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5180 = { sizeof (CP852_t864169168), -1, sizeof(CP852_t864169168_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5180[1] = 
{
	CP852_t864169168_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5181 = { sizeof (ENCibm852_t2537512288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5182 = { sizeof (CP855_t1623684055), -1, sizeof(CP855_t1623684055_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5182[1] = 
{
	CP855_t1623684055_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5183 = { sizeof (ENCibm855_t1777997401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5184 = { sizeof (CP857_t460884641), -1, sizeof(CP857_t460884641_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5184[1] = 
{
	CP857_t460884641_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5185 = { sizeof (ENCibm857_t2940796815), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5186 = { sizeof (CP858_t2383198942), -1, sizeof(CP858_t2383198942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5186[1] = 
{
	CP858_t2383198942_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5187 = { sizeof (ENCibm00858_t2458074995), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5188 = { sizeof (CP862_t864234704), -1, sizeof(CP862_t864234704_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5188[1] = 
{
	CP862_t864234704_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5189 = { sizeof (ENCibm862_t2537577824), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5190 = { sizeof (CP864_t57665650), -1, sizeof(CP864_t57665650_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5190[1] = 
{
	CP864_t57665650_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5191 = { sizeof (ENCibm864_t3344146878), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5192 = { sizeof (CP866_t3189833532), -1, sizeof(CP866_t3189833532_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5192[1] = 
{
	CP866_t3189833532_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5193 = { sizeof (ENCibm866_t211978996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5194 = { sizeof (CP869_t3949348419), -1, sizeof(CP869_t3949348419_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5194[1] = 
{
	CP869_t3949348419_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5195 = { sizeof (ENCibm869_t3747431405), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5196 = { sizeof (CP870_t2027099654), -1, sizeof(CP870_t2027099654_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5196[1] = 
{
	CP870_t2027099654_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5197 = { sizeof (ENCibm870_t1374843946), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5198 = { sizeof (CP875_t1623815127), -1, sizeof(CP875_t1623815127_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable5198[1] = 
{
	CP875_t1623815127_StaticFields::get_offset_of_ToChars_76(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize5199 = { sizeof (ENCibm875_t1778128473), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
