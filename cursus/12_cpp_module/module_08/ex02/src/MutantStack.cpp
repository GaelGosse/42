/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:40:25 by gael              #+#    #+#             */
/*   Updated: 2024/01/15 17:12:16 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

// canonical form
MutantStack::MutantStack(void)
{
	std::cout << "MutantStack Constructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack& src)
{
	std::cout << "Copy MutantStack constructor called" << std::endl;
	*this = src;
}
MutantStack& MutantStack::operator=(const MutantStack& src)
{
	std::cout << "Overload MutantStack operator called" << std::endl;
	(void)src;
	return (*this);
}
MutantStack::~MutantStack(void)
{
	std::cout << "MutantStack Destructor called" << std::endl;
}

// other constructor

// methods

// accessors

// operators

// exceptions

