#pragma once
#include <iostream>

enum	eLevels {
	eDebug,
	eInfo,
	eWarning,
	eError
};

class Harl
{
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);

public:
	Harl(void);
	~Harl(void);
	void	complain(std::string level);
};
