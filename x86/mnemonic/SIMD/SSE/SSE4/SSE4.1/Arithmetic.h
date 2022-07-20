#ifndef __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_ARITHMETIC_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE4
				{
					namespace SSE4_1
					{
						namespace arithmetic
						{
							const char *Multiply_Packed_Signed_Doublewords_Store_Low_128();
							const char *Multiply_Packed_Signed_Doublewords_Store_Quadwords_128();
							const char *Packed_Double_Dot_Product_128();
							const char *Packed_Single_Dot_Product_128();
							const char *Minimum_Packed_Unsigned_Words_128();
							const char *Minimum_Packed_Unsigned_Doublewords_128();
							const char *Minimum_Packed_Signed_Words_128();
							const char *Minimum_Packed_Signed_Doublewords_128();
							const char *Maximum_Packed_Unsigned_Words_128();
							const char *Maximum_Packed_Unsigned_Doublewords_128();
							const char *Maximum_Packed_Signed_Words_128();
							const char *Maximum_Packed_Signed_Doublewords_128();
							const char *Round_Packed_Single_128();
							const char *Round_Packed_Double_128();
							const char *Round_Scalar_Single_32();
							const char *Round_Scalar_Double_64();
							const char *Absolute_Difference_Sum();
							const char *Packed_Horizontal_Word_Minimum();
						}
					}
				}
			}
		}
	}
}

#endif