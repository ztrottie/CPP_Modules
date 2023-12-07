/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:36:34 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 14:59:50 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T, typename Func>
void	iter(T *array, unsigned int len, Func func) {
	for (unsigned int i = 0; i < len; i++) {
		func(array[i]);
	}
}

template<typename T>
void	print(T &element) {
	std::cout << element << std::endl;
}