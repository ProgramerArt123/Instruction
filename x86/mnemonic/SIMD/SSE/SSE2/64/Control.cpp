#include "Control.h"
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
					namespace size64
					{
						namespace control {
							const char *Flush_Cache_Line() {
								return "CLFLUSH";
							}
							const char *Load_Fence() {
								return "LFENCE";
							}
							const char *Memory_Fence() {
								return "MFENCE";
							}
							const char *Spin_Loop_Hint() {
								return "PAUSE";
							}
						}
					}
				}
			}
		}
	}
}