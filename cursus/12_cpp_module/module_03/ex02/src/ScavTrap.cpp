/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:22 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/09 16:10:13 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN << "ScavTrap Constructor called for " << name << RST << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& src) : ClapTrap(src)
{
	std::cout << GREEN << "ScavTrap Copy constructor called" << RST << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap Destructor called for " << this->_name << RST << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
	std::cout << GREEN << "ScavTrap overload operator called" << RST << std::endl;
	this->_name = src._name + "Copy";
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ScavTrap is wrongly named and cannot execute something." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
	}
	else
	{
		if (this->_energy_points > 0)
		{
			std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
			this->_energy_points -= 1;
		}
		else
		{
			std::cout << "ScavTrap cannot attack with no energy." << std::endl;
		}
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ScavTrap is wrongly named and cannot execute something." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->_name << " is dead..." << std::endl;
	}
	else
	{
		std::cout << this->_name << " entering in mode Gate keeper." << std::endl;
	}
}
