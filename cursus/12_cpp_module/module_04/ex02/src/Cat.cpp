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
	this->brain = new Brain();
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
	if (this->brain)
	{
		delete this->brain;
		this->brain = new Brain();
		for (int i = 0; i < 100; i++)
			this->brain->setIdea(i, src.brain->getIdea(i));
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << RED << "Cat destructor called" << RST << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

std::string	Cat::think(int idx) const
{
	return (this->brain->getIdea(idx));
}
