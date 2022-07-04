#include "Conversion.h"
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
					namespace convertion {
						const char *Pack_Words_Into_Bytes_Signed_64() {
							return "PACKSSWB";
						}
						const char *Pack_Doublewords_Into_Words_Signed_64() {
							return "PACKSSDW";
						}
						const char *Pack_Words_Into_Bytes_Unsigned_64() {
							return "PACKUSWB";
						}
						const char *Unpack_High_Order_Bytes_64() {
							return "PUNPCKHBW";
						}
					}
				}
			}
		}
	}
}