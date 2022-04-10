#include "DestinationExtend.h"
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
					DestinationExtend &DestinationExtend::GetInstance() {
						static DestinationExtend instance;
						return instance;
					}
					DestinationExtend::DestinationExtend() {
						m_string.append("EDI");
					}
				}
			}
		}
	}
}