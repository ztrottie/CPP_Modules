#include <iostream>
#include "../include/Zombie.hpp"

void randomChump( std::string name ) {
	Zombie	retard(name);
	retard.announce();
	return;
}