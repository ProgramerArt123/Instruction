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
					}
				}
			}
		}
	}
}