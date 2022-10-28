/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:13:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/28 17:04:34 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	printf("\n ----- ----- ra ----- ----- \n");
	t_list	*tmp;
	t_list	*loop;

	tmp = (*stack_a);
	loop = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	while (loop->next)
	{
		if (loop->next != NULL)
			loop = loop->next;
	}
	loop->next = tmp;
	loop->next->next = NULL;
	(void)stack_a;
	(void)tmp;
}

void	ft_rotate_b(t_list **stack_b)
{
	printf("\n ----- ----- rb ----- ----- \n");
	t_list	*tmp;
	t_list	*loop;

	tmp = (*stack_b);
	loop = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	while (loop->next)
	{
		if (loop->next != NULL)
			loop = loop->next;
	}
	loop->next = tmp;
	loop->next->next = NULL;
	(void)stack_b;
	(void)tmp;
}

void	ft_rotate_all(t_list **stack_a, t_list **stack_b)
{
	printf("\n ----- ----- rr ----- ----- \n");
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}
