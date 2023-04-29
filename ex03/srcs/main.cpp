#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#define DEB1
#define DEB2

#ifdef DEB2
const std::string PINK170 = "\033[38;5;170m";
const std::string PINK183 = "\033[38;5;183m";
const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";
const std::string RED = "\033[38;5;52m";
const std::string RESET_COLOR = "\033[m";

void myPutStr(std::string s1, std::string s2, std::string color){
	std::cout << color << s1 << s2 << RESET_COLOR << std::endl;
}
#endif


int main(){
#ifdef DEB1
	{
		Weapon  club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	} 
	{
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
#endif
#ifdef DEB2
	{	myPutStr("======", "=======================", PINK201);
		myPutStr("case :", "bob", PINK201);
		myPutStr("======", "=======================", PINK201);
		Weapon  club = Weapon("crude spiked club");
		myPutStr("Variable declaration :", "club", PINK170);
		HumanA bob("Bob", club);
		myPutStr("Variable declaration :", "bob", PINK170);
		bob.attack();
		club.setType("some other type of club");
		myPutStr("club.setType() :", "\"some other type of club\" ", PINK183);
		myPutStr("club.getType() :", club.getType(), PINK198);
		bob.attack();
	} 
	{
		myPutStr("======", "=======================", PINK201);
		myPutStr("case :", "jim", PINK201);
		myPutStr("======", "=======================", PINK201);
		Weapon  club = Weapon("crude spiked club");
		myPutStr("Variable declaration :", "club", PINK170);
		HumanB jim("Jim");
		myPutStr("Variable declaration :", "jim", PINK170);
		jim.setWeapon(club);
		myPutStr("jim.setWeapon(club) :", "", PINK183);
		jim.attack();
		club.setType("some other type of club");
		myPutStr("club.setType() :", "\"some other type of club\" ", PINK183);
		myPutStr("club.getType() :", club.getType(), PINK198);
		jim.attack();
	}
	{
		myPutStr("======", "=======================", PINK201);
		myPutStr("case :", " HumanB  NULL", PINK201);
		myPutStr("======", "=======================", PINK201);
		Weapon  club = Weapon("crude spiked club");
		myPutStr("Variable declaration :", "club", PINK170);
		HumanB B("B");
		myPutStr("Variable declaration :", "B", PINK170);
		B.attack();
		B.setWeapon(club);
		myPutStr("B.setWeapon(club) :", "", PINK183);
		myPutStr("club.getType() :", club.getType(), PINK198);
		B.attack();
	}

		myPutStr("======", "=======================", PINK201);
#endif
	return 0;
}