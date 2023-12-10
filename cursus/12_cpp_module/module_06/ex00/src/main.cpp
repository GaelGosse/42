/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:39:08 by gael              #+#    #+#             */
/*   Updated: 2023/12/10 19:04:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int	main(int argc, char **argv){
	std::string	str("a");

	ScalarConverter::convert(str);
	std::cout << std::endl;
	ScalarConverter::convert("8");
	std::cout << std::endl;
	ScalarConverter::convert("8.0123");
	std::cout << std::endl;
	ScalarConverter::convert("8.0145f");
	(void)argc;
	(void)argv;
}