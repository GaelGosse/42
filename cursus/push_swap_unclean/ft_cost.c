/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cost.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:06:37 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/29 20:05:11 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_target_pos(t_list **stack_a, t_list **stack_b)
{
	int		max;
	t_list	*tmp_b;
	t_list	*tmp_a;

	tmp_b = (*stack_b);
	tmp_a = (*stack_a);
	while (tmp_b)
	{
		tmp_a = (*stack_a);
		max = INT_MAX;
		while (tmp_a)
		{
			if (tmp_b->index < tmp_a->index && tmp_a->index < max)
			{
				max = tmp_a->index;
				tmp_b->target_pos = tmp_a->act_pos;
			}
			tmp_a = tmp_a->next;
		}
		tmp_b = tmp_b->next;
	}
}

void	ft_cost_a_b(t_list **stack_a, t_list **stack_b)
{
	int		cost;
	t_list	*tmp_b;
	t_list	*tmp_a;

	cost = 0;
	tmp_a = (*stack_a);
	tmp_b = (*stack_b);
	while (tmp_b)
	{
		if (cost <= ft_lstsize(*stack_b) / 2)
			tmp_b->cost_b = cost;
		else
			tmp_b->cost_b = (tmp_b->act_pos - (ft_lstsize(*stack_b)));
		tmp_a = (*stack_a);
		while (tmp_a)
		{
			if (tmp_a->act_pos == tmp_b->target_pos)
			{
				if (tmp_a->act_pos <= ft_lstsize(*stack_a) / 2)
					tmp_b->cost_a = tmp_a->act_pos;
				else
					tmp_b->cost_a = (tmp_a->act_pos - (ft_lstsize(*stack_a)));
			}
			tmp_a = tmp_a->next;
		}
		tmp_b = tmp_b->next;
		cost++;
	}
}

void	ft_final_cost(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;

	tmp_b = (*stack_b);
	while (tmp_b)
	{
		tmp_b->final_cost = ft_abs(tmp_b->cost_a) + ft_abs(tmp_b->cost_b);
		tmp_b = tmp_b->next;
	}
	(void)stack_a;
}

void	ft_update_cost(t_list **stack_a, t_list **stack_b)
{
	ft_init_act_pos_both(stack_a, stack_b);
	ft_target_pos(stack_a, stack_b);
	ft_cost_a_b(stack_a, stack_b);
	ft_final_cost(stack_a, stack_b);
}
