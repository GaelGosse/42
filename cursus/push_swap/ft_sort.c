/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:31:11 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/01 20:58:49 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_push_swap.h"

void	ft_sort_three(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int stop;

	stop = 0;
	tmp = (*stack_a);
	printf(UNDERLINE_WHITE" SORT THREE "RESET"\n");
	printf("ft_is_sorted(stack_a): %i\n", ft_is_sorted(stack_a));
	while (ft_is_sorted(&tmp) == 0)
	{
		if (stop >= 5)
			break;	
		if (tmp->index > tmp->next->index)
			ft_sa(&tmp);
		else if (tmp->next->index > tmp->index )
			ft_ra(&tmp);
		// ft_print_a(stack_a);
		// printf("\n");
		stop++;
	}
	ft_print_a(stack_a);

	(void)stack_a;
	(void)stack_b;
}