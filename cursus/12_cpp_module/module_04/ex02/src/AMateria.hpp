/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/13 18:40:29 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "Character.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void); // canonic form
		AMateria(std::string const & type);
		AMateria(const AMateria& src); // canonic form
		AMateria& operator=(const AMateria& src); // canonic form
		virtual ~AMateria(void); // canonic form

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(Character& target);
};

#endif
