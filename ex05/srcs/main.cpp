#include "Harl.hpp"
#include "ex05.hpp"

#define TEST

int main(){
#ifdef TEST
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("evil");
#endif
	return 0;
}
