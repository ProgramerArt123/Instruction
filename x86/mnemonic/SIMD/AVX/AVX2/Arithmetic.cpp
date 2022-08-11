#include "Arithmetic.h"
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
					namespace arithmetic
					{
						const char *Add_Packed_Quadwords_256() {
							return "VPADDQ";
						}
						const char *Multiply_Packed_Signed_Doublewords_256() {
							return "VPMULLW";
						}
					}
				}
			}
		}
	}
}