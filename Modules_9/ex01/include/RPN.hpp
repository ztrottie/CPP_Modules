/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 14:15:38 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/20 10:11:25 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
class RPN
{
private:
	std::stack<int> _stack;
public:
	// Constructors / Destructor
	RPN();
	RPN(const RPN &inst);
	~RPN();

	// Operator Overload
	RPN& operator=(const RPN &rhs);

	// Functions
	void	calculator(const std::string &input);
};

// RPN_HPP