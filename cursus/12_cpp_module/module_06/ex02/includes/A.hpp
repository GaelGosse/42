/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 01:27:09 by gael              #+#    #+#             */
/*   Updated: 2023/12/15 01:57:05 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Base.hpp"

class A : public Base
{
	public:
		A();
		A(const A&src);
		A&operator=(const A&src);
		~A();

	private:
		std::string	name;
};

#endif
