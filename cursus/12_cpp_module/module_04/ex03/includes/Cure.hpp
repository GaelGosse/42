/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/19 20:28:28 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Color.hpp"

#include "AMateria.hpp"
#include "ICharacter.hpp"

class AMateria;

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure&src);
		Cure&operator=(const Cure&src);
		~Cure();

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
