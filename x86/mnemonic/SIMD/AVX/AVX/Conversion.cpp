#include "Conversion.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace convertion {
						const char *Convert_Packed_Single_Packed_Double_64__128() {
							return "VCVTPS2PD";
						}
						const char *Convert_Packed_Double_Packed_Single_128__256() {
							return "VCVTPD2PS";
						}
						const char *Convert_Packed_Doubleword_Packed_Single_128__256() {
							return "VCVTDQ2PS";
						}
						const char *Convert_Packed_Single_Packed_Doubleword_128__256() {
							return "VCVTPS2DQ";
						}
						const char *Convert_Truncation_Packed_Single_Packed_Signed_Doubleword_128__256() {
							return "VCVTTPS2DQ";
						}
						const char *Convert_Truncation_Packed_Double_Packed_Doubleword_128__256() {
							return "VCVTTPD2DQ";
						}
						const char *Convert_Packed_Double_Packed_Doubleword_128__256() {
							return "VCVTPD2DQ";
						}
						const char *Convert_Packed_Doubleword_Packed_Double_64__128() {
							return "VCVTDQ2PD";
						}
						const char *Unpack_Interleave_High_Packed_Double_128__256() {
							return "VUNPCKHPD";
						}
						const char *Unpack_Interleave_High_Packed_Single_128__256() {
							return "VUNPCKHPS";
						}
						const char *Unpack_Interleave_Low_Packed_Double_128__256() {
							return "VUNPCKLPD";
						}
						const char *Sign_Extend_Byte_Packed_Words_64() {
							return "VPMOVSXBW";
						}
						const char *Zero_Extend_Byte_Packed_Words_64() {
							return "VPMOVZXBW";
						}
						const char *Sign_Extend_Byte_Packed_Doublewords() {
							return "VPMOVSXBD";
						}
						const char *Zero_Extend_Byte_Packed_Doublewords() {
							return "VPMOVZXBD";
						}
						const char *Sign_Extend_Word_Packed_Doublewords_64() {
							return "VPMOVSXWD";
						}
						const char *Zero_Extend_Word_Packed_Doublewords_64() {
							return "VPMOVZXWD";
						}
						const char *Sign_Extend_Byte_Packed_Quadwords_16() {
							return "VPMOVSXBQ";
						}
						const char *Zero_Extend_Byte_Packed_Quadwords_16() {
							return "VPMOVZXBQ";
						}
						const char *Sign_Extend_Word_Packed_Quadwords_32() {
							return "VPMOVSXWQ";
						}
						const char *Zero_Extend_Word_Packed_Quadwords_32() {
							return "VPMOVZXWQ";
						}
						const char *Sign_Extend_Doubleword_Packed_Quadwords_64() {
							return "VPMOVSXDQ";
						}
						const char *Zero_Extend_Doubleword_Packed_Quadwords_64() {
							return "VPMOVZXDQ";
						}
						const char *Convert_Integers_Scalar_Single_32__64() {
							return "VCVTSI2SS";
						}
						const char *Convert_Doubleword_Integer_Scalar_Double_32__64() {
							return "VCVTSI2SD";
						}
						const char *Convert_Scalar_Double_Doubleword_Integer_64() {
							return "VCVTSD2SI";
						}
						const char *Convert_Truncation_Scalar_Single_Integer_32() {
							return "VCVTTSS2SI";
						}
						const char *Convert_Truncation_Scalar_Double_Scalar_Doubleword_Integers_64() {
							return "VCVTTSD2SI";
						}
						const char *Convert_Scalar_Single_Integer_32() {
							return "VCVTSS2SI";
						}
						const char *Convert_Scalar_Single_Scalar_Double_32() {
							return "VCVTSS2SD";
						}
						const char *Convert_Scalar_Double_Scalar_Single_64() {
							return "VCVTSD2SS";
						}
						const char *Pack_Words_Into_Bytes_Unsigned_128() {
							return "VPACKUSWB";
						}
						const char *Pack_Doublewords_Into_Words_Signed_128() {
							return "VPACKSSDW";
						}
						const char *Pack_Words_Into_Bytes_Signed_128() {
							return "VPACKSSWB";
						}
						const char *Unpack_High_Order_Bytes_128() {
							return "VPUNPCKHBW";
						}
						const char *Unpack_High_Order_Words_128() {
							return "VPUNPCKHWD";
						}
						const char *Unpack_Low_Order_Bytes_128() {
							return "VPUNPCKLBW";
						}
						const char *Unpack_Low_Order_Words_128() {
							return "VPUNPCKLWD";
						}
						const char *Unpack_High_Order_Doublewords_128() {
							return "VPUNPCKHDQ";
						}
						const char *Unpack_Low_Order_Doublewords_128() {
							return "VPUNPCKLDQ";
						}
						const char *Unpack_Low_Quadwords_128() {
							return "VPUNPCKLQDQ";
						}
						const char *Unpack_High_Quadwords_128() {
							return "VPUNPCKHQDQ";
						}
						const char *Pack_Unsigned_Saturation_128() {
							return "VPACKUSDW";
						}
					}
				}
			}
		}
	}
}