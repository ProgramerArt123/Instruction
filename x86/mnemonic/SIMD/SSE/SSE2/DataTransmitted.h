#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_DATA_TRANSMITTED_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace data_transmitted 
					{
						const char *Transmitted_Two_Aligned_Packed_Double_128();
						const char *Transmitted_Two_Unaligned_Packed_Double_128();
						const char *Transmitted_Packed_Double_High_64();
						const char *Transmitted_Packed_Double_Low_64();
						const char *Extract_Sign_Mask_Two_Packed_Double();
						const char *Transmitted_Scalar_Double();
					}
				}
			}
		}
	}
}

#endif