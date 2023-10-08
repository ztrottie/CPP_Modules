#include "../include/Zombie.hpp"
using std::cout;
using std::endl;

Zombie::Zombie(std::string name) : name_(name) {
	return;
}

Zombie::Zombie(void) {
	cout << "Zombie Constructor" << endl;
	return;
}

Zombie::~Zombie(void) {
	cout << this->name_ << " Destroyed" << endl;
	return;
}

void Zombie::announce(void) const {
	cout << this->name_ <<": BraiiiiiiinnnzzzZ..." << endl;
	return;
}
