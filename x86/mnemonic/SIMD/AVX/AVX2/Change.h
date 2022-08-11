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
					}
				}
			}
		}
	}
}

#endif