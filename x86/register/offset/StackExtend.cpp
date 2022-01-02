#include "StackExtend.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			StackExtend &StackExtend::GetInstance() {
				static StackExtend instance;
				return instance;
			}
			StackExtend::StackExtend() {
				m_string.append("ESP");
			}
		}
	}
}