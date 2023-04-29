#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	for (int i=0; i<N; ++i){
		horde[i] = Zombie(name);
		// horde[i].set_name(name); // Depending on the importance of initialization
	}
	return horde;
}

