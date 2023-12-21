/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:53 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/21 13:20:49 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class PmergeMe
{
public:
	// Constructors / Destructor
	PmergeMe();
	PmergeMe(const PmergeMe &inst);
	~PmergeMe();

	// Operator Overload
	PmergeMe& operator=(const PmergeMe &rhs);

	// Functions
	void	vectorSort(int argc, char **argv);
	void	listSort(int argc, char **argv);
};

// PmergeMe_HPP