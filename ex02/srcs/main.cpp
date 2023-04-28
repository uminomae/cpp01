#include <iostream>
#include <string>

const std::string PINK198 = "\033[38;5;198m";
const std::string PINK201 = "\033[38;5;201m";

int main(){
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << PINK198 << "memory addresss" << std::endl;
	std::cout << PINK201;
	std::cout << "string    :" << &string << std::endl;
	std::cout << "stringPTR :" << stringPTR << std::endl;
	std::cout << "stringREF :" << &stringREF << std::endl;

	std::cout << PINK198 << "value" << std::endl;
	std::cout << PINK201;
	std::cout << "string    :" << string << std::endl;
	std::cout << "stringPTR :" << *stringPTR << std::endl;
	std::cout << "stringREF :" << stringREF << std::endl;
}
