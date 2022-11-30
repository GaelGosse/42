/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:49:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/28 18:16:06 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_a(t_list **lst)
{
	t_list	*prt_nbr;
	t_list	*prt_index;

	prt_nbr = (*lst);
	prt_index = (*lst);
	printf(""BOLD_WHITE"\tstack A "RESET"\n");
	printf("nbr \tindex\tact_pos\t\n");
	while (prt_nbr)
	{
		printf(BACK_BLUE" %i "RESET"\t(%i)\t(%i)\n", (prt_nbr)->nbr, (prt_nbr)->index, (prt_nbr)->act_pos);
		(prt_nbr) = (prt_nbr)->next;
	}
	printf(BACK_BLUE" NULL "RESET"\n");
	(void)prt_nbr;
	(void)prt_index;
}

void	ft_print_b(t_list **lst)
{
	t_list	*prt_nbr;
	t_list	*prt_index;

	prt_nbr = (*lst);
	prt_index = (*lst);
	printf(""BOLD_WHITE"\tstack B\n"RESET"");
	printf("nbr \tindex\tact_pos\tcost_a\tcost_b\ttarget\tfinal\n");
	while (prt_nbr)
	{
		printf(BACK_CYAN" %i "RESET"\t(%i)\t(%i)\t(%i)\t(%i)\t(%i)\t(%i)\n", (prt_nbr)->nbr, (prt_nbr)->index, (prt_nbr)->act_pos, (prt_nbr)->cost_a, (prt_nbr)->cost_b, (prt_nbr)->target_pos, (prt_nbr)->final_cost);
		(prt_nbr) = (prt_nbr)->next;
	}
	printf(BACK_CYAN" NULL "RESET"\n");
	(void)prt_nbr;
	(void)prt_index;
}


void	ft_print_lists(t_list **stack_a, t_list **stack_b)
{
	printf("\n"UNDERLINE_WHITE" Print A & B "RST"\n");
	// printf("\n");
	ft_print_a(stack_a);
	printf("\n");
	ft_print_b(stack_b);
	// printf("\n ------------------------------------------------------------------ \n");
	printf("\n");
	(void)stack_a;
	(void)stack_b;
}
