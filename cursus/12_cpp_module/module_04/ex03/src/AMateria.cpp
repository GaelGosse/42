/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:57:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

// canonical form
AMateria::AMateria(void)
{
	std::cout << BOLD_CYAN << "AMateria Constructor called" << std::endl;
}
AMateria::AMateria(const AMateria& src)
{
	std::cout << BOLD_CYAN << "Copy AMateria constructor called" << std::endl;
	*this = src;
}
AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << BOLD_CYAN << "Overload AMateria operator called" << std::endl;
	(void)src;
	return (*this);
}
AMateria::~AMateria(void)
{
	std::cout << BOLD_RED << "AMateria Destructor called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}
// // other functions
// virtual AMateria* clone() const
// {

// }

// void AMateria::use(Character& target)
// {
// 	(void)target;
// }

std::string const & AMateria::getType() const
{
	return (this->_type);
}
