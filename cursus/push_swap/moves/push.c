/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 19:55:00 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/27 18:58:03 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../ft_push_swap.h"

void	ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	printf("\n ----- ----- pb ----- ----- \n");
	tmp = (*stack_a)->next;
	(*stack_a)->next = (*stack_b);
	(*stack_b) = (*stack_a);
	(*stack_a) = tmp;

	(void)tmp;
	(void)stack_a;
	(void)stack_b;
}

void	ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	printf("\n ----- ----- pa ----- ----- \n");
	tmp = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = (*stack_b);
	(*stack_b) = tmp;

	(void)tmp;
	(void)stack_a;
	(void)stack_b;
}
