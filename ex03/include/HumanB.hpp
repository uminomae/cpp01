#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>

class HumanB{
private:
	Weapon Weapon;
	std::string name;
public:
	HumanB();
	~HumanB();


	void attack();

	void setName(std::string s);
	std::string getName();
	void setType(std::string s);
	std::string getType();
};

#endif