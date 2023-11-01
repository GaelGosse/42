/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/12/02 19:34:11 by ggosse           ###   ########.fr       */
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
		(tmp)->act_pos = ite_ini;
		ite_ini++;
		(tmp) = (tmp)->next;
	}
}

void	ft_init_act_pos_both(t_list **stack_a, t_list **stack_b)
{
	ft_init_act_pos(stack_a);
	ft_init_act_pos(stack_b);
}

void	ft_index(t_list **lst)
{
	t_list	*big;
	t_list	*lil;
	int		index;

	index = 1;
	lil = (*lst);
	big = (*lst);
	while (big)
	{
		lil = (*lst);
		index = 1;
		while (lil)
		{
			if (lil->nbr != big->nbr)
			{
				if (big->nbr > lil->nbr)
					index++;
			}
			(lil) = (lil)->next;
		}
		big->index = index;
		(big) = (big)->next;
	}
}
