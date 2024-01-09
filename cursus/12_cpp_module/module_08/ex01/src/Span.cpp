/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/09 21:30:19 by ggosse           ###   ########.fr       */
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
void	Span::addNumber(int nbr)
{
	(void)nbr;
}
void	Span::addRange(std::vector<int>::iterator const& begin, std::vector<int>::iterator const& end)
{
	(void)begin;
	(void)end;
}
int		Span::shortestSpan()
{
	int	prev;

	prev = *this->_v.begin();
	for (std::vector<int>::iterator ite = this->_v.begin(); ite < this->_v.end(); ite++)
	{
		std::cout << *ite << std::endl;
	}
	return (prev);
}
int		Span::longestSpan()
{
	int	prev;

	prev = *this->_v.begin();
	for (std::vector<int>::iterator ite = this->_v.begin(); ite < this->_v.end(); ite++)
	{
		std::cout << *ite << std::endl;
	}
	return (prev);
}

// accessors

// operators

// exceptions

