/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:49:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/24 19:10:14 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_list(t_list **lst)
{
	t_list	*prt;

	prt = (*lst);
	printf("\n");
	while (prt)
	{
		printf(PURPLE"(prt)->nbr: %i\n"RESET, (prt)->nbr);
		printf(BOLD_PURPLE"(prt)->index: %i\n"RESET, (prt)->index);
		printf("\n");
		(prt) = (prt)->next;
	}
}


/*


sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
Ne fait rien s’il n’y en a qu’un ou aucun.**


sb (swap b ) : Intervertit les 2 premiers éléments au sommet de la pile b.
Ne fait rien s’il n’y en a qu’un ou aucun.
ss : sa et sb en même temps.


pa (push a) : Prend le premier élément au sommet de b et le met sur a.
Ne fait rien si b est vide.


pb (push b) : Prend le premier élément au sommet de a et le met sur b.
Ne fait rien si a est vide.


ra (rotate a) : Décale d’une position vers le haut tous les élements de la pile a.
Le premier élément devient le dernier.


rb (rotate b) : Décale d’une position vers le haut tous les élements de la pile b.
Le premier élément devient le dernier.
rr : ra et rb en même temps.


rra (reverse rotate a) : Décale d’une position vers le bas tous les élements de
la pile a. Le dernier élément devient le premier.


rrb (reverse rotate b) : Décale d’une position vers le bas tous les élements de
la pile b. Le dernier élément devient le premier.
rrr : rra et rrb en même temps.
*/