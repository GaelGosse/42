/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 16:04:14 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << CYAN << "Cure Constructor called" << RST << std::endl;
}

Cure::Cure(const Cure& src) : AMateria(src)
{
	std::cout << CYAN << "Copy Cure constructor called" << RST << std::endl;
	*this = src;
}
Cure& Cure::operator=(const Cure& src)
{
	std::cout << CYAN << "Overload Cure operator called" << RST << std::endl;
	setType(src.getType());
	return (*this);
}
Cure::~Cure(void)
{
	std::cout << RED << "Cure Destructor called" << RST << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << BOLD_GREEN << "* heals " << target.getName() << "'s wounds *" << std::endl;
}