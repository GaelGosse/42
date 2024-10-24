/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:59:18 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/03 20:43:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sa(t_list **stack_a)
{
	t_list	*tmp_old_first;
	t_list	*tmp_old_second;
	t_list	*tmp_size;

	tmp_size = (*stack_a);
	if (ft_lstsize(tmp_size) >= 2)
	{
		write(1, "sa\n", 3);
		tmp_old_first = (*stack_a);
		tmp_old_second = (*stack_a)->next;
		tmp_old_first->next = tmp_old_second->next;
		tmp_old_second->next = tmp_old_first;
		*stack_a = tmp_old_second;
	}
	(void)tmp_old_first;
	(void)tmp_old_second;
}

void	ft_sb(t_list **stack_b)
{
	t_list	*tmp_old_first;
	t_list	*tmp_old_second;
	t_list	*tmp_size;

	tmp_size = (*stack_b);
	if (ft_lstsize(tmp_size) >= 2)
	{
		write(1, "sb\n", 3);
		tmp_old_first = (*stack_b);
		tmp_old_second = (*stack_b)->next;
		tmp_old_first->next = tmp_old_second->next;
		tmp_old_second->next = tmp_old_first;
		*stack_b = tmp_old_second;
	}
	(void)tmp_old_first;
	(void)tmp_old_second;
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	write(1, "rr\n", 3);
	ft_sa(stack_a);
	ft_sb(stack_b);
}
