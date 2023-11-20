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

#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"

Cat::Cat(void) : A_Animal("Cat")
{
	std::cout << GREEN << "Cat constructor called" << RST << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat& src) : A_Animal(src), _brain(new Brain)
{
	std::cout << GREEN << "Cat copy constructor called" << RST << std::endl;
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	std::cout << GREEN << "Cat overload operator called" << RST << std::endl;
	this->setType(src.getType());
	if (this->_brain)
	{
		delete this->_brain;
		this->_brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->_brain->setIdea(i, src._brain->getIdea(i));
	}
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << RED << "Cat destructor called" << RST << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

std::string	Cat::think(int idx) const
{
	return (this->_brain->getIdea(idx));
}
