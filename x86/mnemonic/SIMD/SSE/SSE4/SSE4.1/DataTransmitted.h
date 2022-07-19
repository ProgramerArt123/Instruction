#ifndef __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE4_SSE4_1_DATA_TRANSMITTED_H__
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
						namespace data_transmitted
						{
							const char *Load_Two_Quadwords_Non_Temporal_Aligned_Hint_128();
							const char *Blend_Packed_Double_128();
							const char *Blend_Packed_Single_128();
							const char *Variable_Blend_Packed_Double_128();
							const char *Variable_Blend_Packed_Single_128();
							const char *Variable_Blend_Packed_Bytes_128();
							const char *Blend_Packed_Words_128();
							const char *Extract_Packed_Single_32();
							const char *Insert_Scalar_Single_32();
							const char *Insert_Byte();
							const char *Insert_Doubleword();
							const char *Insert_Quadword();
							const char *Extract_Byte();
							const char *Extract_Word();
							const char *Extract_Doubleword();
							const char *Extract_Quadword();
						}
					}
				}
			}
		}
	}
}

#endif