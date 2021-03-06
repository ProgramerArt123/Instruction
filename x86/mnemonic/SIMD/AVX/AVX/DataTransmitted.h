#ifndef __X86_MNEMONIC_SIMD_AVX_AVX_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX_DATA_TRANSMITTED_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace data_transmitted 
					{
						const char *Transmitted_Aligned_Packed_Single_128__256();
						const char *Transmitted_Aligned_Packed_Double_128__256();
						const char *Transmitted_Aligned_Packed_Integer_128__256();
						const char *Transmitted_Unaligned_Packed_Single_128__256();
						const char *Transmitted_Unaligned_Packed_Double_128__256();
						const char *Transmitted_Unaligned_Packed_Integer_128__256();
						const char *Extract_Packed_Single_Sign_Mask();
						const char *Extract_Packed_Double_Sign_Mask();
						const char *Load_Unaligned_Integer_128__256();
						const char *Store_Packed_Single_Non_Temporal_Hint_128__256();
						const char *Store_Packed_Double_Non_Temporal_Hint_128__256();
						const char *Store_Packed_Integer_Non_Temporal_Hint_128__256();
						const char *Load_Double_Quadword_Non_Temporal_Aligned_Hint_128();
						const char *Replicate_Single_High_FP_128__256();
						const char *Replicate_Single_Low_FP_128__256();
						const char *Replicate_Double_FP_64__256();
						const char *Blend_Packed_Single_128__256();
						const char *Blend_Packed_Double_128__256();
						const char *Variable_Blend_Packed_Single_128__256();
						const char *Variable_Blend_Packed_Double_128__256();
					}
				}
			}
		}
	}
}

#endif