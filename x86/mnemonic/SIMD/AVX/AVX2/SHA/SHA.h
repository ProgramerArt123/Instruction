#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_SHA_SHA_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_SHA_SHA_H__
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
							const char *Intermediate_Calculation_Next_Four_SHA1_Message_Doublewords();
							const char *Final_Calculation_Next_Four_SHA1_Message_Doublewords();
							const char *SHA1_State_Variable_E_After_Four_Rounds();
							const char *Four_Rounds_SHA1();
							const char *Intermediate_Calculation_Next_Four_SHA256_Message_Doublewords();
							const char *Final_Calculation_Next_Four_SHA256_Message_Doublewords();
							const char *Two_Rounds_SHA256();
						}
					}
				}
			}
		}
	}
}

#endif