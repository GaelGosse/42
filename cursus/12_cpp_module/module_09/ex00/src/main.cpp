/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/17 18:43:01 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int argc, char **argv, char **envp)
{
	if (argc != 2)
	{
		std::cout << "Must have one argument" << std::endl;
		return (1);
	}

	std::ifstream	file(argv[1]);
	std::string		line;
	if (file.is_open())
	{
		while (getline(file, line))
		{
			std::cout << line << std::endl;
			if (isdigit(line[0]) && isdigit(line[1]) && isdigit(line[2]) && isdigit(line[3]))
				std::cout << "OK" << std::endl;
			else
				std::cout << "ERR" << std::endl;
			std::cout << std::endl;
		}
		// file.close();
	}
	else
		std::cout << "Can't open " << argv[1] << std::endl;
		// file.close();

	(void)argc;
	(void)argv;
	(void)envp;
}
