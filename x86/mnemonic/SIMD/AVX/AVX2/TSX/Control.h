#ifndef __X86_MNEMONIC_SIMD_AVX_AVX2_TSX_CONTROL_H__
#define __X86_MNEMONIC_SIMD_AVX_AVX2_TSX_CONTROL_H__
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
					namespace TSX
					{
						namespace control {
							const char *Transactional_Abort();
							const char *Hardware_Lock_Elision_Prefix_Hints();
							const char *Hardware_Unlock_Elision_Prefix_Hints();
							const char *Transactional_Begin();
							const char *Transactional_End();
							const char *Transactional_Begin();
							const char *Test_Transactional_Region();
						}
					}
				}
			}
		}
	}
}

#endif