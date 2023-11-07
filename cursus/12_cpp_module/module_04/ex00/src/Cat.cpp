/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:48:07 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:48:07 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat& src)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = src;
}
Cat& Cat::operator=(const Cat& src)
{
	std::cout << "Overload Cat operator called" << std::endl;
	// private variables
	return (*this);
}
Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
}

