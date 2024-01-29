/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:08 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/28 22:00:23 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

bool	check_format(std::string year, std::string month, std::string day)
{
	unsigned int	r_year = std::atoi(year.c_str());
	unsigned int	r_month = std::atoi(month.c_str());
	unsigned int	r_day = std::atoi(day.c_str());

	if (r_year < 1970 || r_year > 2024)
		return false;
	if (r_month > 12 || r_day > 31 || (r_month == 2  && r_day > 29))
		return false;
	if ((r_month == 4 || r_month == 6 || r_month == 9 || r_month == 11) && r_day >= 31)
		return false;
	return true;
}

bool	check_date(std::string date)
{
	std::istringstream	curr_line(date);
	std::string			year;
	std::string			month;
	std::string			day;
	double				r_date;

	r_date = std::strtod(date.c_str(), 0);
	if (getline(curr_line, year, '-') && getline(curr_line, month, '-') && getline(curr_line, day, '-'))
	{
		if (check_format(year, month, day) == false)
		{
			std::cout << "Err: bad input => " << date << std::endl;
			return false;
		}
	}
	else
	{
		std::cout << "Err: bad input => " << date << std::endl;
		return false;
	}
	return true;
}

std::string	strtrim(std::string& str)
{
	size_t	first = str.find_first_not_of(' ');
	size_t	last = str.find_last_not_of(' ');

	if (first == std::string::npos)
		return ("");

	return (str.substr(first, last - first + 1));
}

bool	check_value(std::string	value)
{
	if (std::none_of(value.begin(), value.end(), ::isdigit))
	{
		std::cout << "Err: not a number" << std::endl;
		return false;
	}
	size_t	len_value;
	double	r_value = std::stod(value.c_str(), &len_value);

	// if (std::all_of(value.begin(), value.end(), ::isdigit) == false)
	if (r_value < 0)
	{
		std::cout << "Err: not a positive number" << std::endl;
		return false;
	}
	if (len_value != value.length())
	{
		std::cout << "Err: not only " << std::endl;
		return false;
	}
	if (r_value >= 2147483647 || r_value <= -2147483648)
	{
		std::cout << "Err: too large number" << std::endl;
		return false;
	}
	return true;
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

				if (getline(curr_line, date, '|') && getline(curr_line, exc_rate, '|'))
				{
					if (check_date(date) && check_value(strtrim(exc_rate)))
					{
						std::cout << GREEN << "OK " << RST << std::endl;
						btc.retrieveDate(date);
					}
				}
				else
					std::cout << "c Err: bad input => " << line << std::endl;
				std::cout << std::endl;
				std::cout << std::endl;
			}
			input_file.close();
		}
		else
			throw BitcoinExchange::OpenInputException();
	}
	catch (std::exception &e) { std::cout << "exception: " << e.what() << std::endl; }

	(void)argc;
	(void)argv;
	(void)envp;
}
