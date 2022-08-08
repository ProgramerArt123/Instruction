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
						const char *Broadcast_Float_128();
						const char *Broadcast_Double_64();
						const char *Broadcast_Single_32();
						const char *Extract_Packed_Float_128();
						const char *Insert_Packed_Float_128();
						const char *Load__Save_Packed_Single_Mask_128__256();
						const char *Load__Save_Packed_Double_Mask_128__256();
						const char *Zero_All_YMM_Registers();
						const char *Zero_Upper_YMM_Registers();
						const char *Transmitted_Scalar_Single_32__128();
						const char *Transmitted_Scalar_Double();
						const char *Transmitted_Two_Packed_Single_High_64();
						const char *Transmitted_Packed_Double_High_64();
						const char *Transmitted_Two_Packed_Single_Low_64();
						const char *Transmitted_Packed_Double_Low_64();
						const char *Transmitted_Two_Packed_Single_Low_High_64();
						const char *Transmitted_Two_Packed_Single_High_Low_64();
						const char *Transmitted_64();
						const char *Transmitted_32();
						const char *Extract_Word();
						const char *Insert_Word();
						const char *Packed_Align_Right_128();
					}
				}
			}
		}
	}
}

#endif