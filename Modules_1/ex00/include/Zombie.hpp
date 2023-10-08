#pragma once
#include <iostream>

class Zombie
{
private:
	std::string	name_;

public:
	Zombie(void);
	Zombie(std::string);
	~Zombie(void);
	void	announce(void) const;
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );
