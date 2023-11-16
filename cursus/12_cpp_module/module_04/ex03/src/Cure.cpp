/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 15:43:37 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(void) : AMateria("ice")
{
	std::cout << CYAN << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure& src)
{
	std::cout << CYAN << "Copy Cure constructor called" << std::endl;
	*this = src;
}
Cure& Cure::operator=(const Cure& src)
{
	std::cout << CYAN << "Overload Cure operator called" << std::endl;
	(void)src;
	return (*this);
}
Cure::~Cure(void)
{
	std::cout << RED << "Cure Destructor called" << std::endl;
}

