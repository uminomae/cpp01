#include <iostream>
#include <string>

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