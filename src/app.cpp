#include "adventure.h"
#include <iostream>


bool play_again() {
	bool valid_answer = false;
	bool response;

	char in_str[256];
	do {
		std::cout << "Would you like to play again? (y/n)  ";
		std::cin >> in_str;

		if(in_str[0]=='y' or in_str[0]=='Y') {
			valid_answer = true;
			response = true;
		}

		if(in_str[0]=='n' or in_str[0]=='N') {
			valid_answer = true;
			response = false;
		}
	} while (!valid_answer);
	return response;
}

int main() {
	Adventure adventure {"data"};
	
	do {
		adventure.run();
	} while(play_again());
	return 0;
}
