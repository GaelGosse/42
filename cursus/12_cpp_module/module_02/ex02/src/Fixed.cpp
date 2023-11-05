/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:11 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/05 16:29:12 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(const int value)
{
	this->_value = value << this->_bits;
}

Fixed::Fixed(const float value)
{
	this->_value = roundf(value * (1 << this->_bits));
	(void)value;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed&	Fixed::operator=(const Fixed &src)
{
	setRawBits(src._value);
	return (*this);
}

Fixed::~Fixed()
{
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)getRawBits() / (1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() >> this->_bits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &nbr)
{
	out << nbr.toFloat();
	return (out);
}

// comparaison
bool	Fixed::operator>(Fixed const &nbr) const
{
	return (getRawBits() > nbr.getRawBits());
}
bool	Fixed::operator<(Fixed const &nbr) const
{
	return (getRawBits() < nbr.getRawBits());
}
bool	Fixed::operator>=(Fixed const &nbr) const
{
	return (getRawBits() >= nbr.getRawBits());
}
bool	Fixed::operator<=(Fixed const &nbr) const
{
	return (getRawBits() <= nbr.getRawBits());
}
bool	Fixed::operator==(Fixed const &nbr) const
{
	return (getRawBits() == nbr.getRawBits());
}
bool	Fixed::operator!=(Fixed const &nbr) const
{
	return (getRawBits() != nbr.getRawBits());
}

// arithmetic
Fixed	Fixed::operator+(const Fixed &nbr) const
{
	Fixed	result;

	result.setRawBits(getRawBits() + nbr.getRawBits());
	return (result);
}
Fixed	Fixed::operator-(const Fixed &nbr) const
{
	Fixed	result;

	result.setRawBits(getRawBits() - nbr.getRawBits());
	return (result);
}
Fixed	Fixed::operator*(const Fixed &nbr) const
{
	Fixed	result;

	result.setRawBits(getRawBits() * nbr.getRawBits());
	return (result);
}
Fixed	Fixed::operator/(const Fixed &nbr) const
{
	Fixed	result;

	result.setRawBits(getRawBits() / nbr.getRawBits());
	return (result);
}

// ++
Fixed&	Fixed::operator++(void)
{
	setRawBits(getRawBits() + 1);
	return (*this);
}
Fixed	Fixed::operator++(int)
{
	Fixed	result;

	result = *this;
	setRawBits(getRawBits() + 1);
	return (result);
}
Fixed&	Fixed::operator--(void)
{
	setRawBits(getRawBits() + 1);
	return (*this);
}
Fixed	Fixed::operator--(int)
{
	Fixed	result;

	result = *this;
	setRawBits(getRawBits() - 1);
	return (result);
}

// min/max
Fixed	Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	return (nbr1);
}
Fixed	Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr2);
	return (nbr1);
}
Fixed	Fixed::min(Fixed const &nbr1, Fixed const &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr1);
	return (nbr1);
}
Fixed	Fixed::max(Fixed const &nbr1, Fixed const &nbr2)
{
	if (nbr1 < nbr2)
		return (nbr2);
	return (nbr1);
}
