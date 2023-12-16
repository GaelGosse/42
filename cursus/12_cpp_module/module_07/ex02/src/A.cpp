/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:09 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:27:09 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"

// canonical form
A::A(void)
{
	std::cout << "A Constructor called" << std::endl;
}

A::A(const A& src)
{
	std::cout << "Copy A constructor called" << std::endl;
	*this = src;
}
A& A::operator=(const A& src)
{
	std::cout << "Overload A operator called" << std::endl;
	(void)src;
	return (*this);
}
A::~A(void)
{
	std::cout << "A Destructor called" << std::endl;
}

		// other constructor

		// methods

		// accessors

		// operators

		// exceptions

