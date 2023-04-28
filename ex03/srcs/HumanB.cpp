#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string s)
:weapon(NULL),name(s){
}

void HumanB::attack()const{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}

void HumanB::setWeapon(const Weapon &w){
	weapon = &w;
}
