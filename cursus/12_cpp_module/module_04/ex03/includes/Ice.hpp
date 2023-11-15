/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:54:32 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:06:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "color.hpp"

#include "A_Materia.hpp"

class Ice
{
	public:
		Ice();
		Ice(const Ice&src);
		Ice&operator=(const Ice&src);
		~Ice();

	private:
		std::string	name;
};

#endif
