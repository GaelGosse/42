/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/10 19:02:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

// canonical form
ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& src)
{
	std::cout << "Copy ScalarConverter constructor called" << std::endl;
	*this = src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
	std::cout << "Overload ScalarConverter operator called" << std::endl;
	(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter Destructor called" << std::endl;
}

// void	ScalarConverter::setStr(std::string str)
// {
// 	this->_str = str;
// }

// methods
void	ScalarConverter::convert(std::string str)
{
	// ScalarConverter::_str = str;
	// ScalarConverter::setStr(str);
	std::cout << str << std::endl;
	std::cout << "isInt " << ScalarConverter::isInt(str) << std::endl;
	std::cout << "isChar " << ScalarConverter::isChar(str) << std::endl;
	std::cout << "isFloat " << ScalarConverter::isFloat(str) << std::endl;
	std::cout << "isDouble " << ScalarConverter::isDouble(str) << std::endl;
	(void)str;
}

bool	ScalarConverter::isChar(std::string _str)
{
	int	i;

	i = 0;
	if (isalpha(_str[i]) && _str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(std::string _str)
{
	int	i;

	i = 0;
	if (_str[i] == '-' || _str[i] == '+')
		i++;
	if (isdigit(_str[i]) && _str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	ScalarConverter::isFloat(std::string _str)
{
	int	i;

	i = 0;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf")
	{
		std::cout << "infinite value" << std::endl;
		return (true);
	}
	if (_str[i] == '-' || _str[i] == '+')
		i++;
	if (isdigit(_str[i]))
		i++;
	if (_str[i] == '.')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str[i] == 'f' && _str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	ScalarConverter::isDouble(std::string _str)
{
	int	i;

	i = 0;
	// if (_str == "-inff" || _str == "+inff" || _str == "nanf")
	// {
	// 	std::cout << "infinite value" << std::endl;
	// 	return (true);
	// }
	if (_str[i] == '-' || _str[i] == '+')
		i++;
	if (isdigit(_str[i]))
		i++;
	if (_str[i] == '.')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str[i] == '\0' && i > 2)
		return (true);
	return (false);
}
