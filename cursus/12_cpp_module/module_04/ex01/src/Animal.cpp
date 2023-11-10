/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 18:20:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Meta")
{
	std::cout << GREEN << "Animal constructor called" << RST << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN << "Animal constructor called" << RST << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << GREEN << "Animal copy constructor called" << RST << std::endl;
	*this = src;
}

Animal& Animal::operator=(const Animal& src)
{
	std::cout << GREEN << "Animal overload operator called" << RST << std::endl;
	this->_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << GREEN << "Animal destructor called" << RST << std::endl;
}

void	Animal::makeSound(void) const
{
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
