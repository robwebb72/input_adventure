#ifndef __STRING_HANDLING__
#define __STRING_HANDLING__
#include <string>

namespace string_handling {
	inline std::string ltrim(const std::string& str, const std::string& chars);
	inline std::string rtrim(const std::string& str, const std::string& chars);
	inline std::string trim(const std::string& str, const std::string& chars);
	std::string str_to_lower(const std::string& str);
}
#endif
