#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon const &w)
:weapon(w),name(s){
}

void HumanA::attack()const{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl; 
}
