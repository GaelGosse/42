/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   I_MateriaSource.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:43 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 18:00:39 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_MATERIASOURCE_HPP
# define INTERFACE_MATERIASOURCE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

#include "A_Materia.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

class MateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&src);
		MateriaSource&operator=(const MateriaSource&src);
		~MateriaSource();

	private:
		std::string	name;
};

#endif
