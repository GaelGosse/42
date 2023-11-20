/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 16:34:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << GREEN << "Dog constructor called" << RST << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << GREEN << "Dog copy constructor called" << RST << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << GREEN << "Dog overload operator called" << RST << std::endl;
	this->setType(src.getType());
	return (*this);
}

Dog::~Dog()
{
	std::cout << GREEN << "Dog destructor called" << RST << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}
