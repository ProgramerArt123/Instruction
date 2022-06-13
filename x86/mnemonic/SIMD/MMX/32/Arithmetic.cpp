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
						const char *Add_Packed_Bytes_64__128() {
							return "PADDB";
						}
						const char *Add_Packed_Words_64__128() {
							return "PADDW";
						}
						const char *Add_Packed_Doublewords_128() {
							return "PADDD";
						}
					}
				}
			}
		}
	}
}