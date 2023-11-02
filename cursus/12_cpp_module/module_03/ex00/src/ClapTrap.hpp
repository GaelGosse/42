/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/02 18:32:00 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class ClapTrap
{
		public:
			ClapTrap(std::string name);
			ClapTrap(const ClapTrap&);
			ClapTrap&operator=(const ClapTrap&);
			~ClapTrap();
			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);

		private:
			std::string	_name;
			int			_hit_points;
			int			_energy_points;
			int			_attack_damage;
};