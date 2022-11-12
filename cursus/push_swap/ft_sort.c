/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/12 13:48:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_push_swap.h"

void	ft_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 4)
		ft_sort_three(stack_a, stack_b);
	else
		ft_sort_all(stack_a, stack_b);
	(void)stack_a;
	(void)stack_b;
}

void	ft_sort_three(t_list **stack_a, t_list **stack_b)
{

	printf("\n"UNDERLINE_WHITE" SORT THREE "RESET"\n");
	printf("ft_is_sorted(stack_a): %i\n", ft_is_sorted(stack_a));
	while (ft_is_sorted(stack_a) == 0)
	{
		if ((*stack_a)->index > (*stack_a)->next->index)
			ft_sa(stack_a);
		else if ((*stack_a)->next->index > (*stack_a)->index )
			ft_rra(stack_a);
	}
	if (ft_is_sorted(stack_a) == 0)
		printf("\n"BACK_RED" ERR "RESET"\n");
	else
		printf("\n"BACK_GREEN" OK "RESET"\n");
	(void)stack_a;
	(void)stack_b;
}

void	ft_sort_all(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		median;
	int size_a;

	tmp = (*stack_a);
	size_a = ft_lstsize(tmp) ;
	median = (size_a / 2);
	while (ft_lstsize(*stack_a) > 3)
	{
		// || (ft_lstsize(*stack_b) == 1))
		if ((*stack_b) == NULL)
		{
			while (((*stack_a)->index == size_a) 
				|| ((*stack_a)->index == (size_a - 1))
				|| ((*stack_a)->index == (size_a - 2)))
				ft_ra(stack_a);
			ft_pb(stack_a, stack_b);
			// printf(BOLD_RED"(*stack_b)->nbr: %i\n\n"RESET, (*stack_b)->nbr);
		}
		else
		{
			while (((*stack_a)->index == size_a) 
				|| ((*stack_a)->index == (size_a - 1))
				|| ((*stack_a)->index == (size_a - 2)))
				ft_ra(stack_a);
			ft_pb(stack_a, stack_b);
			if ((*stack_b)->index > median)
				ft_rb(stack_b);
			// printf(BOLD_GREEN"(*stack_b)->nbr: %i\n\n"RESET, (*stack_b)->nbr);
		}
	}
	ft_init_act_pos(stack_a);
	ft_init_act_pos(stack_b);
	// printf("f(t_lstsize(tmp) / 2): %i\n", ();
	(void)tmp;
	(void)median;
	(void)stack_a;
	(void)stack_b;
}

/*


nbr			: OK

index		: OK

act_pos		: OK

target_pos	: __

cost_a		: __

cost_b		: __


*/