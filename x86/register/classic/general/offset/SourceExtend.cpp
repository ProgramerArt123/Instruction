#include "SourceExtend.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace general
			{
				namespace offset
				{
					SourceExtend &SourceExtend::GetInstance() {
						static SourceExtend instance;
						return instance;
					}
					SourceExtend::SourceExtend() {
						m_string.append("ESI");
					}
				}
			}
		}
	}
}