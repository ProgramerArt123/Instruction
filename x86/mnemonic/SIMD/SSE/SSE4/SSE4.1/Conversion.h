#ifndef __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_CONVERSION_H__
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
						namespace convertion
						{
							const char *Sign_Extend_Byte_Packed_Words_64();
							const char *Zero_Extend_Byte_Packed_Words_64();
							const char *Sign_Extend_Byte_Packed_Doublewords();
							const char *Zero_Extend_Byte_Packed_Doublewords();
							const char *Sign_Extend_Word_Packed_Doublewords_64();
							const char *Zero_Extend_Word_Packed_Doublewords_64();
							const char *Sign_Extend_Byte_Packed_Quadwords_16();
							const char *Zero_Extend_Byte_Packed_Quadwords_16();
							const char *Sign_Extend_Word_Packed_Quadwords_32();
							const char *Zero_Extend_Word_Packed_Quadwords_32();
							const char *Sign_Extend_Doubleword_Packed_Quadwords_64();
							const char *Zero_Extend_Doubleword_Packed_Quadwords_64();
							const char *Pack_Unsigned_Saturation_128();
						}
					}
				}
			}
		}
	}
}

#endif