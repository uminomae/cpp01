#include "Zombie.hpp"

#define TEST

int main(){
#ifdef TEST
	Zombie *foo = newZombie("foo");
	foo->announce();
	delete foo;
	randomChump("pre-cure");
#endif
	return 0;
}