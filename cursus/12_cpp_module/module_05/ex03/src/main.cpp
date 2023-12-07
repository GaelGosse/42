/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/07 14:22:22 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Intern.hpp"
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
		me.signForm(shrubbery);
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.signForm(shrubbery);
		me.signForm(shrubbery);
		me.executeForm(shrubbery);
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.executeForm(shrubbery);
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

		std::cout << " ---------- sign not allowed ---------- " << std::endl;
		me.signForm(robot);

		std::cout << " ---------- sign allowed ---------- " << std::endl;
		for(int i = 0; i < 78; i++)
			me.upgrade();
		me.signForm(robot);

		for(int i = 0; i < 27; i++)
			me.upgrade();

		std::cout << " ---------- exec ---------- " << std::endl;
		for(int i = 0; i < 10; i++)
		{
			me.executeForm(robot);
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

		std::cout << " ---------- sign not allowed ---------- " << std::endl;
		me.signForm(pform);
		for(int i = 0; i < 125; i++)
			me.upgrade();

		std::cout << std::endl;
		std::cout << " ---------- sign allowed ---------- " << std::endl;
		me.signForm(pform);

		std::cout << std::endl;
		std::cout << " ---------- exec not allowed ---------- " << std::endl;
		me.executeForm(pform);
		for(int i = 0; i < 20; i++)
			me.upgrade();

		std::cout << std::endl;
		std::cout << " ---------- exec allowed ---------- " << std::endl;
		me.executeForm(pform);
		me.executeForm(pform);
		std::cout << " -------------------- " << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " ----------------------------------------- " << std::endl;
		std::cout << " ---------------- Intern ----------------- " << std::endl;
		std::cout << " ----------------------------------------- " << std::endl;
		Bureaucrat	me("Gael", 1);
		Intern		someone;
		AForm		*anything;

		anything = someone.makeForm("Shrubbery Creation", "garden");

		std::cout << std::endl;
		me.signForm(*anything);
		std::cout << std::endl;
		me.executeForm(*anything);
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	(void)argc;
	(void)argv;
}