#ifndef __X86_MNEMONIC_SIMD_SSE_SSE_CONVERSION_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE_CONVERSION_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace convertion {
						const char *Convert_Packed_Doubleword_Integers_Packed_Single_64();
						const char *Convert_Integers_Scalar_Single_32__64();
						const char *Convert_Packed_Single_Packed_Doubleword_Integers_64();
						const char *Convert_Truncation_Packed_Single_Packed_Doubleword_Integers_64();
						const char *Convert_Scalar_Single_Integer_32();
						const char *Convert_Truncation_Scalar_Single_Integer_32();
					}
				}
			}
		}
	}
}

#endif