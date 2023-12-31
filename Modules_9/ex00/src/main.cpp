/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:25:52 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/19 15:01:02 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include <exception>

int main(int argc, char **argv) {
	BitcoinExchange hello;
	if (argc != 2) {
		std::cout << "Bad args: needs a file as input" << std::endl;
		return (0);
	}
	try {
		hello.openDb();
		hello.doConversion(argv[1]);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}