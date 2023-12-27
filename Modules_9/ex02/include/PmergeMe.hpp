/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:53 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/27 18:12:36 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <utility>
#include <list>
#include <vector>

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
	void	vectorSort(int argc, int *values);
	void 	vectorMergeSort(std::vector<std::pair<int, int> > &vector, int low, int high);
	void 	vectorMerge(std::vector<std::pair<int, int> > &vector, int left, int mid, int right);
	void	vectorInsertion(std::vector<std::pair<int, int> > &vector, std::vector<int> &result);
	void	listSort(int argc, char **argv);
	void	sort(int argc, char **argv);
	void	parsing(int argc, char **argv, int *values);
	void	listInsertion(std::list<std::pair<int, int> > &list, std::list<int> &result);
	void	listSort(int argc, int *values);
	void	listMergeSort(std::list<std::pair<int, int> > &list, int const begin, int const end);
	void	listMerge(std::list<std::pair<int, int> > &list, int left, int mid, int right);
};

// PmergeMe_HPP