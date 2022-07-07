#ifndef __X86_MNEMONIC_SIMD_MMX_32_COMPARE_H__
#define __X86_MNEMONIC_SIMD_MMX_32_COMPARE_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace compare {
						const char *Compare_Packed_Bytes_Equal_64();
						const char *Compare_Packed_Words_Equal_64();
						const char *Compare_Packed_Doublewords_Equal_64();
						const char *Compare_Packed_Signed_Bytes_Greater_64();
						const char *Compare_Packed_Signed_Words_Greater_64();
						const char *Compare_Packed_Signed_Doublewords_Greater_64();
					}
				}
			}
		}
	}
}

#endif