/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:41:29 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 12:41:41 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/B.hpp"
#include <iostream>

B::B() {
	std::cout << "Default B constructor " << std::endl;
}

B::~B() {
	std::cout << "B destructor" << std::endl;
}
