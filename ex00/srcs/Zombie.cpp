#include "Zombie.hpp"

Zombie::Zombie(){
}


Zombie::~Zombie(){
	std::cout << name << ": destructor called" << std::endl;
}

Zombie::Zombie(std::string s){
	name = s;
}

void Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}