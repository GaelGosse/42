/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/13 18:41:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	std::cout << "Copy AMateria constructor called" << std::endl;
	*this = src;
}
AMateria& AMateria::operator=(const AMateria& src)
{
	std::cout << "Overload AMateria operator called" << std::endl;
	(void)src;
	return (*this);
}
AMateria::~AMateria(void)
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(Character& target)
{
	(void)target;
}
