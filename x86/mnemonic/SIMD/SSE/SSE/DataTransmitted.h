#ifndef __X86_MNEMONIC_SIMD_SSE_SSE_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE_DATA_TRANSMITTED_H__
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
					namespace data_transmitted 
					{
						const char *Transmitted_Four_Aligned_Packed_Single_128();
						const char *Transmitted_Four_Unaligned_Packed_Single_128();
						const char *Transmitted_Two_Packed_Single_High_64();
						const char *Transmitted_Two_Packed_Single_High_Low_64();
						const char *Transmitted_Two_Packed_Single_Low_64();
						const char *Transmitted_Two_Packed_Single_Low_High_64();
						const char *Extract_Sign_Mask_Four_Packed_Single_128();
						const char *Transmitted_Scalar_Single_32__128();
					}
				}
			}
		}
	}
}

#endif