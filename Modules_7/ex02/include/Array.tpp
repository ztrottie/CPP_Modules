/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:39:10 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 11:32:35 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <new>
#include <stdexcept>

template<typename T>
Array<T>::Array() : _array(NULL), _size(1) {
	std::cout << "Default Array constructor " << std::endl;
}

template<typename T>
Array<T>::Array(const unsigned int &n) : _size(n) {
	std::cout << "Array constructor with " << n << " elements" << std::endl;
	_array = new T[n];
}

template<typename T>
Array<T>::Array(const Array &inst) {
	std::cout << "Copy Array constructor " << std::endl;
	*this = inst;
}

template<typename T>
Array<T>::~Array() {
	std::cout << "Array destructor" << std::endl;
	if (_size != 0)
		delete [] _array;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &rhs) {
	std::cout << "Array operator = overload" << std::endl;
	if (this != &rhs) {
		delete [] _array;
		unsigned int size = rhs.size();
		_array = new T[size];
		for (int i = 0; i < size; i++) {
			_array[i] = rhs[i];
		}
	}
	return *this;
}

template<typename T>
T& Array<T>::operator[](const unsigned int i) const {
	if (i > _size - 1)
		throw std::out_of_range("Index is out of array's range!");
	return _array[i];
}

template<typename T>
const unsigned int &Array<T>::size() const {
	return (_size);
}