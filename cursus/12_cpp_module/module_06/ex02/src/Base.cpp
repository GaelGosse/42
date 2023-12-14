/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:04:36 by ggosse            #+#    #+#             */
/*   Updated: 2023/12/14 17:15:35 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base*	generate(void)
{
	int	rndm = ranb

	if (rndm % 3 == 0)
		Base* A = new Base();
	else if (rndm % 3 == 1)
		Base* B = new Base();
	else
		Base* C = new Base();
	// Elle crée aléatoirement une instance de A, B ou C
	// et la retourne en tant que pointeur sur Base.
	// Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.
}

void	identify(Base* p)
{
	(void)p;
	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
}

void	identify(Base& p)
{
	(void)p;
	// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".
	// Utiliser un pointeur dans cette fonction est interdit.
}
