#include "Change.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE
				{
					namespace change {
						const char *Shuffles_Packed_Single_Packed_Single_128() {
							return "SHUFPS";
						}
						const char *Unpacks_Interleaves_High_128() {
							return "UNPCKHPS";
						}
						const char *Unpacks_Interleaves_Low_128() {
							return "UNPCKLPS";
						}
					}
				}
			}
		}
	}
}