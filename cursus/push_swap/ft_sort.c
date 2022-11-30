/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 19:27:58 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void ft_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int	size_all;

	size_all = ft_lstsize(*stack_a);
	if (argc == 4)
		ft_sort_three(stack_a);
	else if (argc <= 8)
	{
		ft_pre_sort(stack_a, stack_b, size_all);

		ft_init_act_pos_both(stack_a, stack_b);
		while (*stack_b)
		{
			if (((*stack_b)->next) && (*stack_b)->index < (*stack_b)->next->index)
				ft_sb(stack_b);
			ft_pa(stack_a, stack_b);
		}
	}
	else
		ft_sort_all(stack_a, stack_b, size_all);
}

void ft_sort_three(t_list **stack_a)
{
	while (ft_is_sorted(stack_a) == 0)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa(stack_a);
		else if ((*stack_a)->next->index > (*stack_a)->index)
			ft_rra(stack_a);
	}
	(void)stack_b;
}

int	ft_find_lowest_cost(t_list **stack_b)
{
	t_list	*tmp_b;
	int		lowest;
	int		pos_lowest;

	tmp_b = (*stack_b);
	lowest = INT_MAX;
	pos_lowest = 0;
	while (tmp_b)
	{
		if (tmp_b->final_cost < lowest)
		{
			lowest = tmp_b->final_cost;
			pos_lowest = tmp_b->act_pos;
		}
		tmp_b = tmp_b->next;
	}
	return (pos_lowest);
}

void	ft_exec_cost(t_list **stack_a, t_list **stack_b, t_list *tmp_b)
{
	int	exec;

	exec = 0;
	ft_update_cost(stack_a, stack_b);
	while ((tmp_b->cost_b != 0) && (exec <= ft_abs(tmp_b->cost_b)))
	{
		if (tmp_b->cost_b < 0)
			ft_rrb(stack_b);
		else if (tmp_b->cost_b > 0)
			ft_rb(stack_b);
		ft_update_cost(stack_a, stack_b);
		exec++;
	}
	ft_update_cost(stack_a, stack_b);
	exec = 0;
	while ((tmp_b->cost_a != 0) && (exec < ft_abs(tmp_b->cost_a)))
	{
		if (tmp_b->cost_a < 0)
			ft_rra(stack_a);
		else if (tmp_b->cost_a > 0)
			ft_ra(stack_a);
		exec++;
	}
	ft_update_cost(stack_a, stack_b);
	if (ft_abs(tmp_b->cost_b) == 0)
		ft_pa(stack_a, stack_b);
	ft_update_cost(stack_a, stack_b);
}

void	ft_main_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_b;

	tmp_b = (*stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		tmp_b = (*stack_b);
		while (tmp_b && (tmp_b->act_pos != ft_find_lowest_cost(stack_b)))
			tmp_b = tmp_b->next;
		ft_exec_cost(stack_a, stack_b, tmp_b);
		ft_update_cost(stack_a, stack_b);
	}
	(void)stack_a;
	(void)stack_b;
}

void	ft_re_organize(t_list **stack_a, int size_all)
{
	t_list	*tmp_a;
	int		after_median;

	tmp_a = (*stack_a);
	after_median = 0;
	if (ft_is_sorted(stack_a) == 0)
	{
		while (tmp_a->next && tmp_a->index != 1)
		{
			tmp_a = tmp_a->next;
		}
		if (tmp_a->act_pos > (size_all / 2))
			after_median = 1;
	}
	while (ft_is_sorted(stack_a) == 0)
	{
		if (after_median == 1)
			ft_rra(stack_a);
		else
			ft_ra(stack_a);
	}
}

void	ft_sort_all(t_list **stack_a, t_list **stack_b, int size_all)
{
	ft_pre_sort(stack_a, stack_b, size_all);
	ft_update_cost(stack_a, stack_b);
	ft_main_sort(stack_a, stack_b);
	ft_re_organize(stack_a, size_all);
}
