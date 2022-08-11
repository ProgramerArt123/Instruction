#include "Compare.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX2
				{
					namespace compare {
						const char *Compare_Packed_Signed_Bytes_Greater_256() {
							return "VPCMPGTB";
						}
						const char *Compare_Packed_Signed_Words_Greater_256() {
							return "VPCMPGTW";
						}
						const char *Compare_Packed_Signed_Doublewords_Greater_256() {
							return "VPCMPGTD";
						}
						const char *Compare_Packed_Bytes_256() {
							return "VPCMPEQB";
						}
						const char *Compare_Packed_Words_256() {
							return "VPCMPEQW";
						}
						const char *Compare_Packed_Doublewords_256() {
							return "VPCMPEQD";
						}
						const char *Compare_Packed_Quadwords_256() {
							return "VPCMPEQQ";
						}
						const char *Compare_Packed_Signed_Quadwords_256() {
							return "VPCMPGTQ";
						}
					}
				}
			}
		}
	}
}