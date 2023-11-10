/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:26:05 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/10 16:34:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << GREEN << "Cat constructor called" << RST << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << GREEN << "Cat copy constructor called" << RST << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << GREEN << "Cat overload operator called" << RST << std::endl;
	this->setType(src.getType());
	return (*this);
}

Cat::~Cat()
{
	std::cout << GREEN << "Cat destructor called" << RST << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
