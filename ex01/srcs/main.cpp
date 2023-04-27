#include "Zombie.hpp"

// #define DEB

int main(){
	Zombie *horde;
	// Zombie **horde = NULL;
	horde = zombieHorde(3, "pretty");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
#ifdef DEB
	// Zombie *foo = newZombie("foo");
	// for (int i=0; i<3; ++i){
	// 	horde[i]->announce();
		// delete &horde[i];
	// }
	// delete[] horde;
	// system("leaks -q cppm");
#endif
	return 0;
}