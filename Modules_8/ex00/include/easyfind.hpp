/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:59:27 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/08 12:32:23 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::const_iterator easyfind(const T &container, int value) {
	typename T::const_iterator iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw std::invalid_argument("The value as not been found!");
	return iter;
}