/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/30 19:25:56 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_list(t_list	**stack_a, char **argv)
{
	int		ite_cv;

	ite_cv = 1;
	(*stack_a) = ft_lstnew(ft_atoi(argv[ite_cv]));
	ite_cv++;
	while (argv[ite_cv])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[ite_cv])));
		ite_cv++;
	}
}

void	ft_init_act_pos(t_list **lst)
{
	int		ite_ini;
	t_list	*tmp;

	ite_ini = 0;
	tmp = (*lst);
	while (tmp)
	{
		(tmp)->act_pos=ite_ini;
		ite_ini++;
		(tmp) = (tmp)->next;
	}
}

void	ft_init_act_pos_both(t_list **stack_a, t_list **stack_b)
{
	ft_init_act_pos(stack_a);
	ft_init_act_pos(stack_b);
}

// void	ft_init_cost_a(t_list **stack_a)
// {
// 	t_list	*tmp;

// 	tmp = (*stack_a);
// 	while (tmp->next)
// 		tmp = tmp->next;
// }
