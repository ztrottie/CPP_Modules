/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 10:39:26 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 11:23:02 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	// Constructors / Destructor
	Array<T>();
	Array<T>(const unsigned int &n);
	Array<T>(const Array &inst);
	~Array<T>();

	// Operator Overload
	Array<T>&	operator=(const Array &rhs);
	Array<T>&	operator=(const T &rhs);
	T&			operator[](const unsigned int i) const;

	// Functions
	const unsigned int &size() const;
};

#include "Array.tpp"
// Array_HPP