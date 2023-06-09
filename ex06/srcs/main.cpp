#include "Harl.hpp"
#include "ex06.hpp"

int main(int ac, char **av){
	if (ac != 2){
		std::cout << RED << "Magic can only be used one at a time" << RESET_COLOR << std::endl;
		return 0;
	}
	Harl harl;
	int i = harl.switchOffLevel(av[1]);
	harl.filterAndPut(i);
	return 0;
}
