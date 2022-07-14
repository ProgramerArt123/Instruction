#include "Conversion.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace convertion {
							
						const char *Convert_Packed_Double_Packed_Doubleword_Integers_128() {
							return "CVTPD2DQ";
						}
						const char *Convert_Truncation_Double_Packed_Doubleword_Integers_128() {
							return "CVTTPD2DQ";
						}
						const char *Convert_Packed_Doubleword_Integers_Packed_Double_128() {
							return "CVTDQ2PD";
						}
						const char *Convert_Packed_Single_Packed_Double_64() {
							return "CVTPS2PD";
						}
						const char *Convert_Packed_Double_Packed_Single_128() {
							return "CVTPD2PS";
						}
						const char *Convert_Scalar_Single_Scalar_Double_32() {
							return "CVTSS2SD";
						}
						const char *Convert_Scalar_Double_Scalar_Single_64() {
							return "CVTSD2SS";
						}
						const char *Convert_Scalar_Double_Doubleword_Integer_64() {
							return "CVTSD2SI";
						}
						const char *Convert_Truncation_Scalar_Double_Scalar_Doubleword_Integers_64() {
							return "CVTTSD2SI";
						}
						const char *Convert_Doubleword_Integer_Scalar_Double_32() {
							return "CVTSI2SD";
						}
					}
				}
			}
		}
	}
}