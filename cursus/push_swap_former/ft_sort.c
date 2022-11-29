/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/13 22:57:23 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_push_swap.h"

void	ft_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int size_all;

	size_all = ft_lstsize(*stack_a);
	if (argc == 4)
		ft_sort_three(stack_a, stack_b);
	else
		ft_sort_all(stack_a, stack_b, size_all);
	(void)stack_a;
	(void)stack_b;
}

void	ft_sort_three(t_list **stack_a, t_list **stack_b)
{

	// printf("\n"UNDERLINE_WHITE" SORT THREE "RESET"\n");
	// printf("ft_is_sorted(stack_a): %i\n", ft_is_sorted(stack_a));
	while (ft_is_sorted(stack_a) == 0)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa(stack_a);
		else if ((*stack_a)->next->index > (*stack_a)->index )
			ft_rra(stack_a);
	}
	(void)stack_a;
	(void)stack_b;
}

void	ft_main_sort(t_list **stack_a, t_list **stack_b, int size_all)
{
	int	act_idx_sorted;
	int cpt;

	cpt = 0;
	act_idx_sorted = (size_all - 3);
	while (ft_lstsize(*stack_b) > 1)
	{
		if (((*stack_b)->index) < ((*stack_b)->next->index))
			ft_sb(stack_b);
		while (((*stack_b) != NULL) && (act_idx_sorted == (*stack_b)->index))
		{
			ft_pa(stack_a, stack_b);
			act_idx_sorted--;
		}
		ft_rb(stack_b);
		cpt++;
	}
	if ((*stack_b) != NULL)
		ft_pa(stack_a, stack_b);
}

void	ft_sort_all(t_list **stack_a, t_list **stack_b, int size_all)
{
	ft_pre_sort(stack_a, stack_b, size_all);
	ft_main_sort(stack_a, stack_b, size_all);
}

/*

nbr			: OK

index		: OK

act_pos		: OK

target_pos	: __

cost_a		: __

cost_b		: __



void	ft_pre_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		median;
	int		size_a;

	tmp = (*stack_a);
	size_a = ft_lstsize(tmp) ;
	median = (size_a / 2);
	while (ft_lstsize(*stack_a) > 3)
	{
		while (((*stack_a)->index == (size_a)) 
			|| ((*stack_a)->index == (size_a - 1))
			|| ((*stack_a)->index == (size_a - 2)))
			ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
		if ((*stack_b)->index < median)
			ft_rb(stack_b);
	}
	ft_sort_three(stack_a, stack_b);
	ft_init_act_pos_both(stack_a, stack_b);
}



A: 2 0 5 6 7 9 10 1 3 4 8
B: 

*/