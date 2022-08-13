#include "Conversion.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace convertion {
						const char *Convert_Packed_Double_Packed_Unsigned_Doubleword_Integers_128__256__512() {
							return "VCVTPD2UDQ";
						}
						const char *Convert_Truncation_Packed_Double_Packed_Unsigned_Doubleword_Integers_128__256__512() {
							return "VCVTTPD2UDQ";
						}
						const char *Convert_Packed_Single_Packed_Unsigned_Doubleword_Integers_128__256__512() {
							return "VCVTPS2UDQ";
						}
						const char *Convert_Truncation_Packed_Single_Packed_Unsigned_Doubleword_Integers_128__256__512() {
							return "VCVTTPS2UDQ";
						}
						const char *Convert_Packed_Quadword_Integers_Packed_Double_128__256__512() {
							return "VCVTQQ2PD";
						}
						const char *Convert_Packed_Quadword_Integers_Packed_Single_128__256__512() {
							return "VCVTQQ2PS";
						}
						const char *Convert_Scalar_Double_Unsigned_Doubleword_Integer() {
							return "VCVTSD2USI";
						}
						const char *Convert_Truncation_Scalar_Double_Unsigned_Doubleword_Integer() {
							return "VCVTTSD2USI";
						}
						const char *Convert_Scalar_Single_Unsigned_Doubleword_Integer() {
							return "VCVTSS2USI";
						}
						const char *Convert_Truncation_Scalar_Single_Unsigned_Doubleword_Integer() {
							return "VCVTTSS2USI";
						}
						const char *Convert_Packed_Unsigned_Doubleword_Integers_Packed_Double_64__128__256() {
							return "VCVTUDQ2PD";
						}
						const char *Convert_Packed_Unsigned_Doubleword_Integers_Packed_Single_128__256__512() {
							return "VCVTUDQ2PS";
						}
						const char *Convert_Unsigned_Integer_Scalar_Double_32__64() {
							return "VCVTUSI2SD";
						}
						const char *Convert_Unsigned_Integer_Scalar_Single_32__64() {
							return "VCVTUSI2SS";
						}
						const char *Convert_Exponents_Packed_Double_128__256__512() {
							return "VGETEXPPD";
						}
						const char *Convert_Exponents_Packed_Single_128__256__512() {
							return "VGETEXPPS";
						}
						const char *Convert_Exponents_Scalar_Double() {
							return "VGETEXPSD";
						}
						const char *Convert_Exponents_Scalar_Single() {
							return "VGETEXPSS";
						}
						const char *Extract_Double_Vector_Normalized_Mantissas_Double_Vector_128__256__512() {
							return "VGETMANTPD";
						}
						const char *Extract_Single_Vector_Normalized_Mantissas_Single_Vector_128__256__512() {
							return "VGETMANTPS";
						}
						const char *Extract_Double_Normalized_Mantissas_Double_Scalar() {
							return "VGETMANTSD";
						}
						const char *Extract_Single_Vector_Normalized_Mantissa_Single_Vector() {
							return "VGETMANTSS";
						}
						const char *Insert_Packed_Single_128() {
							return "VINSERTF32X4";
						}
						const char *Insert_Packed_Double_256() {
							return "VINSERTF64X4";
						}
						const char *Move_Aligned_Packed_Doubleword_128__256__512() {
							return "VMOVDQA32";
						}
						const char *Move_Aligned_Packed_Quadword_128__256__512() {
							return "VMOVDQA64";
						}
						const char *Move_Unaligned_Packed_Doubleword_128__256__512() {
							return "VMOVDQU32";
						}
						const char *Move_Unaligned_Packed_Quadword_128__256__512() {
							return "VMOVDQU64";
						}
					}
				}
			}
		}
	}
}