#ifndef __X86_MNEMONIC_SIMD_SSE_SSE2_64_CONTROL_H__
#define __X86_MNEMONIC_SIMD_SSE_SSE2_64_CONTROL_H__
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
							const char *Flush_Cache_Line();
							const char *Load_Fence();
							const char *Memory_Fence();
							const char *Spin_Loop_Hint();
						}
					}
				}
			}
		}
	}
}

#endif