/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:45:39 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 14:13:40 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#define NB 20000

int main() {
	Span list(NB);
	
	for (int i = 0; i < NB; i++) {
		srand((unsigned)time(NULL) + rand());
		list.addNumber(rand() + 1);
	}
	std::cout << list.longestSpan() << std::endl;
	std::cout << list.shortestSpan() << std::endl;
}