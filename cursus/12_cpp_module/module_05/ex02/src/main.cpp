/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/02 18:18:38 by ggosse           ###   ########.fr       */
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
	std::cout << " ----------------- main ------------------ " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		ShrubberyCreationForm	noel("noel");
		Bureaucrat				me("Gael", 150);

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;


	(void)argc;
	(void)argv;
}