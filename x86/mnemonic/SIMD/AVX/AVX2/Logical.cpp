#include "Logical.h"
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
					namespace logical {
						const char *Logical_AND_256() {
							return "VPAND";
						}
						const char *Logical_And_Not_256() {
							return "VPANDN";
						}
						const char *Logical_Or_256() {
							return "POR";
						}
						const char *Logical_Exclusive_Or_256() {
							return "VPXOR";
						}
					}
				}
			}
		}
	}
}