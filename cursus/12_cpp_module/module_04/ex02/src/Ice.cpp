/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:54:32 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/13 18:03:08 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice& src)
{
	std::cout << "Copy Ice constructor called" << std::endl;
	*this = src;
}
Ice& Ice::operator=(const Ice& src)
{
	std::cout << "Overload Ice operator called" << std::endl;
	(void)src;
	return (*this);
}
Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
}

