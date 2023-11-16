/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 18:20:05 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AWrongAnimal.hpp"

AWrongAnimal::AWrongAnimal(void) : _type("Meta")
{
	std::cout << GREEN << "AWrongAnimal constructor called" << RST << std::endl;
}

AWrongAnimal::AWrongAnimal(std::string type) : _type(type)
{
	std::cout << GREEN << "AWrongAnimal constructor called" << RST << std::endl;
}

AWrongAnimal::AWrongAnimal(const AWrongAnimal& src)
{
	std::cout << GREEN << "AWrongAnimal copy constructor called" << RST << std::endl;
	*this = src;
}

AWrongAnimal& AWrongAnimal::operator=(const AWrongAnimal& src)
{
	std::cout << GREEN << "AWrongAnimal overload operator called" << RST << std::endl;
	this->_type = src._type;
	return (*this);
}

AWrongAnimal::~AWrongAnimal()
{
	std::cout << GREEN << "AWrongAnimal destructor called" << RST << std::endl;
}

void	AWrongAnimal::makeSound(void) const
{
}

std::string	AWrongAnimal::getType(void) const
{
	return (this->_type);
}

void	AWrongAnimal::setType(std::string type)
{
	this->_type = type;
}
