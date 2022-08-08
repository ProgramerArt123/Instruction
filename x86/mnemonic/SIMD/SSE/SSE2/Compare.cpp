#include "Compare.h"
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
					namespace compare {
						const char *Compare_Packed_Double_128() {
							return "CMPPD";
						}
						const char *Compare_Scalar_Double_64() {
							return "CMPSD";
						}
						const char *Compare_Ordered_Scalar_Double_EFLAGS_64() {
							return "COMISD";
						}
						const char *Compare_Unordered_Scalar_Double_EFLAGS_64() {
							return "UCOMISD";
						}
						const char *Compare_Packed_Signed_Bytes_Greater_128() {
							return "PCMPGTB";
						}
						const char *Compare_Packed_Signed_Words_Greater_128() {
							return "PCMPGTW";
						}
						const char *Compare_Packed_Signed_Doublewords_Greater_128() {
							return "PCMPGTD";
						}
					}
				}
			}
		}
	}
}