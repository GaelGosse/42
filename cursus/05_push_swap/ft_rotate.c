/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:13:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/03 20:43:02 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_a(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*loop;
	t_list	*tmp_size;

	tmp_size = (*stack_a);
	if (ft_lstsize(tmp_size) >= 2)
	{
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
	}
	(void)stack_a;
	(void)tmp;
}

void	ft_rotate_b(t_list **stack_b)
{
	t_list	*tmp;
	t_list	*loop;
	t_list	*tmp_size;

	tmp_size = (*stack_b);
	if (ft_lstsize(tmp_size) >= 2)
	{
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
	}
	(void)stack_b;
	(void)tmp;
}

void	ft_ra(t_list **stack_a)
{
	write(1, "ra\n", 3);
	ft_rotate_a(stack_a);
}

void	ft_rb(t_list **stack_b)
{
	write(1, "rb\n", 3);
	ft_rotate_b(stack_b);
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rr\n", 3);
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}
