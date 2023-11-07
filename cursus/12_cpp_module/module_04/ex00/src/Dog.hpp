/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:48:02 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 19:48:39 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>
#include "Animal.hpp"

class Dog : Animal
{
	public:
		Dog();
		Dog(const Dog&src);
		Dog&operator=(const Dog&src);
		~Dog();

	private:
		std::string	name;
};

#endif
