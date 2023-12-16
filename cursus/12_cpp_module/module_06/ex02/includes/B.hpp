/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:12 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:57:11 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "Base.hpp"

class B : public Base
{
	public:
		B();
		B(const B&src);
		B&operator=(const B&src);
		~B();

	private:
		std::string	name;
};

#endif
