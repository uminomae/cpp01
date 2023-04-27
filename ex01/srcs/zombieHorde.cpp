#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	// Zombie horde[N];
	for (int i=0; i<N; ++i){
		// horde[i].name = name;
		horde[i].set_name(name);
	}
	return horde;
}

