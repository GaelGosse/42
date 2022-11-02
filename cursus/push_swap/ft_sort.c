/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/02 18:56:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_push_swap.h"

void	ft_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc == 4)
		ft_sort_three(stack_a, stack_b);
	else if (argc == 6)
		ft_sort_five(stack_a, stack_b);
	else 
		printf("coming soon\n");
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
	ft_print_a(stack_a);
	printf("\n");
	if (ft_is_sorted(stack_a) == 0)
		printf("\n"BACK_RED" ERR "RESET"\n");
	else
		printf("\n"BACK_GREEN" OK "RESET"\n");
	(void)stack_a;
	(void)stack_b;
}

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	ft_pb(stack_a, stack_b);
	ft_pb(stack_a, stack_b);
	
	(void)stack_a;
	(void)stack_b;
}