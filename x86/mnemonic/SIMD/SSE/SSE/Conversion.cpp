#include "Conversion.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace convertion {
						const char *Convert_Packed_Doubleword_Integers_Packed_Single_64() {
							return "CVTPI2PS";
						}
						const char *Convert_Integers_Scalar_Single_32__64() {
							return "CVTSI2SS";
						}
						const char *Convert_Packed_Single_Packed_Doubleword_Integers_64() {
							return "CVTPS2PI";
						}
						const char *Convert_Truncation_Packed_Single_Packed_Doubleword_Integers_64() {
							return "CVTTPS2PI";
						}
						const char *Convert_Scalar_Single_Integer_32__64() {
							return "CVTSS2SI";
						}
						const char *Convert_Truncation_Scalar_Single_Integer_32__64() {
							return "CVTTSS2SI";
						}
					}
				}
			}
		}
	}
}