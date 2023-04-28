#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>

class HumanA{
private:
	Weapon Weapon;
	std::string name;
public:
	HumanA();
	~HumanA();
	HumanA(std::string weapon);

	void attack();

	void setName(std::string s);
	std::string getName();
	void setType(std::string s);
	std::string getType();
};

#endif
