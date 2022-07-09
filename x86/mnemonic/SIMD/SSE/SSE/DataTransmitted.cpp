#include "DataTransmitted.h"
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
					namespace data_transmitted 
					{
						const char *Transmitted_Four_Aligned_Packed_Single_128() {
							return "MOVAPS";
						}
						const char *Transmitted_Four_Unaligned_Packed_Single_128() {
							return "MOVUPS";
						}
						const char *Transmitted_Two_Packed_Single_High_64() {
							return "MOVHPS";
						}
						const char *Transmitted_Two_Packed_Single_High_Low_64() {
							return "MOVHLPS";
						}
						const char *Transmitted_Two_Packed_Single_Low_64() {
							return "MOVLPS";
						}
						const char *Transmitted_Two_Packed_Single_Low_High_64() {
							return "MOVLHPS";
						}
						const char *Extract_Sign_Mask_Four_Packed_Single_128() {
							return "MOVMSKPS";
						}
						const char *Transmitted_Scalar_Single_32__128() {
							return "MOVSS";
						}
					}
				}
			}
		}
	}
}