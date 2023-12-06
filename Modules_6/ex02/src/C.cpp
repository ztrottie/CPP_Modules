/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:41:42 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 12:41:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/C.hpp"
#include <iostream>

C::C() {
	std::cout << "Default C constructor " << std::endl;
}

C::~C() {
	std::cout << "C destructor" << std::endl;
}
