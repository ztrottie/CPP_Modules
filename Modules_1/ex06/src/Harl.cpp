#include "../include/Harl.hpp"

using std::cout;
using std::endl;

Harl::Harl(void) {
	return;
}

Harl::~Harl(void) {
	return;
}

void	Harl::debug(void) {
	cout << "[DEBUG]" << endl;
	cout << "J'aime quand mes spell parte ou qui sont supposer" << endl;
}

void	Harl::info(void) {
	cout << "[INFO]" << endl;
	cout << "Yasuo est l'un des pire champion de league of legend, hasagi mon cul!" << endl;
}

void	Harl::warning(void) {
	cout << "[WARNING]" << endl;
	cout << "Si je tombe contre un darius 1.3M de point je vais rager pis sa seras pas le fun!" << endl;
}

void	Harl::error(void) {
	cout << "[ERROR]" << endl;
	cout << "Voyon donc qui ma tuer ses ben un jeu de marde" << endl;
}

void	Harl::complain(std::string level) {
	static void	(Harl::*functionPTR[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	static std::string	types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == types[i])
			(this->*functionPTR[i])();
	}
}
