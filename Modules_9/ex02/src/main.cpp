/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:16:06 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/21 13:26:27 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <exception>

int main(int argc, char **argv) {
	PmergeMe lol;

	if (argc < 2)
		return 0;
	try {
		lol.listSort(argc, argv);
		lol.vectorSort(argc, argv);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}