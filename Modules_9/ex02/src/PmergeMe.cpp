/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/27 18:12:52 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <algorithm>
#include <exception>
#include <iostream>
#include <list>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

PmergeMe::PmergeMe() {
	std::cout << "Default PmergeMe constructor " << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &inst) {
	std::cout << "Copy PmergeMe constructor " << std::endl;
	*this = inst;
}

PmergeMe::~PmergeMe() {
	std::cout << "PmergeMe destructor" << std::endl;
}

PmergeMe& PmergeMe::operator=(const PmergeMe &rhs) {
	std::cout << "PmergeMe operator = overload" << std::endl;
	if (this != &rhs) {

	}
	return *this;
}

void	PmergeMe::vectorMerge(std::vector<std::pair<int, int> > &vector, int left, int mid, int right) {
	const int lengthLeft = mid - left + 1;
	const int lengthRight = right - mid;

	std::vector<std::pair<int, int> > leftVector(vector.begin() + left, vector.begin() + mid + 1);
	std::vector<std::pair<int, int> > rightVector(vector.begin() + mid + 1, vector.begin() + right + 1);
	
	int i = 0, j = 0, k = left;
	while (i < lengthLeft && j < lengthRight) {
		if (leftVector[i].second <= rightVector[j].second) {
			vector[k] = leftVector[i];
			i++;
		} else {
			vector[k] = rightVector[j];
			j++;
		}
		k++;
	}
	while (i < lengthLeft) {
		vector[k] = leftVector[i];
		i++;
		k++;
	}
	while (i < lengthRight) {
		vector[k] = rightVector[j];
		i++;
		k++;
	}
}

void PmergeMe::vectorMergeSort(std::vector<std::pair<int, int> > &vector, int const begin, int const end) {
	if (begin >= end)
		return;
	int mid = begin + (end - begin) / 2;
	vectorMergeSort(vector, begin, mid);
	vectorMergeSort(vector, mid + 1, end);
	vectorMerge(vector, begin, mid, end);
}

void	PmergeMe::vectorInsertion(std::vector<std::pair<int, int> > &vector, std::vector<int> &result) {
	while (!vector.empty()) {
		int nbr = vector.front().first;
		if (nbr != -1) {
			std::vector<int>::iterator it = std::lower_bound(result.begin(), result.end(), nbr);
			result.insert(it, nbr);
		}
		vector.erase(vector.begin());
	}
}

void	PmergeMe::vectorSort(int argc, int *values) {
	std::vector<std::pair<int, int> > vector;
	
	for (int i = 0; i < argc - 1;) {
		int number1 = values[i++];
		if (i < argc - 1) {
			int number2 = values[i++];
			if (number2 > number1)
				vector.push_back(std::make_pair(number1, number2));
			else
				vector.push_back((std::make_pair(number2, number1)));
		}
		else {
			vector.push_back(std::make_pair(-1, number1));
		}
	}
	vectorMergeSort(vector, 0, vector.size() - 1);
	std::vector<int> result;
	for (std::vector<std::pair<int, int> >::const_iterator it = vector.begin(); it != vector.end(); it++) {
		std::cout << "first: " << it->first << " second: " << it->second << std::endl;
	}
	for (std::vector<std::pair<int, int> >::const_iterator it = vector.begin(); it != vector.end(); it++) {
		result.push_back(it->second);
	}
	vectorInsertion(vector, result);
	for (std::vector<int>::const_iterator it = result.begin(); it != result.end(); it++) {
		std::cout << "first: " << *it << std::endl;
	}
}

void	PmergeMe::listMerge(std::list<std::pair<int, int> > &list, int left, int mid, int right) {
	const int lengthLeft = mid - left + 1;
	const int lengthRight = right - mid;

	std::list<std::pair<int, int> > leftList(list.begin() + left, list.begin() + mid + 1);
	std::list<std::pair<int, int> > rightList(list.begin() + mid + 1, list.begin() + right + 1);
	
	int i = 0, j = 0, k = left;
	while (i < lengthLeft && j < lengthRight) {
		if (leftList[i].second <= rightList[j].second) {
			list[k] = leftList[i];
			i++;
		} else {
			list[k] = rightList[j];
			j++;
		}
		k++;
	}
	while (i < lengthLeft) {
		list[k] = leftList[i];
		i++;
		k++;
	}
	while (i < lengthRight) {
		list[k] = rightList[j];
		i++;
		k++;
	}
}

void PmergeMe::listMergeSort(std::list<std::pair<int, int> > &list, int const begin, int const end) {
	if (begin >= end)
		return;
	int mid = begin + (end - begin) / 2;
	listMergeSort(list, begin, mid);
	listMergeSort(list, mid + 1, end);
	listMerge(list, begin, mid, end);
}

void	PmergeMe::listInsertion(std::list<std::pair<int, int> > &list, std::list<int> &result) {
	while (!list.empty()) {
		int nbr = list.front().first;
		if (nbr != -1) {
			std::list<int>::iterator it = std::lower_bound(result.begin(), result.end(), nbr);
			result.insert(it, nbr);
		}
		list.erase(list.begin());
	}
}

void	PmergeMe::listSort(int argc, int *values) {
	std::list<std::pair<int, int> > list;
	
	for (int i = 0; i < argc - 1;) {
		int number1 = values[i++];
		if (i < argc - 1) {
			int number2 = values[i++];
			if (number2 > number1)
				list.push_back(std::make_pair(number1, number2));
			else
				list.push_back((std::make_pair(number2, number1)));
		}
		else {
			list.push_back(std::make_pair(-1, number1));
		}
	}
	listMergeSort(list, 0, list.size() - 1);
	std::list<int> result;
	for (std::list<std::pair<int, int> >::const_iterator it = list.begin(); it != list.end(); it++) {
		std::cout << "first: " << it->first << " second: " << it->second << std::endl;
	}
	for (std::list<std::pair<int, int> >::const_iterator it = list.begin(); it != list.end(); it++) {
		result.push_back(it->second);
	}
	listInsertion(list, result);
	for (std::list<int>::const_iterator it = result.begin(); it != result.end(); it++) {
		std::cout << "first: " << *it << std::endl;
	}
}

void PmergeMe::sort(int argc, char **argv) {
	int values[argc - 1];

	try {
		parsing(argc, argv, values);
		vectorSort(argc, values);
		listSort(argc, values);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void	PmergeMe::parsing(int argc, char **argv, int *values) {
	for (int i = 1; i < argc; i++) {
		try {
			values[i - 1] = std::stoi(argv[i]);
			if (values[i - 1] < 0)
				throw std::exception();
		} catch (std::exception &e) {
			throw std::invalid_argument("Error!");
		}
	}
}