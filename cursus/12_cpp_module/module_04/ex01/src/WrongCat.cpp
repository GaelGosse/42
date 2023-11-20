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

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(void) : AWrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat constructor called" << RST << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : AWrongAnimal(src)
{
	std::cout << GREEN << "WrongCat copy constructor called" << RST << std::endl;
	*this = src;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	std::cout << GREEN << "WrongCat overload operator called" << RST << std::endl;
	this->setType(src.getType());
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << GREEN << "WrongCat destructor called" << RST << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "tgd$#5$fgb..." << std::endl;
}
