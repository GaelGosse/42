/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gael <gael@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:29:30 by gael              #+#    #+#             */
/*   Updated: 2023/10/22 18:34:47 by gael             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	try
	{
		Zombie	*newZombie = NULL;
		newZombie = new Zombie(name);

		newZombie->announce();
		return (newZombie);
	}
	catch (std::bad_alloc& e)
	{
		std::cerr << "Allocation failed: " << e.what() << std::endl;
		return (NULL);
	}
}
