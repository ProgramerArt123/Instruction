#include "DataTransmitted.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
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
					const char *Transmitted_Two_Packed_Single_64() {
						return "MOVHPS";
					}
				}
			}
		}
	}
}