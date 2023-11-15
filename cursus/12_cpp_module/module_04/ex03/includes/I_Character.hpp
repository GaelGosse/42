/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I_Character.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 18:14:27 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_CHARACTER_HPP
# define INTERFACE_CHARACTER_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "A_Materia.hpp"

class A_Materia;

class I_Character
{
	public:
		~I_Character(); // canonic form

		// Methods
		virtual void	equip(A_Materia* m);

		// getter

		// setter


	private:
		std::string	name;
};

#endif
