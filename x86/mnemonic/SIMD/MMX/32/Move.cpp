#include "Move.h"
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
						const char *Move_Packed_Logical_Words_Left_64() {
							return "PSLLW";
						}
						const char *Move_Packed_Logical_Doublewords_Left_64() {
							return "PSLLD";
						}
						const char *Move_Packed_Logical_Quadword_Left_64() {
							return "PSLLQ";
						}
						const char *Move_Packed_Logical_Words_Right_64() {
							return "PSRLW";
						}
						const char *Move_Packed_Logical_Doublewords_Right_64() {
							return "PSRLD";
						}
						const char *Move_Packed_Logical_Quadword_Right_64() {
							return "PSRLQ";
						}
						const char *Move_Packed_Arithmetic_Words_Right_64() {
							return "PSRAW";
						}
						const char *Move_Packed_Arithmetic_Doublewords_Right_64() {
							return "PSRAD";
						}
					}
				}
			}
		}
	}
}