#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_COMPARE_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_COMPARE_H__
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
					namespace compare {
						const char *Compare_Packed_Single_128__256();
						const char *Compare_Packed_Double_128__256();
						const char *Logical_Compare_128__256();
						const char *Packed_Bit_Test_Single_128__256();
						const char *Packed_Bit_Test_Double_128__256();
						const char *Compare_Packed_Bytes_128();
						const char *Compare_Packed_Words_128();
						const char *Compare_Packed_Doublewords_128();
						const char *Compare_Packed_Signed_Quadwords_128();
					}
				}
			}
		}
	}
}

#endif