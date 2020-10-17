#include <string>

struct Adventure {
	void load_adventure_data(std::string filename);

	void load();	// should throw exception if it doesn't load
	void run();
	Adventure(std::string filename);
	~Adventure();
private:
	bool gameOver();
};
