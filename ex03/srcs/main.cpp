#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

// #define DEB1

#ifdef DEB1
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
	//case :Weapon typeDefaultValue
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "Weapon typeDefaultValue", PINK201);
	myPutStr("======", "=======================", PINK201);
	Weapon typeDefault;
	myPutStr("Variable declaration :", "Weapon typeDefault", PINK170);
	myPutStr("typeDefault.type :", typeDefault.getType(), PINK198);

	//case :Weapon typeA
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "Weapon typeA ", PINK201);
	myPutStr("======", "=======================", PINK201);
	Weapon typeA;
	myPutStr("Variable declaration :", "\"Weapon typeA\"", PINK170);
	myPutStr("typeA.type :", typeA.getType(), PINK198);
	typeA.setType("WeaponA");
	myPutStr("typeA.setType() :", " \"WeaponA\" ", PINK183);
	myPutStr("typeA.type :", typeA.getType(), PINK198);

	//case :Weapon typeB
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "Weapon typeB ", PINK201);
	myPutStr("======", "=======================", PINK201);
	Weapon typeB;
	myPutStr("Variable declaration :", "\"Weapon typeB\"", PINK170);
	myPutStr("typeB.type :", typeB.getType(), PINK198);
	typeB.setType("WeaponB");
	myPutStr("typeB.setType() :", " \"WeaponB\" ", PINK183);
	myPutStr("typeB.type :", typeB.getType(), PINK198);

	//case :HumanA A
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "HumanA A", PINK201);
	myPutStr("======", "=======================", PINK201);
	HumanA A;
	myPutStr("Variable declaration :", "\"HumanA A\"", PINK170);
	myPutStr("A.getType :", A.getType(), PINK198);
	A.setType("costumA");
	myPutStr("A.setType :", "\"costumA\"", PINK183);
	myPutStr("A.getType :", A.getType(), PINK198);
	myPutStr("======", "", PINK201);
	myPutStr("A.getName :", A.getName(), PINK198);
	A.setName("nameA");
	myPutStr("A.setName :", "\"nameA\"", PINK183);
	myPutStr("A.getName :", A.getName(), PINK198);

	//case :HumanB B
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "HumanB B", PINK201);
	myPutStr("======", "=======================", PINK201);
	HumanB B;
	myPutStr("Variable declaration :", "\"HumanB B\"", PINK170);
	myPutStr("B.getType :", B.getType(), PINK198);
	B.setType("costumB");
	myPutStr("B.setType :", "\"costumB\"", PINK183);
	myPutStr("B.getType :", B.getType(), PINK198);
	myPutStr("======", "", PINK201);
	myPutStr("B.getName :", B.getName(), PINK198);
	B.setName("nameB");
	myPutStr("B.setName :", "\"nameB\"", PINK183);
	myPutStr("B.getName :", B.getName(), PINK198);


	//case : HumanA C(typeDefault.getType());
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "HumanA C", PINK201);
	myPutStr("======", "=======================", PINK201);
	HumanA C(B.getType());
	myPutStr("Variable declaration :", "\"HumanA C(B.getType())\"", PINK170);
	myPutStr("C.getType :", C.getType(), PINK198);

	//case : A.attack();
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "A.attack()", PINK201);
	myPutStr("======", "=======================", PINK201);
	A.attack();

	//case : B.attack();
	myPutStr("======", "=======================", PINK201);
	myPutStr("case :", "B.attack()", PINK201);
	myPutStr("======", "=======================", PINK201);
	B.attack();
	myPutStr("=end==", "=======================", PINK201);
#endif

}