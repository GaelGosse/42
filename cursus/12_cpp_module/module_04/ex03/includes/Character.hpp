/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/15 18:09:36 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <cstdlib>
# include <iomanip>
# include <csignal>
# include <iostream>

#include "I_Character.hpp"

class Character : public I_Character
{
	public:
		Character();
		Character(std::string name);
		Character(const Character&src);
		Character&operator=(const Character&src);
		~Character();

	private:
		std::string	name;
};

#endif
