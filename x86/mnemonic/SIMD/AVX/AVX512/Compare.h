#ifndef __X86_MNEMONIC_SIMD_AVX_AVX512_COMPARE_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX512_COMPARE_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace compare {
						const char *Compare_Packed_Signed_Doubleword_128__256__512();
						const char *Compare_Packed_Unsigned_Doubleword_128__256__512();
						const char *Compare_Packed_Signed_Quadword_128__256__512();
						const char *Compare_Packed_Unsigned_Quadword_128__256__512();
					}
				}
			}
		}
	}
}

#endif