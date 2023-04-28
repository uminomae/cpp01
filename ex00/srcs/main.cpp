#include "Zombie.hpp"

// #define DEB

int main(){
#ifdef DEB
	Zombie *foo = newZombie("foo");
	foo->announce();
	delete foo;
	randomChump("pre-cure");
	// system("leaks -q cppm");
#endif
	return 0;
}