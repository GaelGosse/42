/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/18 16:31:46 by ggosse           ###   ########.fr       */
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

	std::ifstream	file("mini.csv");
	std::string		line;
	char			*endline = NULL;
	double			exc_rate = 0;
	int				year = 1970;
	int				month = 0;
	int				day = 0;

	if (file.is_open())
	{

		while (getline(file, line))
		{
			std::cout << " ----------------------------------------- " << std::endl;
			std::cout << "line: " << line << std::endl;

			exc_rate = strtod(line.c_str(), &endline);
			std::cout << "exc_rate: " << exc_rate << std::endl;
			// this->_btc
			std::cout << std::endl;
		}
		file.close();
	}
	else
		std::cout << "Can't open data.csv" << std::endl;
		// std::cout << "Can't open " << argv[1] << std::endl;
		// file.close();

	(void)year;
	(void)month;
	(void)day;
	(void)argc;
	(void)argv;
	(void)envp;
}
