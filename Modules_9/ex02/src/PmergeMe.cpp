/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 14:23:40 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/28 10:13:31 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PmergeMe.hpp"
#include <algorithm>
#include <chrono>
#include <exception>
#include <iostream>
#include <deque>
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
	
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
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
		result.push_back(it->second);
	}
	vectorInsertion(vector, result);
	std::cout << "After:   ";
	for (std::vector<int>::const_iterator it = result.begin(); it != result.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double> >(t2 - t1);
	std::cout << "Time to process a range of " << argc - 1 << " elemets with std::vector : " << time_span.count() << " us" << std::endl; 
}

void	PmergeMe::dequeMerge(std::deque<std::pair<int, int> > &deque, int left, int mid, int right) {
	const int lengthLeft = mid - left + 1;
	const int lengthRight = right - mid;

	std::deque<std::pair<int, int> > leftDeque(deque.begin() + left, deque.begin() + mid + 1);
	std::deque<std::pair<int, int> > rightDeque(deque.begin() + mid + 1, deque.begin() + right + 1);
	
	int i = 0, j = 0, k = left;
	while (i < lengthLeft && j < lengthRight) {
		if (leftDeque[i].second <= rightDeque[j].second) {
			deque[k] = leftDeque[i];
			i++;
		} else {
			deque[k] = rightDeque[j];
			j++;
		}
		k++;
	}
	while (i < lengthLeft) {
		deque[k] = leftDeque[i];
		i++;
		k++;
	}
	while (i < lengthRight) {
		deque[k] = rightDeque[j];
		i++;
		k++;
	}
}

void PmergeMe::dequeMergeSort(std::deque<std::pair<int, int> > &deque, int const begin, int const end) {
	if (begin >= end)
		return;
	int mid = begin + (end - begin) / 2;
	dequeMergeSort(deque, begin, mid);
	dequeMergeSort(deque, mid + 1, end);
	dequeMerge(deque, begin, mid, end);
}

void	PmergeMe::dequeInsertion(std::deque<std::pair<int, int> > &deque, std::deque<int> &result) {
	while (!deque.empty()) {
		int nbr = deque.front().first;
		if (nbr != -1) {
			std::deque<int>::iterator it = std::lower_bound(result.begin(), result.end(), nbr);
			result.insert(it, nbr);
		}
		deque.erase(deque.begin());
	}
}

void	PmergeMe::dequeSort(int argc, int *values) {
	std::deque<std::pair<int, int> > deque;
	std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
	
	for (int i = 0; i < argc - 1;) {
		int number1 = values[i++];
		if (i < argc - 1) {
			int number2 = values[i++];
			if (number2 > number1)
				deque.push_back(std::make_pair(number1, number2));
			else
				deque.push_back((std::make_pair(number2, number1)));
		}
		else {
			deque.push_back(std::make_pair(-1, number1));
		}
	}
	dequeMergeSort(deque, 0, deque.size() - 1);
	std::deque<int> result;
	for (std::deque<std::pair<int, int> >::const_iterator it = deque.begin(); it != deque.end(); it++) {
		result.push_back(it->second);
	}
	dequeInsertion(deque, result);
	std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double> >(t2 - t1);
	std::cout << "Time to process a range of " << argc - 1 << " elemets with std::deque : " << static_cast<double>(time_span.count()) << " us" << std::endl; 

}

void PmergeMe::sort(int argc, char **argv) {
	int values[argc - 1];

	try {
		parsing(argc, argv, values);
		std::cout << "before:  ";
		for (int i = 0; i < argc - 1; i++)
			std::cout << values[i] << " ";
		std::cout << std::endl;
		vectorSort(argc, values);
		dequeSort(argc, values);
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
	// check for duplicates!
	// for (int i = 0; i < argc - 1; i++) {
	// 	for (int j = i + 1; j < argc - 1; j++) {
	// 		if (values[i] == values[j])
	// 			throw std::invalid_argument("Error!");
	// 	}
	// }
}