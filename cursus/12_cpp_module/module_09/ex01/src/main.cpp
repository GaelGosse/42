/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 02:56:26 by gael              #+#    #+#             */
/*   Updated: 2024/01/29 12:58:08 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int	main(int argc, char **argv){
	if (argc != 2)
	{
		std::cout << "must have one argument" << std::endl;
		return 1;
	}

	try
	{
		Rpn rpn;

		rpn.calculate(argv[1]);
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	(void)argc;
	(void)argv;
}