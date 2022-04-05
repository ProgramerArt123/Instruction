#include "Count.h"
#include "CountExtend.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				CountExtend &CountExtend::GetInstance() {
					static CountExtend instance;
					return instance;
				}
				CountExtend::CountExtend()
					: m_low(Count::GetInstance()) {
					m_string.append("ECX");
				}
			}
		}
	}
}
