/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2024/04/18 16:21:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << " ---------- create low buro ---------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	intern("anyone", 150);
		Bureaucrat	lowIntern("anyone", 324);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << " ---------- create high buro ---------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	ceo("anyone", 1);
		Bureaucrat	highCeo("anyone", 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << " ---------- upgrade ---------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	me("Gael", 1);

		std::cout << std::endl;
		me.downgrade();
		me.downgrade();
		me.downgrade();
		me.downgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		std::cout << me << std::endl;
		std::cout << std::endl;
	}
	catch (Bureaucrat::BureaucratException &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << " ---------- downgrade  ---------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat	another("one", 149);

		std::cout << std::endl;
		another.upgrade();
		another.upgrade();
		another.downgrade();
		another.downgrade();
		another.downgrade();
		another.downgrade();
		std::cout << another << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	(void)argc;
	(void)argv;
}