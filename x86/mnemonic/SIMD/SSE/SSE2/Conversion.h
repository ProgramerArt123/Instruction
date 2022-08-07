#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_CONVERSION_H__
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
					namespace convertion {
						const char *Convert_Packed_Double_Packed_Doubleword_Integers_128();
						const char *Convert_Truncation_Double_Packed_Doubleword_Integers_128();
						const char *Convert_Packed_Doubleword_Integers_Packed_Double_128();
						const char *Convert_Packed_Single_Packed_Double_64();
						const char *Convert_Packed_Double_Packed_Single_128();
						const char *Convert_Scalar_Single_Scalar_Double_32();
						const char *Convert_Scalar_Double_Scalar_Single_64();
						const char *Convert_Scalar_Double_Doubleword_Integer_64();
						const char *Convert_Truncation_Scalar_Double_Scalar_Doubleword_Integers_64();
						const char *Convert_Doubleword_Integer_Scalar_Double_32__64();
						const char *Convert_Packed_Doubleword_Integers_Packed_Single_128();
						const char *Convert_Packed_Single_Packed_Doubleword_Integers_128();
						const char *Convert_Truncation_Packed_Single_Packed_Doubleword_Integers_128();
					}
				}
			}
		}
	}
}

#endif