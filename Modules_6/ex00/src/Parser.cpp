/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 10:55:16 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 10:34:44 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Parser.hpp"
#include <iomanip>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>

Parser::Parser() : _str("default"), _type(none), _precision(1) {
	std::cout << "Default parser constructor " << std::endl;
}

Parser::Parser(std::string str) : _str(str), _type(none), _precision(1) {
	std::cout << "parser constructor of " << str << std::endl;
}

Parser::Parser(const Parser &inst) {
	std::cout << "Copy parser constructor " << std::endl;
	*this = inst;
}

Parser::~Parser() {
	std::cout << "parser destructor" << std::endl;
}

Parser& Parser::operator=(const Parser &rhs) {
	std::cout << "parser operator = overload" << std::endl;
	if (this != &rhs) {
		this->_str = rhs._str;
	}
	return *this;
}

void	Parser::isInt() {
	unsigned long i = 0;
	
	if (_str[i] == '-')
		i++;
	while (std::isdigit(_str[i]))
		i++;
	if (i == _str.length()) {
		try {
			this->_intValue = std::stoi(this->_str);
		} catch (std::exception &e) {
			return;
		}
		this->_type = intValue;
	}
}

void	Parser::isFloat() {
	unsigned long i = 0;
	int dot = 0;

	if (_str[i] == '-')
		i++;
	while (std::isdigit(_str[i]) || _str[i] == '.') {
		if (_str[i] == '.')
			dot++;
		i++;
	}
	if ((i == _str.length() - 1 && dot == 1 && _str.back() == 'f') || _str == "nanf" || _str == "+inff" || _str == "-inff")
	{
		try {
			this->_floatValue = std::stof(this->_str);
		} catch (std::exception &e) {
			return;
		}
		this->_type = floatValue;
	}
}

void	Parser::isDouble() {
	unsigned long i = 0;
	int dot = 0;

	if (_str[i] == '-')
		i++;
	while (std::isdigit(_str[i]) || _str[i] == '.') {
		if (_str[i] == '.')
			dot++;
		i++;
	}
	if ((i == _str.length() && dot == 1) || _str == "nan" || _str == "+inf" || _str == "-inf")
	{
		try {
			this->_doubleValue = std::stod(this->_str);
		} catch (std::exception &e) {
			return;
		}
		this->_type = doubleValue;
	}
}

void	Parser::isChar() {
	if (_str.length() == 1) {
		this->_charValue = this->_str[0];
		this->_type = charValue;
	}
}

void	Parser::setType() {
	isChar();
	isInt();
	isFloat();
	isDouble();
	if (this->_type == none)
		throw std::invalid_argument("none of the valid type please enter an int, float (*.*f), doubke(*.*) or char");
}

Parser::operator float() {
	switch (_type) {
		case intValue:
			return (static_cast<float>(_intValue));
		case floatValue:
			return _floatValue;
		case doubleValue:
			return (static_cast<float>(_doubleValue));
		case charValue:
			return (static_cast<float>(_charValue));
	}
	return (0);
}

Parser::operator int() {
	switch (_type) {
		case intValue:
			return _intValue;
		case floatValue:
			if (!std::isnan(_floatValue) && !std::isinf(_floatValue) 
			&& _floatValue < std::numeric_limits<int>::max() && _floatValue > std::numeric_limits<int>::min()) {
				return (static_cast<int>(_floatValue));
			}
			else
				throw std::invalid_argument("Impossible");
		case doubleValue:
			if (!std::isnan(_doubleValue) && !std::isinf(_doubleValue) && 
			_doubleValue < std::numeric_limits<int>::max() && _doubleValue > std::numeric_limits<int>::min()) {
				return (static_cast<int>(_doubleValue));
			}
			else
				throw std::invalid_argument("Impossible");
		case charValue:
			return (static_cast<int>(_charValue));
	}
	return (0);
}

Parser::operator double() {
	switch (_type) {
		case intValue:
			return (static_cast<double>(_intValue));
		case floatValue:
			return (static_cast<double>(_floatValue));
		case doubleValue:
			return _doubleValue;
		case charValue:
			return (static_cast<double>(_charValue));
	}
	return (0);
}

Parser::operator char() {
	switch (_type) {
		case intValue:
			if (_intValue < 32 || _intValue > 126)
				throw std::invalid_argument("Non Displayable");
			return (static_cast<char>(_intValue));
		case floatValue:
			if (!std::isnan(_floatValue)) {
				int tmp = static_cast<int>(_floatValue);
				if (tmp < 32 || tmp > 126 || std::isinf(_floatValue))
					throw std::invalid_argument("Non Displayable");
				else
					return static_cast<char>(_floatValue);
			}
			else
				throw std::invalid_argument("Impossible");
		case doubleValue:
			if (!std::isnan(_doubleValue)) {
				long tmp = static_cast<long>(_doubleValue);
				if (tmp < 32 || tmp > 126 || std::isinf(_doubleValue))
					throw std::invalid_argument("Non Displayable");
				else
					return static_cast<char>(_doubleValue);
			}
			else
				throw std::invalid_argument("Impossible");
		case charValue:
			if (_charValue < 32 || _charValue > 126)
				throw std::invalid_argument("Non Displayable");
			return (_charValue);
	}
	return (0);
}

void	Parser::printValue() {
	if (_type == floatValue || _type == doubleValue) {
		int i = _str.find(".");
		_precision = _str.length() - i - 1;
		if (_type == floatValue)
			_precision--;
		_precision = (_precision > 10) ? 10 : _precision;
	}
	std::cout << "char: ";
	try {
		std::cout << static_cast<char>(*this) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try {
		std::cout << static_cast<int>(*this) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try {
		std::cout << std::fixed << std::setprecision(_precision) << static_cast<float>(*this) << "f" << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try {
		std::cout << std::fixed << std::setprecision(_precision) << static_cast<double>(*this) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}