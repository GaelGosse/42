/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:13:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/28 17:54:19 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_reverse_rotate_a(t_list **stack_a)
{
	printf("\n ----- ----- rra ----- ----- \n");
	t_list	*loop;
	t_list	*tmp;


	loop = (*stack_a);
	while (loop->next->next)
	{
		if (loop->next->next != NULL)
			loop = loop->next;
	}
	tmp = loop->next;
	loop->next = NULL;
	tmp->next = (*stack_a);
	(*stack_a) = tmp;
	(void)stack_a;
	(void)tmp;
}

void	ft_reverse_rotate_b(t_list **stack_b)
{
	printf("\n ----- ----- rrb ----- ----- \n");
	t_list	*loop;
	t_list	*tmp;


	loop = (*stack_b);
	while (loop->next->next)
	{
		if (loop->next->next != NULL)
			loop = loop->next;
	}
	tmp = loop->next;
	loop->next = NULL;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	(void)stack_b;
	(void)tmp;
}

void	ft_reverse_rotate_all(t_list **stack_a, t_list **stack_b)
{
	printf("\n ----- ----- rrr ----- ----- \n");
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
}
