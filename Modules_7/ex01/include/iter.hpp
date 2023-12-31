/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:36:34 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 10:34:13 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
void	iter(T *array, unsigned int len, void func(T &context)) {
	for (unsigned int i = 0; i < len; i++) {
		func(array[i]);
	}
}

template<typename T>
void	print(T &element) {
	std::cout << element << std::endl;
}

template<typename T>
void	increment(T &element) {
	element++;
}