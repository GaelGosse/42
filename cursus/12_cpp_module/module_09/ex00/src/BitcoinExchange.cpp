/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:42 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/24 13:19:53 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

// canonical form
BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Constructor called" << std::endl;
	std::ifstream	data_file("mini.csv");
	std::string		line, date, exc_rate;

	if (data_file.is_open())
	{
		getline(data_file, line);
		while (getline(data_file, line))
		{
			std::istringstream	curr_line(line);

			if (getline(curr_line, date, ',') && getline(curr_line, exc_rate, ','))
				this->_btc.insert( std::make_pair(date, std::strtod(exc_rate.c_str(), 0)) );
		}
		data_file.close();
	}
	else
		throw BitcoinExchange::OpenDataException();

	// for(std::map<std::string, double>::const_iterator it = this->_btc.begin(); it != this->_btc.end(); ++it)
	// {
	// 	std::cout << it->first << " " << it->second << "\n";
	// }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	std::cout << "Copy BitcoinExchange constructor called" << std::endl;
	*this = src;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	std::cout << "Overload BitcoinExchange operator called" << std::endl;

	if (this != &src)
		this->_btc = src.getBtc();
	return (*this);
}
BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;
}

// others constructors

// methods
void	BitcoinExchange::retrieveDate(void)
{
}

// accessor
std::map<std::string, double>	BitcoinExchange::getBtc(void) const
{
	return (this->_btc);
}

// operator

// exceptions
