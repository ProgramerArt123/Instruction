#include "Conversion.h"
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
					namespace convertion {
						const char *Unpack_Low_Order_Bytes_256() {
							return "VPUNPCKLBW";
						}
						const char *Unpack_Low_Order_Words_256() {
							return "VPUNPCKLWD";
						}
						const char *Unpack_Low_Order_Doublewords_256() {
							return "VPUNPCKLDQ";
						}
						const char *Unpack_Low_Order_Quadwords_256() {
							return "VPUNPCKLQDQ";
						}
						const char *Pack_Words_Into_Bytes_Signed_256() {
							return "VPACKSSWB";
						}
					}
				}
			}
		}
	}
}