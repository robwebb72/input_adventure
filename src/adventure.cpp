#include "adventure.h"
#include <iostream>


void Adventure::load() {
	// load everything
}

bool Adventure::gameOver() {
	return true;
}

void Adventure::run() {
	// initialise world

	// display welcome message
	std::cout << "You have a truly splendid adventure!" << std::endl << std::endl;

	while(!gameOver()) {
		// if new location - display it
		// read input
		// if input is valid
		//	process input
		// else
		//	report error
	}
}