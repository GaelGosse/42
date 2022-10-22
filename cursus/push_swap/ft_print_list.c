/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:49:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/21 13:49:21 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_list(t_list **lst)
{
	t_list *prt;

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
