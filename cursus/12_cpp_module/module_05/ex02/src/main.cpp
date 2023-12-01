/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/01 18:29:30 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

int	main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << " ----------------- main ------------------ " << std::endl;
	std::cout << " ----------------------------------------- " << std::endl;
	std::cout << std::endl;
	try
	{
		Form		cirfa("cirfa", 145, 140);
		Bureaucrat	me("Gael", 150);

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