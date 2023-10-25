/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/25 09:35:19 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name_;

public:
	// Constructors / Destructor
	DiamondTrap();
	DiamondTrap(const DiamondTrap &inst);
	DiamondTrap(const std::string &name);
	~DiamondTrap();

	// Operator Overload
	DiamondTrap& operator=(const DiamondTrap &rhs);

	// Functions
	void	attack(const std::string& target);
	void	whoami(void) const;
	int	get_hitPoint(void) const;
	int	get_attackDamage(void) const;
	int	get_energyPoints(void) const;
};

// DiamondTrap_HPP