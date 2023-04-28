#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
private:
	std::string type;
public:
	Weapon(std::string const &s);
	void setType(std::string const &s);
	std::string const &getType()const;
};

#endif