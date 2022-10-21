/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/21 13:48:58 by ggosse           ###   ########.fr       */
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

