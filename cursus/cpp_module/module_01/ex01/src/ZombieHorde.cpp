/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:56:47 by gael              #+#    #+#             */
/*   Updated: 2023/10/26 15:46:36 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{

	try
	{
		Zombie	*zombieHorde = new Zombie[n];
		int i = 0;

		while (i < n)
		{
			zombieHorde[i].set_name(name);
			std::cout << zombieHorde[i].get_name() << " was created" << std::endl;
			i++;
		}
		return (zombieHorde);
	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return (NULL);
	}
}
