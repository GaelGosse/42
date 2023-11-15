/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Materia.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:57:26 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A_Materia.hpp"

// canonical form
A_Materia::A_Materia(void)
{
	std::cout << "A_Materia Constructor called" << std::endl;
}
A_Materia::A_Materia(const A_Materia& src)
{
	std::cout << "Copy A_Materia constructor called" << std::endl;
	*this = src;
}
A_Materia& A_Materia::operator=(const A_Materia& src)
{
	std::cout << "Overload A_Materia operator called" << std::endl;
	(void)src;
	return (*this);
}
A_Materia::~A_Materia(void)
{
	std::cout << "A_Materia Destructor called" << std::endl;
}

// // other functions
// virtual A_Materia* clone() const
// {

// }

// void A_Materia::use(Character& target)
// {
// 	(void)target;
// }

std::string const & A_Materia::getType() const
{
	return (this->_type);
}
