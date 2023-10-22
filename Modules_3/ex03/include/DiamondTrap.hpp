/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:20:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/22 13:49:59 by ztrottie         ###   ########.fr       */
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
	~DiamondTrap();

	// Operator Overload
	DiamondTrap& operator=(const DiamondTrap &rhs);

	// Functions
	void	attack(const std::string& target)
};

// DiamondTrap_HPP