/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/24 14:45:31 by ztrottie         ###   ########.fr       */
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
};

// DiamondTrap_HPP