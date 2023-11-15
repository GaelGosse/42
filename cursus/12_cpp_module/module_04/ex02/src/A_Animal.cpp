/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/11 16:50:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal(void) : _type("Meta")
{
	std::cout << BOLD_GREEN << "A_Animal constructor called" << RST << std::endl;
}

A_Animal::A_Animal(std::string type) : _type(type)
{
	std::cout << BOLD_GREEN << "A_Animal constructor called" << RST << std::endl;
}

A_Animal::A_Animal(const A_Animal& src)
{
	std::cout << BOLD_GREEN << "A_Animal copy constructor called" << RST << std::endl;
	*this = src;
}

A_Animal& A_Animal::operator=(const A_Animal& src)
{
	std::cout << BOLD_GREEN << "A_Animal overload operator called" << RST << std::endl;
	this->_type = src._type;
	return (*this);
}

A_Animal::~A_Animal()
{
	std::cout << BOLD_RED << "A_Animal destructor called" << RST << std::endl;
}

void	A_Animal::makeSound(void) const
{
}

void	A_Animal::think(int idx) const
{
	(void)idx;
}

std::string	A_Animal::getType(void) const
{
	return (this->_type);
}

void	A_Animal::setType(std::string type)
{
	this->_type = type;
}
