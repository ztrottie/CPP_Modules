/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:24:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 12:25:16 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include <iostream>

Character::Character() {
	std::cout << "Default Character constructor " << std::endl;
}

Character::Character(const Character &inst) {
	std::cout << "Copy Character constructor " << std::endl;
}

Character::~Character() {
	std::cout << "Character destructor" << std::endl;
}

Character& Character::operator=(const Character &rhs) {
	std::cout << "Character operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}