/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:51:42 by ggosse            #+#    #+#             */
/*   Updated: 2024/01/16 17:51:42 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

// canonical form
BitcoinExchange::BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Constructor called" << std::endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src)
{
	std::cout << "Copy BitcoinExchange constructor called" << std::endl;
	*this = src;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src)
{
	std::cout << "Overload BitcoinExchange operator called" << std::endl;
	(void)src;
	return (*this);
}
BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange Destructor called" << std::endl;
}

// others constructors

// methods

// accessor

// operator

// exceptions

