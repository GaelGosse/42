/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:53:47 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/02 19:13:33 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_error(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	ft_abs(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}

void	ft_free(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp_a;

	while (*stack_a)
	{
		tmp_a = (*stack_a)->next;
		free(*stack_a);
		(*stack_a) = tmp_a;
	}
	free(*stack_b);
}

void	ft_sort_all(t_list **stack_a, t_list **stack_b, int size_all)
{
	t_list	*tmp_b;

	tmp_b = (*stack_b);
	ft_presort(stack_a, stack_b, size_all);
	ft_update_cost(stack_a, stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		tmp_b = (*stack_b);
		while (tmp_b && (tmp_b->act_pos != ft_find_lowest_cost(stack_b)))
			tmp_b = tmp_b->next;
		ft_exec_cost_a(stack_a, stack_b, tmp_b);
		ft_exec_cost_b(stack_a, stack_b, tmp_b);
		ft_update_cost(stack_a, stack_b);
	}
	ft_re_organize(stack_a, size_all);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (ft_check(argv) == 0)
		exit(0);
	ft_init_list(&stack_a, argv);
	ft_init_act_pos(&stack_a);
	ft_index(&stack_a);
	ft_sort(argc, &stack_a, &stack_b);
	ft_free(&stack_a, &stack_b);
}
