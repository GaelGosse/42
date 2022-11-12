/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:25:53 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/12 18:52:38 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_index_lt_median(t_list **lst, int quarter, int size_a)
{
	t_list	*tmp;
	int		median;

	tmp = (*lst);
	median = (size_a / 2);
	while (tmp->next)
	{
		if (quarter == 0 && tmp->index < median)
			return (1);
		if (quarter == 1 && tmp->index < ((median / 2) * 3))
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	ft_pre_sort_first_half(t_list **stack_a, t_list **stack_b, int size_a)
{
	int		median;

	median = (size_a / 2);
	while (ft_is_index_lt_median(stack_a, 0, size_a) == 1)
	{
		if ((*stack_a)->index < median)
		{
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->index <= (median / 2))
				ft_rb(stack_b);
		}
		else
			ft_ra(stack_a);
	}
	printf(BACK_RED"median: %i"RESET"\n\n", median);
	ft_init_act_pos_both(stack_a, stack_b);
}

void	ft_pre_sort_sec_half(t_list **stack_a, t_list **stack_b, int size_a)
{
	int		median;

	median = (size_a / 2);
	while (ft_is_index_lt_median(stack_a, 1, size_a) == 1)
	{
		if ((*stack_a)->index < ((median / 2) * 3))
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
	}
	while (ft_lstsize(*stack_a) > 3)
	{
		while (((*stack_a)->index == (size_a)) 
			|| ((*stack_a)->index == (size_a - 1))
			|| ((*stack_a)->index == (size_a - 2)))
			ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	(void)median;
	(void)size_a;
	(void)stack_a;
	(void)stack_b;
}

void	ft_pre_sort(t_list **stack_a, t_list **stack_b, int size_a)
{
	ft_pre_sort_first_half(stack_a, stack_b, size_a);
	ft_pre_sort_sec_half(stack_a, stack_b, size_a);
	ft_sort_three(stack_a, stack_b);
}

