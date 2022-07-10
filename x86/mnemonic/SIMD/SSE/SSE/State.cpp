#include "State.h"
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
					namespace state {
						const char *Load_MXCSR() {
							return "LDMXCSR";
						}
						const char *Save_MXCSR() {
							return "STMXCSR";
						}
					}
				}
			}
		}
	}
}