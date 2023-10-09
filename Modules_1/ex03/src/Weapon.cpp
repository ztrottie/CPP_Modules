/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:13:19 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/09 16:13:20 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(void) {
	// std::cout << "Weapon constructor!" << std::endl;
	return;
}

Weapon::Weapon(std::string type) : type_(type) {
	return ;
}

Weapon::~Weapon(void) {
	// std::cout << "Weapon destructor!" << std::endl;
	return;
}

const std::string &Weapon::getType(void) const {
	return this->type_;
}

void	Weapon::setType(std::string newType) {
	this->type_ = newType;
	return;
}
