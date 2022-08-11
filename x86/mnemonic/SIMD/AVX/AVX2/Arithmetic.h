#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_ARITHMETIC_H__
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
					namespace arithmetic
					{
						const char *Add_Packed_Quadwords_256();
						const char *Multiply_Packed_Signed_Doublewords_256();
						const char *Move_Byte_Mask();
						const char *Subtract_Packed_Unsigned_Bytes_256();
						const char *Subtract_Packed_Unsigned_Words_256();
						const char *Minimum_Packed_Unsigned_Bytes_256();
					}
				}
			}
		}
	}
}

#endif