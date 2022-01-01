#include "Data.h"
namespace segment
{
	Data &Data::GetInstance() {
		static Data instance;
		return instance;
	}
	Data::Data() {
		m_string.append("DS");
	}
}