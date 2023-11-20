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
	std::cout << BOLD_CYAN << "AMateria Constructor called" << RST << std::endl;
}
AMateria::AMateria(const AMateria& src)
{
	std::cout << BOLD_CYAN << "Copy AMateria constructor called" << RST << std::endl;
	*this = src;
}
AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << BOLD_CYAN << "Overload AMateria operator called" << RST << std::endl;
	(void)src;
	return (*this);
}
AMateria::~AMateria(void)
{
	std::cout << BOLD_RED << "AMateria Destructor called" << RST << std::endl;
	std::cout << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

// other functions

void AMateria::use(ICharacter& target)
{
	(void)target;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}
void AMateria::setType(std::string type)
{
	this->_type = type;
}

