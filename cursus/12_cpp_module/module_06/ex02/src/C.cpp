/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:14 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:27:14 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/C.hpp"

// canonical form
C::C(void)
{
	std::cout << "C Constructor called" << std::endl;
}

C::C(const C& src)
{
	std::cout << "Copy C constructor called" << std::endl;
	*this = src;
}
C& C::operator=(const C& src)
{
	std::cout << "Overload C operator called" << std::endl;
	(void)src;
	return (*this);
}
C::~C(void)
{
	std::cout << "C Destructor called" << std::endl;
}

		// other constructor

		// methods

		// accessors

		// operators

		// exceptions

