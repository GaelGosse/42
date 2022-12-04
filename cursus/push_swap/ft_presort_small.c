/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_presort_small.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:49:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/04 18:52:28 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"


void	ft_presort_small_first(t_list **stack_a, t_list **stack_b, int size_all)
{
	int		median;

	median = (size_all / 2);
	while (ft_lstsize(*stack_a) != 3 || ft_is_index_lt_median(stack_a, 0, size_all) == 1)
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

void	ft_presort_small_sec(t_list **stack_a, t_list **stack_b, int size_all)
{
	while (ft_is_index_lt_median(stack_a, 1, size_all) == 1)
	{
		if ((*stack_a)->index <= (((size_all / 2) / 2) * 3))
			ft_pb(stack_a, stack_b);
		else
		{
			printf("second\n");
			ft_ra(stack_a);
		}
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
