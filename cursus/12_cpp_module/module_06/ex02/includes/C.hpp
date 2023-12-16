/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:14 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:56:58 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Base.hpp"

class C : public Base
{
	public:
		C();
		C(const C&src);
		C&operator=(const C&src);
		~C();

	private:
		std::string	name;
};

#endif
