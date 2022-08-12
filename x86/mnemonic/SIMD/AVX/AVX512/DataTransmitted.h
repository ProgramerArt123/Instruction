#ifndef __X86_MNEMONIC_SIMD_AVX_AVX512_DATA_TRANSMITTED_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX512_DATA_TRANSMITTED_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX512
				{
					namespace data_transmitted 
					{
						const char *Align_Doubleword_Vectors_128__256__512();
						const char *Align_Quadword_Vectors_128__256__512();
						const char *Blend_Single_Vectors_OpMask_Control_128__256__512();
						const char *Blend_Double_Vectors_OpMask_Control_128__256__512();
						const char *Save_Sparse_Packed_Double_Dense_128__256__512();
						const char *Save_Sparse_Packed_Single_Dense_128__256__512();
					}
				}
			}
		}
	}
}

#endif