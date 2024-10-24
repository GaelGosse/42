/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:55:52 by gael              #+#    #+#             */
/*   Updated: 2023/11/03 13:53:35 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Karl("Karl");
	ClapTrap	Franz("Franz");

	std::cout << std::endl;
	Karl.attack("Franz");
	Franz.takeDamage(6);
	Franz.beRepaired(5);
	std::cout << std::endl;
	Karl.attack("Franz");
	Franz.takeDamage(6);
	std::cout << std::endl;
	Karl.attack("Franz");
	Franz.takeDamage(6);
	std::cout << std::endl;
	Franz.beRepaired(5);
	Franz.beRepaired(5);
	std::cout << std::endl;
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	Karl.beRepaired(5);
	return (0);
}