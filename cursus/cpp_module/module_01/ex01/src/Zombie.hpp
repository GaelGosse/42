/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:47 by gael              #+#    #+#             */
/*   Updated: 2023/10/26 22:14:02 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <cstdlib>
#include <iomanip>
#include <csignal>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void		set_name(std::string name);
		std::string	get_name(void);

	private:
		std::string	_name;
};

Zombie	*zombieHorde(int n, std::string name);

#endif
