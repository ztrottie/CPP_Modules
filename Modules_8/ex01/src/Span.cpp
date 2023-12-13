/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 12:44:51 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/13 11:03:59 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <stdexcept>

Span::Span() : _list(), _maxSize(0), _nbElement(0) {
	std::cout << "Default Span constructor " << std::endl;
}

Span::Span(const unsigned int n) : _list(), _maxSize(n), _nbElement(0) {
	std::cout << "Span constructor of " << n << " elements!" << std::endl;
}

Span::Span(const Span &inst) : _list(inst._maxSize), _maxSize(inst._maxSize), _nbElement(0) {
	std::cout << "Copy Span constructor " << std::endl;
	*this = inst;
}

Span::~Span() {
	std::cout << "Span destructor" << std::endl;
}

Span& Span::operator=(const Span &rhs) {
	std::cout << "Span operator = overload" << std::endl;
	if (_maxSize != rhs._maxSize)
		throw std::invalid_argument("Size are not the same operation invalid!");
	if (this != &rhs) {
		_list.clear();
		_list = rhs._list;
	}
	return *this;
}

void	Span::addNumber(const int &nbr) {
	if (_nbElement == _maxSize)
		throw std::invalid_argument("Span is already full!");
	_list.push_back(nbr);
	_nbElement++;
}

int Span::shortestSpan() const {
	if (_nbElement == 0)
		throw std::invalid_argument("Span is empty!");
	else if (_nbElement == 1)
		throw std::invalid_argument("Not enough element in Span");
	int difference = std::numeric_limits<int>::max();
	for (std::list<int>::const_iterator it = _list.begin(); it != _list.end(); it++) {
		for (std::list<int>::const_iterator secondIt = _list.begin(); secondIt != _list.end(); secondIt++) {
			int value = std::abs(*it - *secondIt);
			if (value < difference && value != 0)
				difference = value;
		}
	}
	return difference;
}

int Span::longestSpan() const {
	if (_nbElement == 0)
		throw std::invalid_argument("Span is empty!");
	else if (_nbElement == 1)
		throw std::invalid_argument("Not enough element in Span");
	int max = *std::max_element(_list.begin(), _list.end());
	int min = *std::min_element(_list.begin(), _list.end());
	std::cout << "size: " << _list.size() << std::endl;
	std::cout << "min: " << min << std::endl;
	std::cout << "max: " << max << std::endl;
	return (max - min);
}