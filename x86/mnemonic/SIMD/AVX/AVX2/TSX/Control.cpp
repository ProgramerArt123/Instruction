#include "Control.h"
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
							const char *Transactional_Abort() {
								return "XABORT";
							}
							const char *Hardware_Lock_Elision_Prefix_Hints() {
								return "XACQUIRE";
							}
							const char *Hardware_Unlock_Elision_Prefix_Hints() {
								return "XRELEASE";
							}
							const char *Transactional_Begin() {
								return "XBEGIN";
							}
							const char *Transactional_End() {
								return "XEND";
							}
							const char *Test_Transactional_Region() {
								return "XTEST";
							}
						}
					}
				}
			}
		}
	}
}