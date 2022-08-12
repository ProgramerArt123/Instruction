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
					}
				}
			}
		}
	}
}