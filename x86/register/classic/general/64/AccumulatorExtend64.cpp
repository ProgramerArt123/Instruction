#include "x86/register/classic/general/AccumulatorExtend.h"
#include "AccumulatorExtend64.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace size64
				{
					AccumulatorExtend &AccumulatorExtend::GetInstance() {
						static size64::AccumulatorExtend instance;
						return instance;
					}
					AccumulatorExtend::AccumulatorExtend()
						: m_low(general::AccumulatorExtend::GetInstance()) {
						m_string.append("RAX");
					}
				}
			}
		}
	}
}