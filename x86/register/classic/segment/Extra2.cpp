#include "Extra2.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace segment
			{
				Extra2 &Extra2::GetInstance() {
					static Extra2 instance;
					return instance;
				}
				Extra2::Extra2() {
					m_string.append("FS");
				}
			}
		}
	}
}