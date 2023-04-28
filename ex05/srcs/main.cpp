#include "Harl.hpp"

#define TEST

int main(){
	Harl harl;
#ifdef TEST
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
#endif
	return 0;
}
