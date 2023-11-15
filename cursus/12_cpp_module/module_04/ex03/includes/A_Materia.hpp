/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Materia.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:57:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_HPP
# define A_MATERIA_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "Character.hpp"

class A_Materia
{
	protected:
		std::string	_type;

	public:
		A_Materia(void); // canonic form
		A_Materia(std::string const & type);
		A_Materia(const A_Materia& src); // canonic form
		A_Materia& operator=(const A_Materia& src); // canonic form
		virtual ~A_Materia(void); // canonic form

		std::string const & getType() const;

// 		virtual A_Materia* clone() const = 0;
// 		virtual void use(Character& target);
};

#endif
