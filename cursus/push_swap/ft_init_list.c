/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggosse <ggosse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:09:27 by ggosse            #+#    #+#             */
/*   Updated: 2022/10/19 19:18:43 by ggosse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_init_list(int argc, char **argv)
{
	int		ite_cv;
	t_list	*pile_a;

	(void)argc;
	pile_a = NULL;

	ite_cv = 1;
	pile_a = ft_lstnew(ft_atoi(argv[ite_cv]));
	ite_cv++;

	printf("pile_a->nbr: %i\n", pile_a->nbr);
	(void)pile_a;
	(void)(*pile_a);
	// (void)(**pile_a);
	while (argv[ite_cv])
	{
		ft_atoi(argv[ite_cv]);
		printf("pile_a->nbr: %li\n", ft_atoi(argv[ite_cv]));
		ft_lstadd_back(&pile_a, ft_lstnew(ft_atoi(argv[ite_cv])));
		ite_cv++;
	}
}

