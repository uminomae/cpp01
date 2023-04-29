#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB{
private:
	Weapon const *weapon;
	std::string name;
public:
	HumanB(std::string s);
	void attack()const;
	void setWeapon(const Weapon &w);
};

#endif