#include "SHA.h"
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
					namespace SHA
					{
						namespace SHA {
							const char *Intermediate_Calculation_Next_Four_SHA1_Message_Doublewords() {
								return "SHA1MSG1";
							}
							const char *Final_Calculation_Next_Four_SHA1_Message_Doublewords() {
								return "SHA1MSG2";
							}
							const char *SHA1_State_Variable_E_After_Four_Rounds() {
								return "SHA1NEXTE";
							}
							const char *Intermediate_Calculation_Next_Four_SHA256_Message_Doublewords() {
								return "SHA256MSG1";
							}
							const char *Final_Calculation_Next_Four_SHA256_Message_Doublewords() {
								return "SHA256MSG2";
							}
							const char *Two_Rounds_SHA256() {
								return "SHA256RNDS2";
							}
						}
					}
				}
			}
		}
	}
}