#ifndef __X86_MNEMONIC_SIMD_MMX_32_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_MMX_32_ARITHMETIC_H__
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
					namespace arithmetic
					{
						const char *Add_Packed_Bytes_64();
						const char *Add_Packed_Words_64();
						const char *Add_Packed_Doublewords_64();
						const char *Add_Packed_Signed_Bytes_64();
						const char *Add_Packed_Signed_Words_64();
						const char *Add_Packed_Unsigned_Bytes_64();
						const char *Add_Packed_Unsigned_Words_64();
						const char *Subtract_Packed_Bytes_64();
						const char *Subtract_Packed_Words_64();
						const char *Subtract_Packed_Doublewords_64();
						const char *Subtract_Packed_Signed_Bytes_64();
						const char *Subtract_Packed_Signed_Words_64();
						const char *Subtract_Packed_Unsigned_Bytes_64();
						const char *Subtract_Packed_Unsigned_Words_64();
						const char *Multiply_Packed_Signed_Words_High_64();
						const char *Multiply_Packed_Signed_Words_Low_64();
						const char *Multiply_Add_Packed_Words_64();
					}
				}
			}
		}
	}
}

#endif