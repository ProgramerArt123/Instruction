#include "Arithmetic.h"
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
					namespace arithmetic
					{
						const char *Add_Packed_Bytes_64() {
							return "PADDB";
						}
						const char *Add_Packed_Words_64() {
							return "PADDW";
						}
						const char *Add_Packed_Doublewords_64() {
							return "PADDD";
						}
						const char *Add_Packed_Signed_Bytes_64() {
							return "PADDSB";
						}
						const char *Add_Packed_Signed_Words_64() {
							return "PADDSW";
						}
						const char *Add_Packed_Unsigned_Bytes_64() {
							return "PADDUSB";
						}
						const char *Add_Packed_Unsigned_Words_64() {
							return "PADDUSW";
						}
						const char *Subtract_Packed_Bytes_64() {
							return "PSUBB";
						}
						const char *Subtract_Packed_Words_64() {
							return "PSUBW";
						}
						const char *Subtract_Packed_Doublewords_64() {
							return "PSUBD";
						}
						const char *Subtract_Packed_Signed_Bytes_64() {
							return "PSUBSB";
						}
						const char *Subtract_Packed_Signed_Words_64() {
							return "PSUBSW";
						}
						const char *Subtract_Packed_Unsigned_Bytes_64() {
							return "PSUBUSB";
						}
						const char *Subtract_Packed_Unsigned_Words_64() {
							return "PSUBUSW";
						}
						const char *Multiply_Packed_Signed_Words_High_64() {
							return "PMULHW";
						}
						const char *Multiply_Packed_Signed_Words_Low_64() {
							return "PMULLW";
						}
						const char *Multiply_Add_Packed_Words_64() {
							return "PMADDWD";
						}
					}
				}
			}
		}
	}
}