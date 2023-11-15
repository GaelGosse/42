/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:37:52 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 18:02:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
// #include "color.hpp"
#include <fstream>
#include <iomanip>
#include <cstdlib>

#include "../includes/A_Materia.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	Character* me = new Character("me");

	// A_Materia* tmp;
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