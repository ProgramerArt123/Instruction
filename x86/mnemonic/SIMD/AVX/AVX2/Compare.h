#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_COMPARE_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_COMPARE_H__
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
					namespace compare {
						const char *Compare_Packed_Signed_Bytes_Greater_256();
						const char *Compare_Packed_Signed_Words_Greater_256();
						const char *Compare_Packed_Signed_Doublewords_Greater_256();
						const char *Compare_Packed_Bytes_256();
						const char *Compare_Packed_Words_256();
						const char *Compare_Packed_Doublewords_256();
					}
				}
			}
		}
	}
}

#endif