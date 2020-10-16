#include <string>

std::string white_spaces = "\t\n\v\f\r ";


inline std::string ltrim(const std::string& str, const std::string& chars = white_spaces) {
	return str.substr(str.find_first_not_of(white_spaces),str.length());
}

inline std::string rtrim(const std::string& str, const std::string& chars = white_spaces) {
	return str.substr(0, str.find_last_not_of(white_spaces)+1);
}

inline std::string trim(const std::string& str, const std::string& chars = white_spaces) {
	return ltrim(rtrim(str, chars), chars);
}

