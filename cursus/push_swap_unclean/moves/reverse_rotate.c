/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:13:02 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/13 20:26:46 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_push_swap.h"

void	ft_reverse_rotate_a(t_list **stack_a)
{
	t_list	*loop;
	t_list	*tmp_a;
	t_list	*tmp_size;

	tmp_size = (*stack_a);
	if (ft_lstsize(tmp_size) >= 2)
	{
		loop = (*stack_a);
		while (loop->next->next)
		{
			if (loop->next->next != NULL)
				loop = loop->next;
		}
		tmp_a = loop->next;
		loop->next = NULL;
		tmp_a->next = (*stack_a);
		(*stack_a) = tmp_a;
	}
	(void)stack_a;
	(void)tmp_a;
	(void)tmp_size;
}

void	ft_reverse_rotate_b(t_list **stack_b)
{
	t_list	*loop;
	t_list	*tmp_b;
	t_list	*tmp_size;

	tmp_size = (*stack_b);
	if (ft_lstsize(tmp_size) >= 2)
	{
		loop = (*stack_b);
		while (loop->next->next)
		{
			if (loop->next->next != NULL)
				loop = loop->next;
		}
		tmp_b = loop->next;
		loop->next = NULL;
		tmp_b->next = (*stack_b);
		(*stack_b) = tmp_b;
	}
	(void)stack_b;
	(void)tmp_b;
	(void)tmp_size;
}

void	ft_rra(t_list **stack_a)
{
	write(1, "rra\n", 4);
	// printf(BACK_WHITE" rra "RESET"\n"); // print moves
	ft_reverse_rotate_a(stack_a);
}

void	ft_rrb(t_list **stack_b)
{
	write(1, "rrb\n", 4);
	// printf(BACK_WHITE" rrb "RESET"\n"); // print moves
	ft_reverse_rotate_b(stack_b);
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	write(1, "rrr\n", 4);
	// printf(BACK_WHITE" rrr "RESET"\n"); // print moves
	ft_reverse_rotate_a(stack_a);
	ft_reverse_rotate_b(stack_b);
}
