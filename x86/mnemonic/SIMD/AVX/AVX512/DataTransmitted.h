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
						const char *Load_Sparse_Packed_Double_Dense_Memory_128__256__512();
						const char *Load_Sparse_Packed_Single_Dense_Memory_128__256__512();
						const char *Extract_Packed_Single_128();
						const char *Extract_Packed_Double_128();
						const char *Extract_Packed_Doublewords_128();
						const char *Extract_Packed_Quadwords_256();
						const char *Fix_Up_Special_Packed_Double_128__256__512();
						const char *Fix_Up_Special_Packed_Single_128__256__512();
						const char *Fix_Up_Special_Scalar_Double();
						const char *Fix_Up_Special_Scalar_Single();
						const char *Blend_Doubleword_Vectors_OpMask_Control_128__256__512();
						const char *Blend_Quadword_Vectors_OpMask_Control_128__256__512();
						const char *Broadcast_Doubleword_GPR_128__256__512();
						const char *Broadcast_Quadword_GPR_128__256__512();
						const char *Save_Sparse_Packed_Quadword_128__256__512();
						const char *Save_Sparse_Packed_Doubleword_128__256__512();
						const char *Save_Doublewords_Two_Tables_128__256__512();
						const char *Save_Quadwords_Two_Tables_128__256__512();
						const char *Save_Double_Two_Tables_128__256__512();
						const char *Save_Single_Two_Tables_128__256__512();
					}
				}
			}
		}
	}
}

#endif