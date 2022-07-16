#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_ARITHMETIC_H__
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
					namespace arithmetic
					{
						const char *Add_Packed_Double_128();
						const char *Add_Scalar_Double_64();
						const char *Subtract_Packed_Double_128();
						const char *Subtract_Scalar_Double_64();
						const char *Multiply_Packed_Double_128();
						const char *Multiply_Scalar_Double_64();
						const char *Divide_Packed_Double_128();
						const char *Divide_Scalar_Double_64();
						const char *Square_Roots_Packed_Double_128();
						const char *Square_Root_Scalar_Double_64();
						const char *Maximum_Packed_Double_128();
						const char *Maximum_Scalar_Double_64();
						const char *Minimum_Packed_Double_128();
						const char *Minimum_Scalar_Double_64();
						const char *Multiply_Packed_Unsigned_Doublewords_64__128();
						const char *Add_Packed_Quadwords_128();
						const char *Subtract_Packed_Quadwords_64_128();
					}
				}
			}
		}
	}
}

#endif