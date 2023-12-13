/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:58:01 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/13 10:48:19 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	// Constructors / Destructor
	MutantStack() {};
	MutantStack(const MutantStack &inst) {*this = inst;};
	~MutantStack() {};

	// Operator Overload
	MutantStack& operator=(const MutantStack &rhs) {return rhs;};

	// Functions
	typedef typename std::deque<T>::iterator iterator;
	iterator begin() { return std::stack<T>::c.begin(); };
	iterator end() { return std::stack<T>::c.end(); };
};

// MutantStack_HPP