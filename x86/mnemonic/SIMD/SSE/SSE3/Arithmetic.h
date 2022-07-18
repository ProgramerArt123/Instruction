#ifndef __X86_MNEMONIC_SIMD_SSE_SSE3_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE3_ARITHMETIC_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE3
				{
					namespace arithmetic
					{
						const char *Single_Add__Sub_128();
						const char *Double_Add__Sub_128();
						const char *Horizontal_Add_Packed_Single_128();
						const char *Horizontal_Subtraction_Packed_Single_128();
						const char *Horizontal_Add_Packed_Double_128();
						const char *Horizontal_Subtraction_Packed_Double_128();
						const char *Horizontal_Add_Words_Packed_64();
						const char *Horizontal_Add_Signed_Words_Packed_64();
						const char *Horizontal_Add_Doublewords_Packed_64__128();
						const char *Horizontal_Subtraction_Words_Packed_64__128();
						const char *Horizontal_Subtraction_Words_Saturated_Packed_64__128();
						const char *Horizontal_Subtraction_Signed_Doublewords_Packed_64__128();
						const char *Multiply__Add_Bytes_64__128();
						const char *Multiply_Signed_Words_Scale_Round_Signed_Doublewords_64__128();
						const char *Absolute_Bytes_64__128();
						const char *Absolute_Words_64__128();
						const char *Absolute_Doublewords_64__128();
						const char *Packed_Sign_Bytes_64__128();
						const char *Packed_Sign_Words_64__128();
						const char *Packed_Sign_Doublewords_64__128();
						
					}
				}
			}
		}
	}
}

#endif