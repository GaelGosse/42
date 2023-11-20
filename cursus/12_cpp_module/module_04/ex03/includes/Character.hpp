/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:07:55 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/20 14:02:37 by gael             ###   ########.fr       */
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
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter
{
	public:
		Character(); // canonical form
		Character(const std::string name);
		Character(const Character&src); // canonical form
		Character&operator=(const Character&src); // canonical form
		~Character(); // canonical form

		std::string const &	getName() const;

		virtual void	equip(AMateria* m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);

	private:
		std::string	_name;
		int			_nbMateria;
		AMateria	*_inventory[4];
		AMateria	*_onGround;

};

#endif
