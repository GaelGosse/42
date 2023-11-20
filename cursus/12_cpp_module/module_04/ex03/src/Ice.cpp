/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:54:32 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 16:04:08 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << CYAN << "Ice Constructor called" << RST << std::endl;
}

Ice::Ice(const Ice& src) : AMateria(src)
{
	std::cout << CYAN << "Copy Ice constructor called" << RST << std::endl;
	*this = src;
}
Ice& Ice::operator=(const Ice& src)
{
	std::cout << CYAN << "Overload Ice operator called" << RST << std::endl;
	(void)src;
	return (*this);
}
Ice::~Ice(void)
{
	std::cout << RED << "Ice Destructor called" << RST << std::endl;
}

AMateria* Ice::clone() const
{
	AMateria* copy = new Ice();
	return (copy);
}
void Ice::use(ICharacter& target)
{
	std::cout << BOLD_GREEN << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
