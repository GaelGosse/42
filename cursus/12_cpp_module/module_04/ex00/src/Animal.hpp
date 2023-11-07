/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:45:58 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:49:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal&src);
		Animal&operator=(const Animal&src);
		~Animal();

	protected:
		std::string	_type;
};

#endif
