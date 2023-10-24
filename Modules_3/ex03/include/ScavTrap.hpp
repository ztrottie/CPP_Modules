/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:21:28 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/24 13:34:55 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "../include/ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	bool	gateKeeper_;
	static const int	defHitPoint_ = 100;
	static const int	defAttackDamage_ = 20;
	static const int	defEnergyPoint_ = 50;

public:
	ScavTrap();
	ScavTrap(const ScavTrap	&inst);
	ScavTrap(const std::string &name);
	~ScavTrap();
	
	ScavTrap	&operator=(const ScavTrap &rhs);
	void guardGate(void);
	void attack(const std::string& target);
	int get_defEnergyPoint(void)  const;
};
