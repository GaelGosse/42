/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 15:44:26 by ggosse           ###   ########.fr       */
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

class AMateria;

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure&src);
		Cure&operator=(const Cure&src);
		~Cure();

};

#endif
