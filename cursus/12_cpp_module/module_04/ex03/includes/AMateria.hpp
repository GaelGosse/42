/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:01:59 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 17:57:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMateria_HPP
# define AMateria_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "Character.hpp"
#include "Color.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void); // canonic form
		AMateria(const AMateria& src); // canonic form
		AMateria& operator=(const AMateria& src); // canonic form
		virtual ~AMateria(void); // canonic form

		AMateria(std::string const & type);
		std::string const & getType() const;

// 		virtual AMateria* clone() const = 0;
// 		virtual void use(Character& target);
};

#endif
