/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:11 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/02 15:38:15 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int value)
{
	this->_value = value << 8;
	std::cout << this->_value << std::endl;
}

Fixed::Fixed(const float value)
{
	// value << 8;
	(void)value;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assigment operator= called" << std::endl;
	_value = src.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream	Fixed::operator<<(std::ostream ,Fixed nbr)
{
	std::cout << "Copy assigment operator<< called" << std::endl;

	return (nbr);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}