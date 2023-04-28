#include <iostream>
#include <string>

const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";

class Zombie{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	Zombie(std::string s);
	void announce();
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);