/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:41:56 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 13:34:14 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/A.hpp"
#include "../include/C.hpp"
#include "../include/B.hpp"
#include <chrono>
#include <exception>
#include <iostream>
#include <cstdlib>

Base	*generate(void) {
	Base *inst = NULL;
	srand(time(NULL) + rand());
	int result = (rand() % 3 + 1);
	std::cout << result << std::endl;
	switch (result) {
		case 1:
			inst = new A();
			break;
		case 2:
			inst = new B();
			break;
		case 3:
			inst = new C();
			break;
	}
	return (inst);
}

void identify(Base *p) {
	if (A *aPtr = dynamic_cast<A*>(p)) {
		std::cout << "*Type: A" << std::endl;
	} else if (B *bPtr = dynamic_cast<B*>(p)) {
		std::cout << "*Type: B" << std::endl;
	} else if (C *cPtr = dynamic_cast<C*>(p)) {
		std::cout << "*Type: C" << std::endl;
	} else {
		std::cout << "*none of the valid types" << std::endl;
	}
}

void identify(Base &p) {
	try {
		A &aRef = dynamic_cast<A&>(p);
		static_cast<void>(aRef);
		std::cout << "&Type: A" << std::endl;
	} catch (std::exception &e) {
		try {
			B &bRef = dynamic_cast<B&>(p);
			static_cast<void>(bRef);
			std::cout << "&Type: B" << std::endl;
		} catch (std::exception &e) {
			try {
				C &cRef = dynamic_cast<C&>(p);
				static_cast<void>(cRef);
				std::cout << "&Type: C" << std::endl;
			} catch (std::exception &e) {
				std::cout << "&none of the valid types";
			}
		}
	}
}

int main(void) {
	Base *p = generate();
	Base ptr = *p;
	identify(p);
	identify(*p);
}