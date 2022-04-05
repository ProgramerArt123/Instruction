#include "Code.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				Code &Code::GetInstance() {
					static Code instance;
					return instance;
				}
				Code::Code() {
					m_string.append("CS");
				}
			}
		}
	}
}