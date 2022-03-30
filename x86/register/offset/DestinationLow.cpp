#include "DestinationLow.h"
namespace x86
{
	namespace reg
	{
		namespace offset
		{
			DestinationLow &DestinationLow::GetInstance() {
				static DestinationLow instance;
				return instance;
			}
			DestinationLow::DestinationLow() {
				m_string.append("DIL");
			}
		}
	}
}