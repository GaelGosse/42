/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:43 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:44:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = src;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "Overload MateriaSource operator called" << std::endl;
	(void)src;
	return (*this);
}
MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor called" << std::endl;
}

