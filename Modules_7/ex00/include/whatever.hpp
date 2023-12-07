/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:01:13 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/07 13:17:18 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T & value1, T & value2) {
	T	tmp;
	tmp = value1;
	value1 = value2;
	value2 = tmp;
}

template <typename T>
const T &min(const T & value1, const T &value2) {
	return ((value1 < value2) ? value1 : value2); 
}

template  <typename T>
const T &max(const T &value1, const T &value2) {
	return ((value1 > value2) ? value1 : value2);
}