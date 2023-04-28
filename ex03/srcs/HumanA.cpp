#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(){
	Weapon.setType("WeaponHumanA");
}

HumanA::HumanA(std::string s){
	Weapon.setType(s);
}

HumanA::~HumanA(){

}


void HumanA::attack(){
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl; 
}


void HumanA::setName(std::string s){
	name = s;
}

std::string HumanA::getName(){
	return name;
}

void HumanA::setType(std::string s){
	Weapon.setType(s);
}

std::string HumanA::getType(){
	return Weapon.getType();
}
