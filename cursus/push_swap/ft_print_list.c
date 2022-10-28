/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:49:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/28 16:48:13 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_list(t_list **lst)
{
	t_list	*prt_nbr;
	t_list	*prt_index;

	prt_nbr = (*lst);
	prt_index = (*lst);
	printf("\nnbr:   ");
	while (prt_nbr)
	{
		printf(BACK_WHITE" %i "RESET"\t", (prt_nbr)->nbr);
		// printf(PURPLE"(prt_nbr)->nbr: %i"RESET, (prt_nbr)->nbr);
		// printf(BOLD_PURPLE"(prt_nbr)->index: %i\n"RESET, (prt_nbr)->index);
		// printf("\n");
		(prt_nbr) = (prt_nbr)->next;
	}
	printf(BACK_WHITE" NULL \n"RESET);


	// printf("index: ");
	// while (prt_index)
	// {
	// 	printf(BACK_BLUE" %i "RESET"\t", (prt_index)->index);
	// 	// printf(PURPLE"(prt_index)->nbr: %i"RESET, (prt_index)->nbr);
	// 	// printf(BOLD_PURPLE"(prt_index)->index: %i\n"RESET, (prt_index)->index);
	// 	// printf("\n");
	// 	(prt_index) = (prt_index)->next;
	// }
	// printf(BACK_BLUE" NULL \n"RESET);
	(void)prt_nbr;
	(void)prt_index;
}


void	ft_print_a(t_list **lst)
{
	t_list	*prt_nbr;
	t_list	*prt_index;

	prt_nbr = (*lst);
	prt_index = (*lst);
	printf("\nnbr:   ");
	while (prt_nbr)
	{
		printf(BACK_RED" %i "RESET"\t", (prt_nbr)->nbr);
		// printf(PURPLE"(prt_nbr)->nbr: %i"RESET, (prt_nbr)->nbr);
		// printf(BOLD_PURPLE"(prt_nbr)->index: %i\n"RESET, (prt_nbr)->index);
		// printf("\n");
		(prt_nbr) = (prt_nbr)->next;
	}
	printf(BACK_RED" NULL \n"RESET);


	// printf("index: ");
	// while (prt_index)
	// {
	// 	printf(BACK_BLUE" %i "RESET"\t", (prt_index)->index);
	// 	// printf(PURPLE"(prt_index)->nbr: %i"RESET, (prt_index)->nbr);
	// 	// printf(BOLD_PURPLE"(prt_index)->index: %i\n"RESET, (prt_index)->index);
	// 	// printf("\n");
	// 	(prt_index) = (prt_index)->next;
	// }
	// printf(BACK_BLUE" NULL \n"RESET);
	(void)prt_nbr;
	(void)prt_index;
}

void	ft_print_b(t_list **lst)
{
	t_list	*prt_nbr;
	t_list	*prt_index;

	prt_nbr = (*lst);
	prt_index = (*lst);
	printf("\nnbr:   ");
	while (prt_nbr)
	{
		printf(BACK_CYAN" %i "RESET"\t", (prt_nbr)->nbr);
		// printf(PURPLE"(prt_nbr)->nbr: %i"RESET, (prt_nbr)->nbr);
		// printf(BOLD_PURPLE"(prt_nbr)->index: %i\n"RESET, (prt_nbr)->index);
		// printf("\n");
		(prt_nbr) = (prt_nbr)->next;
	}
	printf(BACK_CYAN" NULL \n"RESET);


	// printf("index: ");
	// while (prt_index)
	// {
	// 	printf(BACK_BLUE" %i "RESET"\t", (prt_index)->index);
	// 	// printf(PURPLE"(prt_index)->nbr: %i"RESET, (prt_index)->nbr);
	// 	// printf(BOLD_PURPLE"(prt_index)->index: %i\n"RESET, (prt_index)->index);
	// 	// printf("\n");
	// 	(prt_index) = (prt_index)->next;
	// }
	// printf(BACK_BLUE" NULL \n"RESET);
	(void)prt_nbr;
	(void)prt_index;
}
