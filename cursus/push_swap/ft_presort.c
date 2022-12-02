/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:25:53 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 19:21:41 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_is_index_lt_median(t_list **lst, int quarter, int size_all)
{
	t_list	*tmp;
	int		median;

	tmp = (*lst);
	median = (size_all / 2);
	while (tmp->next)
	{
		if (quarter == 0 && tmp->index < median)
			return (1);
		if (quarter == 1 && tmp->index < ((median / 2) * 3))
			return (1);
		tmp = tmp->next;
	}
	(void)median;
	return (0);
}

void	ft_presort_first(t_list **stack_a, t_list **stack_b, int size_all)
{
	int		median;

	median = (size_all / 2);
	while (ft_is_index_lt_median(stack_a, 0, size_all) == 1)
	{
		if ((*stack_a)->index <= median)
		{
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->index <= (median / 2))
				ft_rb(stack_b);
		}
		else
			ft_ra(stack_a);
	}
	ft_init_act_pos_both(stack_a, stack_b);
}

void	ft_presort_sec(t_list **stack_a, t_list **stack_b, int size_all)
{
	while (ft_is_index_lt_median(stack_a, 1, size_all) == 1)
	{
		if ((*stack_a)->index <= (((size_all / 2) / 2) * 3))
			ft_pb(stack_a, stack_b);
		else
			ft_ra(stack_a);
	}
	while (ft_lstsize(*stack_a) > 3)
	{
		while (((*stack_a)->index == (size_all))
			|| ((*stack_a)->index == (size_all - 1))
			|| ((*stack_a)->index == (size_all - 2)))
			ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
}

void	ft_presort(t_list **stack_a, t_list **stack_b, int size_all)
{
	ft_presort_first(stack_a, stack_b, size_all);
	ft_presort_sec(stack_a, stack_b, size_all);
	ft_sort_three(stack_a);
}
