/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:15:34 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/20 10:22:23 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"
#include <exception>
#include <iostream>


int main(int argc, char **argv) {
	RPN rpn;
	
	if (argc == 2) {
		try {
		rpn.calculator(argv[1]);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}