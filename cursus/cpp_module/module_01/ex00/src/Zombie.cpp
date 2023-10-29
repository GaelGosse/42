/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:47 by gael              #+#    #+#             */
/*   Updated: 2023/10/22 18:38:03 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Zombie Constructor w/o overcharge called for " << this->_name << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie Constructor with overcharge called for " << this->_name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie Destructor called for " << this->_name << std::endl;
}
