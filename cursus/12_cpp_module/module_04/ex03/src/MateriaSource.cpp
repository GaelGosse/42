/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:43 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 16:31:16 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource(), _nbMateria(0)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& src) : IMateriaSource(), _nbMateria(0)
{
	std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = src;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	std::cout << "Overload MateriaSource operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}
MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

void	MateriaSource::learnMateria(AMateria* materia)
{
	if (this->_nbMateria < 4)
	{
		this->_inventory[this->_nbMateria] = materia;
		this->_nbMateria++;
	}
	else
		delete materia;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] && this->_inventory[i]->getType() == type)
			return (this->_inventory[i]->clone());
	}
	return (NULL);
}