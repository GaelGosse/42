/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/25 17:29:58 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

bool	check_format(std::string year, std::string month, std::string day)
{
	unsigned int	r_year = std::atoi(year.c_str());
	unsigned int	r_month = std::atoi(month.c_str());
	unsigned int	r_day = std::atoi(day.c_str());

	if (r_year < 1970 || r_year > 2024)
	{
		std::cout << RED << "ERR" << RST << std::endl;
		return false;
	}
	if (r_month > 12 || r_day > 31 || (r_month == 2  && r_day > 29))
	{
		std::cout << RED << "ERR" << RST << std::endl;
		return false;
	}
	if ((r_month == 4 || r_month == 6 || r_month == 9 || r_month == 11) && r_day >= 31)
	{
		std::cout << RED << "ERR" << RST << std::endl;
		return false;
	}
	return true;
}

void	check_date(std::string date)
{
	std::istringstream	curr_line(date);
	std::string			year;
	std::string			month;
	std::string			day;

	date = std::strtod(date.c_str(), 0);
	if (getline(curr_line, year, '-') && getline(curr_line, month, '-') && getline(curr_line, day, '-'))
	{
		if (check_format(year, month, day) == false)
			return ;
	}
	else
	{
		std::cout << RED << "ERR" << RST << std::endl;
		return ;
	}
	std::cout << "			year: " << std::strtod(year.c_str(), 0) << std::endl;
	std::cout << "			month: " << std::strtod(month.c_str(), 0) << std::endl;
	std::cout << "			day: " << std::strtod(day.c_str(), 0) << std::endl;
}

std::string	strtrim(std::string& str)
{
	size_t	first = str.find_first_not_of(' ');
	size_t	last = str.find_last_not_of(' ');

	if (first == std::string::npos)
		return ("");

	return (str.substr(first, last - first + 1));
}

void	check_value(std::string	value)
{
	int	r_value = std::strtod(value.c_str(), 0);

	if (std::all_of(value.begin(), value.end(), ::isdigit) == false)
		std::cout << RED << "ERR" << RST << std::endl;
	if (r_value >= 2147483647 || r_value <= -2147483648)
		std::cout << RED << "ERR" << RST << std::endl;
}

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
				std::cout << "line: " << line << std::endl;
				if (getline(curr_line, date, '|') && getline(curr_line, exc_rate, '|'))
				{
					check_date(date);
					check_value(strtrim(exc_rate));
					// std::cout << "date: " << date << std::endl;
					// std::cout << "exc_rate: " << exc_rate << std::endl;
				}
				else
					std::cout << RED << "ERR" << RST << std::endl;
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
