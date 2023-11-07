/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:45:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:49:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type(NULL)
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal& src)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = src;
}
Animal& Animal::operator=(const Animal& src)
{
	std::cout << "Overload Animal operator called" << std::endl;
	// private variables
	return (*this);
}
Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

