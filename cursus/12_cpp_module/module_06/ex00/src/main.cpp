/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/11 20:44:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int	main(int argc, char **argv){

	// if (argc != 2)
	// 	std::cout << "Must have one argument" << std::endl;
	// else if (atol(argv[1]) > INT_MAX || atol(argv[1]) < INT_MIN)
	// {
	// 	std::cout << "char: " << "impossible" << std::endl;
	// 	std::cout << "int: " << "impossible" << std::endl;
	// 	std::cout << "float: " << "impossible" << std::endl;
	// 	std::cout << "double: " << "impossible" << std::endl;
	// 	return 1;
	// }
	// else
	// {

		std::cout << "----------------- char a ----------------- " << std::endl;
		ScalarConverter::convert("a");
		std::cout << std::endl;

		std::cout << "----------------- * ----------------- " << std::endl;
		ScalarConverter::convert("*");
		std::cout << std::endl;

		std::cout << "----------------- @ ----------------- " << std::endl;
		ScalarConverter::convert("@");
		std::cout << std::endl;

		std::cout << "----------------- int 66 ----------------- " << std::endl;
		ScalarConverter::convert("66");
		std::cout << std::endl;

		std::cout << "----------------- double 8.0123 ----------------- " << std::endl;
		ScalarConverter::convert("66.0123");
		std::cout << std::endl;

		std::cout << "----------------- float 8.0145f ----------------- " << std::endl;
		ScalarConverter::convert("66.0145f");
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << "################# ERR ################# " << std::endl;
		std::cout << "----------------- nanf ----------------- " << std::endl;
		ScalarConverter::convert("nanf");
		std::cout << std::endl;

		std::cout << "----------------- +inff ----------------- " << std::endl;
		ScalarConverter::convert("+inff");
		std::cout << std::endl;

		std::cout << "----------------- -inff ----------------- " << std::endl;
		ScalarConverter::convert("-inff");
		std::cout << std::endl;

		std::cout << "----------------- str ----------------- " << std::endl;
		ScalarConverter::convert("str");
		std::cout << std::endl;

		std::cout << "----------------- 2147483647 ----------------- " << std::endl;
		ScalarConverter::convert("2147483647");
		std::cout << std::endl;

		std::cout << "----------------- -2147483648 ----------------- " << std::endl;
		ScalarConverter::convert("-2147483648");
		std::cout << std::endl;

		std::cout << "----------------- 4294967299 ----------------- " << std::endl;
		ScalarConverter::convert("4294967299");
		std::cout << std::endl;
	// }
	(void)argc;
	(void)argv;
}