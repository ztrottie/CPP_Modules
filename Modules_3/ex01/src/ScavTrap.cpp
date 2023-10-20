/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:45:46 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/20 13:49:51 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(), hitPoints_(100), energyPoints_(50), attackDamage_(20) {
	cout << "Default ScavTrap constructor" << endl;
	return;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	cout << "ScavTrap " << this->name_ << " constructor" << endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &inst) : ClapTrap(inst) {
	cout << "Copy ScavTrap constructor" << endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	cout << "ScavTrap " << this->name_ << " Destructor" << endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	
	return *this;
}

