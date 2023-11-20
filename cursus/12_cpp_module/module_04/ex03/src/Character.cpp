/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 16:30:39 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(void) : _name("unknow"), _nbMateria(0), _onGround(NULL)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	std::cout << GREEN "Character Constructor called" << RST << std::endl;
}

Character::Character(std::string name) : _name(name), _nbMateria(0), _onGround(NULL)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	std::cout << GREEN "Character Constructor called" << RST << std::endl;
}

Character::Character(const Character& src)
{
	std::cout << GREEN "Copy Character constructor called" << RST << std::endl;
	*this = src;
}
Character& Character::operator=(const Character& src)
{
	std::cout << GREEN "Overload Character operator called" << RST << std::endl;
	this->_name = src._name;
	this->_nbMateria = src._nbMateria;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = src._inventory[i]->clone();
	}
	return (*this);
}
Character::~Character(void)
{
	for (int i = 0; i < this->_nbMateria; i++)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
		}
	}
	if (this->_onGround)
		delete this->_onGround;
	std::cout << RED "Character Destructor called" << RST << std::endl;
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (this->_nbMateria < 4)
	{
		this->_inventory[this->_nbMateria] = m;
		this->_nbMateria++;
	}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		this->_onGround = this->_inventory[idx];
		this->_inventory[idx] = NULL;
		this->_nbMateria--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
	{
		this->_inventory[idx]->use(target);
	}
}
