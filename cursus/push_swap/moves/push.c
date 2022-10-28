/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:55:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/28 22:58:32 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../ft_push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	printf(BACK_WHITE" pb \n"RESET); // print moves
	// write(1, "pb\n", 3);
	if (stack_a != NULL)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = (*stack_b);
		(*stack_b) = (*stack_a);
		(*stack_a) = tmp;

		(void)tmp;
		(void)stack_a;
		(void)stack_b;
	}
}

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	printf(BACK_WHITE" pa \n"RESET); // print moves
	// write(1, "pa\n", 3);
	if (stack_b != NULL)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = (*stack_a);
		(*stack_a) = (*stack_b);
		(*stack_b) = tmp;

		(void)tmp;
		(void)stack_a;
		(void)stack_b;
	}
}
