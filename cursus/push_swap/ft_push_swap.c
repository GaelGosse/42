/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/31 19:22:01 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	ft_putstr_fd(BOLD_RED"Error\n"RESET, 1);
	exit(1);
}

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (argc == 3)
	{
		ft_sort_three(stack_a, stack_b);
	}
	(void)stack_a;
	(void)stack_b;
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	(void)stack_b;
	if (argc == 1)
		return (0);
	ft_check(argv);

	(void)stack_a;
	// ------------- INIT -------------
	ft_init_list(&stack_a, argv);
	ft_init_act_pos(&stack_a);
	ft_index(&stack_a);
	ft_print_lists(&stack_a, &stack_b);
	// ------------- SORT -------------
	ft_sort(argc, &stack_a, &stack_b);
	// ft_sort_three(&stack_a, &stack_b);
	printf("\n");
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


























/*
std input   stdin   0 
std output  stdout  1
std error   stderr  2

exit
0     successful
1     minor error
2     major error
127   command not found



1 2 3 = nothing

1 3 2 = rra sa

2 1 3 = sa
2 3 1 = rra

3 1 2 = ra
3 2 1 = ra


*/