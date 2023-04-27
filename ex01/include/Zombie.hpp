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
	void set_name(std::string s);
};

Zombie* zombieHorde(int N, std::string name);
