/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:12:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/31 13:08:44 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/WrongAnimal.hpp"
#define	NB_ANIMAL	20

int	main(void) {
	AAnimal	*nice[NB_ANIMAL];

	for (int i = 0; i < NB_ANIMAL / 2; i++) {
		nice[i] = new Dog();
	}
	for (int i = NB_ANIMAL / 2; i < NB_ANIMAL; i++) {
		nice[i] = new Cat();
	}
	for (int i = 0; i < NB_ANIMAL; i++) {
		delete nice[i];
	}
	return 0;
}