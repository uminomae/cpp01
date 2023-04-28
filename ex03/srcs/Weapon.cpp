#include "Weapon.hpp"

Weapon::Weapon(){

}

Weapon::~Weapon(){

}


void Weapon::setType(std::string s){
	type = s;
}

std::string Weapon::getType(){
	return type;
}
