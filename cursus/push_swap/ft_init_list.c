/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/11/03 14:50:45 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_list(t_list	**stack_a, char **argv)
{
	int		ite_cv;

	ite_cv = 1;
	(*stack_a) = ft_lstnew(ft_atoi(argv[ite_cv]));
	printf(BOLD_YELLOW" INIT LIST "RESET"");
	printf(BACK_YELLOW" %li ", ft_atoi(argv[ite_cv]));
	ite_cv++;
	while (argv[ite_cv])
	{
		ft_lstadd_back(stack_a, ft_lstnew(ft_atoi(argv[ite_cv])));
		printf("%li ", ft_atoi(argv[ite_cv]));
		ite_cv++;
	}
	printf(RESET"\n");
	printf("\n");
	// printf("NULL "RESET"\n");
}

void	ft_init_act_pos(t_list **lst)
{
	int		ite_ini;
	t_list	*tmp;

	ite_ini = 1;
	tmp = (*lst);
	while (tmp)
	{
		(tmp)->act_pos=ite_ini;
		ite_ini++;
		(tmp) = (tmp)->next;
	}
}


