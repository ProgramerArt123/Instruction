#ifndef __X86_MNEMONIC_SIMD_MMX_32_MOVE_H__
#define __X86_MNEMONIC_SIMD_MMX_32_MOVE_H__
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace MMX
			{
				namespace size32
				{
					namespace move {
						const char *Move_Packed_Logical_Words_Left_64();
						const char *Move_Packed_Logical_Doublewords_Left_64();
						const char *Move_Packed_Logical_Quadword_Left_64();
						const char *Move_Packed_Logical_Words_Right_64();
						const char *Move_Packed_Logical_Doublewords_Right_64();
						const char *Move_Packed_Logical_Quadword_Right_64();
						const char *Move_Packed_Arithmetic_Words_Right_64();
						const char *Move_Packed_Arithmetic_Doublewords_Right_64();
					}
				}
			}
		}
	}
}

#endif