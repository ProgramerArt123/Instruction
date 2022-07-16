#include "Change.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE2
				{
					namespace change {
						const char *Shuffles_Packed_Double_128() {
							return "SHUFPD";
						}
						const char *Unpacks_Interleaves_High_128() {
							return "UNPCKHPD";
						}
						const char *Unpacks_Interleaves_Low_128() {
							return "UNPCKLPD";
						}
						const char *Shuffle_Packed_Low_Words_128() {
							return "PSHUFLW";
						}
						const char *Shuffle_Packed_High_Words_128() {
							return "PSHUFHW";
						}
						const char *Shuffle_Packed_Doublewords_128() {
							return "PSHUFD";
						}
						const char *Shift_Two_Quadword_Left() {
							return "PSLLDQ";
						}
						const char *Shift_Two_Quadword_Right() {
							return "PSRLDQ";
						}
						const char *Unpack_High_Quadwords_128() {
							return "PUNPCKHQDQ";
						}
						const char *Unpack_Low_Quadwords_128() {
							return "PUNPCKLQDQ";
						}
					}
				}
			}
		}
	}
}