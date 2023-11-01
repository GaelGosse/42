/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:11 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/01 15:08:18 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;

}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assigment operator called" << std::endl;
	_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}