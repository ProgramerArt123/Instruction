#include "State.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace AVX
			{
				namespace AVX
				{
					namespace state {
						const char *Load_MXCSR() {
							return "VLDMXCSR";
						}
						const char *Save_MXCSR() {
							return "VSTMXCSR";
						}
					}
				}
			}
		}
	}
}