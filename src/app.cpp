#include "adventure.h"
#include <iostream>

bool playAgain() {
	bool validAnswer = false;
	bool response;

	char in_str[256];
	do {
		std::cout << "Would you like to play again? (y/n)  ";
		std::cin >> in_str;

		if(in_str[0]=='y' or in_str[0]=='Y') {
			validAnswer = true;
			response = true;
		}

		if(in_str[0]=='n' or in_str[0]=='N') {
			validAnswer = true;
			response = false;
		}
	} while (!validAnswer);
	return response;
}

int main() {
	Adventure adventure;

	do {
		adventure.run();
	} while(playAgain());
	return 0;
}