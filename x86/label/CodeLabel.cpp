#include "CodeLabel.h"
namespace x86
{
	namespace label {
		CodeLabel::CodeLabel(std::string name){
			m_string.append(name);
		}
		std::ostream &operator<<(std::ostream &out, const CodeLabel &label) {
			out << label.String() << ":";
			return out;
		}
	}
}

