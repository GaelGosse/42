/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/24 13:26:09 by gael             ###   ########.fr       */
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
	try
	{
		BitcoinExchange	btc;
		std::ifstream	input_file(argv[1]);
		std::string		line, date, exc_rate;

		if (input_file.is_open())
		{
			getline(input_file, line);
			while (getline(input_file, line))
			{
				std::istringstream	curr_line(line);

				std::cout << " -------------------- " << std::endl;
				// std::cout << "line: " << line << std::endl;
				if (getline(curr_line, date, '|') && getline(curr_line, exc_rate, '|'))
				{
					std::cout << "date: " << date << std::endl;
					std::cout << "exc_rate: " << exc_rate << std::endl;
				}
				std::cout << std::endl << std::endl;
			}
			input_file.close();
		}
		else
			throw BitcoinExchange::OpenInputException();
	}
	catch (std::exception &e) { std::cout << e.what() << std::endl; }

	(void)argc;
	(void)argv;
	(void)envp;
}
