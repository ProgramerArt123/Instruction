#include "Compare.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace compare {
						const char *Compare_Packed_Bytes_Equal_64() {
							return "PCMPEQB";
						}
						const char *Compare_Packed_Words_Equal_64() {
							return "PCMPEQW";
						}
						const char *Compare_Packed_Doublewords_Equal_64() {
							return "PCMPEQD";
						}
						const char *Compare_Packed_Signed_Bytes_Greater_64() {
							return "PCMPGTB";
						}
						const char *Compare_Packed_Signed_Words_Greater_64() {
							return "PCMPGTW";
						}
						const char *Compare_Packed_Signed_Doublewords_Greater_64() {
							return "PCMPGTD";
						}
					}
				}
			}
		}
	}
}