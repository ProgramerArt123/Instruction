#include "Change.h"
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
						
						const char *Move_Packed_Words_Right_Logical() {
							return "VPSRLW";
						}
						const char *Move_Packed_Doublewords_Right_Logical() {
							return "VPSRLD";
						}
						const char *Move_Packed_Quadwords_Right_Logical() {
							return "VPSRLQ";
						}
						const char *Move_Packed_Words_Right_Arithmetic() {
							return "VPSRAW";
						}
						const char *Move_Packed_Doublewords_Right_Arithmetic() {
							return "VPSRAD";
						}
						const char *Move_Packed_Words_Left_Logical() {
							return "VPSLLW";
						}
						const char *Move_Packed_Doublewords_Left_Logical() {
							return "VPSLLD";
						}
						const char *Move_Packed_Quadwords_Left_Logical() {
							return "VPSLLQ";
						}
					}
				}
			}
		}
	}
}