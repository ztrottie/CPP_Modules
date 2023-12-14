/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:25:52 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/14 14:04:37 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"
#include <exception>

int main(int argc, char **argv) {
	(void)argc;
	(void)argv;
	BitcoinExchange hello;

	try {
		hello.openDb();
		hello.openDb();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}