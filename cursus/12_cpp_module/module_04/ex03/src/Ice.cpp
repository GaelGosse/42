/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:54:32 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 15:43:42 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(void)
{
	std::cout << CYAN << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice& src)
{
	std::cout << CYAN << "Copy Ice constructor called" << std::endl;
	*this = src;
}
Ice& Ice::operator=(const Ice& src)
{
	std::cout << CYAN << "Overload Ice operator called" << std::endl;
	(void)src;
	return (*this);
}
Ice::~Ice(void)
{
	std::cout << RED << "Ice Destructor called" << std::endl;
}

