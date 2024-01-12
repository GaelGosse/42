/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:40:53 by gael              #+#    #+#             */
/*   Updated: 2024/01/12 17:10:24 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

// void	printVector(std::vector<int> vct)
// {
// 	// for (unsigned int i = 0; i < vct.capacity(); i++)
// 	// 	std::cout << "_v[" << i << "]: " << vct[i] << std::endl;
// 	for (std::vector<int>::iterator i = vct.begin(); i != vct.end(); i++)
// 		std::cout << "_v: " << *i << std::endl;
// }

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
	// if (this->_v.size() >= this->_size)
	// 	throw Span::FullException();
	this->_v.push_back(nbr);
}

void	Span::addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	this->_v.insert(_v.begin(), begin, end);
}

int		Span::shortestSpan()
{
	if (this->_v.capacity() == 0)
		throw Span::EmptyException();
	if (this->_v.size() < 2)
		throw Span::NotEnoughException();
	std::vector<int> tmp = this->_v;
	sort (tmp.begin(), tmp.end());

	int	prev = *tmp.begin();
	int	min = 2147483647;
	for (std::vector<int>::iterator ite = tmp.begin(); ite != tmp.end(); ite++)
	{
		if (ite != tmp.begin())
		{
			if (*ite - prev < min)
				min = *ite - prev;
			prev = *ite;
		}
	}
	return (min);
}

int		Span::longestSpan()
{
	if (this->_v.capacity() == 0)
		throw Span::EmptyException();
	if (this->_v.size() < 2)
		throw Span::NotEnoughException();

	std::vector<int> tmp = this->_v;
	sort (tmp.begin(), tmp.end());

	int	min = 0;
	int	max = 0;
	for (std::vector<int>::iterator ite = tmp.begin(); ite != tmp.end(); ite++)
	{
		if (ite == tmp.begin())
			min = *ite;
		max = *ite;
	}

	return (max - min);
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

