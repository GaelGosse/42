/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:12 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:27:12 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/B.hpp"

// canonical form
B::B(void)
{
	std::cout << "B Constructor called" << std::endl;
}

B::B(const B& src)
{
	std::cout << "Copy B constructor called" << std::endl;
	*this = src;
}
B& B::operator=(const B& src)
{
	std::cout << "Overload B operator called" << std::endl;
	(void)src;
	return (*this);
}
B::~B(void)
{
	std::cout << "B Destructor called" << std::endl;
}

		// other constructor

		// methods

		// accessors

		// operators

		// exceptions

