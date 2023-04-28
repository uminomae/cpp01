#include "Weapon.hpp"

Weapon::Weapon(std::string const &s){
	type = s;
}

void Weapon::setType(std::string const &s){
	type = s;
}

std::string const &Weapon::getType()const{
	return type;
}
