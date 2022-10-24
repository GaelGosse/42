/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:59:18 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/24 18:48:00 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../ft_push_swap.h"

void	ft_swap_a(t_list **stack_a)
{
	t_list	*tmp_old_first;
	t_list	*tmp_old_second;

	tmp_old_third


	tmp_old_first = (*stack_a);
	tmp_old_second = (*stack_a)->next;
	
	tmp_old_first->next = tmp_old_second->next;
	tmp_old_second->next = tmp_old_first;
	
	*stack_a = tmp_old_second;
	printf("tmp_old_first->next->nbr: %i\n", tmp_old_first->next->nbr);
	(void)tmp_old_first;
	(void)tmp_old_second;
}

/*
	refresh_all 75 941 0 12 -486 2

	A -> B -> C -> D

	TMP = B->next
	B -> next = A
	A -> next = B
*/