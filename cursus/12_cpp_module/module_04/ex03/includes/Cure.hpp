/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:55:44 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 16:26:55 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "color.hpp"

#include "A_Materia.hpp"

class Cure
{
	public:
		Cure();
		Cure(const Cure&src);
		Cure&operator=(const Cure&src);
		~Cure();

	private:
		std::string	name;
};

#endif
