/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:07:19 by ggosse            #+#    #+#             */
/*   Updated: 2023/11/07 18:10:30 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
// color
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define PURPLE "\033[0;35m"
# define CYAN "\033[0;36m"
# define WHITE "\033[0;37m"

# define BOLD_BLACK "\033[0;40m"
# define BOLD_RED "\033[0;41m"
# define BOLD_GREEN "\033[0;42m"
# define BOLD_YELLOW "\033[0;43m"
# define BOLD_BLUE "\033[0;44m"
# define BOLD_PURPLE "\033[0;45m"
# define BOLD_CYAN "\033[0;46m"
# define BOLD_WHITE "\033[0;47m"

# define BACK_BLACK "\033[0;40m"
# define BACK_RED "\033[0;41m"
# define BACK_GREEN "\033[0;42m"
# define BACK_YELLOW "\033[0;43m"
# define BACK_BLUE "\033[0;44m"
# define BACK_PURPLE "\033[0;45m"
# define BACK_CYAN "\033[0;46m"
# define BACK_WHITE "\033[0;47m"

# define RESET "\033[0m"
# define RST "\033[0m"

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