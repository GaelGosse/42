/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/13 18:03:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure& src)
{
	std::cout << "Copy Cure constructor called" << std::endl;
	*this = src;
}
Cure& Cure::operator=(const Cure& src)
{
	std::cout << "Overload Cure operator called" << std::endl;
	(void)src;
	return (*this);
}
Cure::~Cure(void)
{
	std::cout << "Cure Destructor called" << std::endl;
}

