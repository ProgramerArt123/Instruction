#include "Synchronization.h"
namespace x86
{
	namespace mnemonic 
	{
		namespace SIMD
		{
			namespace SSE
			{
				namespace SSE3
				{
					namespace size64
					{
						namespace synchronization 
						{
							const char *Set_Up_Monitor_Address() {
								return "MONITOR";
							}
							const char *Monitor_Wait() {
								return "MWAIT";
							}
						}
					}
				}
			}
		}
	}
}