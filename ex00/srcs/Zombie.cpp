#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << PINK201 << name << ": destructor called" << std::endl;
}

Zombie::Zombie(std::string s){
	name = s;
}

void Zombie::announce(){
	std::cout << PINK198 << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
