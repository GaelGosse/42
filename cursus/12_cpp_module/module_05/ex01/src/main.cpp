/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/11/30 18:09:09 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int	main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " ---------- main ---------- " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Form		cirfa("cirfa", 145, 140);
		Bureaucrat	me("Gael", 150);


		std::cout << std::endl;
		// cirfa.beSigned(me);
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		me.upgrade();
		cirfa.beSigned(me);

		std::cout << std::endl;
		std::cout << cirfa << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;




	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " ---------- create low / high ---------- " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Form	cirfa("cirfa", 358, 150);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	try
	{
		Form	cirfa("cirfa", 150, 8645);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	try
	{
		Form	cirfa("cirfa", 0, 1);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	try
	{
		Form	cirfa("cirfa", 1, -8645);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	(void)argc;
	(void)argv;
}