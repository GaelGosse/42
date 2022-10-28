/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/28 23:01:54 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_list(t_list	**stack_a, char **argv)
{
	int		ite_cv;

	ite_cv = 1;
	(*stack_a) = ft_lstnew(ft_atoi(argv[ite_cv]));
	printf(" INIT LIST \n");
	// printf(BACK_WHITE" %li "RESET" --> ", ft_atoi(argv[ite_cv]));
	ite_cv++;
	while (argv[ite_cv])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[ite_cv])));
		// printf(BACK_WHITE" %li "RESET" --> ", ft_atoi(argv[ite_cv]));
		ite_cv++;
	}
	// printf(BACK_WHITE" NULL "RESET"\n");
}

void	ft_init_pos_initial(t_list **lst)
{
	int		ite_ini;
	t_list	*tmp;

	ite_ini = 0;
	tmp = (*lst);
	while (tmp)
	{
		(tmp)->pos_initial=ite_ini;
		ite_ini++;
		(tmp) = (tmp)->next;
	}
}


