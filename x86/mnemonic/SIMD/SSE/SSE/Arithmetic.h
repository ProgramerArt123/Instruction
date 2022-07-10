#ifndef __X86_MNEMONIC_SIMD_SSE_SSE_ARITHMETIC_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE_ARITHMETIC_H__
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
					namespace arithmetic
					{
						const char *Add_Packed_Single_128();
						const char *Add_Scalar_Single_32();
						const char *Subtract_Packed_Single_128();
						const char *Subtract_Scalar_Single_32();
						const char *Multiply_Packed_Single_128();
						const char *Multiply_Scalar_Single_32();
						const char *Divide_Packed_Single_128();
						const char *Divide_Scalar_Single_32();
						const char *Reciprocals_Packed_Single_128();
						const char *Reciprocal_Scalar_Single_32();
						const char *Square_Roots_Packed_Single_128();
						const char *Square_Root_Scalar_Single_32();
						const char *Square_Roots_Reciprocals_Packed_Single_128();
						const char *Square_Root_Reciprocal_Scalar_Single_32();
						const char *Maximum_Packed_Single_128();
						const char *Maximum_Scalar_Single_32();
						const char *Minimum_Packed_Single_128();
						const char *Minimum_Scalar_Single_32();
						const char *Average_Packed_Unsigned_Byte_Integers_64();
						const char *Average_Packed_Unsigned_Word_Integers_64();
						const char *Maximum_Packed_Unsigned_Byte_Integers_64();
						const char *Maximum_Packed_Signed_Word_Integers_64();
						const char *Minimum_Packed_Unsigned_Byte_Integers_64();
						const char *Minimum_Packed_Signed_Word_Integers_64();
						const char *Multiply_Packed_Unsigned_Integers_High_64();
						const char *Sum_Absolute_Differences_64();
					}
				}
			}
		}
	}
}

#endif