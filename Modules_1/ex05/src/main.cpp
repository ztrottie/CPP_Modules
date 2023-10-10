#include <iostream>
#include "../include/Harl.hpp"

int main(void) {
	Harl		bob;

	bob.complain("DEBUG");
	bob.complain("WARNING");
	bob.complain("INFO");
	bob.complain("ERROR");

	return (0);
}