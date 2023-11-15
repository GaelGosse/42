/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:43:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(void)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(std::string name)
{
	(void)name;
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character(const Character& src)
{
	std::cout << "Copy Character constructor called" << std::endl;
	*this = src;
}
Character& Character::operator=(const Character& src)
{
	std::cout << "Overload Character operator called" << std::endl;
	(void)src;
	return (*this);
}
Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
}

