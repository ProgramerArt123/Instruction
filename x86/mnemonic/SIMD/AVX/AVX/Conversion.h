#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_CONVERSION_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace convertion {
						const char *Convert_Packed_Single_Packed_Double_64__128();
						const char *Convert_Packed_Double_Packed_Single_128__256();
						const char *Convert_Packed_Doubleword_Packed_Single_128__256();
						const char *Convert_Packed_Single_Packed_Doubleword_128__256();	
						const char *Convert_Truncation_Packed_Single_Packed_Signed_Doubleword_128__256();
						const char *Convert_Truncation_Packed_Double_Packed_Doubleword_128__256();
						const char *Convert_Packed_Double_Packed_Doubleword_128__256();
						const char *Convert_Packed_Doubleword_Packed_Double_64__128();
					}
				}
			}
		}
	}
}

#endif