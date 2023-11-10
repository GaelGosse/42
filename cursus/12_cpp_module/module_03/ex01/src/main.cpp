/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:55:52 by gael              #+#    #+#             */
/*   Updated: 2023/11/09 11:15:49 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Karl("Karl");

	std::cout << std::endl;
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.attack("Franz");
	Karl.guardGate();
	std::cout << std::endl;
	return (0);
}
