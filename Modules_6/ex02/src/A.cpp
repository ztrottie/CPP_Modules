/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:38:25 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 12:39:34 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"
#include <iostream>

A::A() {
	std::cout << "Default A constructor " << std::endl;
}

A::~A() {
	std::cout << "A destructor" << std::endl;
}