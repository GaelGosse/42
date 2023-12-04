/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/04 18:50:07 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " --------------- shrubbery --------------- " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm	shrubbery("abc");
		Bureaucrat				me("Gael", 150);

		std::cout << std::endl;
		// shrubbery.beSigned(me);
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		shrubbery.beSigned(me);
		// shrubbery.beSigned(me);
		// shrubbery.execute(me);
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		shrubbery.execute(me);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " ----------------- robot ----------------- " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm		robot("a");
		Bureaucrat				me("Gael", 150);

		std::cout << std::endl;

		for(int i = 0; i < 78; i++)
			me.upgrade();
		robot.beSigned(me);

		for(int i = 0; i < 27; i++)
			me.upgrade();

		std::cout << " -------------------- " << std::endl;
		for(int i = 0; i < 10; i++)
		{
			robot.execute(me);
			std::cout << std::endl;
		}
		std::cout << " -------------------- " << std::endl;

		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " --------------- President --------------- " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		PresidentialPardonForm	pform("a");
		Bureaucrat				me("Gael", 150);

		std::cout << std::endl;

		pform.beSigned(me);
		for(int i = 0; i < 125; i++)
			me.upgrade();
		pform.beSigned(me);

		pform.execute(me);
		for(int i = 0; i < 20; i++)
			me.upgrade();

		std::cout << " -------------------- " << std::endl;
		pform.execute(me);
		pform.execute(me);
		std::cout << " -------------------- " << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	(void)argc;
	(void)argv;
}