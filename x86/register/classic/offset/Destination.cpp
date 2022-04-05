#include "Destination.h"
namespace x86
{
	namespace reg
	{
		namespace classic
		{
			namespace offset
			{
				Destination &Destination::GetInstance() {
					static Destination instance;
					return instance;
				}
				Destination::Destination() {
					m_string.append("DI");
				}
			}
		}
	}
}