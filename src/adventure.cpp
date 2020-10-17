#include "adventure.h"
#include "string_handling.h"

#include <iostream>


Adventure::Adventure(std::string filename) {

	load_adventure_data(filename);
}


Adventure::~Adventure() {
	// free up data allocated for the adventure	
}


void Adventure::load_adventure_data(std::string filename) {
	std::cout << "\t\t[I've loaded everything in, honestly]" << std::endl;
}


bool Adventure::game_over() {
	return game_finished;
}


void Adventure::reset_world() {
	game_finished = false;
}

void Adventure::run() {
	// initialise world
	reset_world();
	// display welcome message
	std::cout << "You have a truly splendid adventure!" << std::endl << std::endl;

	while(!game_over()) {
		// if new location - display it
		// read input
		
		std::cout << "What now?  ";
		
		std::string line_buffer;
		do {
			getline(std::cin,line_buffer);
		} while (line_buffer.length() == 0);

		std::string line_buffer_lower = string_handling::str_to_lower(line_buffer);
		if(line_buffer_lower.compare("quit")==0) {
			game_finished = true;
		}
		// if input is valid
		//	process input
		// else
		//	report error
	}
}
