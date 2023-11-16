/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:18:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 16:51:43 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AWrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/AAnimal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
// color
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[1;30m"
# define BOLD_RED "\033[1;31m"
# define BOLD_GREEN "\033[1;32m"
# define BOLD_YELLOW "\033[1;33m"
# define BOLD_BLUE "\033[1;34m"
# define BOLD_PURPLE "\033[1;35m"
# define BOLD_CYAN "\033[1;36m"
# define BOLD_WHITE "\033[1;37m"

# define BACK_BLACK "\033[0;40m"
# define BACK_RED "\033[0;41m"
# define BACK_GREEN "\033[0;42m"
# define BACK_YELLOW "\033[0;43m"
# define BACK_BLUE "\033[0;44m"
# define BACK_PURPLE "\033[0;45m"
# define BACK_CYAN "\033[0;46m"
# define BACK_WHITE "\033[0;47m"

# define RESET "\033[0m"
# define RST "\033[0m"

int	main(int argc, char **argv){
	int				nbr_animals = 6;
	const AAnimal*	animals[nbr_animals];

	for (int i = 0; i < nbr_animals / 2; i++)
	{
		animals[i] = new Dog();
		std::cout << "Dog " << i + 1<< std::endl;
	}
	std::cout << std::endl;
	for (int i = nbr_animals / 2; i < nbr_animals; i++)
	{
		animals[i] = new Cat();
		std::cout << "Cat " << i + 1<< std::endl;
	}

	std::cout << std::endl;
	animals[4]->makeSound();
	std::cout << animals[4]->think(0) << std::endl;

	std::cout << std::endl;

	for (int i = 0; i < nbr_animals; i++)
	{
		delete animals[i];
		std::cout << std::endl;
	}

	(void)argc;
	(void)argv;
}

// int	main(int argc, char **argv){
// 	const AWrongAnimal* meta = new AWrongAnimal();
// 	const AWrongAnimal* i = new WrongCat();

// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	meta->makeSound();

// 	// delete meta;
// 	delete i;
// 	(void)argc;
// 	(void)argv;
// }
