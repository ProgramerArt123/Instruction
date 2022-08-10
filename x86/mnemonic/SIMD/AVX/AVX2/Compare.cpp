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
					}
				}
			}
		}
	}
}