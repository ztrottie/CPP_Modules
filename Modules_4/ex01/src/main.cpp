/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:12:49 by ztrottie          #+#    #+#             */
/*   Updated: 2023/10/27 10:03:37 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"
#include "../include//Dog.hpp"
#include "../include/Cat.hpp"
#include "../include/WrongCat.hpp"
#include "../include/WrongAnimal.hpp"
#define	NB_ANIMAL	20

int	main(void) {
	{
		Animal	*nice[NB_ANIMAL];

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
	// {
	// 	const Animal* meta = new Animal();
	// 	const Animal* j = new Dog();
	// 	const Animal* i = new Cat();
	// 	const WrongAnimal* wrongmeta = new WrongAnimal();
	// 	const WrongAnimal* wrongcat = new WrongCat();
		
	// 	std::cout << j->getType() << " " << std::endl;
	// 	std::cout << i->getType() << " " << std::endl;
	// 	std::cout << meta->getType() << " " << std::endl;

	// 	i->makeSound(); //will output the cat sound!
	// 	j->makeSound();
	// 	meta->makeSound();
	// 	wrongcat->makeSound();
	// 	wrongmeta->makeSound();

	// 	delete meta;
	// 	delete i;
	// 	delete j;
	// 	delete wrongcat;
	// 	delete wrongmeta;
	// }
}