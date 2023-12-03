/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:55:02 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/03 14:38:17 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cmath>
#include <iomanip>
#include <iostream>

void	*parser(char **argv) {
	std::string str = argv[1];
	if (str.length() > 1 && str.back() )
}

int main(int argc, char **argv) {
	if (argc < 2 || argc > 2)
		return (std::cout << "bad arguments" << std::endl, 1);
	void *value = parser(argv);
	std::cout << "char: " << *static_cast<char*>(value) << std::endl;
	std::cout << "int: " << *static_cast<int*>(value) << std::endl;
	std::cout << "float: " << std::fixed << *static_cast<float*>(value) << "f" << std::endl;
	std::cout << "double: " << *static_cast<double*>(value) << std::endl;
	return (0);
}
