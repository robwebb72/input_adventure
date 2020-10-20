#include <string>

class Adventure {

	int start_loc {};
	int end_flag {};
	std::string welcome {};

	bool game_finished {false};

	bool game_over();
	void reset_world();
	void load_adventure_data(std::string filename);
	void load_game_data(std::string filename);

public:
	void run();
	Adventure(std::string filename);
	~Adventure();
};
