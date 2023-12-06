/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztrottie <ztrottie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:36:36 by ztrottie          #+#    #+#             */
/*   Updated: 2023/12/06 13:50:39 by ztrottie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdint>

struct Data {
	std::string password;
};

uintptr_t serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}

int main(void) {
	Data	pass;
	pass.password = "zach yer laid sa c'est vrai!";
	std::cout << pass.password << std::endl;
	uintptr_t raw = serialize(&pass);
	std::cout << raw << std::endl;
	Data *pass2 = deserialize(raw);
	std::cout << pass2->password << std::endl;
	if (pass2->password == pass.password && &pass == pass2)
		std::cout << "chu bander raide!" << std::endl;
	else
		std::cout << "zach y suce juste un peu" << std::endl;
}