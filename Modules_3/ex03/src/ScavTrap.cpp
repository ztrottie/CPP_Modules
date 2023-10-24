/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 09:45:46 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/24 13:34:35 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(),  gateKeeper_(false) {
	cout << "Default ScavTrap constructor" << endl;
	this->attackDamage_ = defAttackDamage_;
	this->hitPoints_ = defHitPoint_;
	this->energyPoints_ = defEnergyPoint_;
	return;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name),  gateKeeper_(false) {
	cout << "ScavTrap " << this->name_ << " constructor" << endl;
	this->attackDamage_ = defAttackDamage_;
	this->hitPoints_ = defHitPoint_;
	this->energyPoints_ = defEnergyPoint_;
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
	this->name_ = rhs.name_;
	this->energyPoints_ = rhs.energyPoints_;
	this->hitPoints_ = rhs.hitPoints_;
	this->attackDamage_ = rhs.attackDamage_;
	this->gateKeeper_ = rhs.gateKeeper_;
	return *this;
}

void ScavTrap::guardGate(void) {
	if (this->hitPoints_ == 0) {
		cout << "ScavTrap " << this->name_ << " is dead boiii! can't guardKeep!" << endl;
		return;
	}
	if (this->energyPoints_ == 0) {
		cout << "ScavTrap " << this->name_ << " is exhausted! can't guardKeep!" << endl;
		return;
	}
	if (this->gateKeeper_ == true)
		cout << "ScavTrap " << this->name_ << " is already in gate keeper mode!" << endl;
	else
		cout << "ScavTrap " << this->name_ << " is now in gate keeper mode!" << endl;
	this->gateKeeper_ = true;
	return;
}

void ScavTrap::attack(const std::string& target) {
	if (this->hitPoints_ == 0) {
		cout << "ScavTrap " << this->name_;
		cout << " is dead, can't attack shit! RIP (no hitPoints left)" << endl;
	}
	else if (this->energyPoints_ == 0) {
		cout << "ScavTrap " << this->name_;
		cout << " is exhausted can't attack MATE! (no energyPoints left)" << endl;
	}
	else {
		--this->energyPoints_;
		cout << "ScavTrap " << this->name_ << " attacks " << target;
		cout << ", causing " << this->attackDamage_ << " points of damage" << endl;
	}
	return;
}

int ScavTrap::get_defEnergyPoint(void)  const {
	return defEnergyPoint_;
}