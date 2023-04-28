#include "Zombie.hpp"

// #define DEB

int main(){
#ifdef DEB
	Zombie *horde;
	int n = 5;
	horde = zombieHorde(n, "pretty");
	for (int i=0; i<n; ++i)
		horde[i].announce();
	delete[] horde;
	// system("leaks -q cppm");
#endif
	return 0;
}