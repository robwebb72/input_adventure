#include "adventure.h"
#include "string_handling.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>



Adventure::Adventure(std::string filename) {
	load_adventure_data(filename);
}


Adventure::~Adventure() {
	// free up data allocated for the adventure	
}


void Adventure::load_game_data(std::string filename) {

	std::ifstream data_file(filename);
	std::string line;

	while(std::getline(data_file,line))
	{
		if(line.find("!welcome-begin")!=std::string::npos) {
			while(std::getline(data_file,line) && line.find("!welcome-end")==std::string::npos)
			{
				if (line[0]=='#') continue;
				welcome += line + "\n";
			}
		}
		std::istringstream line_stream {line};
		std::string tag;
		line_stream >> tag;
		if(tag.find("!start-loc")!=std::string::npos) line_stream >> start_loc;
		if(tag.find("!game_end")!=std::string::npos) line_stream >> end_flag;
	}
}


void Adventure::load_adventure_data(std::string filename) {
	load_game_data(filename + "/game.txt");
	// load location data
	// load items data
	// load flag data
	// load events data
	// load vocab data
	// load rules data
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
	std::cout << welcome << std::flush;

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
