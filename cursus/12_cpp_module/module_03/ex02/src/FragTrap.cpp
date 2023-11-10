/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:22 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/09 15:54:20 by ggosse           ###   ########.fr       */
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

FragTrap& FragTrap::operator=(const FragTrap& src)
{
	std::cout << GREEN << "FragTrap overload operator called" << RST << std::endl;
	this->_name = src._name + "Copy";
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_name.size() == 0)
	{
		std::cout << "The ClapTrap is wrongly named and cannot execute something." << std::endl;
	}
	if (this->_hit_points > 0)
	{
		std::cout << "Do you want to high fives ?" << std::endl;
	}
	else
		std::cout << this->_name << " is dead..." << std::endl;
}
