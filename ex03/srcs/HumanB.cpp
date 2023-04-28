#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(){

}

HumanB::~HumanB(){

}


void HumanB::attack(){
	std::cout << name << " attacks with their " << Weapon.getType() << std::endl; 
}


void HumanB::setName(std::string s){
	name = s;
}

std::string HumanB::getName(){
	return name;
}

void HumanB::setType(std::string s){
	Weapon.setType(s);
}

std::string HumanB::getType(){
	return Weapon.getType();
}