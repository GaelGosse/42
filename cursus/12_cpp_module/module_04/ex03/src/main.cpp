/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:37:52 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 17:06:44 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
// #include "Color.hpp"
#include <fstream>
#include <iomanip>
#include <cstdlib>

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	AMateria* ice = new Ice();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	Character* me = new Character("me");

	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);

	Character* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}