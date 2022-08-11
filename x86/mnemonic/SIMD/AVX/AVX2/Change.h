#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_CHANGE_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_CHANGE_H__
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
					namespace change {
						
						const char *Move_Packed_Words_Right_Logical();
						const char *Move_Packed_Doublewords_Right_Logical();
						const char *Move_Packed_Quadwords_Right_Logical();
						const char *Move_Packed_Words_Right_Arithmetic();
						const char *Move_Packed_Doublewords_Right_Arithmetic();
						const char *Move_Packed_Words_Left_Logical();
						const char *Move_Packed_Doublewords_Left_Logical();
						const char *Move_Packed_Quadwords_Left_Logical();
						const char *Permute_Float_256();
						const char *Permute_Packed_Doublewords_Words_Elements_256();
						const char *Permute_Single_Elements_256();
						const char *Permute_Quadwords_256();
						const char *Permute_Double_Elements_256();
						const char *Move_Doublewords_Left_Logical_128_256();
						const char *Move_Quadwords_Left_Logical_128_256();
						const char *Move_Doublewords_Right_Arithmetic_128_256();
						const char *Move_Doublewords_Right_Logical_128_256();
						const char *Move_Quadwords_Right_Logical_128_256();
						const char *Gather_Packed_Double_Signed_Doubleword_Indices();
						const char *Gather_Packed_Double_Signed_Quadword_Indices();
						const char *Gather_Packed_Single_Signed_Doubleword_Indices();
						const char *Gather_Packed_Single_Signed_Quadword_Indices();
						const char *Gather_Packed_Doubleword_Signed_Doubleword_Indices();
						const char *Gather_Packed_Doubleword_Signed_Quadword_Indices();
						const char *Gather_Packed_Quadword_Signed_Doubleword_Indices();
						const char *Gather_Packed_Quadword_Signed_Quadword_Indices();
					}
				}
			}
		}
	}
}

#endif