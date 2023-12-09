/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:12:45 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/09 17:12:45 by ggosse           ###   ########.fr       */
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

// others constructors

// methods

// accessor

// operator

// exceptions

