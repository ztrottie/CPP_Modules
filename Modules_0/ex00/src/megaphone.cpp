#include <iostream>

int main (int argc, char **argv)
{
	std::string bozo;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		for (int i = 1; i < argc; i++) {
			bozo = argv[i];
			for (int j = 0; bozo[j]; j++) {
				bozo[j] = toupper(bozo[j]);
			}
			std::cout << bozo << " ";
		}
	}
	std::cout << std::endl;
	return 0;
}