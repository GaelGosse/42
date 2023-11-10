/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:18:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 18:39:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(int argc, char **argv){
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	// delete meta;
	delete j;
	delete i;
	(void)argc;
	(void)argv;
}

// int	main(int argc, char **argv){
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();

// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	meta->makeSound();

// 	// delete meta;
// 	delete i;
// 	(void)argc;
// 	(void)argv;
// }
