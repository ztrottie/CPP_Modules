/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:21:28 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/20 13:55:07 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool	_gateKepper;

public:
	ScavTrap();
	ScavTrap(const ScavTrap	&inst);
	ScavTrap(const std::string &name);
	~ScavTrap();
	
	ScavTrap	&operator=(const ScavTrap &rhs);
	void guardGate(void);
};
