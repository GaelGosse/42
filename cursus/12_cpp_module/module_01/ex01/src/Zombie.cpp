/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:47 by gael              #+#    #+#             */
/*   Updated: 2023/10/26 22:13:56 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

std::string Zombie::get_name(void)
{
	return this->_name;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor called for " << this->_name << std::endl;
}
