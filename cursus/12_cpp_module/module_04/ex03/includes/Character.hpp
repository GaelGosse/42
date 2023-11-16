/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/16 15:34:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <cstdlib>
# include <iomanip>
# include <csignal>
# include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character(); // canonical form
		Character(const Character&src); // canonical form
		Character&operator=(const Character&src); // canonical form
		~Character(); // canonical form

		Character(std::string name);

	private:
		std::string	name;
};

#endif
