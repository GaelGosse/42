/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:22 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 18:26:01 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN << "Constructor called for " << name << RST << std::endl;
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << GREEN << "Copy constructor called" << RST << std::endl;
	*this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << GREEN << "Overload operator called" << RST << std::endl;
	this->_name = src._name + "Copy";
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << GREEN << "Destructor called for " << this->_name << RST << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ClapTrap is wrongly named and cannot execute something." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->name << " is dead..." << std::endl;
	}
	else
	{
		if (this->_energy_points > 0)
		{
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
			this->_energy_points -= 1;
		}
		else
		{
			std::cout << "Cannot attack with no energy." << std::endl;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ClapTrap is wrongly named and cannot execute something." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->name << " is dead..." << std::endl;
	}
	else
	{
		if (this->_hit_points == 0)
			std::cout << this->_name << " cannot take damage, already dead." << std::endl;
		else if ((int)(this->_hit_points - amount) <= 0)
		{
			std::cout << this->_name << " took " << amount << " damages and dead." << std::endl;
			this->_hit_points = 0;
		}
		else
		{
			std::cout << this->_name << " took " << amount << " damages." << std::endl;
			this->_hit_points -= amount;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ClapTrap is wrongly named and cannot execute something." << std::endl;
	}
	else if (this->_hit_points <= 0)
	{
		std::cout << this->name << " is dead..." << std::endl;
	}
	else
	{
		if (this->_hit_points <= 0)
		{
			std::cout << this->_name <<" cannot be repaired, already dead." << std::endl;
		}
		else if (this->_energy_points > 0)
		{
			this->_hit_points += amount;
			this->_energy_points -= 1;
			std::cout << this->_name << " recover " << amount << " hit points." << std::endl;
		}
		else if (this->_energy_points == 0)
		{
			std::cout << "Cannot recover with no energy." << std::endl;
		}
	}
}
