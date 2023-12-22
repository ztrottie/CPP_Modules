/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:53 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/22 14:33:57 by ztrottie         ###   ########.fr       */
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
	void	sort(int argc, char **argv);
	void	parsing(int argc, char **argv, int *values);
};

// PmergeMe_HPP