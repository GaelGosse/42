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
#include "../includes/Brain.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << GREEN << "Dog constructor called" << RST << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog& src) : AAnimal(src), _brain(new Brain)
{
	std::cout << GREEN << "Dog copy constructor called" << RST << std::endl;
	*this = src;
}

Dog& Dog::operator=(const Dog& src)
{
	std::cout << GREEN << "Dog overload operator called" << RST << std::endl;
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

Dog::~Dog()
{
	delete _brain;
	std::cout << RED << "Dog destructor called" << RST << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouaf" << std::endl;
}

std::string	Dog::think(int idx) const
{
	return (this->_brain->getIdea(idx));
}
