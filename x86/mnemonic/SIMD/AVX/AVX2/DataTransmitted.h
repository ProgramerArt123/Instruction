#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_DATA_TRANSMITTED_H__
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
					namespace data_transmitted 
					{
						const char *Load_Double_Quadword_Non_Temporal_Aligned_Hint_256();
						const char *Variable_Blend_Packed_Bytes_256();
						const char *Blend_Packed_Words_256();
						const char *Broadcast_Float_128();
						const char *Broadcast_Double_128();
						const char *Broadcast_Single_128();
						const char *Extract_Packed_Float_128();
						const char *Insert_Packed_Float_128();
						const char *Load__Save_Packed_Single_Mask_128__256();
						const char *Load__Save_Packed_Double_Mask_128__256();
						const char *Blend_Packed_Dwords_128__256();
					}
				}
			}
		}
	}
}

#endif