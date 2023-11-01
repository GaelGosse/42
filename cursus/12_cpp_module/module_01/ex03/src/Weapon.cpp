/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:14:48 by gael              #+#    #+#             */
/*   Updated: 2023/10/29 13:42:54 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	setType(type);
}

std::string	Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	std::cout << "new type: " << type << ", is set" << std::endl;
	this->_type = type;
}

// Weapon::~Weapon(void)
// {
// 	;
// }

// /usr/bin/ld: obj/HumanA.o: in function `HumanA::HumanA(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, Weapon)':
// /home/gael/42/cursus/cpp_module/module_01/ex03/src/HumanA.cpp:17:(.text+0x2d): undefined reference to `Weapon::Weapon()'

// /usr/bin/ld: obj/HumanB.o: in function `HumanB::HumanB()':
// /home/gael/42/cursus/cpp_module/module_01/ex03/src/HumanB.cpp:17:(.text+0x25): undefined reference to `Weapon::Weapon()'
// collect2: error: ld returned 1 exit status
// make: *** [Makefile:39: violence] Error 1