/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:41:24 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:41:25 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
