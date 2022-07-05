#include "Logical.h"
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
					namespace logical {
						const char *Logical_AND_64() {
							return "PAND";
						}
						const char *Logical_And_Not_64() {
							return "PANDN";
						}
						const char *Logical_Or_64() {
							return "POR";
						}
						const char *Logical_Exclusive_Or_64() {
							return "PXOR";
						}
					}
				}
			}
		}
	}
}