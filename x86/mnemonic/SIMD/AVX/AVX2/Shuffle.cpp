#include "Shuffle.h"
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
						const char *Packed_Shuffle_Bytes_256() {
							return "VPSHUFB";
						}
					}
				}
			}
		}
	}
}