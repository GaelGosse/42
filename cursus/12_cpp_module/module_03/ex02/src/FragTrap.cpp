/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:22 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 16:43:09 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN << "FragTrap Constructor called for " << name << RST << std::endl;
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
	std::cout << GREEN << "FragTrap Copy constructor called" << RST << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap Destructor called for " << this->_name << RST << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The FragTrap is wrongly named and cannot execute something." << std::endl;
	}
	else
	{
		if (this->_energy_points > 0)
		{
			std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
			this->_energy_points -= 1;
		}
		else
		{
			std::cout << "FragTrap cannot attack with no energy." << std::endl;
		}
	}
}

void	FragTrap::guardGate(void)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The FragTrap is wrongly named and cannot execute something." << std::endl;
	}
	else
	{
		std::cout << this->_name << " entering in mode Gate keeper." << std::endl;
	}
}
