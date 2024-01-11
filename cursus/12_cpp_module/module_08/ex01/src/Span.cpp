/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/11 17:19:55 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

// canonical form
Span::Span(void)
{
	// Span Constructor called
}
Span::Span(const Span& src)
{
	// Copy Span constructor called
	*this = src;
}
Span& Span::operator=(const Span& src)
{
	// Overload Span operator called
	this->_size = src.getSize();
	this->_v = src.getVector();
	return (*this);
}
Span::~Span(void)
{
	// Span Destructor called
}

// other constructor
Span::Span(unsigned int nbr) : _size(nbr)
{
	// Span Constructor called
	// std::cout << "here" << std::endl;
	this->_v.reserve(nbr);
}

// methods
void	Span::addNumber(int nbr)
{
	this->_v.push_back(nbr);
}
void	Span::addRange(std::vector<int>::iterator const& begin, std::vector<int>::iterator const& end)
{
	(void)begin;
	(void)end;
}
int		Span::shortestSpan()
{
	std::cout << std::endl;

	if (this->_v.capacity() == 0)
		throw Span::EmptyException();
	std::vector<int> tmp = this->_v;
	sort (tmp.begin(), tmp.end());

	int	prev = 2147483647;
	for (std::vector<int>::iterator ite = tmp.begin(); ite != tmp.end(); ite++)
	{
		if (ite != tmp.begin())
			prev = ite
		std::cout << *ite << std::endl;
	}
	return (prev);
}
// 3   // prev ite
// 7   //
// 8   //

int		Span::longestSpan()
{
	if (this->_v.capacity() == 0)
		throw Span::EmptyException();
	int	prev = 0;
	std::vector<int> tmp = this->_v;

	sort (tmp.begin(), tmp.end());

	for (std::vector<int>::iterator ite = tmp.begin(); ite != tmp.end(); ite++)
	{
		if (ite == tmp.begin())
			prev = 0;
		if (abs(*ite - prev) > prev)
		{
			prev = *ite - prev;
		}
		std::cout << "*ite: " << *ite << std::endl;
	}
	return (prev);
}

// accessors
std::vector<int>	Span::getVector() const
{
	return (this->_v);
}
unsigned int	Span::getSize() const
{
	return (this->_size);
}

// operators

// exceptions

