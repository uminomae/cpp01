#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string s)
:weapon(NULL),name(s){
}

void HumanB::attack()const{
	if (weapon == NULL){
		std::cout << name << " attacks with their no weapon" << weapon->getType() << std::endl; 
		return;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}

void HumanB::setWeapon(const Weapon &w){
	weapon = &w;
}
