#include "Zombie.hpp"

#define TEST

int main(){
#ifdef TEST
	Zombie *horde;
	int n = 5;
	horde = zombieHorde(n, "pretty");
	for (int i=0; i<n; ++i)
		horde[i].announce();
	delete[] horde;
#endif
	return 0;
}