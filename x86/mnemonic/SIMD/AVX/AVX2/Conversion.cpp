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
						const char *Pack_Words_Into_Bytes_Unsigned_256() {
							return "VPACKUSWB";
						}
						const char *Unpack_High_Order_Bytes_256() {
							return "VPUNPCKHBW";
						}
						const char *Unpack_High_Order_Words_256() {
							return "VPUNPCKHWD";
						}
						const char *Unpack_High_Order_Doublewords_256() {
							return "VPUNPCKHDQ";
						}
						const char *Unpack_High_Quadwords_256() {
							return "VPUNPCKHQDQ";
						}
						const char *Pack_Doublewords_Into_Words_Signed_256() {
							return "VPACKSSDW";
						}
						const char *Shuffle_Packed_Doublewords_256() {
							return "VPSHUFD";
						}
						const char *Shuffle_Packed_Low_Words_256() {
							return "VPSHUFLW";
						}
						const char *Shuffle_Packed_High_Words_256() {
							return "VPSHUFHW";
						}
					}
				}
			}
		}
	}
}