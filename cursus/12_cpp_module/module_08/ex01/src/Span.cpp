/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/09 19:14:44 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

// canonical form
Span::Span(void)
{
	std::cout << "Span Constructor called" << std::endl;
}

Span::Span(const Span& src)
{
	std::cout << "Copy Span constructor called" << std::endl;
	*this = src;
}
Span& Span::operator=(const Span& src)
{
	std::cout << "Overload Span operator called" << std::endl;
	(void)src;
	return (*this);
}
Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::endl;
}

// other constructor

// methods
void	addNumber(int nbr)
{
}
void	addRange(std::vector<int>::iterator const& begin, std::vector<int>::iterator const& end)
{
}
int		shortestSpan()
{
	std::vector<int>::iterator ite = 0;

	for (std::vector<int>::iterator ite = this->_v.begin(); ite < this->_v.end(); ite++)
	{
		
	}
	return ();
}
int		longestSpan()
{
	std::vector<int>::iterator ite = 0;

	for (std::vector<int>::iterator ite = this->_v.begin(); ite < this->_v.end(); ite++)
	{
		
	}
	return ();
}

// accessors

// operators

// exceptions

