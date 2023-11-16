/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 16:26:53 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Meta")
{
	std::cout << BOLD_GREEN << "AAnimal constructor called" << RST << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << BOLD_GREEN << "AAnimal constructor called" << RST << std::endl;
}

AAnimal::AAnimal(const AAnimal& src)
{
	std::cout << BOLD_GREEN << "AAnimal copy constructor called" << RST << std::endl;
	*this = src;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
	std::cout << BOLD_GREEN << "AAnimal overload operator called" << RST << std::endl;
	this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << BOLD_RED << "AAnimal destructor called" << RST << std::endl;
}

void	AAnimal::makeSound(void) const
{
}

std::string	AAnimal::think(int idx) const
{
	(void)idx;
	return ("");
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::setType(std::string type)
{
	this->_type = type;
}
