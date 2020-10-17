#include <string>

class Adventure {

	bool game_finished {false};

	bool game_over();
	void reset_world();
	void load_adventure_data(std::string filename);

public:
	void run();
	Adventure(std::string filename);
	~Adventure();
};
