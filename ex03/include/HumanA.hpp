#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA{
private:
	Weapon const &weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon const &w);
	void attack()const;
};

#endif
