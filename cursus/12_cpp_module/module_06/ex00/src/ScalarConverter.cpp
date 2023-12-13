/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/13 19:01:56 by ggosse           ###   ########.fr       */
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
	static_cast<void>(src);
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
	static int		integer = 0;
	static char		character = 0;
	static float	floatable = 0.0f;
	static double	twice = 0.0;

	// std::cout << "isInt " << ScalarConverter::isInt(_str) << std::endl;
	// std::cout << "isChar " << ScalarConverter::isChar(_str) << std::endl;
	// std::cout << "isFloat " << ScalarConverter::isFloat(_str) << std::endl;
	// std::cout << "isDouble " << ScalarConverter::isDouble(_str) << std::endl;
	if (ScalarConverter::isInt(str))
	{
		std::cout << GREEN << "Int" << RST << std::endl;
		integer = std::atoi(str.c_str());
		// if (integer > 4294967294 || integer < -4294967293)
		// 	integer = 4294967294;
		ScalarConverter::displayInt(integer, str);
		std::cout << "==> " << integer << std::endl;
	}
	else if (ScalarConverter::isChar(str))
	{
		std::cout << GREEN << "Char" << RST << std::endl;
		character = str[0];
		// if (character > 4294967294 || character < -4294967293)
		// 	character = 4294967294;
		ScalarConverter::displayChar(character, str);
		std::cout << "==> " << character << std::endl;
	}
	else if (ScalarConverter::isFloat(str))
	{
		std::cout << GREEN << "Float" << RST << std::endl;
		floatable = std::atof(str.c_str());
		// if (floatable > 4294967294 || floatable < -4294967293)
		// 	floatable = 4294967294;
		ScalarConverter::displayFloat(floatable, str);
		std::cout << "==> " << floatable << std::endl;
	}
	else if (ScalarConverter::isDouble(str))
	{
		std::cout << GREEN << "Double" << RST << std::endl;
		twice = std::strtod(str.c_str(), 0);
		// if (twice > 4294967294 || twice < -4294967293)
		// 	twice = 4294967294;
		ScalarConverter::displayDouble(twice, str);
		std::cout << "==> " << twice << std::endl;
	}
	else
	{
		std::cout << RED << "not a good input" << RST << std::endl;
		return ;
	}
	// std::cout << CYAN << str << RST << std::endl;
	(void)str;
}

bool	ScalarConverter::isChar(std::string _str)
{
	unsigned long	i;

	i = 0;
	if (std::isgraph(_str[i]) && _str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	ScalarConverter::isInt(std::string str)
{
	unsigned long	i = 0;

	if (str[0] == '-' || str[0] == '+')
		i++;
	while (std::isdigit(str[i]))
		i++;
	if (str.size() == i)
		return (true);
	return (false);
}

bool	ScalarConverter::isFloat(std::string _str)
{
	unsigned long	i;

	i = 0;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf")
		return (true);
	if (_str[i] == '-' || _str[i] == '+')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str[i] == '.')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str.size() == i && _str[i] == 'f' && _str[i + 1] == '\0')
		return (true);
	return (false);
}

bool	ScalarConverter::isDouble(std::string _str)
{
	unsigned long	i;

	i = 0;
	if (_str == "-inf" || _str == "+inf" || _str == "nan")
		return (true);
	if (_str[i] == '-' || _str[i] == '+')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str[i] == '.')
		i++;
	while (isdigit(_str[i]))
		i++;
	if (_str.size() == i && _str[i] == '\0' && i > 2)
		return (true);
	return (false);
}

void	ScalarConverter::displayInt(int org, std::string _str)
{
	std::cout << " ################ " << org << " ################ " << std::endl;
	char _char = static_cast<char>(org);
	float _float = static_cast<float>(org);
	double _double = static_cast<double>(org);

	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(org) << std::endl;


	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan" || org > 255 || org < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;


	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
	{
		if ( _str == "-inf" || _str == "+inf" || _str == "nan")
			std::cout << "float: " << _float << "f" << std::endl;
		else
			std::cout << "float: " << _float << std::endl;
	}
	else
		std::cout << "float: " << _float << std::endl;


	std::cout << "double: " << _double << ".0" << std::endl;
}
void	ScalarConverter::displayChar(char org, std::string _str)
{
	int _int = static_cast<int>(org);
	float _float = static_cast<float>(org);
	double _double = static_cast<double>(org);

	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan" || _int > 255)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << org << std::endl;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
	{
		if ( _str == "-inf" || _str == "+inf" || _str == "nan")
			std::cout << "float: " << _float << "f" << std::endl;
		else
			std::cout << "float: " << _float << std::endl;
	}
	else
		std::cout << "float: " << _float << std::endl;
	std::cout << "double: " << _double << ".0" << std::endl;
}
void	ScalarConverter::displayFloat(float org, std::string _str)
{
	int _int = static_cast<int>(org);
	char _char = static_cast<char>(org);
	double _double = static_cast<double>(org);

	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;


	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan" || _int > 255)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;


	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
	{
		if ( _str == "-inf" || _str == "+inf" || _str == "nan")
			std::cout << "float: " << _str << "f" << std::endl;
		else
			std::cout << "float: " << _str << std::endl;
	}
	else
		std::cout << "float: " << org << std::endl;


	std::cout << "double: " << _double << std::endl;
}
void	ScalarConverter::displayDouble(double org, std::string _str)
{
	int _int = static_cast<int>(org);
	char _char = static_cast<char>(org);
	float _float = static_cast<float>(org);

	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << _int << std::endl;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan" || _int > 255)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << _char << std::endl;
	if (_str == "-inff" || _str == "+inff" || _str == "nanf" || _str == "-inf" || _str == "+inf" || _str == "nan")
	{
		if (_str == "-inf" || _str == "+inf" || _str == "nan")
			std::cout << "float: " << _float << "f" << std::endl;
		else
			std::cout << "float: " << _float << std::endl;
	}
	else
		std::cout << "float: " << _float << std::endl;
	std::cout << "double: " << org << std::endl;
}