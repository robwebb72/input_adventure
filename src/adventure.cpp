#include "adventure.h"
#include <iostream>

Adventure::Adventure(std::string filename) {

}

Adventure::~Adventure() {
	
}

void Adventure::load() {
	std::cout << "\t\t[I've loaded everything in, honestly]" << std::endl;
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
