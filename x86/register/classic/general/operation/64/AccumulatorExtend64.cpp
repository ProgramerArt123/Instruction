#include "x86/register/classic/general/operation/AccumulatorExtend.h"
#include "AccumulatorExtend64.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace operation
				{
					namespace size64
					{
						AccumulatorExtend &AccumulatorExtend::GetInstance() {
							static size64::AccumulatorExtend instance;
							return instance;
						}
						AccumulatorExtend::AccumulatorExtend()
							: m_low(EAX) {
							m_string.append("RAX");
						}
					}
				}
			}
		}
	}
}