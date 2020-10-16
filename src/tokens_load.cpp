#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::string;

void read_tokens(const string& file_name) 
{
	std::ifstream token_file(file_name);
	string line;
	int id;
	string word;

	while(std::getline(token_file,line))
	{
		std::istringstream line_stream {line};

		line_stream >> id;
		if (!line_stream.good()) continue;

		line_stream >> word;
		if (!line_stream.good()) continue;

		std::cout << "["<< id << "] " << word << std::endl;
	}
}


// int main() {
// 	read_tokens("data/tokens1.txt");
// }
