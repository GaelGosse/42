/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:35:11 by ggosse            #+#    #+#             */
/*   Updated: 2023/10/31 15:34:25 by ggosse           ###   ########.fr       */
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

Fixed&operator=(const Fixed& src)
{
	std::cout << "Copy assigment operator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


int	getRawBits(void) const
{
	return (this->);
}

void	setRawBits(int const raw)
{
	= raw;
}