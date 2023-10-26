/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:23 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/26 13:40:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Default Brain constructor " << std::endl;
}

Brain::Brain(const Brain &inst) {
	std::cout << "Copy Brain constructor " << std::endl;
	*this = inst;
}

Brain::~Brain() {
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs) {
	std::cout << "Brain operator = overide" << std::endl;
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}