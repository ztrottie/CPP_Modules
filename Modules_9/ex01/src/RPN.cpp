/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:15:31 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/20 14:24:44 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RPN.hpp"
#include <cctype>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

RPN::RPN() {
	std::cout << "Default RPN constructor " << std::endl;
}

RPN::RPN(const RPN &inst) {
	std::cout << "Copy RPN constructor " << std::endl;
	*this = inst;
}

RPN::~RPN() {
	std::cout << "RPN destructor" << std::endl;
}

RPN& RPN::operator=(const RPN &rhs) {
	std::cout << "RPN operator = overload" << std::endl;
	if (this != &rhs) {
		_stack = rhs._stack;
	}
	return *this;
}

void	RPN::calculator(const std::string &input) {
	std::stringstream	ss(input);
	std::string			token[4] = {"*", "/", "+", "-"};
	std::string			value;
	
	while (std::getline(ss, value, ' ')) {
		if (std::isdigit(value[0]))
			_stack.push(std::stoi(value));
		else {
			int i = 0;
			for (; i < 4; i++) {
				if (value == token[i])
					break;
			}
			if (i == 4)
				throw std::invalid_argument("Error");
			int operand1;
			int operand2;
			if (i < 4 && _stack.size() == 2) {
				operand1 = _stack.top();
				_stack.pop();
				operand2 = _stack.top();
				_stack.pop();
				std::cout << operand2 << " " << token[i] << " " << operand1 << std::endl;
			}
			else {
				throw std::invalid_argument("Error");
			}
			switch (i) {
				case 0:
					_stack.push(operand2 * operand1);
					break;
				case 1:
					if (operand1 == 0)
						throw std::invalid_argument("Division by zero! you motter");
					_stack.push(operand2 / operand1);
					break;
				case 2:
					_stack.push(operand2 + operand1);
					break;
				case 3:
					_stack.push(operand2 - operand1);
					break;
			}
			std::cout << "result: " << _stack.top() << std::endl;
		}
	}
	if (_stack.size() != 1)
		throw std::invalid_argument("Error");
	std::cout << _stack.top() << std::endl;
	_stack.pop();
}