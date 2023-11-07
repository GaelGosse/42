/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:48:02 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:48:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = src;
}
Dog& Dog::operator=(const Dog& src)
{
	std::cout << "Overload Dog operator called" << std::endl;
	// private variables
	return (*this);
}
Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

