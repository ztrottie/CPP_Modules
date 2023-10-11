/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:41:18 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/10 12:41:19 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Harl.hpp"

int	hashIt(std::string filter) {
	if (filter == "DEBUG")
		return (1);
	if (filter == "INFO")
		return (2);
	if (filter == "WARNING")
		return (3);
	if (filter == "ERROR")
		return (4);
	return (0);
}

int main(int argc, char **argv) {
	Harl		bob;

	if (argc != 2) {
		std::cerr << "not enough arguments need the filter!";
		return 1;
	}
	switch (hashIt(argv[1]))
	{
	case 1:
		bob.complain("DEBUG");
	case 2:
		bob.complain("INFO");
	case 3:
		bob.complain("WARNING");
	case 4:
		bob.complain("ERROR");
		break;
	default:
		std::cerr << "not a valid filter MATE!" << std::endl;
	}
	return 0;
}