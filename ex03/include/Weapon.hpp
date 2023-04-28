#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon{
private:
	std::string type;
public:
	Weapon();
	~Weapon();
	
	void setType(std::string s);
	std::string getType();
};

#endif